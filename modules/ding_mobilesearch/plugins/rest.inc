<?php

/**
 * @file
 * Callbacks for a pushing to Mongo through REST API.
 */

/**
 * Call a REST service method.
 *
 * @param string $method
 *   Name of method.
 * @param array $body
 *   Array with request body.
 *
 * @return mixed
 *    response object or NULL.
 */
function ding_mobilesearch_rest_service_call($method, $body = array()) {
  $service_url = variable_get('mobilesearch_rest_url', '');
  $agency_id = variable_get('mobilesearch_rest_agency_id', NULL);
  $key = variable_get('mobilesearch_rest_key', NULL);
  $debug = variable_get('mobilesearch_rest_debug', FALSE);
  if (empty($service_url) || empty($agency_id) || empty($key)) {
    watchdog(
      'rest_plugin',
      "Service doesn't configured. Please !configure_url it first.",
      array(
        '!configure_url' => l(
          t('configure'),
          'admin/config/ding/mobilesearch/content-export'
        ),
      ),
      WATCHDOG_ERROR
    );
    return NULL;
  }
  $instance = new \NationalStorageComponent\NationalStorage($service_url);

  $request = array(
    'credentials' => array(
      'agencyId' => $agency_id,
      'key' => sha1($agency_id . $key),
    ),
    'body' => $body,
  );
  if (!method_exists($instance, $method)) {
    watchdog(
      'rest_plugin',
      'You tried to call a undefined method %method of a service.',
      array(
        '%method' => $method,
      ),
      WATCHDOG_ERROR
    );
    return NULL;
  }

  $response = NULL;

  try {
    $instance->$method($request);
    $response = $instance->getResponse();
  }
  catch (Exception $e) {
    watchdog_exception('rest_service', $e);
  }

  if ($debug) {
    // Truncate long data so it doesn't clutter the dblog.
    array_walk_recursive($request, function(&$element) {
      if (drupal_strlen($element) > 512) {
        $element = truncate_utf8($element, 512, TRUE, TRUE);
      }
    });

    watchdog(
      'rest_plugin',
      '<strong>Method:</strong> !method<br /> <strong>Endpoint:</strong> !endpoint<br /><strong>Response:</strong><pre>!response</pre><strong>Payload:</strong><pre>!request</pre>',
      [
        '!endpoint' => $service_url,
        '!method' => $method,
        '!request' => var_export($request, TRUE),
        '!response' => var_export($response, TRUE),
      ],
      WATCHDOG_DEBUG
    );
  }

  return $response;
}

/**
 * Returns differences agency ids between changed and unchanged nodes.
 *
 * @param object $node
 *    Changed node.
 * @param mixed $original
 *    Unchanged node or NULL.
 *
 * @return array
 *    An associative array with the following contents:
 *    <code>
 *    [
 *      to_add: [],
 *      to_update: [],
 *      to_delete: []
 *    ]
 *    </code>
 */
function ding_mobilesearch_rest_node_agency_diff($node, $original = NULL, $op = NULL) {
  $result = array(
    'to_add' => array(),
    'to_update' => array(),
    'to_delete' => array(),
  );

  $agency_id = variable_get('mobilesearch_rest_agency_id', NULL);
  if ($agency_id && $op) {
    switch ($op) {
      case 'hook_node_insert':
        $result['to_add'][] = $agency_id;
        return $result;

      case 'hook_node_update':
        $result['to_update'][] = $agency_id;
        return $result;

      case 'hook_node_delete':
        $result['to_delete'][] = $agency_id;
        return $result;
    }
  }

  return $result;
}

/**
 * Config form callback for a REST plugin.
 */
function ding_mobilesearch_rest_config_form($form, &$form_state) {
  $form['mobilesearch_rest_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Service URL'),
    '#default_value' => variable_get('mobilesearch_rest_url', ''),
    '#description' => t('URL to CMS Content service (trailing slash needed), e.g. https://cmscontent.dbc.dk/'),
    '#required' => TRUE,
  );

  $ting_agency = variable_get('ting_agency', '');
  $agency_id = variable_get('mobilesearch_rest_agency_id', '');
  if ($ting_agency != $agency_id) {
    drupal_set_message(t('T!NG agency ID %ting_agency does not match REST plugin agency ID %agency_id', array(
      '%ting_agency' => $ting_agency,
      '%agency_id' => $agency_id,
    )), 'warning');
  }
  $form['mobilesearch_rest_agency_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Agency ID'),
    '#default_value' => variable_get('mobilesearch_rest_agency_id', $ting_agency),
    '#required' => TRUE,
  );
  $form['mobilesearch_rest_key'] = array(
    '#type' => 'textfield',
    '#title' => t('Key'),
    '#default_value' => variable_get('mobilesearch_rest_key', NULL),
    '#required' => TRUE,
  );
  $form['mobilesearch_rest_debug'] = array(
    '#type' => 'checkbox',
    '#title' => t('Debug'),
    '#default_value' => variable_get('mobilesearch_rest_debug', FALSE),
    '#description' => t('Store debug data in watchdog.'),
  );

  return $form;
}

/**
 * Validate handler for REST plugin configuration form.
 */
function ding_mobilesearch_rest_config_form_validate($form, &$form_state) {
  $input = $form_state['input'];

  $test_result = ding_mobilesearch_rest_test_service($input['mobilesearch_rest_url']);
  if (!$test_result) {
    form_set_error('mobilesearch_rest_url', t('Problem connecting to the service. Please check your settings.'));
  }
}

/**
 * Node editing form alter callback.
 */
function ding_mobilesearch_rest_node_form(&$form, &$form_state) {
  $types = _ding_mobilesearch_types();
  if (array_key_exists($form['type']['#value'], $types)) {
    foreach ($form['actions'] as &$submit_button) {
      if (!isset($submit_button['#submit']) || !is_array($submit_button['#submit'])) {
        continue;
      }

      if (in_array('node_form_submit', $submit_button['#submit'], TRUE)) {
        $submit_button['#submit'][] = 'ding_mobilesearch_rest_node_submit';
      }
    }
  }
}

/**
 * Submit handler for a node editing form.
 */
function ding_mobilesearch_rest_node_submit($form, &$form_state) {
  if (!empty($form_state['values']['flag'])) {
    $flags = $form_state['values']['flag'];
    if (isset($flags['push_to_mongo'])) {
      $node = $form_state['node'];

      $test_result = ding_mobilesearch_rest_test_service(variable_get('mobilesearch_rest_url'));
      if (!$test_result) {
        drupal_set_message(t('Problem connecting to the REST service. We have unchecked your "Push to Mongo" flag. Please check your !settings.',
          array('!settings' => l(t('settings'), 'admin/config/ding/mobilesearch/content-export/plugin'))), 'warning');
        global $user;
        $flag = flag_get_flag('push_to_mongo');
        $flag->remember_content($node->nid, $node);
        flag('unflag', 'push_to_mongo', $node->nid, $user);
      }

      $is_new = is_null($form_state['values']['vid']);
      $types = _ding_mobilesearch_types();
      $plugin = $types[$node->type];
      if (!empty($plugin['exec_callback']) && function_exists($plugin['exec_callback'])) {
        if (!$is_new) {
          call_user_func($plugin['exec_callback'], 'hook_node_delete', 'node', $node);
        }
        if ($flags['push_to_mongo']) {
          call_user_func($plugin['exec_callback'], 'hook_node_insert', 'node', $node);
        }
      }
    }
  }
}

/**
 * Plugin execute callback.
 */
function ding_mobilesearch_rest_exec($op, $entity_type, $entity) {
  if ($entity_type == 'node') {
    switch ($op) {
      case 'hook_node_insert':
        $diff = ding_mobilesearch_rest_node_agency_diff($entity, NULL, $op);
        break;

      case 'hook_node_update':
        $original = isset($entity->original) ? $entity->original : NULL;
        $diff = ding_mobilesearch_rest_node_agency_diff($entity, $original, $op);
        break;

      case 'hook_node_delete':
        $original = clone $entity;
        $entity->field_realm = array();
        $diff = ding_mobilesearch_rest_node_agency_diff($entity, $original, $op);
        break;
    }

    $mapping = module_invoke_all('ding_mobilesearch_node_export_mapping', $entity);
    $request_body = array(
      'nid' => $entity->nid,
      'agency' => NULL,
      'type' => $entity->type,
    );
    if (isset($mapping['special']) && is_array($mapping['special'])) {
      $request_body = array_merge($request_body, $mapping['special']);
    }
    $request_body['fields'] = $mapping['fields'];
    $request_body['taxonomy'] = $mapping['taxonomy'];

    foreach ($diff['to_add'] as $agency_id) {
      $request_body['agency'] = $agency_id;
      ding_mobilesearch_rest_service_call('addContent', $request_body);
    }
    foreach ($diff['to_update'] as $agency_id) {
      $request_body['agency'] = $agency_id;
      // @TODO: Unknown purpose to send two calls.
      $response = ding_mobilesearch_rest_service_call('addContent', $request_body);
      if (!$response || (isset($response['status']) && $response['status'] === FALSE)) {
        ding_mobilesearch_rest_service_call('updateContent', $request_body);
      }
    }
    foreach ($diff['to_delete'] as $agency_id) {
      $request_body['agency'] = $agency_id;
      ding_mobilesearch_rest_service_call('deleteContent', $request_body);
    }
  }
  // Export content through workflow hook.
  elseif ($entity_type == 'workflow') {
    $os_nid = $entity->field_os_node[LANGUAGE_NONE][0]['nid'];
    if ($os_nid) {
      $os_node = node_load($os_nid);
      $mapping = module_invoke_all('ding_mobilesearch_node_export_mapping', $entity);
      $diff = ding_mobilesearch_rest_node_agency_diff($os_node);
      foreach ($diff['to_add'] as $agency_id) {
        $request_body = array(
          'nid' => $os_node->nid,
          'agency' => $agency_id,
          'type' => $os_node->type,
        );
        if (isset($mapping['special']) && is_array($mapping['special'])) {
          $request_body = array_merge($request_body, $mapping['special']);
        }
        $request_body['fields'] = $mapping['fields'];
        $request_body['taxonomy'] = $mapping['taxonomy'];

        ding_mobilesearch_rest_service_call('addContent', $request_body);
      }
    }
  }
}

/**
 * Test service connection.
 *
 * @return bool
 *   Returns status of response.
 */
function ding_mobilesearch_rest_test_service($url) {
  $result = drupal_http_request($url);

  return 200 == $result->code;
}
