// Opt-in isolated smoke driver. Uses the real 16-byte RainData protocol;
// never edits the selected map or its weather entities.
#include <cstdlib>
static void CofLensServerTest(CBasePlayer* player) {
    if (!std::getenv("COF_RTX_LENSTEST") || !player || !player->IsAlive()) return;
    static float began=-1;
    static int last=-1;
    if(began<0) began=gpGlobals->time;
    float t=gpGlobals->time-began;
    int stage=t<5?0:t<13?1:t<23?2:t<27?3:4;
    if(stage==last) return;
    last=stage;
    MESSAGE_BEGIN(MSG_ONE,rainMessage,nullptr,player->edict());
    WRITE_SHORT(stage==1||stage>=3?1000:0);
    WRITE_COORD(512); WRITE_COORD(0); WRITE_COORD(0);
    WRITE_COORD(10); WRITE_COORD(10); WRITE_SHORT(stage==3?1:0);
    WRITE_COORD(1500); MESSAGE_END();
    if(stage==4) CLIENT_COMMAND(player->edict(),"rt_rain_lens 0\n");
    ALERT(at_console,"COF_LENS_WEATHER stage=%d\n",stage);
}
