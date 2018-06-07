<?php
/**
 * @file
 * gronbib_frontend.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function gronbib_frontend_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'color_ddbasic_palette';
  $strongarm->value = array(
    'base' => '#ffffff',
    'link' => '#ffffff',
    'primary' => '#FF9933',
    'secondary' => '#51502a',
    'text' => '#262626',
    'text_link' => '#FF9933',
    'text_link_on_dark' => '#FF9933',
    'text_on_primary' => '#ffffff',
    'text_on_secondary' => '#ffffff',
    'topbar' => '#ffffff',
    'extended_search_pane' => '#51502a',
  );
  $export['color_ddbasic_palette'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_hide_translation_links';
  $strongarm->value = 1;
  $export['i18n_hide_translation_links'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'gronbib_frontpage';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'gronbib_frontend_random';
  $strongarm->value = '0';
  $export['gronbib_frontend_random'] = $strongarm;

  return $export;
}
