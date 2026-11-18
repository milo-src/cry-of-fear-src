// Opt-in integration test: exercise the same menu input path as real input.
namespace cof { namespace vgui {
void PointerTestFrame() {
    static int phase=0,failures=0;
    static double next=EngFuncs::DoubleTime()+3;
    static Rect before;
    double now=EngFuncs::DoubleTime();if(now<next)return;next=now+.75;
    auto check=[&](bool ok,const char* name){Con_Printf("COF_POINTER %s %s\n",ok?"PASS":"FAIL",name);if(!ok)++failures;};
    Dialog* d=ActiveDialog();
    switch(phase++) {
    case 0:EngFuncs::ClientCmd(false,"menu_options\n");break;
    case 1:if(!d){check(false,"options opened");EngFuncs::ClientCmd(false,"quit\n");return;}before=d->bounds;
        Con_Printf("COF_POINTER_DRAG options %d %d 80 45\n",before.x+120,before.y+12);next=now+3;break;
    case 2:check(d&&d->bounds.x==before.x+80&&d->bounds.y==before.y+45,"native options drag");
        if(d)Con_Printf("COF_POINTER_BOUNDS %d %d -> %d %d\n",before.x,before.y,d->bounds.x,d->bounds.y);
        EngFuncs::ClientCmd(false,"snapshot\n");break;
    case 3:if(d){d->Command("Tab5");Control* c=d->Find("AdvancedScroll");if(c){Rect r=Absolute(*d,*c),thumb=ScrollThumb(*c,r);
        Con_Printf("COF_POINTER_DRAG scrollbar %d %d 0 %d\n",thumb.x+8,thumb.y+4,r.h-2*r.w-8);}}next=now+3;break;
    case 4:{Control* c=d?d->Find("AdvancedScroll"):nullptr;check(c&&c->number==c->maximum,"native scrollbar drag");EngFuncs::ClientCmd(false,"snapshot\n");break;}
    case 5:Con_Printf("COF_POINTER_TOGGLE settings\n");next=now+2;break;
    case 6:check(d&&d->Find("ConsoleEntry"),"native console toggle");
        if(d&&d->Find("ConsoleEntry")){check(d->Find("ConsoleEntry")->value.empty(),"console key text suppressed");before=d->bounds;Con_Printf("COF_POINTER_DRAG console %d %d 80 45\n",before.x+120,before.y+12);}next=now+3;break;
    case 7:check(d&&d->bounds.x==before.x+80&&d->bounds.y==before.y+45,"native console drag");EngFuncs::ClientCmd(false,"snapshot\n");break;
    case 8:Con_Printf("COF_POINTER_TOGGLE close\n");next=now+2;break;
    case 9:check(d&&d->Find("AdvancedScroll"),"console key returns to settings");if(d)Close(*d);EngFuncs::ClientCmd(false,"map c_game_menu1\n");next=now+5;break;
    case 10:check(EngFuncs::ClientInGame(),"3D menu loaded");Con_Printf("COF_POINTER_TOGGLE menu3d\n");next=now+2;break;
    case 11:check(d&&d->Find("ConsoleEntry"),"console over 3D menu");if(d)Close(*d);EngFuncs::ClientCmd(false,"cof_savemenu\n");break;
    case 12:Con_Printf("COF_POINTER_TOGGLE save\n");next=now+2;break;
    case 13:check(d&&d->Find("ConsoleEntry"),"console over client save panel");if(d)Close(*d);EngFuncs::ClientCmd(false,"map c_sdkmap1\n");next=now+5;break;
    case 14:check(EngFuncs::ClientInGame(),"test map loaded");Con_Printf("COF_POINTER_TOGGLE game\n");next=now+2;break;
    case 15:check(d&&d->Find("ConsoleEntry"),"console during gameplay");if(d)Close(*d);EngFuncs::ClientCmd(false,"+inventory\n");break;
    case 16:Con_Printf("COF_POINTER_TOGGLE inventory\n");next=now+2;break;
    case 17:check(d&&d->Find("ConsoleEntry"),"console over inventory");if(d)Close(*d);EngFuncs::ClientCmd(false,"messagemode\n");break;
    case 18:Con_Printf("COF_POINTER_TOGGLE chat\n");next=now+2;break;
    case 19:check(d&&d->Find("ConsoleEntry"),"console during chat");Con_Printf("COF_POINTER_COMPLETE failures=%d\n",failures);EngFuncs::ClientCmd(false,"quit\n");break;
    }
}
void TestFrame() {
    if(getenv("COF_POINTERTEST")){PointerTestFrame();return;}
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
    case 14:{Control* c=d?d->Find("AdvancedScroll"):nullptr;check(c&&c->kind==Kind::ScrollBar,"user.scr advanced scrollbar");shot();
        if(c){Rect r=Absolute(*d,*c),thumb=ScrollThumb(*c,r);UI_MouseMove(thumb.x+8,thumb.y+4);UI_KeyEvent(K_MOUSE1,1);UI_MouseMove(thumb.x+8,r.y+r.h-18);UI_KeyEvent(K_MOUSE1,0);
            c=d->Find("AdvancedScroll");check(c&&c->number==c->maximum,"advanced thumb reaches last settings");
            UI_KeyEvent(K_MWHEELUP,1);UI_KeyEvent(K_MWHEELUP,0);c=d->Find("AdvancedScroll");check(c&&c->number==c->maximum-24,"advanced wheel synchronizes thumb");}
        break;}
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
