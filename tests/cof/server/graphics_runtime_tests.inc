// Test-only fixture driver. Include after recovered_graphics.cpp classes.
#include <cstdlib>
#include <cmath>
static int graphicsTestFailures;
static void RTMotionTestFrame(CBasePlayer* player) {
    if (!player || !player->IsAlive()) return;
    static float began = -1;
    static int capture = -1;
    if (began < 0) began = gpGlobals->time;
    const float elapsed = gpGlobals->time - began;
    // Identical short walk above the water, then hold still to expose trails.
    const float offset = elapsed < 3 ? 0 : elapsed < 6 ? (elapsed-3)*40 : 120;
    player->pev->movetype = MOVETYPE_NONE;
    player->pev->flags |= FL_NOTARGET;
    player->pev->effects &= ~EF_DIMLIGHT;
    const float y = 100-offset;
    // The user's staircase in c_apartment3: BSP hull supplies step heights.
    TraceResult floor;
    UTIL_TraceHull(Vector(440,y,90),Vector(440,y,-30),ignore_monsters,human_hull,player->edict(),&floor);
    UTIL_SetOrigin(player->pev, floor.vecEndPos + Vector(0,0,1));
    player->pev->v_angle = player->pev->angles = Vector(11, 345, 0);
    player->pev->fixangle = 1;
    const int sample = int(elapsed*2);
    if (sample >= 4 && sample != capture) {
        capture = sample;
        ALERT(at_console, "COF_RTX_MOTION_CAPTURE %d xyz=%.2f %.2f %.2f\n",sample,player->pev->origin.x,player->pev->origin.y,player->pev->origin.z);
    }
    if (elapsed > 9) {
        ALERT(at_console, "COF_RTX_MOTION_COMPLETE\n");
        CLIENT_COMMAND(player->edict(), "quit\n");
    }
}
static void GraphicsCheck(bool pass, const char* name) {
    ALERT(at_console, "COF_GRAPHICS_SERVER %s %s\n", pass ? "PASS" : "FAIL", name);
    if (!pass) ++graphicsTestFailures;
}
void CofGraphicsServerTestFrame(CBasePlayer* player) {
    if (std::getenv("COF_RTX_MOTIONTEST")) { RTMotionTestFrame(player); return; }
    if (!std::getenv("COF_GRAPHICSTEST") || !player || !player->IsAlive()) return;
    static int phase;
    static float began;
    static CBaseEntity *fog, *bw, *light;
    if (!phase) {
        began = gpGlobals->time;
        GraphicsCheck(FStrEq(STRING(gpGlobals->mapname), "cof_graphics_test"), "isolated_map");
        fog = UTIL_FindEntityByTargetname(nullptr, "cof_graphics_fog");
        bw = UTIL_FindEntityByTargetname(nullptr, "cof_graphics_bw");
        light = UTIL_FindEntityByTargetname(nullptr, "cof_graphics_light");
        CBaseEntity* water = UTIL_FindEntityByTargetname(nullptr, "cof_graphics_water_153");
        GraphicsCheck(fog && bw && light && water, "fixture_entities");
        if (!fog || !bw || !light || !water) { phase = 99; return; }
        GraphicsCheck(water->pev->skin == -3 && water->pev->modelindex > 0 &&
            water->pev->maxs.x - water->pev->mins.x > 300, "water_brush_network_state");
        GraphicsCheck(light->pev->renderfx == 71 && std::fabs(light->pev->renderamt - 48) < .01f &&
            (light->pev->effects & EF_NODRAW), "dynlight_spawn_contract");
        player->pev->movetype = MOVETYPE_NONE;
        player->pev->flags |= FL_NOTARGET;
        UTIL_SetOrigin(player->pev, Vector(565, 210, 50));
        player->pev->v_angle = player->pev->angles = Vector(55, 90, 0);
        player->pev->fixangle = 1;
        phase = 1;
    }
    const float elapsed = gpGlobals->time - began;
    if (phase == 1 && elapsed > 2) {
        CLIENT_COMMAND(player->edict(), "cof_graphics_stage 0\n"); phase = 2;
    } else if (phase == 2 && elapsed > 4) {
        fog->Use(player, player, USE_ON, 0);
        GraphicsCheck((fog->pev->spawnflags & 1) != 0, "fog_use_on");
        CLIENT_COMMAND(player->edict(), "cof_graphics_stage 1\n"); phase = 3;
    } else if (phase == 3 && elapsed > 8) {
        fog->Use(player, player, USE_OFF, 0);
        bw->Use(player, player, USE_OFF, 0);
        GraphicsCheck(!(fog->pev->spawnflags & 1), "fog_use_off");
        GraphicsCheck(player->m_cofBlackAndWhite == 190, "blackwhite_ignores_use_type");
        CLIENT_COMMAND(player->edict(), "cof_graphics_stage 2\n"); phase = 4;
    } else if (phase == 4 && elapsed > 12) {
        bw->pev->iuser1 = 0; bw->Use(player, player, USE_ON, 0);
        light->Use(player, player, USE_ON, 0);
        GraphicsCheck(player->m_cofBlackAndWhite == 0, "blackwhite_reset");
        GraphicsCheck(!(light->pev->effects & EF_NODRAW), "dynlight_use_on");
        CLIENT_COMMAND(player->edict(), "cof_graphics_stage 3\n"); phase = 5;
    } else if (phase == 5 && elapsed > 16) {
        light->Use(player, player, USE_OFF, 0);
        GraphicsCheck((light->pev->effects & EF_NODRAW) != 0, "dynlight_use_off");
        ALERT(at_console, "COF_GRAPHICS_SERVER_COMPLETE failures=%d\n", graphicsTestFailures);
        CLIENT_COMMAND(player->edict(), "cof_graphics_stage 4\n"); phase = 6;
    }
}
