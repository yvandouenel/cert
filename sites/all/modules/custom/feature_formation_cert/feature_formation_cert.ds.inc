<?php
/**
 * @file
 * feature_formation_cert.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_formation_cert_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|formation|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'formation';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_objectifs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Objectifs',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_programme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Programme',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_validation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Validation',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_debouches' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Débouchés',
          'lb-el' => 'h3',
        ),
      ),
    ),
    'field_formations_connexes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Formations connexes',
          'lb-el' => 'h3',
        ),
      ),
    ),
  );
  $export['node|formation|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|formation|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'formation';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'print_link' => array(
      'weight' => '13',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_objectifs' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Objectifs',
          'lb-el' => 'h3',
          'lb-cl' => 'h3-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_programme' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Programme',
          'lb-el' => 'h3',
          'lb-cl' => 'h3-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_validation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Validation',
          'lb-el' => 'h3',
          'lb-cl' => 'h3-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_debouches' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Débouchés',
          'lb-el' => 'h3',
          'lb-cl' => 'h3-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_formations_connexes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Formations connexes',
          'lb-el' => 'h3',
          'lb-cl' => 'h3-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_lieu' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Lieu',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_nombre_de_stagiaires' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Nombre de stagiaires',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_conditions_acces_prerequis' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Conditions d\'accès et prérequis',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_duree' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Durée',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-formation',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_dates_formation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Dates',
          'lb-el' => 'h4',
          'lb-cl' => 'h4-formation',
        ),
      ),
    ),
  );
  $export['node|formation|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|formation|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'formation';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|formation|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function feature_formation_cert_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'print_link';
  $ds_field->label = 'lien impression';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="/print/[node:nid]" class="print-link">Imprimer</a></p>',
      'format' => 'ds_code',
    ),
    'use_token' => 1,
  );
  $export['print_link'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_formation_cert_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|formation|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'formation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_objectifs',
        2 => 'field_programme',
        3 => 'field_validation',
        4 => 'field_debouches',
        5 => 'field_formations_connexes',
      ),
      'right' => array(
        6 => 'group_dde_info',
        7 => 'extra_field_form_info',
        8 => 'field_lieu',
        9 => 'group_pratique',
        10 => 'field_nombre_de_stagiaires',
        11 => 'field_conditions_acces_prerequis',
        12 => 'field_duree',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_objectifs' => 'left',
      'field_programme' => 'left',
      'field_validation' => 'left',
      'field_debouches' => 'left',
      'field_formations_connexes' => 'left',
      'group_dde_info' => 'right',
      'extra_field_form_info' => 'right',
      'field_lieu' => 'right',
      'group_pratique' => 'right',
      'field_nombre_de_stagiaires' => 'right',
      'field_conditions_acces_prerequis' => 'right',
      'field_duree' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|formation|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|formation|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'formation';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_objectifs',
        2 => 'field_programme',
        3 => 'field_validation',
        4 => 'field_debouches',
        5 => 'field_formations_connexes',
      ),
      'right' => array(
        6 => 'group_dde_info',
        7 => 'group_en_pratique',
        8 => 'extra_field_form_info',
        9 => 'field_lieu',
        10 => 'field_dates_formation',
        11 => 'field_duree',
        12 => 'field_nombre_de_stagiaires',
        13 => 'field_conditions_acces_prerequis',
        14 => 'print_link',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_objectifs' => 'left',
      'field_programme' => 'left',
      'field_validation' => 'left',
      'field_debouches' => 'left',
      'field_formations_connexes' => 'left',
      'group_dde_info' => 'right',
      'group_en_pratique' => 'right',
      'extra_field_form_info' => 'right',
      'field_lieu' => 'right',
      'field_dates_formation' => 'right',
      'field_duree' => 'right',
      'field_nombre_de_stagiaires' => 'right',
      'field_conditions_acces_prerequis' => 'right',
      'print_link' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|formation|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|formation|print';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'formation';
  $ds_layout->view_mode = 'print';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_objectifs',
        2 => 'body',
        3 => 'field_programme',
        4 => 'field_validation',
        5 => 'field_debouches',
        6 => 'field_formations_connexes',
        7 => 'field_lieu',
        8 => 'field_dates_formation',
        9 => 'field_duree',
        10 => 'field_nombre_de_stagiaires',
        11 => 'field_conditions_acces_prerequis',
        12 => 'group_form',
        13 => 'extra_field_form_info',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_objectifs' => 'ds_content',
      'body' => 'ds_content',
      'field_programme' => 'ds_content',
      'field_validation' => 'ds_content',
      'field_debouches' => 'ds_content',
      'field_formations_connexes' => 'ds_content',
      'field_lieu' => 'ds_content',
      'field_dates_formation' => 'ds_content',
      'field_duree' => 'ds_content',
      'field_nombre_de_stagiaires' => 'ds_content',
      'field_conditions_acces_prerequis' => 'ds_content',
      'group_form' => 'ds_content',
      'extra_field_form_info' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|formation|print'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|formation|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'formation';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_title_summary',
        1 => 'title',
        2 => 'field_image_scald',
        3 => 'body',
      ),
    ),
    'fields' => array(
      'group_title_summary' => 'ds_content',
      'title' => 'ds_content',
      'field_image_scald' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|formation|teaser'] = $ds_layout;

  return $export;
}
