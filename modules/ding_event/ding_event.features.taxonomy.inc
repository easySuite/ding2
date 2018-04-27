<?php
/**
 * @file
 * ding_event.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ding_event_taxonomy_default_vocabularies() {
  return array(
    'editorial_base' => array(
      'name' => 'Section',
      'machine_name' => 'editorial_base',
      'description' => NULL,
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'event_category' => array(
      'name' => 'Event category',
      'machine_name' => 'event_category',
      'description' => 'Event category usend under event types',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'event_target' => array(
      'name' => 'Event target',
      'machine_name' => 'event_target',
      'description' => 'Event target',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
    'rooms' => array(
      'name' => 'Rooms',
      'machine_name' => 'rooms',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
