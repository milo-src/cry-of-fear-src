/* Exercises the actual shared PM functions in the loaded DLL; no OS input.
 * Only called by COF_MOVEMENTTEST. Synthetic fixtures never touch engine state.
 */
static int cof_pm_test_low;
static int cof_pm_test_jump_blocked;
static const char *CofPMTestInfo(const char *s, const char *key)
{
    if (!strcmp(key, "jh")) return "100";
    if (!strcmp(key, "low")) return cof_pm_test_low ? "1" : "0";
    if (!strcmp(key, "cof_jb")) return cof_pm_test_jump_blocked ? "1" : "0";
    if (!strcmp(key, "asd")) return "450";
    if (!strcmp(key, "bsd")) return "350";
    if (!strcmp(key, "csd")) return "250";
    return "0";
}
static pmtrace_t CofPMTestTrace(float *start, float *end, int flags, int ignore)
{
    pmtrace_t tr;
    memset(&tr, 0, sizeof(tr)); tr.fraction = 1; tr.ent = -1;
    VectorCopy(end, tr.endpos); return tr;
}
static int CofPMTestContents(float *p, int *contents) { return CONTENTS_EMPTY; }
static const char *CofPMTestTexture(int ground, float *start, float *end) { return NULL; }
static float CofPMTestRandom(float low, float high) { return (low + high) * .5f; }
static void CofPMTestSound(int channel, const char *sample, float volume, float attenuation, int flags, int pitch) {}
static void CofPMTestBounds(struct model_s *model, float *mins, float *maxs)
{ VectorClear(mins); VectorClear(maxs); maxs[2] = 128; }
static float CofPMTestModelTrace(physent_t *ent, float *start, float *end, trace_t *tr)
{ tr->fraction = 0.5f; tr->plane.normal[0] = -1; tr->plane.normal[1] = tr->plane.normal[2] = 0; return 0.5f; }

int CofPMRunTests(void)
{
    playermove_t *saved = pmove;
    playermove_t *fixture = (playermove_t *)calloc(1, sizeof(playermove_t));
    movevars_t vars;
    physent_t ladder;
    int failures = 0;
    if (!fixture) return 1;
    memset(&vars, 0, sizeof(vars)); memset(&ladder, 0, sizeof(ladder));
    pmove = fixture;
    vars.gravity = 800; vars.accelerate = 10; vars.airaccelerate = 10;
    vars.maxvelocity = 2000; vars.rollspeed = 200;
    pmove->movevars = &vars; pmove->maxspeed = 320; pmove->clientmaxspeed = 75;
    pmove->friction = 1; pmove->frametime = .1f;
    pmove->PM_Info_ValueForKey = CofPMTestInfo;
    pmove->PM_PlayerTrace = CofPMTestTrace;
    pmove->PM_PointContents = CofPMTestContents;
    pmove->PM_TraceTexture = CofPMTestTexture;
    pmove->RandomFloat = CofPMTestRandom;
    pmove->PM_PlaySound = CofPMTestSound;
    pmove->PM_GetModelBounds = CofPMTestBounds;
    pmove->PM_TraceModel = CofPMTestModelTrace;
#define COF_PM_CHECK(expr) do { if (!(expr)) { failures++; if (saved && saved->Con_Printf) saved->Con_Printf("COF_PM_FAIL line=%d %s\n", __LINE__, #expr); } } while (0)
    pmove->cmd.forwardmove = 100; pmove->cmd.sidemove = 100;
    PM_CheckParamters();
    COF_PM_CHECK(pmove->cmd.forwardmove == 50 && pmove->cmd.sidemove == 100 && pmove->maxspeed == 320);
    pmove->cmd.forwardmove = 400; pmove->cmd.sidemove = 400;
    pmove->cmd.buttons = 0x1000; pmove->flags = 0x40000;
    PM_CheckParamters();
    COF_PM_CHECK(pmove->cmd.forwardmove == 320 && pmove->cmd.sidemove == 0);
    pmove->flags = FL_FROZEN; pmove->cmd.buttons = IN_JUMP;
    PM_CheckParamters();
    COF_PM_CHECK(pmove->cmd.buttons == 0 && pmove->cmd.forwardmove == 0);
    pmove->flags = 0; pmove->cmd.forwardmove = 320; pmove->forward[0] = 1; pmove->right[1] = 1;
    PM_WalkMove();
    COF_PM_CHECK(fabs(pmove->velocity[0] - 240) < .01f);
    VectorClear(pmove->velocity); pmove->clientmaxspeed = 125;
    PM_WalkMove();
    COF_PM_CHECK(fabs(pmove->velocity[0] - 320) < .01f);
    VectorClear(pmove->velocity); pmove->clientmaxspeed = 75; cof_pm_test_low = 1;
    PM_WalkMove();
    COF_PM_CHECK(fabs(pmove->velocity[0] - 180) < .01f);
    VectorClear(pmove->velocity); pmove->iStepLeft = 1;
    PM_WalkMove();
    COF_PM_CHECK(fabs(pmove->velocity[0] - 135) < .01f);
    cof_pm_test_low = 0; pmove->iStepLeft = 0;
    // 1000a630: 300 command * 75% player speed * 80% water drag.
    VectorClear(pmove->velocity); pmove->cmd.forwardmove = 300;
    pmove->cmd.buttons = 0; pmove->flags = 0; pmove->watertype = CONTENTS_WATER;
    PM_WaterMove();
    COF_PM_CHECK(fabs(pmove->velocity[0] - 180) < .01f);
    VectorClear(pmove->velocity); pmove->cmd.buttons = 0x1000; pmove->flags = 0x40000;
    PM_WaterMove();
    COF_PM_CHECK(fabs(pmove->velocity[0] - 225) < .01f);
    VectorClear(pmove->velocity); pmove->cmd.forwardmove = 0; pmove->cmd.buttons = 0; pmove->flags = 0;
    pmove->watertype = -17; PM_WaterMove();
    COF_PM_CHECK(Length(pmove->velocity) == 0);
    pmove->waterlevel = 2; pmove->watertype = -19;
    COF_PM_CHECK(!PM_InWater());
    pmove->watertype = CONTENTS_WATER;
    COF_PM_CHECK(PM_InWater());
    pmove->waterlevel = 0; pmove->cmd.forwardmove = 320;
    VectorClear(pmove->velocity); pmove->velocity[0] = 225; pmove->movetype = MOVETYPE_WALK;
    pmove->flTimeStepSound = 0; PM_UpdateStepSound();
    COF_PM_CHECK(pmove->flTimeStepSound == 350);
    pmove->cmd.buttons = 0x1000; pmove->flags = 0x40000;
    pmove->flTimeStepSound = 0; PM_UpdateStepSound();
    COF_PM_CHECK(pmove->flTimeStepSound == 250);
    cof_pm_test_low = 1; pmove->iStepLeft = 1;
    pmove->flTimeStepSound = 0; PM_UpdateStepSound();
    COF_PM_CHECK(pmove->flTimeStepSound == 312);
    pmove->flags |= 0x80000; pmove->flTimeStepSound = 0; PM_UpdateStepSound();
    COF_PM_CHECK(pmove->flTimeStepSound == 450);
    pmove->flags = 0; pmove->cmd.buttons = 0; cof_pm_test_low = 0; pmove->iStepLeft = 0;
    VectorClear(pmove->velocity); pmove->fuser3 = 1;
    PM_WalkMove(); PM_Jump();
    COF_PM_CHECK(Length(pmove->velocity) == 0 && pmove->onground == 0);
    pmove->fuser3 = 0; pmove->flags = FL_FROZEN;
    cof_pm_test_jump_blocked = 1; pmove->oldbuttons = 0;
    PM_Jump();
    COF_PM_CHECK(pmove->onground == 0 && pmove->velocity[2] == 0 && (pmove->oldbuttons & IN_JUMP));
    cof_pm_test_jump_blocked = 0; PM_Jump();
    COF_PM_CHECK(pmove->onground == 0 && pmove->velocity[2] == 0); // no free jump on recovery while held
    pmove->oldbuttons &= ~IN_JUMP;
    PM_Jump();
    COF_PM_CHECK(pmove->onground == -1 && fabs(pmove->velocity[2] - (sqrt(72000.0) - 40)) < .01);
    pmove->onground = 0; pmove->velocity[2] = 0; PM_Jump();
    COF_PM_CHECK(pmove->onground == 0 && pmove->velocity[2] == 0);
    cof_pm_test_jump_blocked = 1; pmove->waterlevel = 2; pmove->watertype = CONTENTS_WATER;
    pmove->flSwimTime = 1; PM_Jump(); // positive timer avoids sound/RNG in this fixture
    COF_PM_CHECK(pmove->onground == -1 && pmove->velocity[2] == 100);
    cof_pm_test_jump_blocked = 0; pmove->waterlevel = 0; pmove->onground = 0;
    pmove->flags = 0; pmove->oldbuttons = IN_DUCK; pmove->cmd.buttons = IN_DUCK;
    pmove->bInDuck = true; pmove->flDuckTime = 500;
    PM_Duck();
    COF_PM_CHECK(!(pmove->flags & FL_DUCKING) && pmove->bInDuck);
    pmove->nummoveent = 1; pmove->moveents[0].iuser1 = 1;
    pmove->moveents[0].model = (struct model_s *)1;
    pmove->moveents[0].skin = CONTENTS_LADDER;
    COF_PM_CHECK(PM_Ladder() == NULL);
    pmove->flags = FL_DUCKING; pmove->maxspeed = 45; pmove->cmd.buttons = IN_FORWARD;
    pmove->movetype = MOVETYPE_WALK; VectorClear(pmove->angles);
    PM_LadderMove(&ladder);
    COF_PM_CHECK(pmove->movetype == MOVETYPE_FLY && fabs(pmove->velocity[2] - 90) < .01);
    pmove->cmd.buttons = IN_JUMP; PM_LadderMove(&ladder);
    COF_PM_CHECK(pmove->movetype == MOVETYPE_WALK && fabs(pmove->velocity[0] + 270) < .01);
    // Independent numeric example of 10005260, dt10ms / input velocity120.
    VectorClear(pmove->punchangle); VectorClear(pmove->vuser3);
    pmove->vuser3[0] = 120; pmove->frametime = .01f;
    PM_DropPunchAngle(pmove->punchangle);
    COF_PM_CHECK(fabs(pmove->punchangle[0] - 1.2f) < .001f && fabs(pmove->vuser3[0] - 108.42f) < .001f);
    VectorClear(pmove->punchangle); VectorClear(pmove->vuser3);
    VectorClear(pmove->velocity); pmove->onground = 0; pmove->flFallVelocity = 800;
    pmove->waterlevel = 0; pmove->flags = 0;
    PM_CheckFalling();
    COF_PM_CHECK(fabs(pmove->vuser3[0] - 294) < .001f && Length(pmove->punchangle) == 0 && pmove->flFallVelocity == 0);
    VectorClear(pmove->vuser3); pmove->flFallVelocity = 349; PM_CheckFalling();
    COF_PM_CHECK(Length(pmove->vuser3) == 0 && pmove->flFallVelocity == 0);
    pmove->dead = 1; pmove->frametime = .01f;
    PM_DropPunchAngle(pmove->punchangle);
    COF_PM_CHECK(fabs(pmove->punchangle[2] - 6.7f) < .001f);
#undef COF_PM_CHECK
    pmove = saved; free(fixture);
    if (saved && saved->Con_Printf) saved->Con_Printf("COF_PM_TEST %s failures=%d side=%s\n", failures ? "FAIL" : "PASS", failures, saved->server ? "server" : "client");
    return failures;
}
