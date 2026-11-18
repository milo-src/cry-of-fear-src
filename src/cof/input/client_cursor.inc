/* CoF client panels keep key_dest == key_game. Their mouse-enable callback
 * owns a visible OS cursor independently of MainUI/VGUI focus. */
void IN_SetClientMouseVisible(qboolean visible)
{
    if (!in_mouseinitialized) return;
    cof_client_mouse_visible = visible;
    Platform_SetCursorType(visible ? dc_arrow : dc_none);
    IN_CheckMouseState(in_mouseactive);
}

qboolean IN_ClientMouseIsVisible(void)
{
    return cof_client_mouse_visible;
}
