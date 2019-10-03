<?php
/**
 * @file
 * ding_ddbasic_opening_hours.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ding_ddbasic_opening_hours_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_hide_oh_library'
  $field_bases['field_hide_oh_library'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hide_oh_library',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
