<?php
/**
 * @file
 * gronbib_frontend.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gronbib_frontend_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function gronbib_frontend_default_page_manager_handlers_alter(&$data) {
  if (isset($data['site_template__gronbib-site-template'])) {
    $data['site_template__gronbib-site-template']->weight = -2; /* WAS: 1 */
  }
  if (isset($data['site_template_panel_context'])) {
    $data['site_template_panel_context']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
  }
}
