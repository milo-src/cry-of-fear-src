/* Source-owned menu console transport, included by prepared cl_gameui.c. */
static cof_ui_exports_t cof_ui;
static int CofUIInMenuWorld( void )
{
    // Front-end maps recognized by the reconstructed client. An ordinary
    // gameplay map remains loaded even when its pause/save UI is visible.
    return cls.state >= ca_connected && (Q_strstr( clgame.mapname, "game_menu" ) != NULL
        || !Q_stricmp( clgame.mapname, "c_loadgame" )
        || !Q_stricmp( clgame.mapname, "c_difficulty_settings" ));
}
static int CofUIComplete( const char *prefix, int index, char *output, int capacity )
{
    int found = 0;
    size_t length = Q_strlen( prefix );
    if( !output || capacity <= 0 || !length || Q_strchr( prefix, ' ' )) return 0;
    for( cmd_t *cmd = Cmd_GetFirstFunctionHandle(); cmd; cmd = Cmd_GetNextFunctionHandle( cmd ))
    {
        const char *name = Cmd_GetName( cmd );
        if( !Q_strnicmp( name, prefix, length ) && found++ == index )
        { Q_strncpy( output, name, capacity ); return 1; }
    }
    for( cvar_t *var = Cvar_GetList(); var; var = var->next )
        if( !Q_strnicmp( var->name, prefix, length ) && found++ == index )
        { Q_snprintf( output, capacity, "%s %s", var->name, var->string ); return 1; }
    return 0;
}
qboolean CofUIConsoleToggle( void )
{
    if( !cof_ui.toggle_console ) return false;
    cof_ui.toggle_console();
    return true;
}
void CofUIConsolePrint( const char *text )
{
    if( cof_ui.console_print ) cof_ui.console_print( text );
}
void CofUIConsoleClear( void )
{
    if( cof_ui.console_clear ) cof_ui.console_clear();
}
qboolean CofUIChatInput(int y,const char* command,const char* text,int cursor,unsigned color,int blink)
{
    if(!cof_ui.chat_input) return false;
    cof_ui.chat_input(y,command,text,cursor,color,blink);
    return true;
}
static void CofUILoad( void )
{
    cof_ui_get_api_t get = (cof_ui_get_api_t)COM_GetProcAddress( gameui.hInstance, "GetCofUIAPI" );
    cof_ui_engine_t engine = { CofUIComplete, CofUIInMenuWorld };
    memset( &cof_ui, 0, sizeof(cof_ui) );
    if( get ) get( COF_UI_API_VERSION, &engine, &cof_ui );
}
