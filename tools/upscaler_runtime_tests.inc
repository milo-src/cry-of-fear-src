// Opt-in menu transactions in a real, continuously rendering process.
namespace cof { namespace vgui {
void UpscalerTestFrame() {
    if(!getenv("COF_UPSCALERTEST"))return;
    static int phase=0,failures=0,method=0;
    static double next=EngFuncs::DoubleTime()+4;
    const bool nativeStart=getenv("COF_UPSCALER_NATIVE_START")!=nullptr;
    double now=EngFuncs::DoubleTime();if(now<next)return;next=now+1.5;
    auto check=[&](bool ok,const char* name){Con_Printf("COF_UPSCALER %s %s\n",ok?"PASS":"FAIL",name);if(!ok)++failures;};
    auto select=[&](const char* id,int value){Dialog* d=ActiveDialog();Control* c=d?d->Find(id):nullptr;
        check(c&&c->enabled,id);if(c&&c->enabled){c->selected=value;d->Changed(*c);}};
    auto command=[&](const char* id){Dialog* d=ActiveDialog();check(d!=nullptr,id);if(d)d->Command(id);};
    auto active=[&](int m,int q){if(RTXActive())check(EngFuncs::GetCvarFloat("rt_upscale_method")==m&&
        EngFuncs::GetCvarFloat("rt_upscale_quality")==q,"live method and quality after rendering");};
    switch(phase++) {
    case 0:OpenOptions();command("Tab6");
        method=EngFuncs::GetCvarFloat("_rt_dlss_available")?2:EngFuncs::GetCvarFloat("_rt_fsr3_available")?1:0;
        check(ReadRendererSettings().upscaler==(nativeStart?0:-1),"saved startup preference");
        if(nativeStart)active(0,0);
        if(RTXActive())check(method!=0,"upscaler available for hot-switch test");break;
    case 1:select("RTXUpscaler",1);active(nativeStart?0:method,!nativeStart&&method?3:0);command("Cancel");break;
    case 2:OpenOptions();command("Tab6");check(ReadRendererSettings().upscaler==(nativeStart?0:-1),"cancel preserves preferences");
        select("RTXUpscaler",1);command("Apply");break;
    case 3:active(0,0);check(ReadRendererSettings().upscaler==0,"off persisted");
        check(!ActiveDialog()->Find("RTXUpscaleQuality")->enabled,"quality disabled when off");
        select("RTXProfile",2);command("Apply");break;
    case 4:active(0,0);check(ReadRendererSettings().upscaler==0,"profile keeps upscaling off");
        command("Cancel");OpenOptions();command("Tab6");
        check(ActiveDialog()->Find("RTXUpscaler")->selected==1,"off survives reopening");
        select("RTXUpscaler",0);select("RTXUpscaleQuality",1);command("Apply");break;
    case 5:active(method,method?2:0);select("RTXUpscaleQuality",3);command("Apply");break;
    case 6:active(method,method?4:0);select("RTXUpscaleQuality",0);command("Apply");break;
    case 7:active(method,method?1:0);select("RTXUpscaleQuality",2);command("Cancel");break;
    case 8:active(method,method?1:0);OpenOptions();command("Tab6");
        check(ActiveDialog()->Find("RTXUpscaleQuality")->selected==0,"quality cancel and reopen");
        if(!RTXActive()||EngFuncs::GetCvarFloat("_rt_fsr3_available")){select("RTXUpscaler",2);command("Apply");}break;
    case 9:if(RTXActive()&&EngFuncs::GetCvarFloat("_rt_fsr3_available"))active(1,1);
        if(!RTXActive()||EngFuncs::GetCvarFloat("_rt_dlss_available")){select("RTXUpscaler",3);command("Apply");}break;
    case 10:if(RTXActive()&&EngFuncs::GetCvarFloat("_rt_dlss_available"))active(2,1);
        select("RTXUpscaler",1);command("Apply");break;
    case 11:active(0,0);command("Cancel");OpenOptions();command("Tab6");
        check(ReadRendererSettings().upscaler==0&&ActiveDialog()->Find("RTXUpscaler")->selected==1,"final native mode persisted");
        if(!RTXActive())check(!EngFuncs::GetCvarFloat("rt_upscale_method")&&!EngFuncs::GetCvarFloat("rt_upscale_quality"),"OpenGL unaffected");
        command("Cancel");EngFuncs::ClientCmd(false,"map c_sdkmap1\n");next=now+6;break;
    case 12:check(EngFuncs::ClientInGame(),"gameplay map loaded");OpenOptions();command("Tab6");
        select("RTXUpscaler",0);select("RTXUpscaleQuality",2);command("Apply");break;
    case 13:active(method,method?3:0);check(EngFuncs::ClientInGame(),"live upscale preserves gameplay map");
        select("RTXUpscaler",1);command("Apply");break;
    case 14:active(0,0);check(EngFuncs::ClientInGame(),"live disable preserves gameplay map");
        Con_Printf("COF_UPSCALER_COMPLETE failures=%d\n",failures);EngFuncs::ClientCmd(false,"quit\n");break;
    }
}
} }
