// Real listen-server SayText delivery plus queue/expiry checks.
namespace {
int chatTestStage,chatTestFailures;
double chatTestNext;
void ChatCheck(bool pass,const char* label) {
    gEngfuncs.Con_Printf("COF_CHAT %s %s\n",pass?"PASS":"FAIL",label);
    if(!pass)++chatTestFailures;
}
}
void CofChatTestFrame(float now) {
    if(!std::getenv("COF_CHATTEST")||now<1)return;
    // Single-player simulation pauses while typing; the driver must use wall time.
    double wall=gEngfuncs.pfnSys_FloatTime();
    if(wall<chatTestNext)return;
    chatTestNext=wall+1.3;
    switch(chatTestStage++) {
    case 0:
        gEngfuncs.Cvar_SetValue("con_notifytime",-1);gEngfuncs.Cvar_SetValue("scr_drawversion",0);
        gHUD.m_SayText.InitHUDData();chatReceived=0;
        ChatCheck(ChatVisible(),"coop_map_visibility");
        gEngfuncs.pfnClientCmd("name ChatTester\nmessagemode\ncof_chat_input_test public\n");break;
    case 1:
        gEngfuncs.pfnClientCmd("snapshot\nwait\ncof_chat_input_test enter\n");break;
    case 2:
        ChatCheck(chatReceived==1 && !std::strcmp(chatRows[0],"\2ChatTester: hello, 'CoF' \xd0\x9f\xd1\x80\xd0\xb8\xd0\xb2\xd0\xb5\xd1\x82\n"),"public_wire_and_editor");
        gEngfuncs.pfnClientCmd("messagemode2\ncof_chat_input_test team\n");break;
    case 3:
        gEngfuncs.pfnClientCmd("snapshot\nwait\ncof_chat_input_test enter_burst\n");break;
    case 4:
        ChatCheck(chatReceived==2 && std::strstr(chatRows[1],"(TEAM) ChatTester: team message"),"team_wire_and_rate_limit");
        gEngfuncs.pfnClientCmd("messagemode\ncof_chat_input_test long\ncof_chat_input_test enter\n");break;
    case 5: {
        bool bounded=false;for(int i=0;i<5;++i)if(std::strlen(chatRows[i])==127)bounded=true;
        ChatCheck(chatReceived==3 && bounded,"bounded_wire_128_bytes");
        gEngfuncs.pfnClientCmd("messagemode\ncof_chat_input_test public\ncof_chat_input_test escape\nmessagemode\ncof_chat_input_test empty\ncof_chat_input_test enter\n");break;
    }
    case 6:
        ChatCheck(chatReceived==3,"escape_and_blank_do_not_send");
        gHUD.m_SayText.InitHUDData();
        for(int i=0;i<6;++i){char message[64];std::snprintf(message,sizeof(message),"\2ChatTester: pager row %d\n",i);gHUD.m_SayText.SayTextPrint(message,sizeof(message),1);}
        ChatCheck(std::strstr(chatRows[0],"row 1")&&std::strstr(chatRows[4],"row 5"),"five_rows_overflow");
        // Malformed nonterminated wire data is rejected without changing state.
        {char packet[]={1,2,'x'};gHUD.m_SayText.MsgFunc_SayText("SayText",sizeof(packet),packet);}
        ChatCheck(chatReceived==3,"malformed_packet_rejected");
        gEngfuncs.pfnClientCmd("snapshot\n");break;
    case 7:
        gHUD.m_SayText.Draw(now+6);
        ChatCheck(std::strstr(chatRows[0],"row 2")!=nullptr,"oldest_row_expires");
        gHUD.m_SayText.InitHUDData();
        ChatCheck(!chatRows[0][0]&&!chatRows[4][0],"map_reset_clears_rows");
        gEngfuncs.Con_Printf("COF_CHAT_COMPLETE failures=%d\n",chatTestFailures);
        gEngfuncs.pfnClientCmd("quit\n");break;
    }
}
