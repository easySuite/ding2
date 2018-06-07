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
  $overrides["page_manager_handlers.site_template__gronbib-site-template.weight"] = -2;
  $overrides["page_manager_handlers.site_template_panel_context.conf|display|storage_type"] = 'page_manager';

 return $overrides;
}
