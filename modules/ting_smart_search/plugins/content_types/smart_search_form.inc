<?php

/**
 * @file
 * Panels pane to display the smart search form
 */

$plugin = array(
  'title' => t('Ting smart search form'),
  'description' => t("Display the smart search form"),
  'single' => TRUE,
  'content_types' => array('smart_search_string'),
  'render callback' => 'ting_smart_search_form_content_type_render',
  'access callback' => 'ting_smart_search_form_content_type_access',
  'category' => t('Ting'),
  'render last' => TRUE,
  'required context' => new ctools_context_required(t('Keywords'), 'string'),
);

/**
 * Implements access callback
 */
function ting_smart_search_form_content_type_access() {
  return user_access('configure smart search');
}

/**
 * Render the smart search form block.
 */
function ting_smart_search_form_content_type_render($subtype, $conf, $panel_args, $context) {
  // Make search results sortable.
  drupal_add_js(drupal_get_path('module', 'ting_smart_search') . '/js/smart_search_sortable_clear.js', 'file');

  // Create a form with options for the editors.
  $search_string = $context->data;

  $entity_type_name = 'ting_type';
  $entity_bundle_name = 'smart_search_string';
  module_load_include('inc', 'eck', 'eck.entity');
  // Create the block class.
  $block = new stdClass();

  $ssquery = new EntityFieldQuery();

  $ssquery->entityCondition('entity_type', 'ting_type')
    ->entityCondition('bundle', 'smart_search_string')
    ->propertyCondition('title', $search_string, '=');

  $result = $ssquery->execute();

  $entity_id =current((array)$result['ting_type'])->id;

  if ($entity_id) {
    $block->content = eck__entity__edit($entity_type_name, $entity_bundle_name, $entity_id);
  }
  else {
      $block->content = eck__entity__add($entity_type_name, $entity_bundle_name);
  }

  return $block;

}
