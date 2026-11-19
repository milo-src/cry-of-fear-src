// Exercise normalized pointer targets and real panel dispatch without touching
// the OS cursor. Runs on smoke_rtx's isolated desktop, never in ordinary play.
void CofMenuOpticsTestFrame() {
    if (!std::getenv("COF_MENUOPTICSTEST") || !menuWorld) return;
    static int phase=0,failures=0;
    static float firstFrame=-1;
    auto check=[&](bool pass,const char* name) {
        if(!pass)++failures;
        gEngfuncs.Con_Printf("COF_MENU_OPTICS %s %s x=%.3f y=%.3f ui=%d,%d\n",
            pass?"PASS":"FAIL",name,menuLookX,menuLookY,menuDrawX,menuDrawY);
    };
    if(phase==0 && menuOpticsTime>10) {
        check(menuRTX && menuLookX<-.8f && menuLookY<-.6f && menuDrawX>0,"left_camera_and_buttons");
        const CofUiPoint left=CofUiProject(menuButtonPlane,float(MainRowX()),float(MainRowY(0)));
        const CofUiPoint right=CofUiProject(menuButtonPlane,float(MainRowX()+280),float(MainRowY(0)));
        check(menuPerspectiveDrawn && std::abs(left.y-right.y)>1.f,"perspective_changes_angle");
        bool targets=true;
        for(int row=0;row<10;++row) {
            const CofUiPoint centre=CofUiProject(menuButtonPlane,MainRowX()+140.f,MainRowY(row)+19.f);
            for(int candidate=0;candidate<10;++candidate)
                targets=targets && (MainRowHit(centre.x,centre.y,candidate)==(candidate==row));
            const CofUiPoint outside=CofUiProject(menuButtonPlane,MainRowX()-3.f,MainRowY(row)+19.f);
            targets=targets && !MainRowHit(outside.x,outside.y,row);
        }
        check(targets,"projected_row_hit_regions");
        menuRTX=false;
        check(MainRowHit(MainRowX()+1.f,MainRowY(0)+1.f,0) &&
            !MainRowHit(MainRowX()-1.f,MainRowY(0)+1.f,0),"classic_hit_guard");
        menuRTX=true;
        check(gEngfuncs.pfnGetCvarFloat("cof_menu_glass_visible")==1,"menu_glass_active");
        firstFrame=gEngfuncs.pfnGetCvarFloat("cof_menu_rain_frame");
        if(std::getenv("COF_MENUFILMTEST"))
            check(gEngfuncs.pfnGetCvarFloat("cof_menu_rain_film")==1 && firstFrame>0,"imported_rain_uploaded");
        ++phase;
    } else if(phase==1 && menuOpticsTime>20) {
        check(menuLookX>.8f && menuLookY>.6f && menuDrawX<0,"right_camera_and_buttons");
        if(std::getenv("COF_MENUFILMTEST"))
            check(gEngfuncs.pfnGetCvarFloat("cof_menu_rain_frame")>firstFrame+100,"imported_rain_advances");
        const CofUiPoint click=CofUiProject(menuButtonPlane,MainRowX()+140.f,MainRowY(0)+19.f);
        Click(int(std::lround(click.x)),int(std::lround(click.y)));
        check(panel==Difficulty,"shifted_button_dispatch");
        Show(Main);
        ++phase;
    } else if(phase==2 && menuOpticsTime>34) {
        check(std::abs(menuLookX)<.01f && std::abs(menuLookY)<.01f && !menuDrawX && !menuDrawY,"settles_without_drift");
        gEngfuncs.Con_Printf("COF_MENU_OPTICS_COMPLETE failures=%d\n",failures);
        ++phase;
    }
}
