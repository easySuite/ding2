<?php

/**
 * @file
 * Ding2 profile installation altering for Bibliofil projects.
 */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ding2_form_ding2_module_selection_form_alter(&$form, &$form_state, $form_id) {
  $form['providers']['providers_selection']['#options']['lms'] = 'LMS';
  $form['providers']['providers_selection']['#default_value'] = 'lms';
}

/**
 * Implements hook_ding_install_tasks().
 */
function ding2_ding_install_tasks() {
  return [
    'ding2_bibliofil_modules_enable' => [
      'display_name' => st('Bibliofil: Enabling modules'),
      'display' => TRUE,
      'type' => 'batch',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    ],
    'ding2_bibliofil_localization' => [
      'display_name' => st('Bibliofil: Localizing'),
      'display' => TRUE,
      'type' => 'batch',
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
    ],
    'ding2_bibliofil_modules_disable' => [
      'display_name' => st('Bibliofil: Disable modules'),
      'display' => TRUE,
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'type' => 'batch',
    ],
    'ding2_bibliofil_setup_ops' => [
      'display_name' => st('Bibliofil: Configuring'),
      'display' => TRUE,
      'run' => INSTALL_TASK_RUN_IF_NOT_COMPLETED,
      'type' => 'batch',
    ],
    'lms_admin_settings' => [
      'display_name' => st('Bibliofil: Configure LMS'),
      'type' => 'form',
      'file' => drupal_get_path('module', 'lms') . '/lms.admin.inc',
    ],
    'lms_covers_admin_settings_form' => [
      'display_name' => st('Bibliofil: Configure LMS Covers'),
      'type' => 'form',
      'file' => drupal_get_path('module', 'lms_covers') . '/lms_covers.admin.inc',
    ],
    'ding_mobilesearch_plugin_settings' => [
      'display_name' => st('Bibliofil: Configure Mobilesearch'),
      'type' => 'form',
      'file' => drupal_get_path('module', 'ding_mobilesearch') . '/includes/admin.inc',
    ],
    'bpi_admin_settings_form' => [
      'display_name' => st('Bibliofil: Configure BPI'),
      'type' => 'form',
      'file' => drupal_get_path('module', 'bpi') . '/bpi.admin.inc',
    ],
    'easyopac_redirect_settings_form' => [
      'display_name' => st('Bibliofil: Configure easyOPAC Redirect'),
      'type' => 'form',
      'file' => drupal_get_path('module', 'easyopac_redirect') . '/easyopac_redirect.module',
    ],
  ];
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ding2_form_lms_admin_settings_alter(&$form, &$form_state, $form_id) {
  if (defined('MAINTENANCE_MODE') && MAINTENANCE_MODE == 'install') {
    unset($form['#validate']);
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ding2_form_lms_covers_admin_settings_form_alter(&$form, &$form_state, $form_id) {
  if (defined('MAINTENANCE_MODE') && MAINTENANCE_MODE == 'install') {
    unset($form['#validate']);
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function ding2_form_ding_mobilesearch_plugin_settings_alter(&$form, &$form_state, $form_id) {
  if (defined('MAINTENANCE_MODE') && MAINTENANCE_MODE == 'install') {
    unset($form['#validate']);
  }
}

/**
 * Miscellaneous configurations.
 *
 * @param array $install_state
 *   An array of information about the current installation state.
 */
function ding2_bibliofil_setup_ops(&$install_state) {
  $ops = [];

  // Enable bibliofil-subtheme theme and set as default.
  ding2_bibliofil_set_theme();

  // Create add_to_head stubs.
  ding2_bibliofil_add_to_head_stubs();

  // Set default layout for frontpage.
  ding2_bibliofil_set_frontpage_layout();

  // Create opening_hours vocabulary.
  $vocabulary = new stdClass();
  $vocabulary->name = 'Opening hours';
  $vocabulary->description = '';
  $vocabulary->machine_name = 'opening_hours';
  taxonomy_vocabulary_save($vocabulary);

  return [
    'title' => st('Configuring site and modules'),
    'operations' => $ops,
  ];
}

/**
 * Set default layout for frontpage.
 */
function ding2_bibliofil_set_frontpage_layout() {
  // Get page definition and save into database.
  $ding_frontpage_definition = ding_frontpage_default_page_manager_pages();
  $ding_frontpage = reset($ding_frontpage_definition);
  page_manager_page_save($ding_frontpage);

  // Load handler.
  $handler = page_manager_load_task_handler('page', 'ding_frontend', 'page_ding_frontpage_panel_context');

  $did = $handler->did;
  $layout = 'easyweb_frontend_page';

  // Update page_manager_handlers.
  $handler_record = db_select('page_manager_handlers', 'pmh')
    ->fields('pmh')
    ->condition('did', $did)
    ->execute()
    ->fetchAssoc();

  $conf = unserialize($handler_record['conf']);
  $conf['temp_layout'] = $layout;

  db_update('page_manager_handlers')
    ->fields([
      'conf' => serialize($conf),
    ])
    ->condition('did', $did)
    ->execute();

  // Update panels_display.
  db_update('panels_display')
    ->fields([
      'layout' => $layout,
    ])
    ->condition('did', $did)
    ->execute();

  // Update panels_pane.
  db_update('panels_pane')
    ->fields([
      'panel' => 's1_r_01_100',
    ])
    ->condition('did', $did)
    ->execute();
}

/**
 * Enable and set 'bibliofil-subtheme' as default theme.
 */
function ding2_bibliofil_set_theme() {
  theme_enable(['bibliofil']);
  variable_set('theme_default', 'bibliofil');
}

/**
 * Set add_to_head profiles stubs.
 */
function ding2_bibliofil_add_to_head_stubs() {
  $profiles = [
    'bibliofil-header' => [
      'name' => 'bibliofil-header',
      'code' => '<!-- Bibliofil Header code -->',
      'paths' => 'admin/*
batch
media/*
node/add
node/add/*
node/*/edit',
      'scope' => 'head',
      'path_visibility' => '0',
      'roles' => [
        'visibility' => '0',
        'list' => [
          1 => 0,
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ],
      ],
    ],
    'piwik' => [
      'name' => 'piwik',
      'code' => '<!-- Piwik code -->',
      'paths' => '',
      'scope' => 'head',
      'path_visibility' => '0',
      'roles' => [
        'visibility' => '0',
        'list' => [
          1 => '1',
          2 => 0,
          3 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          9 => 0,
          10 => 0,
        ],
      ],
    ],
  ];

  variable_set('add_to_head_profiles', $profiles);
}

/**
 * Enable modules.
 *
 * @param array $install_state
 *   An array of information about the current installation state.
 *
 * @return array
 *   Batch operation.
 */
function ding2_bibliofil_modules_enable(&$install_state) {
  $modules = [
    'add_to_head',
    'easyddb_frontend_layout',
    'easyopac_nodereferences',
    'easyopac_redirect',
    'easyddb_dams',
    'easyddb_dams_media_browser',
    'dams_media_tracker',
    'easyddb_dams_taxonomy',
    'lms',
    'lms_covers',
    'ding_node_search_autocomplete',
    'bibliofil_lists',
    'i18n_menu',
    'i18n_contact',
    'i18n_taxonomy',
    'bpi',
    'ding_mobilesearch',
    'emailkanon',
    'connie_openplatform_token',
    'ding_contact',
    'htmlmail',
    'ding_groups',
  ];

  $ops = ding2_module_list_as_operations($modules);

  return [
    'title' => st('Installing Bibliofil dependencies'),
    'operations' => $ops,
    'file' => drupal_get_path('profile', 'ding2') . '/ding2.install_callbacks.inc',
  ];
}

/**
 * Disable and uninstall modules.
 *
 * @param array $install_state
 *   An array of information about the current installation state.
 *
 * @return array
 *   Batch operation.
 */
function ding2_bibliofil_modules_disable(&$install_state) {
  $ops = [];

  $modules = [
    'ding_varnish',
    'ting_smart_search',
    'smart_search_string',
    'ting_field_search',
    'ting_fulltext',
    'ting_infomedia',
    'ting_subsearch_suggestions',
    'ting_subsearch_translate',
    'ting_subsearch_bibdk',
    'ting_subsearch',
    'eck',
    'varnish',
    'opensearch',
    'mimemail',
  ];

  foreach ($modules as $module) {
    module_disable([$module]);
    drupal_uninstall_modules([$module]);
  }

  return [
    'title' => st('Disable and uninstall non-Bibliofil modules'),
    'operations' => $ops,
  ];
}

/**
 * Localize the bibliofil.
 *
 * @param array $install_state
 *   An array of information about the current installation state.
 *
 * @return array
 *   Batch operation.
 */
function ding2_bibliofil_localization(&$install_state) {
  $ops = [];
  $translations_path = '/profiles/ding2/modules/bibliofil_common/translations/';

  // Enable and set as default Norwegian language.
  include_once DRUPAL_ROOT . '/includes/locale.inc';
  locale_add_language('nb', NULL, NULL, NULL, '', NULL, TRUE, TRUE);

  $languages = language_list();
  variable_set('language_default', $languages['nb']);

  $translations = [
    'default' => 'nb.po',
    'field' => 'felt.nb.po',
    'menu' => 'menu.nb.po',
    'contact' => 'kontakt.nb.po',
    'taxonomy' => 'taxonomy.nb.po',
    'metatag' => 'metatag.nb.po',
  ];

  foreach ($translations as $type => $file) {
    $ops[] = [
      '_ding2_bibliofil_insert_translation',
      [
        $type,
        $translations_path . $file,
      ],
    ];
  }

  return [
    'title' => st('Installing Bibliofil translations'),
    'operations' => $ops,
  ];
}

/**
 * Import translations.
 */
function _ding2_bibliofil_insert_translation($type, $translation_file, &$context) {
  $file = new stdClass();
  $file->uri = DRUPAL_ROOT . $translation_file;
  $file->filename = basename($file->uri);

  _locale_import_po($file, 'nb', LOCALE_IMPORT_OVERWRITE, $type);
  $context['message'] = st('Installed %type translation.', ['%type' => $type]);
}
