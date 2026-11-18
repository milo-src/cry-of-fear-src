// Source-owned replacement for SDK Host_Say, included inside client.cpp.
// Protocol recovered at hl.dll:1001e130; see analysis/ui/chat-server.md.
void Host_Say(edict_t* entity,int teamonly) {
    if(!entity||CMD_ARGC()==0) return;
    CBasePlayer* sender=static_cast<CBasePlayer*>(CBaseEntity::Instance(entity));
    if(!sender||sender->m_flNextChatTime>gpGlobals->time) return;
    // Native computer/phone mode +1ea0==1 also blocks chat. That interaction
    // state is not yet implemented in this port; do not confuse it with death.
    char body[256];
    const char* command=CMD_ARGV(0);
    if(!stricmp(command,"say")||!stricmp(command,"say_team")) {
        if(CMD_ARGC()<2) return;
        strlcpy(body,CMD_ARGS(),sizeof(body));
    } else safe_snprintf(body,sizeof(body),"%s%s%s",command,CMD_ARGC()>1?" ":"",CMD_ARGC()>1?CMD_ARGS():"");
    char* message=body;
    if(*message=='"') {
        ++message;size_t length=strlen(message);
        if(length&&message[length-1]=='"')message[length-1]=0;
    }
    bool printable=false;
    for(const unsigned char* p=(const unsigned char*)message;*p;++p)
        if(*p>32 && *p!=127) {printable=true;break;}
    if(!printable) return;
    // Non-ASCII bytes remain valid for this port's UTF-8 clients.
    char text[128];
    safe_snprintf(text,sizeof(text),"\2%s%s: ",teamonly?"(TEAM) ":"",STRING(entity->v.netname));
    size_t prefix=strlen(text);if(prefix>126){prefix=126;text[prefix]=0;}
    size_t room=126-prefix,length=strlen(message);
    if(length>room) {
        length=room;
        // Do not split the UTF-8 sequence at the transport limit.
        while(length && ((unsigned char)message[length]&0xc0)==0x80)--length;
    }
    message[length]=0;
    memcpy(text+prefix,message,length);text[prefix+length]='\n';text[prefix+length+1]=0;
    sender->m_flNextChatTime=gpGlobals->time+1.0f;
    CBasePlayer* receiver=NULL;
    while((receiver=(CBasePlayer*)UTIL_FindEntityByClassname(receiver,"player"))!=NULL && !FNullEnt(receiver->edict())) {
        if(!receiver->pev||receiver==sender||!receiver->IsNetClient())continue;
#if !NO_VOICEGAMEMGR
        if(g_VoiceGameMgr.PlayerHasBlockedPlayer(receiver,sender))continue;
#endif
        if(teamonly&&g_pGameRules->PlayerRelationship(receiver,sender)!=GR_TEAMMATE)continue;
        MESSAGE_BEGIN(MSG_ONE,gmsgSayText,NULL,receiver->pev);
        WRITE_BYTE(ENTINDEX(entity));WRITE_STRING(text);MESSAGE_END();
    }
    MESSAGE_BEGIN(MSG_ONE,gmsgSayText,NULL,&entity->v);
    WRITE_BYTE(ENTINDEX(entity));WRITE_STRING(text);MESSAGE_END();
    g_engfuncs.pfnServerPrint(text);
    UTIL_LogPrintf("\"%s<%i><%s>\" %s \"%s\"\n",STRING(entity->v.netname),
        GETPLAYERUSERID(entity),GETPLAYERAUTHID(entity),teamonly?"say_team":"say",message);
}
