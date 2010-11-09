<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function roles_perms_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'editor',
      '1' => 'writer',
    ),
  );

  // Exported permission: display drupal links
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'editor',
      '2' => 'writer',
    ),
  );

  return $permissions;
}
