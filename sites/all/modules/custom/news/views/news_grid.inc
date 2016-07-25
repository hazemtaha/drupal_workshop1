<?php

$view = new view();
$view->name = 'news_view';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'News';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Recently Added';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['row_plugin'] = 'fields';
/* Field: Content: Image */
$handler->display->display_options['fields']['news_image']['id'] = 'news_image';
$handler->display->display_options['fields']['news_image']['table'] = 'field_data_news_image';
$handler->display->display_options['fields']['news_image']['field'] = 'news_image';
$handler->display->display_options['fields']['news_image']['label'] = '';
$handler->display->display_options['fields']['news_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['news_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['news_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Body */
$handler->display->display_options['fields']['body']['id'] = 'body';
$handler->display->display_options['fields']['body']['table'] = 'field_data_body';
$handler->display->display_options['fields']['body']['field'] = 'body';
$handler->display->display_options['fields']['body']['label'] = '';
$handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
$handler->display->display_options['fields']['body']['settings'] = array(
  'trim_length' => '600',
);
/* Sort criterion: Content: Post date */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);
$handler->display->display_options['filters']['type']['group'] = 1;

/* Display: Page: All News */
$handler = $view->new_display('page', 'Page: All News', 'page');
$handler->display->display_options['path'] = 'news';
$handler->display->display_options['menu']['type'] = 'normal';
$handler->display->display_options['menu']['title'] = 'All News';
$handler->display->display_options['menu']['description'] = 'Check out all the recent news';
$handler->display->display_options['menu']['weight'] = '1';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Page: Education */
$handler = $view->new_display('page', 'Page: Education', 'page_1');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Tags (news_custom_tags) */
$handler->display->display_options['filters']['news_custom_tags_tid']['id'] = 'news_custom_tags_tid';
$handler->display->display_options['filters']['news_custom_tags_tid']['table'] = 'field_data_news_custom_tags';
$handler->display->display_options['filters']['news_custom_tags_tid']['field'] = 'news_custom_tags_tid';
$handler->display->display_options['filters']['news_custom_tags_tid']['value'] = array(
  80 => '80',
);
$handler->display->display_options['filters']['news_custom_tags_tid']['vocabulary'] = 'custom_tags';
$handler->display->display_options['path'] = 'news/education';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Education';
$handler->display->display_options['menu']['description'] = 'All education related news';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Page: Sports */
$handler = $view->new_display('page', 'Page: Sports', 'page_2');
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Tags (news_custom_tags) */
$handler->display->display_options['filters']['news_custom_tags_tid']['id'] = 'news_custom_tags_tid';
$handler->display->display_options['filters']['news_custom_tags_tid']['table'] = 'field_data_news_custom_tags';
$handler->display->display_options['filters']['news_custom_tags_tid']['field'] = 'news_custom_tags_tid';
$handler->display->display_options['filters']['news_custom_tags_tid']['value'] = array(
  79 => '79',
);
$handler->display->display_options['filters']['news_custom_tags_tid']['type'] = 'select';
$handler->display->display_options['filters']['news_custom_tags_tid']['vocabulary'] = 'custom_tags';
$handler->display->display_options['path'] = 'news/sports';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Sports';
$handler->display->display_options['menu']['description'] = 'All sports related news';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Block: All News */
$handler = $view->new_display('block', 'Block: All News', 'block_1');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'grid';
$handler->display->display_options['style_options']['columns'] = '1';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['news_image']['id'] = 'news_image';
$handler->display->display_options['fields']['news_image']['table'] = 'field_data_news_image';
$handler->display->display_options['fields']['news_image']['field'] = 'news_image';
$handler->display->display_options['fields']['news_image']['label'] = '';
$handler->display->display_options['fields']['news_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['news_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['news_image']['settings'] = array(
  'image_style' => 'thumbnail',
  'image_link' => 'content',
);
$handler->display->display_options['block_description'] = 'All News';

/* Display: Attachment: Most Recent */
$handler = $view->new_display('attachment', 'Attachment: Most Recent', 'attachment_1');
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['news_image']['id'] = 'news_image';
$handler->display->display_options['fields']['news_image']['table'] = 'field_data_news_image';
$handler->display->display_options['fields']['news_image']['field'] = 'news_image';
$handler->display->display_options['fields']['news_image']['label'] = '';
$handler->display->display_options['fields']['news_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['news_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['news_image']['settings'] = array(
  'image_style' => 'wer',
  'image_link' => 'content',
);
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
  'page_1' => 0,
  'page_2' => 0,
  'block_1' => 0,
);

/* Display: Exposed Filters */
$handler = $view->new_display('page', 'Exposed Filters', 'page_3');
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: Content: Published */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'node';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = 1;
$handler->display->display_options['filters']['status']['group'] = 1;
$handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
/* Filter criterion: Content: Type */
$handler->display->display_options['filters']['type']['id'] = 'type';
$handler->display->display_options['filters']['type']['table'] = 'node';
$handler->display->display_options['filters']['type']['field'] = 'type';
$handler->display->display_options['filters']['type']['value'] = array(
  'news' => 'news',
);
$handler->display->display_options['filters']['type']['group'] = 1;
/* Filter criterion: Content: Tags (news_custom_tags) */
$handler->display->display_options['filters']['news_custom_tags_tid']['id'] = 'news_custom_tags_tid';
$handler->display->display_options['filters']['news_custom_tags_tid']['table'] = 'field_data_news_custom_tags';
$handler->display->display_options['filters']['news_custom_tags_tid']['field'] = 'news_custom_tags_tid';
$handler->display->display_options['filters']['news_custom_tags_tid']['value'] = '';
$handler->display->display_options['filters']['news_custom_tags_tid']['exposed'] = TRUE;
$handler->display->display_options['filters']['news_custom_tags_tid']['expose']['operator_id'] = 'news_custom_tags_tid_op';
$handler->display->display_options['filters']['news_custom_tags_tid']['expose']['label'] = 'Filter By Tag';
$handler->display->display_options['filters']['news_custom_tags_tid']['expose']['operator'] = 'news_custom_tags_tid_op';
$handler->display->display_options['filters']['news_custom_tags_tid']['expose']['identifier'] = 'news_custom_tags_tid';
$handler->display->display_options['filters']['news_custom_tags_tid']['expose']['multiple'] = TRUE;
$handler->display->display_options['filters']['news_custom_tags_tid']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['news_custom_tags_tid']['vocabulary'] = 'custom_tags';
$handler->display->display_options['path'] = 'news/filter';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Filter';
$handler->display->display_options['menu']['weight'] = '5';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;


$views[$view->name] = $view;
