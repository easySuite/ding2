<?php
/**
 * @file
 * ding_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ding_news_taxonomy_default_vocabularies() {
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
    'news_category' => array(
      'name' => 'News Category',
      'machine_name' => 'news_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 0,
    ),
  );
}
