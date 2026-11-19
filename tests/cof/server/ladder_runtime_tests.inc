// Opt-in engine assertions. No desktop input or original DLL execution.
#include "client.h"
static int ladderTestFailures;
static void LadderCheck(bool pass,const char* name) {
    ALERT(at_console,"COF_LADDER_TEST %s %s\n",pass?"PASS":"FAIL",name);
    if (!pass) ++ladderTestFailures;
}
static void LadderKey(CBaseEntity* ent,const char* key,const char* value) {
    KeyValueData kv={const_cast<char*>(STRING(ent->pev->classname)),const_cast<char*>(key),const_cast<char*>(value),FALSE};
    DispatchKeyValue(ent->edict(),&kv);
    LadderCheck(kv.fHandled!=0,key);
}
void CofLadderTestFrame() {
    if (!std::getenv("COF_LADDERTEST")) return;
    static int phase, originalFlags;
    static Vector original;
    static float deadline, mounted;
    static CCofLadderManager* manager;
    static CBaseEntity *top,*bottom,*control,*brush;
    auto* player=static_cast<CBasePlayer*>(UTIL_PlayerByIndex(1));
    if (!player || !player->IsAlive() || phase==9) return;
    if (!phase && gpGlobals->time < 1.5f) return;
    if (phase && gpGlobals->time>deadline) {
        LadderCheck(false,"scheduled_sequence_timeout"); CofLadderCancel(player);
        phase=8;
    }
    if (!phase) {
        original=player->pev->origin; originalFlags=player->pev->flags;
        top=CBaseEntity::Create("cof_ladderend_top",original+Vector(0,0,96),Vector(0,123,0));
        bottom=CBaseEntity::Create("cof_ladderend_bottom",original,Vector(0,45,0));
        manager=static_cast<CCofLadderManager*>(CBaseEntity::Create("cof_ladder_manager",original,g_vecZero));
        control=CBaseEntity::Create("func_laddercontrol",original,g_vecZero);
        brush=CBaseEntity::Create("func_ladder",original,g_vecZero);
        LadderCheck(top&&bottom&&manager&&control&&brush,"entity_factories");
        if (!top||!bottom||!manager||!control||!brush) {phase=8;return;}
        top->pev->targetname=ALLOC_STRING("cof_test_ladder_top");
        bottom->pev->targetname=ALLOC_STRING("cof_test_ladder_bottom");
        brush->pev->targetname=ALLOC_STRING("cof_test_brush_ladder");
        control->pev->target=brush->pev->targetname;
        const float savedShowTriggers=CVAR_GET_FLOAT("showtriggers");
        CVAR_SET_FLOAT("showtriggers",0);
        brush->Precache(); control->Precache();
        LadderCheck((brush->pev->effects&EF_NODRAW) && (control->pev->effects&EF_NODRAW) &&
            control->pev->solid==SOLID_TRIGGER,"precache_hides_ladder_and_controller");
        CVAR_SET_FLOAT("showtriggers",1);
        brush->Precache(); control->Precache();
        LadderCheck(!(brush->pev->effects&EF_NODRAW) && !(control->pev->effects&EF_NODRAW),
            "precache_debug_visibility_clears_nodraw");
        CVAR_SET_FLOAT("showtriggers",0);
        brush->pev->spawnflags=1; brush->Precache();
        LadderCheck(!(brush->pev->effects&EF_NODRAW),"brush_show_spawnflag_overrides_hidden");
        brush->pev->spawnflags=0; brush->Precache(); control->Precache();
        // Exercise the actual AddToFullPack gate with an existing precached model.
        // No entity is relinked or moved; temporary packet inputs are restored here.
        entvars_t savedBrush=*brush->pev, savedControl=*control->pev;
        brush->pev->model=control->pev->model=player->pev->model;
        brush->pev->modelindex=control->pev->modelindex=player->pev->modelindex;
        entity_state_t hiddenState={};
        int packed=AddToFullPack(&hiddenState,brush->entindex(),brush->edict(),player->edict(),0,0,nullptr);
        LadderCheck(packed && (hiddenState.effects&EF_NODRAW) && hiddenState.skin==CONTENTS_LADDER &&
            hiddenState.iuser1==1,"hidden_ladder_packets_preserve_prediction_and_nodraw");
        LadderCheck(!AddToFullPack(&hiddenState,control->entindex(),control->edict(),player->edict(),0,0,nullptr),
            "hidden_controller_not_sent_for_rendering");
        *brush->pev=savedBrush; *control->pev=savedControl;
        CVAR_SET_FLOAT("showtriggers",savedShowTriggers);
        LadderCheck(brush->pev->skin==CONTENTS_LADDER && brush->pev->iuser1==1,"brush_starts_disabled");
        static_cast<CCofLadderControl*>(control)->LadderTouch(player);
        LadderCheck(brush->pev->iuser1==0,"control_touch_enables_brush");
        // The moved control box no longer contains the player.
        UTIL_SetSize(control->pev,Vector(-1,-1,-1),Vector(1,1,1));
        UTIL_SetOrigin(control->pev,original+Vector(4096,4096,4096));
        static_cast<CCofLadderControl*>(control)->LadderThink();
        LadderCheck(brush->pev->iuser1==1,"empty_control_disables_brush");
        LadderKey(manager,"model","models/ladder_climb.mdl");
        LadderKey(manager,"animation1","climb_start_up");
        LadderKey(manager,"animation2","climb_loop_up");
        LadderKey(manager,"animation3","climb_end_up");
        LadderKey(manager,"customond","climb_start_down");
        LadderKey(manager,"customoffd","climb_end_down");
        LadderKey(manager,"descendoffset","96");
        LadderKey(manager,"topent","cof_test_ladder_top");
        LadderKey(manager,"bottoment","cof_test_ladder_bottom");
        manager->Spawn(); player->pev->flags|=FL_NOTARGET;
        manager->Use(player,player,USE_TOGGLE,0);
        LadderCheck(CofLadderActive(player)&&manager->Camera()&&(player->pev->flags&FL_FROZEN),"mount_creates_camera_and_freezes");
        LadderCheck(manager->Camera()&&manager->Camera()->pev->sequence==manager->Camera()->LookupSequence("climb_start_up"),"authored_mount_sequence");
        mounted=gpGlobals->time; deadline=gpGlobals->time+45;
        CofLadderCommand(player,"forwardpressed"); phase=1;
    } else if (phase==1) {
        if (gpGlobals->time<mounted+.1f) LadderCheck(CofLadderActive(player),"not_detached_before_animation");
        if (!CofLadderActive(player)) {
            LadderCheck(!(player->pev->flags&FL_FROZEN)&&(player->pev->flags&FL_NOTARGET),"detach_preserves_existing_flags");
            LadderCheck((player->pev->origin-(top->pev->origin+Vector(0,0,37))).Length()<4,"up_places_player_at_top");
            LadderCheck(std::fabs(player->pev->v_angle.y-123)<1,"top_view_yaw");
            manager->Use(player,player,USE_TOGGLE,1);
            LadderCheck(CofLadderActive(player)&&manager->Camera()&&manager->Camera()->pev->sequence==manager->Camera()->LookupSequence("climb_start_down"),"descending_mount_sequence");
            CofLadderCommand(player,"backpressed"); phase=2;
        }
    } else if (phase==2 && !CofLadderActive(player)) {
        LadderCheck((player->pev->origin-(bottom->pev->origin+Vector(0,0,37))).Length()<4,"down_places_player_at_bottom");
        manager->Use(player,player,USE_TOGGLE,0); CofLadderCommand(player,"laddercancel");
        LadderCheck(!CofLadderActive(player)&&!CofLadderViewEntity(player)&&!(player->pev->flags&FL_FROZEN),"cancel_releases_camera_and_control");
        string_t previous=manager->m_animation[1]; manager->m_animation[1]=ALLOC_STRING("cof_nonexistent_sequence");
        manager->Use(player,player,USE_TOGGLE,0);
        LadderCheck(!CofLadderActive(player)&&!(player->pev->flags&FL_FROZEN),"missing_sequence_releases_player");
        manager->m_animation[1]=previous;
        manager->Use(player,player,USE_TOGGLE,0);
        manager->m_top=ALLOC_STRING("cof_nonexistent_endpoint"); manager->m_hTop=nullptr;
        manager->Finish(true);
        LadderCheck(!CofLadderActive(player)&&!(player->pev->flags&FL_FROZEN),"missing_endpoint_releases_player");
        phase=8;
    }
    if (phase==8) {
        CofLadderCancel(player); UTIL_SetOrigin(player->pev,original);
        player->pev->flags=(player->pev->flags&~ladderFlags)|(originalFlags&ladderFlags);
        player->pev->velocity=g_vecZero;
        if(manager)UTIL_Remove(manager); if(top)UTIL_Remove(top); if(bottom)UTIL_Remove(bottom);
        if(control)UTIL_Remove(control); if(brush)UTIL_Remove(brush);
        ALERT(at_console,"COF_LADDER_TEST_COMPLETE failures=%d\n",ladderTestFailures); phase=9;
    }
}
