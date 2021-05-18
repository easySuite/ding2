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
  ];
}

/**
 * Enable modules.
 *
 * @param array $install_state
 *   Install state.
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
  ];

  $ops = ding2_module_list_as_operations($modules);

  return [
    'title' => st('Installing Bibliofil dependencies'),
    'operations' => $ops,
    'file' => drupal_get_path('profile', 'ding2') . '/ding2.install_callbacks.inc',
  ];
}

/**
 * Disable modules.
 *
 * @param array $install_state
 *   Install state.
 *
 * @return array
 *   Batch operation.
 */
function ding2_bibliofil_modules_disable(&$install_state) {
  $ops = [];

  $modules = [
    'eck',
    'opensearch',
    'ting_field_search',
    'ting_fulltext',
    'ting_infomedia',
    'ting_smart_search',
    'ting_subsearch',
    'ting_subsearch_suggestions',
    'varnish',
  ];

  $ops[] = [
    'module_disable',
    [
      $modules,
      TRUE,
    ],
  ];

  return [
    'title' => st('Disable non-Bibliofil modules'),
    'operations' => $ops,
  ];
}

/**
 * Localize the bibliofil.
 *
 * @param array $install_state
 *   Install state.
 *
 * @return array
 *   Batch operation.
 */
function ding2_bibliofil_localization(&$install_state) {
  $ops = [];
  $langcode = 'nb';
  $translations_path = '/profiles/ding2/modules/bibliofil_common/translations/';

  // Enable and set as default Norwegian language.
  include_once DRUPAL_ROOT . '/includes/locale.inc';
  locale_add_language($langcode, NULL, NULL, NULL, '', NULL, TRUE, TRUE);

  $languages = language_list();
  variable_set('language_default', $languages[$langcode]);

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
