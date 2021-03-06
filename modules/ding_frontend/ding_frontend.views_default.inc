<?php
/**
 * @file
 * ding_frontend.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ding_frontend_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ding_multiple_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_default_multiple_index';
  $view->human_name = 'Ding multiple search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'view-node-search-result';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item search-result';
  $handler->display->display_options['style_options']['class'] = 'list';
  $handler->display->display_options['style_options']['wrapper_class'] = 'search-results';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Multiple types: Node */
  $handler->display->display_options['fields']['node']['id'] = 'node';
  $handler->display->display_options['fields']['node']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['fields']['node']['field'] = 'node';
  $handler->display->display_options['fields']['node']['label'] = '';
  $handler->display->display_options['fields']['node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node']['display'] = 'view';
  $handler->display->display_options['fields']['node']['view_mode'] = 'search_result';
  $handler->display->display_options['fields']['node']['bypass_access'] = 0;
  /* Field: Indexed Multiple types: User */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['user']['display'] = 'view';
  $handler->display->display_options['fields']['user']['view_mode'] = 'search_result';
  $handler->display->display_options['fields']['user']['bypass_access'] = 0;
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['conjunction'] = 'OR';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'ding_wysiwyg',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'item_bundle' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_ding_event_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_ding_event_target' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'node_field_ding_news_category' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'combine' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Multiple types: Node */
  $handler->display->display_options['fields']['node']['id'] = 'node';
  $handler->display->display_options['fields']['node']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['fields']['node']['field'] = 'node';
  $handler->display->display_options['fields']['node']['label'] = '';
  $handler->display->display_options['fields']['node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['node']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['node']['display'] = 'view';
  $handler->display->display_options['fields']['node']['view_mode'] = 'search_result';
  $handler->display->display_options['fields']['node']['bypass_access'] = 0;
  /* Field: Indexed Multiple types: User */
  $handler->display->display_options['fields']['user']['id'] = 'user';
  $handler->display->display_options['fields']['user']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['fields']['user']['field'] = 'user';
  $handler->display->display_options['fields']['user']['label'] = '';
  $handler->display->display_options['fields']['user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['user']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['user']['display'] = 'view';
  $handler->display->display_options['fields']['user']['view_mode'] = 'search_result';
  $handler->display->display_options['fields']['user']['bypass_access'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Search: Fulltext search */
  $handler->display->display_options['arguments']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['search_api_views_fulltext']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['not'] = 0;
  $handler->display->display_options['arguments']['search_api_views_fulltext']['conjunction'] = 'OR';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Multiple types: Bundle */
  $handler->display->display_options['filters']['item_bundle']['id'] = 'item_bundle';
  $handler->display->display_options['filters']['item_bundle']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['filters']['item_bundle']['field'] = 'item_bundle';
  $handler->display->display_options['filters']['item_bundle']['value'] = array(
    'node:ding_event' => 'node:ding_event',
    'node:ding_news' => 'node:ding_news',
    'node:ding_page' => 'node:ding_page',
    'user:user' => 'user:user',
  );
  $handler->display->display_options['filters']['item_bundle']['exposed'] = TRUE;
  $handler->display->display_options['filters']['item_bundle']['expose']['operator_id'] = 'item_bundle_op';
  $handler->display->display_options['filters']['item_bundle']['expose']['label'] = 'Content type';
  $handler->display->display_options['filters']['item_bundle']['expose']['operator'] = 'item_bundle_op';
  $handler->display->display_options['filters']['item_bundle']['expose']['identifier'] = 'ct';
  $handler->display->display_options['filters']['item_bundle']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['item_bundle']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['item_bundle']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Category (indexed) */
  $handler->display->display_options['filters']['node_field_ding_event_category']['id'] = 'node_field_ding_event_category';
  $handler->display->display_options['filters']['node_field_ding_event_category']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['filters']['node_field_ding_event_category']['field'] = 'node_field_ding_event_category';
  $handler->display->display_options['filters']['node_field_ding_event_category']['value'] = array();
  $handler->display->display_options['filters']['node_field_ding_event_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_ding_event_category']['expose']['operator_id'] = 'node_field_ding_event_category_op';
  $handler->display->display_options['filters']['node_field_ding_event_category']['expose']['label'] = 'Event category';
  $handler->display->display_options['filters']['node_field_ding_event_category']['expose']['operator'] = 'node_field_ding_event_category_op';
  $handler->display->display_options['filters']['node_field_ding_event_category']['expose']['identifier'] = 'node_field_ding_event_category';
  $handler->display->display_options['filters']['node_field_ding_event_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_ding_event_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['node_field_ding_event_category']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Target (indexed) */
  $handler->display->display_options['filters']['node_field_ding_event_target']['id'] = 'node_field_ding_event_target';
  $handler->display->display_options['filters']['node_field_ding_event_target']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['filters']['node_field_ding_event_target']['field'] = 'node_field_ding_event_target';
  $handler->display->display_options['filters']['node_field_ding_event_target']['value'] = array();
  $handler->display->display_options['filters']['node_field_ding_event_target']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_ding_event_target']['expose']['operator_id'] = 'node_field_ding_event_target_op';
  $handler->display->display_options['filters']['node_field_ding_event_target']['expose']['label'] = 'Event target';
  $handler->display->display_options['filters']['node_field_ding_event_target']['expose']['operator'] = 'node_field_ding_event_target_op';
  $handler->display->display_options['filters']['node_field_ding_event_target']['expose']['identifier'] = 'node_field_ding_event_target';
  $handler->display->display_options['filters']['node_field_ding_event_target']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_ding_event_target']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['node_field_ding_event_target']['expose']['reduce'] = 0;
  /* Filter criterion: Node: Category (indexed) */
  $handler->display->display_options['filters']['node_field_ding_news_category']['id'] = 'node_field_ding_news_category';
  $handler->display->display_options['filters']['node_field_ding_news_category']['table'] = 'search_api_index_default_multiple_index';
  $handler->display->display_options['filters']['node_field_ding_news_category']['field'] = 'node_field_ding_news_category';
  $handler->display->display_options['filters']['node_field_ding_news_category']['value'] = array();
  $handler->display->display_options['filters']['node_field_ding_news_category']['exposed'] = TRUE;
  $handler->display->display_options['filters']['node_field_ding_news_category']['expose']['operator_id'] = 'node_field_ding_news_category_op';
  $handler->display->display_options['filters']['node_field_ding_news_category']['expose']['label'] = 'News category';
  $handler->display->display_options['filters']['node_field_ding_news_category']['expose']['operator'] = 'node_field_ding_news_category_op';
  $handler->display->display_options['filters']['node_field_ding_news_category']['expose']['identifier'] = 'node_field_ding_news_category';
  $handler->display->display_options['filters']['node_field_ding_news_category']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['node_field_ding_news_category']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    3 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['node_field_ding_news_category']['expose']['reduce'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'search_api_views_fulltext' => array(
      'type' => 'user',
      'context' => 'string.raw',
      'context_optional' => 0,
      'panel' => '2',
      'fixed' => '',
      'label' => 'Search: Fulltext search',
    ),
  );
  $translatables['ding_multiple_search'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Content pane'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Content type'),
    t('Event category'),
    t('Event target'),
    t('News category'),
    t('View panes'),
  );
  $export['ding_multiple_search'] = $view;

  $view = new view();
  $view->name = 'ding_node_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ding node search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ding node search';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'input_required';
  $handler->display->display_options['exposed_form']['options']['text_input_required'] = 'No results found';
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'ding_wysiwyg';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'list-item search-result';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'search-results';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Contextual filter: Search: Search Terms */
  $handler->display->display_options['arguments']['keys']['id'] = 'keys';
  $handler->display->display_options['arguments']['keys']['table'] = 'search_index';
  $handler->display->display_options['arguments']['keys']['field'] = 'keys';
  $handler->display->display_options['arguments']['keys']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['keys']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['keys']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['keys']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['keys']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ding_campaign' => 'ding_campaign',
    'new_materials' => 'new_materials',
    'panel' => 'panel',
    'ding_rolltab' => 'ding_rolltab',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $translatables['ding_node_search'] = array(
    t('Master'),
    t('Ding node search'),
    t('mere'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('No results found'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Content pane'),
    t('more'),
    t('View panes'),
  );
  $export['ding_node_search'] = $view;

  $view = new view();
  $view->name = 'ding_related_content';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'grid-medium';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Contextual filter: Content id: Filter the node it self out */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['ui_name'] = 'Content id: Filter the node it self out';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Tags: News field */
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['id'] = 'field_ding_news_tags_tid';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['table'] = 'field_data_field_ding_news_tags';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['field'] = 'field_ding_news_tags_tid';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['ui_name'] = 'Tags: News field';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['default_argument_options']['vocabularies'] = array(
    'ding_content_tags' => 'ding_content_tags',
  );
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ding_news_tags_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Tags: Event field */
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['id'] = 'field_ding_event_tags_tid';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['table'] = 'field_data_field_ding_event_tags';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['field'] = 'field_ding_event_tags_tid';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['ui_name'] = 'Tags: Event field';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['default_argument_options']['vocabularies'] = array(
    'ding_content_tags' => 'ding_content_tags',
  );
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_ding_event_tags_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'ding_event' => 'ding_event',
    'ding_news' => 'ding_news',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Date: Date (node) */
  $handler->display->display_options['filters']['date_filter']['id'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['table'] = 'node';
  $handler->display->display_options['filters']['date_filter']['field'] = 'date_filter';
  $handler->display->display_options['filters']['date_filter']['operator'] = '>=';
  $handler->display->display_options['filters']['date_filter']['group'] = 2;
  $handler->display->display_options['filters']['date_filter']['default_date'] = 'now';
  $handler->display->display_options['filters']['date_filter']['date_fields'] = array(
    'field_data_field_ding_event_date.field_ding_event_date_value' => 'field_data_field_ding_event_date.field_ding_event_date_value',
    'field_data_field_ding_event_date.field_ding_event_date_value2' => 'field_data_field_ding_event_date.field_ding_event_date_value2',
  );
  /* Filter criterion: Content: Date -  start date (field_ding_event_date) */
  $handler->display->display_options['filters']['field_ding_event_date_value']['id'] = 'field_ding_event_date_value';
  $handler->display->display_options['filters']['field_ding_event_date_value']['table'] = 'field_data_field_ding_event_date';
  $handler->display->display_options['filters']['field_ding_event_date_value']['field'] = 'field_ding_event_date_value';
  $handler->display->display_options['filters']['field_ding_event_date_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_ding_event_date_value']['group'] = 2;

  /* Display: News & Events */
  $handler = $view->new_display('panel_pane', 'News & Events', 'news_events');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $translatables['ding_related_content'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('News & Events'),
    t('View panes'),
  );
  $export['ding_related_content'] = $view;

  return $export;
}
