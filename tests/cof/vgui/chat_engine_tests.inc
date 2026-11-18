// Opt-in, engine-entrypoint exercise. No original DLL or external server.
static void CofChatInputTest_f(void) {
    if(!getenv("COF_CHATTEST"))return;
    const char* action=Cmd_Argv(1);
    if(!Q_strcmp(action,"enter")) {Key_Message(K_ENTER);return;}
    if(!Q_strcmp(action,"enter_burst")) {Key_Message(K_ENTER);Cbuf_AddText("say rate_limited\n");return;}
    if(!Q_strcmp(action,"escape")) {Key_Message(K_ESCAPE);return;}
    if(!Q_strcmp(action,"public")) {
        const char* sample="hello; \"CoF\" \xd0\x9f\xd1\x80\xd0\xb8\xd0\xb2\xd0\xb5\xd1\x82X";
        for(const unsigned char* p=(const unsigned char*)sample;*p;++p)Con_CharEvent(*p);
        Key_Message(K_BACKSPACE);
    } else if(!Q_strcmp(action,"team")) {
        const char* sample="team message";
        for(const char* p=sample;*p;++p)Con_CharEvent(*p);
    } else if(!Q_strcmp(action,"long")) {
        for(int i=0;i<150;++i)Con_CharEvent('A');
    } else if(!Q_strcmp(action,"empty")) {
        for(int i=0;i<5;++i)Con_CharEvent(' ');
    }
    Con_Printf("COF_CHAT_INPUT mode=%s bytes=%d dest=%d\n",con.chat_cmd,(int)Q_strlen(con.chat.buffer),cls.key_dest==key_message);
}
