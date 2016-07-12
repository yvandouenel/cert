<?php
/**
 * @file
 * feature_chantier_cert.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_chantier_cert_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-chantier-body'.
  $field_instances['node-chantier-body'] = array(
    'bundle' => 'chantier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 200,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'context' => '',
      'display_summary' => TRUE,
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-chantier-field_diaporama'.
  $field_instances['node-chantier-field_diaporama'] = array(
    'bundle' => 'chantier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'title',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'full',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_diaporama',
    'label' => 'Diaporama',
    'required' => 0,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'file' => 0,
        'gallery' => 'gallery',
        'image' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-chantier-field_image_scald'.
  $field_instances['node-chantier-field_image_scald'] = array(
    'bundle' => 'chantier',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'title',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 1,
          'override' => 0,
        ),
        'type' => 'accueil',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_image_scald',
    'label' => 'Vignette',
    'required' => 1,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'file' => 0,
        'gallery' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Diaporama');
  t('Vignette');

  return $field_instances;
}
