<?php
/**
 * @file
 * gronbib_frontend.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function gronbib_frontend_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__gronbib-site-template';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -2;
  $handler->conf = array(
    'title' => 'Gronbib site template',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'name' => 'gronbib-site-template',
  );
  $display = new panels_display();
  $display->layout = 'ding2_site_template';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'branding_top' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer' => NULL,
      'branding_bottom' => NULL,
      'branding' => NULL,
      'bottom' => NULL,
      'navigation' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '92a45db0-147b-411f-8833-8377a52f5198';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'site_template__gronbib-site-template';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39';
  $pane->panel = 'branding';
  $pane->type = 'block';
  $pane->subtype = 'user-login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39';
  $display->content['new-51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39'] = $pane;
  $display->panels['branding'][0] = 'new-51d74d8b-0aeb-4c73-8c20-b5d4fdd40a39';
  $pane = new stdClass();
  $pane->pid = 'new-3bddb5f5-2373-49c7-9c58-60b56ce59a00';
  $pane->panel = 'branding';
  $pane->type = 'opened_libraries';
  $pane->subtype = 'opened_libraries';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3bddb5f5-2373-49c7-9c58-60b56ce59a00';
  $display->content['new-3bddb5f5-2373-49c7-9c58-60b56ce59a00'] = $pane;
  $display->panels['branding'][1] = 'new-3bddb5f5-2373-49c7-9c58-60b56ce59a00';
  $pane = new stdClass();
  $pane->pid = 'new-3c879038-1011-4427-8465-f638e18375e1';
  $pane->panel = 'branding';
  $pane->type = 'pane_header';
  $pane->subtype = 'pane_header';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '3c879038-1011-4427-8465-f638e18375e1';
  $display->content['new-3c879038-1011-4427-8465-f638e18375e1'] = $pane;
  $display->panels['branding'][2] = 'new-3c879038-1011-4427-8465-f638e18375e1';
  $pane = new stdClass();
  $pane->pid = 'new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079';
  $pane->panel = 'branding';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-tabs-menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array(
    'method' => 'lazy',
    'settings' => array(
      'load_strategy' => 'page-loaded',
      'show_spinner' => 1,
      'load_text' => '',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
    'style' => 'naked',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '10bf5aa9-f209-42b0-bba4-cc6ba8aee079';
  $display->content['new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079'] = $pane;
  $display->panels['branding'][3] = 'new-10bf5aa9-f209-42b0-bba4-cc6ba8aee079';
  $pane = new stdClass();
  $pane->pid = 'new-4d207b4e-7863-4263-afc0-31805e58a306';
  $pane->panel = 'branding';
  $pane->type = 'current_user_name';
  $pane->subtype = 'current_user_name';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array();
  $pane->cache = array(
    'method' => 'lazy',
    'settings' => array(
      'load_strategy' => 'page-loaded',
      'show_spinner' => 0,
      'load_text' => '',
    ),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '4d207b4e-7863-4263-afc0-31805e58a306';
  $display->content['new-4d207b4e-7863-4263-afc0-31805e58a306'] = $pane;
  $display->panels['branding'][4] = 'new-4d207b4e-7863-4263-afc0-31805e58a306';
  $pane = new stdClass();
  $pane->pid = 'new-9ba65b89-2e50-4a5e-80f5-b68ad7f8c554';
  $pane->panel = 'content';
  $pane->type = 'block';
  $pane->subtype = 'facebookshare-facebook_share';
  $pane->shown = TRUE;
  $pane->access = array(
    'logic' => 'or',
    'plugins' => array(
      0 => array(
        'name' => 'front',
        'settings' => NULL,
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9ba65b89-2e50-4a5e-80f5-b68ad7f8c554';
  $display->content['new-9ba65b89-2e50-4a5e-80f5-b68ad7f8c554'] = $pane;
  $display->panels['content'][0] = 'new-9ba65b89-2e50-4a5e-80f5-b68ad7f8c554';
  $pane = new stdClass();
  $pane->pid = 'new-1769a64d-2cbe-490d-87aa-a2c3ee082997';
  $pane->panel = 'content';
  $pane->type = 'page_messages';
  $pane->subtype = 'page_messages';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'system-messages',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '1769a64d-2cbe-490d-87aa-a2c3ee082997';
  $display->content['new-1769a64d-2cbe-490d-87aa-a2c3ee082997'] = $pane;
  $display->panels['content'][1] = 'new-1769a64d-2cbe-490d-87aa-a2c3ee082997';
  $pane = new stdClass();
  $pane->pid = 'new-76338aa5-3ee9-4256-9414-eab9979db07b';
  $pane->panel = 'content';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'external_user',
        'settings' => NULL,
        'context' => array(
          0 => 'logged-in-user',
        ),
        'not' => TRUE,
      ),
      2 => array(
        'name' => 'path_visibility',
        'settings' => array(
          'visibility_setting' => '1',
          'paths' => 'user/*',
        ),
        'context' => 'empty',
        'not' => TRUE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '76338aa5-3ee9-4256-9414-eab9979db07b';
  $display->content['new-76338aa5-3ee9-4256-9414-eab9979db07b'] = $pane;
  $display->panels['content'][2] = 'new-76338aa5-3ee9-4256-9414-eab9979db07b';
  $pane = new stdClass();
  $pane->pid = 'new-4637ed6a-8c15-46bb-ae3b-4de4089e860d';
  $pane->panel = 'content';
  $pane->type = 'page_content';
  $pane->subtype = 'page_content';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_page_content_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = '4637ed6a-8c15-46bb-ae3b-4de4089e860d';
  $display->content['new-4637ed6a-8c15-46bb-ae3b-4de4089e860d'] = $pane;
  $display->panels['content'][3] = 'new-4637ed6a-8c15-46bb-ae3b-4de4089e860d';
  $pane = new stdClass();
  $pane->pid = 'new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
  $pane->panel = 'footer';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-menu-1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'attachment-first',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = '';
  $pane->uuid = 'fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
  $display->content['new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2'] = $pane;
  $display->panels['footer'][0] = 'new-fd6dbb4f-c7b5-4881-96d2-769a6c16bfc2';
  $pane = new stdClass();
  $pane->pid = 'new-3a72e819-3274-4d12-8fe3-414c0cbc3151';
  $pane->panel = 'footer';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-menu-2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'attachment-second',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = '';
  $pane->uuid = '3a72e819-3274-4d12-8fe3-414c0cbc3151';
  $display->content['new-3a72e819-3274-4d12-8fe3-414c0cbc3151'] = $pane;
  $display->panels['footer'][1] = 'new-3a72e819-3274-4d12-8fe3-414c0cbc3151';
  $pane = new stdClass();
  $pane->pid = 'new-d9877e3c-cae9-4067-99af-305cb0e70bf9';
  $pane->panel = 'footer';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-menu-3';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'attachment-third',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = '';
  $pane->uuid = 'd9877e3c-cae9-4067-99af-305cb0e70bf9';
  $display->content['new-d9877e3c-cae9-4067-99af-305cb0e70bf9'] = $pane;
  $display->panels['footer'][2] = 'new-d9877e3c-cae9-4067-99af-305cb0e70bf9';
  $pane = new stdClass();
  $pane->pid = 'new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf';
  $pane->panel = 'footer';
  $pane->type = 'block';
  $pane->subtype = 'menu-menu-footer-menu-4';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'attachment-fourth',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = '';
  $pane->uuid = 'd59734fe-4c31-4b3c-af53-5c2bad02f9cf';
  $display->content['new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf'] = $pane;
  $display->panels['footer'][3] = 'new-d59734fe-4c31-4b3c-af53-5c2bad02f9cf';
  $pane = new stdClass();
  $pane->pid = 'new-e999c9e4-00d5-4222-8690-5c8e6f3d5339';
  $pane->panel = 'footer';
  $pane->type = 'block';
  $pane->subtype = 'block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Kontakt',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'e999c9e4-00d5-4222-8690-5c8e6f3d5339';
  $display->content['new-e999c9e4-00d5-4222-8690-5c8e6f3d5339'] = $pane;
  $display->panels['footer'][4] = 'new-e999c9e4-00d5-4222-8690-5c8e6f3d5339';
  $pane = new stdClass();
  $pane->pid = 'new-07dec5bc-64c2-4632-ac67-72598e98d159';
  $pane->panel = 'footer';
  $pane->type = 'social_links';
  $pane->subtype = 'social_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '07dec5bc-64c2-4632-ac67-72598e98d159';
  $display->content['new-07dec5bc-64c2-4632-ac67-72598e98d159'] = $pane;
  $display->panels['footer'][5] = 'new-07dec5bc-64c2-4632-ac67-72598e98d159';
  $pane = new stdClass();
  $pane->pid = 'new-d9c1432b-77cc-432c-987a-eb64569a0b88';
  $pane->panel = 'header';
  $pane->type = 'user_menu';
  $pane->subtype = 'user_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'path' => 'user/[user:uid]',
    'context' => 'logged-in-user',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array(
    'method' => '0',
    'settings' => array(),
  );
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'js-mobile-user-menu',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd9c1432b-77cc-432c-987a-eb64569a0b88';
  $display->content['new-d9c1432b-77cc-432c-987a-eb64569a0b88'] = $pane;
  $display->panels['header'][0] = 'new-d9c1432b-77cc-432c-987a-eb64569a0b88';
  $pane = new stdClass();
  $pane->pid = 'new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
  $pane->panel = 'header';
  $pane->type = 'block';
  $pane->subtype = 'search-form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
  $display->content['new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0'] = $pane;
  $display->panels['header'][1] = 'new-f06a4c37-1ed2-4a64-8502-7b8d4d0619b0';
  $pane = new stdClass();
  $pane->pid = 'new-37d18c98-64ec-448f-ac62-ad0cc199fe06';
  $pane->panel = 'header';
  $pane->type = 'block';
  $pane->subtype = 'ding_wayf-login';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '37d18c98-64ec-448f-ac62-ad0cc199fe06';
  $display->content['new-37d18c98-64ec-448f-ac62-ad0cc199fe06'] = $pane;
  $display->panels['header'][2] = 'new-37d18c98-64ec-448f-ac62-ad0cc199fe06';
  $pane = new stdClass();
  $pane->pid = 'new-94a239e5-00e0-4807-917f-df52c53405e7';
  $pane->panel = 'navigation';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '94a239e5-00e0-4807-917f-df52c53405e7';
  $display->content['new-94a239e5-00e0-4807-917f-df52c53405e7'] = $pane;
  $display->panels['navigation'][0] = 'new-94a239e5-00e0-4807-917f-df52c53405e7';
  $pane = new stdClass();
  $pane->pid = 'new-e0e21892-3602-4e8f-8598-3dd63b46b76a';
  $pane->panel = 'navigation';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-main_menu_second_level';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e0e21892-3602-4e8f-8598-3dd63b46b76a';
  $display->content['new-e0e21892-3602-4e8f-8598-3dd63b46b76a'] = $pane;
  $display->panels['navigation'][1] = 'new-e0e21892-3602-4e8f-8598-3dd63b46b76a';
  $pane = new stdClass();
  $pane->pid = 'new-dbef262a-993e-493c-8525-4d197501cae0';
  $pane->panel = 'navigation';
  $pane->type = 'block';
  $pane->subtype = 'locale-language';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dbef262a-993e-493c-8525-4d197501cae0';
  $display->content['new-dbef262a-993e-493c-8525-4d197501cae0'] = $pane;
  $display->panels['navigation'][2] = 'new-dbef262a-993e-493c-8525-4d197501cae0';
  $pane = new stdClass();
  $pane->pid = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
  $pane->panel = 'navigation';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-2';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '3202a330-fa71-44f2-be0a-265ed734b321';
  $display->content['new-3202a330-fa71-44f2-be0a-265ed734b321'] = $pane;
  $display->panels['navigation'][3] = 'new-3202a330-fa71-44f2-be0a-265ed734b321';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['site_template__gronbib-site-template'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function gronbib_frontend_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'gronbib_frontpage';
  $page->task = 'page';
  $page->admin_title = 'Gronbib frontpage';
  $page->admin_description = 'Front page.';
  $page->path = 'gronbib_frontpage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_gronbib_frontpage__panel_context_eef0a2b5-0041-4a19-a50a-9943da5392a9';
  $handler->task = 'page';
  $handler->subtask = 'gronbib_frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Ding frontpage',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'easyweb_frontend_page';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'top_secondary' => NULL,
      'main_content' => NULL,
      'main_left_right' => NULL,
      'main_right_right' => NULL,
      'attachment_4_1' => NULL,
      'attachment_4_2' => NULL,
      'attachment_4_3' => NULL,
      'attachment_4_4' => NULL,
      'attachment_3_1' => NULL,
      'attachment_3_2' => NULL,
      'attachment_3_3' => NULL,
      'attachment_2_1' => NULL,
      'attachment_2_2' => NULL,
      'attachment_1_1' => NULL,
      'primary' => NULL,
      'secondary' => NULL,
      'tertiary' => NULL,
      's1_r_01_100' => NULL,
      's1_r_02_025' => NULL,
      's1_r_02_075' => NULL,
      's1_r_03_033' => NULL,
      's1_r_03_066' => NULL,
      's1_r_04_050_1' => NULL,
      's1_r_04_050_2' => NULL,
      's1_r_05_066' => NULL,
      's1_r_05_033' => NULL,
      's1_r_06_075' => NULL,
      's1_r_06_025' => NULL,
      's1_r_07_033_1' => NULL,
      's1_r_07_033_2' => NULL,
      's1_r_07_033_3' => NULL,
      's1_r_08_050' => NULL,
      's1_r_08_025_1' => NULL,
      's1_r_08_025_2' => NULL,
      's1_r_09_025_1' => NULL,
      's1_r_09_050' => NULL,
      's1_r_09_025_2' => NULL,
      's1_r_10_025_1' => NULL,
      's1_r_10_025_2' => NULL,
      's1_r_10_050' => NULL,
      's1_r_11_025_1' => NULL,
      's1_r_11_025_2' => NULL,
      's1_r_11_025_3' => NULL,
      's1_r_11_025_4' => NULL,
      's2_r_01_100' => NULL,
      's2_r_02_025' => NULL,
      's2_r_02_075' => NULL,
      's2_r_03_033' => NULL,
      's2_r_03_066' => NULL,
      's2_r_04_050_1' => NULL,
      's2_r_04_050_2' => NULL,
      's2_r_05_066' => NULL,
      's2_r_05_033' => NULL,
      's2_r_06_075' => NULL,
      's2_r_06_025' => NULL,
      's2_r_07_033_1' => NULL,
      's2_r_07_033_2' => NULL,
      's2_r_07_033_3' => NULL,
      's2_r_08_050' => NULL,
      's2_r_08_025_1' => NULL,
      's2_r_08_025_2' => NULL,
      's2_r_09_025_1' => NULL,
      's2_r_09_050' => NULL,
      's2_r_09_025_2' => NULL,
      's2_r_10_025_1' => NULL,
      's2_r_10_025_2' => NULL,
      's2_r_10_050' => NULL,
      's2_r_11_025_1' => NULL,
      's2_r_11_025_2' => NULL,
      's2_r_11_025_3' => NULL,
      's2_r_11_025_4' => NULL,
      's3_r_01_100' => NULL,
      's3_r_02_025' => NULL,
      's3_r_02_075' => NULL,
      's3_r_03_033' => NULL,
      's3_r_03_066' => NULL,
      's3_r_04_050_1' => NULL,
      's3_r_04_050_2' => NULL,
      's3_r_05_066' => NULL,
      's3_r_05_033' => NULL,
      's3_r_06_075' => NULL,
      's3_r_06_025' => NULL,
      's3_r_07_033_1' => NULL,
      's3_r_07_033_2' => NULL,
      's3_r_07_033_3' => NULL,
      's3_r_08_050' => NULL,
      's3_r_08_025_1' => NULL,
      's3_r_08_025_2' => NULL,
      's3_r_09_025_1' => NULL,
      's3_r_09_050' => NULL,
      's3_r_09_025_2' => NULL,
      's3_r_10_025_1' => NULL,
      's3_r_10_025_2' => NULL,
      's3_r_10_050' => NULL,
      's3_r_11_025_1' => NULL,
      's3_r_11_025_2' => NULL,
      's3_r_11_025_3' => NULL,
      's3_r_11_025_4' => NULL,
      's4_r_01_100' => NULL,
      's4_r_02_025' => NULL,
      's4_r_02_075' => NULL,
      's4_r_03_033' => NULL,
      's4_r_03_066' => NULL,
      's4_r_04_050_1' => NULL,
      's4_r_04_050_2' => NULL,
      's4_r_05_066' => NULL,
      's4_r_05_033' => NULL,
      's4_r_06_075' => NULL,
      's4_r_06_025' => NULL,
      's4_r_07_033_1' => NULL,
      's4_r_07_033_2' => NULL,
      's4_r_07_033_3' => NULL,
      's4_r_08_050' => NULL,
      's4_r_08_025_1' => NULL,
      's4_r_08_025_2' => NULL,
      's4_r_09_025_1' => NULL,
      's4_r_09_050' => NULL,
      's4_r_09_025_2' => NULL,
      's4_r_10_025_1' => NULL,
      's4_r_10_025_2' => NULL,
      's4_r_10_050' => NULL,
      's4_r_11_025_1' => NULL,
      's4_r_11_025_2' => NULL,
      's4_r_11_025_3' => NULL,
      's4_r_11_025_4' => NULL,
      's5_r_01_100' => NULL,
      's5_r_02_025' => NULL,
      's5_r_02_075' => NULL,
      's5_r_03_033' => NULL,
      's5_r_03_066' => NULL,
      's5_r_04_050_1' => NULL,
      's5_r_04_050_2' => NULL,
      's5_r_05_066' => NULL,
      's5_r_05_033' => NULL,
      's5_r_06_075' => NULL,
      's5_r_06_025' => NULL,
      's5_r_07_033_1' => NULL,
      's5_r_07_033_2' => NULL,
      's5_r_07_033_3' => NULL,
      's5_r_08_050' => NULL,
      's5_r_08_025_1' => NULL,
      's5_r_08_025_2' => NULL,
      's5_r_09_025_1' => NULL,
      's5_r_09_050' => NULL,
      's5_r_09_025_2' => NULL,
      's5_r_10_025_1' => NULL,
      's5_r_10_025_2' => NULL,
      's5_r_10_050' => NULL,
      's5_r_11_025_1' => NULL,
      's5_r_11_025_2' => NULL,
      's5_r_11_025_3' => NULL,
      's5_r_11_025_4' => NULL,
      's6_r_01_100' => NULL,
      's6_r_02_025' => NULL,
      's6_r_02_075' => NULL,
      's6_r_03_033' => NULL,
      's6_r_03_066' => NULL,
      's6_r_04_050_1' => NULL,
      's6_r_04_050_2' => NULL,
      's6_r_05_066' => NULL,
      's6_r_05_033' => NULL,
      's6_r_06_075' => NULL,
      's6_r_06_025' => NULL,
      's6_r_07_033_1' => NULL,
      's6_r_07_033_2' => NULL,
      's6_r_07_033_3' => NULL,
      's6_r_08_050' => NULL,
      's6_r_08_025_1' => NULL,
      's6_r_08_025_2' => NULL,
      's6_r_09_025_1' => NULL,
      's6_r_09_050' => NULL,
      's6_r_09_025_2' => NULL,
      's6_r_10_025_1' => NULL,
      's6_r_10_025_2' => NULL,
      's6_r_10_050' => NULL,
      's6_r_11_025_1' => NULL,
      's6_r_11_025_2' => NULL,
      's6_r_11_025_3' => NULL,
      's6_r_11_025_4' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6795d6ae-3c57-4fb4-b339-3d6373acce88';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_gronbib_frontpage__panel_context_eef0a2b5-0041-4a19-a50a-9943da5392a9';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-ebf5abb1-6e01-46d0-ba95-7c3b7ad27513';
  $pane->panel = 's1_r_01_100';
  $pane->type = 'views_panes';
  $pane->subtype = 'ding_library-ding_library_frontpage_list';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ebf5abb1-6e01-46d0-ba95-7c3b7ad27513';
  $display->content['new-ebf5abb1-6e01-46d0-ba95-7c3b7ad27513'] = $pane;
  $display->panels['s1_r_01_100'][0] = 'new-ebf5abb1-6e01-46d0-ba95-7c3b7ad27513';
  $pane = new stdClass();
  $pane->pid = 'new-92abca0d-e5b5-4cba-8653-de9eca1d5400';
  $pane->panel = 's3_r_04_050_1';
  $pane->type = 'all_opening_hours';
  $pane->subtype = 'all_opening_hours';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Opening hours today',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '92abca0d-e5b5-4cba-8653-de9eca1d5400';
  $display->content['new-92abca0d-e5b5-4cba-8653-de9eca1d5400'] = $pane;
  $display->panels['s3_r_04_050_1'][0] = 'new-92abca0d-e5b5-4cba-8653-de9eca1d5400';
  $pane = new stdClass();
  $pane->pid = 'new-7b102670-d17d-4cdd-8d67-a8299f95cadc';
  $pane->panel = 's3_r_04_050_2';
  $pane->type = 'ding_nodelist';
  $pane->subtype = 'ding_nodelist';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'list_type' => 'all',
    'title_length' => 25,
    'body_length' => 100,
    'dynamic_switch' => 0,
    'nodes_switch' => 0,
    'autoscroll_delay' => NULL,
    'columns' => 'full',
    'content_filter_promoted' => 0,
    'content_filter_date' => FALSE,
    'content_types' => array(
      'ding_news' => 'ding_news',
    ),
    'limit' => '5',
    'more_links' => array(),
    'override_title_text' => 'Nyheder',
    'selected_nodes' => array(),
    'sort_field' => '',
    'sort_order' => 'asc',
    'taxonomy_filters' => array(),
    'unique_id' => 'pane-15266275950678',
    'widget_type' => 'taxonomy',
    'item_template' => '',
  );
  $pane->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '1800',
      'granularity' => 'context',
    ),
  );
  $pane->style = array();
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7b102670-d17d-4cdd-8d67-a8299f95cadc';
  $display->content['new-7b102670-d17d-4cdd-8d67-a8299f95cadc'] = $pane;
  $display->panels['s3_r_04_050_2'][0] = 'new-7b102670-d17d-4cdd-8d67-a8299f95cadc';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['gronbib_frontpage'] = $page;

  return $pages;

}
