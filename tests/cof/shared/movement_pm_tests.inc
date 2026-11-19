/* Exercises the actual shared PM functions in the loaded DLL; no OS input.
 * Only called by COF_MOVEMENTTEST. Synthetic fixtures never touch engine state.
 */
static int cof_pm_test_low;
static const char *CofPMTestInfo(const char *s, const char *key)
{
    if (!strcmp(key, "jh")) return "100";
    if (!strcmp(key, "low")) return cof_pm_test_low ? "1" : "0";
    return "0";
}
static pmtrace_t CofPMTestTrace(float *start, float *end, int flags, int ignore)
{
    pmtrace_t tr;
    memset(&tr, 0, sizeof(tr)); tr.fraction = 1; tr.ent = -1;
    VectorCopy(end, tr.endpos); return tr;
}
static int CofPMTestContents(float *p, int *contents) { return CONTENTS_EMPTY; }
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
    VectorClear(pmove->velocity); pmove->fuser3 = 1;
    PM_WalkMove(); PM_Jump();
    COF_PM_CHECK(Length(pmove->velocity) == 0 && pmove->onground == 0);
    pmove->fuser3 = 0; pmove->flags = FL_FROZEN;
    PM_Jump();
    COF_PM_CHECK(pmove->onground == -1 && fabs(pmove->velocity[2] - (sqrt(72000.0) - 40)) < .01);
    pmove->onground = 0; pmove->velocity[2] = 0; PM_Jump();
    COF_PM_CHECK(pmove->onground == 0 && pmove->velocity[2] == 0);
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
#undef COF_PM_CHECK
    pmove = saved; free(fixture);
    if (saved && saved->Con_Printf) saved->Con_Printf("COF_PM_TEST %s failures=%d side=%s\n", failures ? "FAIL" : "PASS", failures, saved->server ? "server" : "client");
    return failures;
}
