<?php
/**
 * @file
 * feature_formation_cert.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_formation_cert_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_en_pratique|node|formation|full';
  $field_group->group_name = 'group_en_pratique';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formation';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En pratique',
    'weight' => '7',
    'children' => array(
      0 => 'field_lieu',
      1 => 'field_duree',
      2 => 'field_nombre_de_stagiaires',
      3 => 'field_conditions_acces_prerequis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En pratique',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-en-pratique field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_en_pratique|node|formation|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pratique|node|formation|default';
  $field_group->group_name = 'group_pratique';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'formation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En pratique',
    'weight' => '6',
    'children' => array(
      0 => 'field_lieu',
      1 => 'field_duree',
      2 => 'field_nombre_de_stagiaires',
      3 => 'field_conditions_acces_prerequis',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'En pratique',
      'instance_settings' => array(
        'id' => 'en-pratique',
        'classes' => 'group-pratique field-group-html5',
        'wrapper' => 'aside',
      ),
    ),
  );
  $field_groups['group_pratique|node|formation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_title_description|field_collection_item|field_programme|default';
  $field_group->group_name = 'group_title_description';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_programme';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group titre description',
    'weight' => '0',
    'children' => array(
      0 => 'field_titre',
      1 => 'field_description',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group titre description',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-title-description field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_title_description|field_collection_item|field_programme|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('En pratique');
  t('group titre description');

  return $field_groups;
}
