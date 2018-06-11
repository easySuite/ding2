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
 * Implements hook_views_api().
 */
function gronbib_frontend_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function gronbib_frontend_default_page_manager_handlers_alter(&$data) {
  if (isset($data['site_template_panel_context'])) {
    $data['site_template_panel_context']->conf['display']->content['new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079']->position = 3; /* WAS: 2 */
    $data['site_template_panel_context']->conf['display']->content['new-3202a330-fa71-44f2-be0a-265ed734b321']->position = 3; /* WAS: 2 */
    $data['site_template_panel_context']->conf['display']->content['new-3202a330-fa71-44f2-be0a-265ed734b321']->shown = FALSE; /* WAS: TRUE */
    $data['site_template_panel_context']->conf['display']->content['new-3a72e819-3274-4d12-8fe3-414c0cbc3151']->shown = FALSE; /* WAS: TRUE */
    $data['site_template_panel_context']->conf['display']->content['new-3bddb5f5-2373-49c7-9c58-60b56ce59a00'] = (object) array(
          'pid' => 'new-3bddb5f5-2373-49c7-9c58-60b56ce59a00',
          'panel' => 'branding',
          'type' => 'opened_libraries',
          'subtype' => 'opened_libraries',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 1,
          'locks' => array(),
          'uuid' => '3bddb5f5-2373-49c7-9c58-60b56ce59a00',
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->content['new-3c879038-1011-4427-8465-f638e18375e1']->position = 2; /* WAS: 1 */
    $data['site_template_panel_context']->conf['display']->content['new-4d207b4e-7863-4263-afc0-31805e58a306']->position = 4; /* WAS: 3 */
    $data['site_template_panel_context']->conf['display']->content['new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf']->shown = FALSE; /* WAS: TRUE */
    $data['site_template_panel_context']->conf['display']->content['new-d9877e3c-cae9-4067-99af-305cb0e70bf9']->shown = FALSE; /* WAS: TRUE */
    $data['site_template_panel_context']->conf['display']->content['new-d9c1432b-77cc-432c-987a-eb64569a0b88']->cache['method'] = 0; /* WAS: 'lazy' */
    $data['site_template_panel_context']->conf['display']->content['new-dbef262a-993e-493c-8525-4d197501cae0'] = (object) array(
          'pid' => 'new-dbef262a-993e-493c-8525-4d197501cae0',
          'panel' => 'navigation',
          'type' => 'block',
          'subtype' => 'locale-language',
          'shown' => TRUE,
          'access' => array(),
          'cache' => array(),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'dbef262a-993e-493c-8525-4d197501cae0',
        ); /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->content['new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2']->shown = FALSE; /* WAS: TRUE */
    $data['site_template_panel_context']->conf['display']->panels['branding']['1'] = 'new-3bddb5f5-2373-49c7-9c58-60b56ce59a00'; /* WAS: 'new-3c879038-1011-4427-8465-f638e18375e1' */
    $data['site_template_panel_context']->conf['display']->panels['branding']['2'] = 'new-3c879038-1011-4427-8465-f638e18375e1'; /* WAS: 'new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079' */
    $data['site_template_panel_context']->conf['display']->panels['branding']['3'] = 'new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079'; /* WAS: 'new-4d207b4e-7863-4263-afc0-31805e58a306' */
    $data['site_template_panel_context']->conf['display']->panels['branding']['4'] = 'new-4d207b4e-7863-4263-afc0-31805e58a306'; /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->panels['navigation']['2'] = 'new-dbef262a-993e-493c-8525-4d197501cae0'; /* WAS: 'new-3202a330-fa71-44f2-be0a-265ed734b321' */
    $data['site_template_panel_context']->conf['display']->panels['navigation']['3'] = 'new-3202a330-fa71-44f2-be0a-265ed734b321'; /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->storage_id = 'site_template_panel_context'; /* WAS: '' */
    $data['site_template_panel_context']->conf['display']->storage_type = 'page_manager'; /* WAS: '' */
    unset($data['site_template_panel_context']->conf['display']->content['new-d9c1432b-77cc-432c-987a-eb64569a0b88']->cache['settings']['load_strategy']);
    unset($data['site_template_panel_context']->conf['display']->content['new-d9c1432b-77cc-432c-987a-eb64569a0b88']->cache['settings']['load_text']);
    unset($data['site_template_panel_context']->conf['display']->content['new-d9c1432b-77cc-432c-987a-eb64569a0b88']->cache['settings']['show_spinner']);
  }
}
