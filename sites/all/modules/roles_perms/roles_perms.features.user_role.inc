<?php

/**
 * Implementation of hook_user_default_roles().
 */
function roles_perms_user_default_roles() {
  $roles = array();

  // Exported role: editor
  $roles['editor'] = array(
    'name' => 'editor',
  );

  // Exported role: writer
  $roles['writer'] = array(
    'name' => 'writer',
  );

  return $roles;
}
