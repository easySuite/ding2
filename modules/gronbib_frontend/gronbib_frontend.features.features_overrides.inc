<?php
/**
 * @file
 * gronbib_frontend.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function gronbib_frontend_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: page_manager_handlers
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079|position"] = 3;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-3202a330-fa71-44f2-be0a-265ed734b321|position"] = 3;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-3202a330-fa71-44f2-be0a-265ed734b321|shown"] = FALSE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-3a72e819-3274-4d12-8fe3-414c0cbc3151|shown"] = FALSE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-3bddb5f5-2373-49c7-9c58-60b56ce59a00"] = (object) array(
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
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-3c879038-1011-4427-8465-f638e18375e1|position"] = 2;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-4d207b4e-7863-4263-afc0-31805e58a306|position"] = 4;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf|shown"] = FALSE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-d9877e3c-cae9-4067-99af-305cb0e70bf9|shown"] = FALSE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-d9c1432b-77cc-432c-987a-eb64569a0b88|cache|method"] = 0;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-d9c1432b-77cc-432c-987a-eb64569a0b88|cache|settings|load_strategy"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-d9c1432b-77cc-432c-987a-eb64569a0b88|cache|settings|load_text"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-d9c1432b-77cc-432c-987a-eb64569a0b88|cache|settings|show_spinner"]["DELETED"] = TRUE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-dbef262a-993e-493c-8525-4d197501cae0"] = (object) array(
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
    );
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|content|new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2|shown"] = FALSE;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|branding|1"] = 'new-3bddb5f5-2373-49c7-9c58-60b56ce59a00';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|branding|2"] = 'new-3c879038-1011-4427-8465-f638e18375e1';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|branding|3"] = 'new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|branding|4"] = 'new-4d207b4e-7863-4263-afc0-31805e58a306';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|navigation|2"] = 'new-dbef262a-993e-493c-8525-4d197501cae0';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|panels|navigation|3"] = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|storage_id"] = 'site_template_panel_context';
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|storage_type"] = 'page_manager';

 return $overrides;
}
