<?php 

$view = new view();
$view->name = 'user_news';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'users';
$view->human_name = 'User News';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'My News';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'uid';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['news_image']['id'] = 'news_image';
$handler->display->display_options['fields']['news_image']['table'] = 'field_data_news_image';
$handler->display->display_options['fields']['news_image']['field'] = 'news_image';
$handler->display->display_options['fields']['news_image']['relationship'] = 'uid';
$handler->display->display_options['fields']['news_image']['label'] = '';
$handler->display->display_options['fields']['news_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['news_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['news_image']['settings'] = array(
  'image_style' => 'wer',
  'image_link' => 'content',
);
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['relationship'] = 'uid';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
/* Field: Content: Tags */
$handler->display->display_options['fields']['news_custom_tags']['id'] = 'news_custom_tags';
$handler->display->display_options['fields']['news_custom_tags']['table'] = 'field_data_news_custom_tags';
$handler->display->display_options['fields']['news_custom_tags']['field'] = 'news_custom_tags';
$handler->display->display_options['fields']['news_custom_tags']['relationship'] = 'uid';
$handler->display->display_options['fields']['news_custom_tags']['delta_offset'] = '0';
/* Field: Content: User Tagging */
$handler->display->display_options['fields']['news_user_reference']['id'] = 'news_user_reference';
$handler->display->display_options['fields']['news_user_reference']['table'] = 'field_data_news_user_reference';
$handler->display->display_options['fields']['news_user_reference']['field'] = 'news_user_reference';
$handler->display->display_options['fields']['news_user_reference']['relationship'] = 'uid';
$handler->display->display_options['fields']['news_user_reference']['label'] = 'User Tagged';
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
$handler->display->display_options['sorts']['created_1']['table'] = 'node';
$handler->display->display_options['sorts']['created_1']['field'] = 'created';
$handler->display->display_options['sorts']['created_1']['relationship'] = 'uid';
$handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
/* Filter criterion: User: Active */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'users';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = '1';
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['relationship'] = 'uid';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);

/* Display: Page: User's News */
$handler = $view->new_display('page', 'Page: User\'s News', 'page');
$handler->display->display_options['defaults']['relationships'] = FALSE;
/* Relationship: User: Content authored */
$handler->display->display_options['relationships']['uid']['id'] = 'uid';
$handler->display->display_options['relationships']['uid']['table'] = 'users';
$handler->display->display_options['relationships']['uid']['field'] = 'uid';
$handler->display->display_options['relationships']['uid']['required'] = TRUE;
$handler->display->display_options['defaults']['arguments'] = FALSE;
/* Contextual filter: User: Uid */
$handler->display->display_options['arguments']['uid']['id'] = 'uid';
$handler->display->display_options['arguments']['uid']['table'] = 'users';
$handler->display->display_options['arguments']['uid']['field'] = 'uid';
$handler->display->display_options['arguments']['uid']['default_action'] = 'default';
$handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
$handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['path'] = 'my-news';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'My News';
$handler->display->display_options['menu']['weight'] = '10';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
