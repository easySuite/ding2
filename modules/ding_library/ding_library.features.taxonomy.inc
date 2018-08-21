<?php
/**
 * @file
 * ding_library.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ding_library_taxonomy_default_vocabularies() {
  return array(
    'library_type' => array(
      'name' => 'Library type',
      'machine_name' => 'library_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
