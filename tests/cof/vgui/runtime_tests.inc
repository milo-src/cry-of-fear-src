// Opt-in integration test: exercise the same menu input path as real input.
namespace cof { namespace vgui {
void TestFrame() {
    if(!getenv("COF_VGUITEST"))return;
    static int phase=0,failures=0;
    static double next=EngFuncs::DoubleTime()+4;
    static float savedVolume=0;
    static std::string savedKey;
    static Dialog* options=nullptr;
    const double now=EngFuncs::DoubleTime();if(now<next)return;next=now+.65;
    auto check=[&](bool ok,const char* what){Con_Printf("COF_VGUI_TEST %s %s\n",ok?"PASS":"FAIL",what);if(!ok)++failures;};
    auto key=[](int k){UI_KeyEvent(k,1);UI_KeyEvent(k,0);};
    auto click=[&](const char* id){Dialog* d=ActiveDialog();Control* c=d?d->Find(id):nullptr;check(c&&c->visible&&c->enabled,id);if(!c)return;UI_MouseMove(d->bounds.x+c->bounds.x+c->bounds.w/2,d->bounds.y+c->bounds.y+c->bounds.h/2);key(K_MOUSE1);};
    auto shot=[](){EngFuncs::ClientCmd(false,"snapshot\n");};
    Dialog* d=ActiveDialog();
    switch(phase++) {
    case 0: savedVolume=EngFuncs::GetCvarFloat("volume");savedKey=EngFuncs::KEY_GetBinding(K_F11)?EngFuncs::KEY_GetBinding(K_F11):"";EngFuncs::ClientCmd(false,"menu_options\n");break;
    case 1:
        check(d&&d->bounds.w==512&&d->bounds.h==406,"original options geometry");options=d;
        if(!d){EngFuncs::ClientCmd(false,"quit\n");return;}
        for(int i=0;i<6;++i)check(d->Find("Tab"+std::to_string(i))!=nullptr,"original tab");
        shot();break;
    case 2:click("Tab1");break;
    case 3:check(d&&d->Find("Slider"),"mouse resource");shot();break;
    case 4:click("Tab2");break;
    case 5:click("SFX Slider");check(EngFuncs::GetCvarFloat("volume")==savedVolume,"draft does not apply");shot();break;
    case 6:click("Cancel");check(EngFuncs::GetCvarFloat("volume")==savedVolume,"cancel preserves volume");EngFuncs::ClientCmd(false,"menu_options\n");break;
    case 7:click("Tab2");break;
    case 8:{Control* c=d?d->Find("SFX Slider"):nullptr;if(c){UI_MouseMove(d->bounds.x+c->bounds.x+c->bounds.w*(savedVolume<1?3:1)/4,d->bounds.y+c->bounds.y+10);key(K_MOUSE1);}click("Apply");break;}
    case 9:check(EngFuncs::GetCvarFloat("volume")!=savedVolume,"apply changes engine cvar");EngFuncs::CvarSetValue("volume",savedVolume);click("Tab3");break;
    case 10:check(d&&d->Find("Resolution"),"video resource");shot();break;
    case 11:click("Tab4");break;
    case 12:shot();break;
    case 13:click("Tab5");break;
    case 14:check(d&&d->Find("AdvancedUp"),"user.scr advanced page");shot();break;
    case 15:EngFuncs::ClientCmd(false,"toggleconsole\n");break;
    case 16:check(d&&d->Find("ConsoleEntry"),"engine toggle routes own console");if(!d||!d->Find("ConsoleEntry")){EngFuncs::ClientCmd(false,"quit\n");return;}
        Con_Printf("COF_VGUI_NATIVE_INPUT_READY\n");next=now+3;break;
    case 17:check(d->Find("ConsoleEntry")->value.empty(),"submit clears input");key(K_UPARROW);check(d->Find("ConsoleEntry")->value.find("COF_VGUI_COMMAND_OK")!=std::string::npos,"console history");shot();break;
    case 18:{auto& c=*d->Find("ConsoleEntry");c.value="cof_vgui_con";c.cursor=int(c.value.size());d->Changed(c);key(K_TAB);check(c.value=="cof_vgui_console ","engine command completion");c.value.clear();c.cursor=0;d->Changed(c);break;}
    case 19:{const Rect old=d->bounds;UI_MouseMove(old.x+100,old.y+12);UI_KeyEvent(K_MOUSE1,1);UI_MouseMove(old.x+125,old.y+32);UI_KeyEvent(K_MOUSE1,0);check(d->bounds.x==old.x+25&&d->bounds.y==old.y+20,"window drag");shot();break;}
    case 20:key(K_ESCAPE);check(ActiveDialog()==options,"console closes to options");click("Cancel");EngFuncs::CvarSetValue("volume",savedVolume);EngFuncs::ClientCmd(false,"host_writeconfig\n");break;
    case 21:EngFuncs::ClientCmd(false,"menu_options\n");break;
    case 22:{Control* c=d?d->Find("listpanel_keybindlist"):nullptr;check(c&&!c->choices.empty(),"binding resource actions");if(c){UI_MouseMove(d->bounds.x+c->bounds.x+25,d->bounds.y+c->bounds.y+30);key(K_MOUSE1);}click("ChangeKeyButton");key(K_F11);check(savedKey==(EngFuncs::KEY_GetBinding(K_F11)?EngFuncs::KEY_GetBinding(K_F11):""),"binding remains draft");click("Apply");break;}
    case 23:{const char* binding=EngFuncs::KEY_GetBinding(K_F11);check(binding&&*binding&&savedKey!=binding,"binding apply");EngFuncs::KEY_SetBinding(K_F11,savedKey.c_str());click("Cancel");EngFuncs::ClientCmd(false,"toggleconsole\nclear\n");break;}
    case 24:shot();key(K_ESCAPE);EngFuncs::ClientCmd(false,"host_writeconfig\n");break;
    case 25:Con_Printf("COF_VGUI_TEST_COMPLETE failures=%d\n",failures);EngFuncs::ClientCmd(false,"quit\n");break;
    }
}
} }
