// Recovered input/message semantics: analysis/movement/client.md.
// Native SDK adaptation: no original 0x38 usercmd or hard-coded object offsets.
#include "hud.h"
#include "cl_util.h"
#include "cl_entity.h"
#include "usercmd.h"
#include "const.h"
#include "ref_params.h"
#include "parsemsg.h"
#include "movement.h"
#include "studio_event.h"
#include "studio.h"
#include "r_studioint.h"
extern "C" {
#include "kbutton.h"
}
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <cstring>
#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif
#ifdef fabs
#undef fabs
#endif

extern void KeyDown(kbutton_t*);
extern void KeyUp(kbutton_t*);
extern kbutton_t in_forward, in_back, in_moveleft, in_moveright, in_jump, in_duck;
extern bool CofInventoryVisible();
extern bool CofGameMenuVisible();
extern bool CofGameMenuWorld();
extern void CofStatusHudReset();
extern int CofStatusHudProtocolTest();
extern "C" int CofPMRunTests(void);
extern "C" void HUD_StudioEvent(const mstudioevent_s*, const cl_entity_s*);
extern engine_studio_api_t IEngineStudio;

namespace {
constexpr unsigned SprintBit = 0x1000, DodgeBit = 0x80;
kbutton_t sprintKey = {}, dodgeKey = {};
cvar_t* noDoubleTap;
cvar_t* defaultZoomSpeed;
float directionDeadline[4] = {};
int fallOver, getupRequired, getupTaps, cameraEntity, ladderState, holdBreath;
float ladderVector[3] = {}, damageUntil;
float zoomRate, zoomFov = -1, zoomTime = -1, completedZoomFov;
bool clientTestsComplete;
bool cameraViewLogged;
bool cameraNetworkEyeLogged;
bool ladderInputBlocked;
bool dodgeGrounded;
int cameraAttachCount;
int fovUpdateCount;
int ladderSoundEntity, ladderSoundSerial, ladderSoundSequence, ladderSoundEmittingSequence;
float ladderSoundFrame = -1;
bool ladderSoundDispatch;
const char* dodgeCommands[] = {"dodgeforward", "dodgebackward", "dodgeleft", "dodgeright"};

bool OverlayOpen() { return CofInventoryVisible() || CofGameMenuVisible() || CofGameMenuWorld(); }
void LadderInputTransition(bool blocked) {
    if (!cameraEntity) { ladderInputBlocked = false; return; }
    if (blocked == ladderInputBlocked) return;
    ladderInputBlocked = blocked;
    if (blocked) {
        gEngfuncs.pfnServerCmd("forwardreleased");
        gEngfuncs.pfnServerCmd("backreleased");
    } else {
        if (in_forward.state & 1) gEngfuncs.pfnServerCmd("forwardpressed");
        if (in_back.state & 1) gEngfuncs.pfnServerCmd("backpressed");
    }
}
bool Nightmare() {
    const char* map = gEngfuncs.pfnGetLevelName();
    return map && !std::strcmp(map, "maps/c_nightmare.bsp");
}
bool CanDodge() {
    // 100af790 sets 10559515 from ref_params.onground and IsNoClipping().
    // Xash exposes ref_params.onground as a boolean (unlike pmove's entity index).
    return dodgeGrounded && !gEngfuncs.IsNoClipping() && !fallOver && !cameraEntity &&
        !OverlayOpen() && gHUD.m_Health.m_iHealth > 0;
}
void SendDodge(int direction) {
    if (direction >= 0 && direction < 4 && CanDodge())
        gEngfuncs.pfnServerCmd(dodgeCommands[direction]);
}
void SprintDown() {
    if (!Nightmare() && !fallOver && !cameraEntity && !OverlayOpen()) KeyDown(&sprintKey);
}
void SprintUp() { KeyUp(&sprintKey); }
// Holding dodge in the air still latches the key; only sending a dodge is gated.
void DodgeDown() { if (!fallOver && !cameraEntity && !OverlayOpen()) KeyDown(&dodgeKey); }
void DodgeUp() { KeyUp(&dodgeKey); }

void ClearActionKeys() {
    sprintKey = {}; dodgeKey = {};
    in_jump = {}; in_duck = {};
}
void FinishLadder() {
    ladderSoundEntity = 0; ladderSoundFrame = -1;
    cameraEntity = ladderState = 0;
    cameraViewLogged = false;
    cameraNetworkEyeLogged = false;
    ladderInputBlocked = false;
    ClearActionKeys();
    std::fill(directionDeadline, directionDeadline + 4, 0.0f);
}
int AttachCameraMessage(const char*, int size, void* data) {
    if (size != 3 || !data) return 0;
    BEGIN_READ(data, size);
    const int entity = READ_SHORT(), enabled = READ_BYTE();
    if (enabled && (entity <= 0 || entity >= 4096)) return 0;
    if (!enabled || entity != cameraEntity) { ladderSoundEntity = 0; ladderSoundFrame = -1; }
    cameraEntity = enabled ? entity : 0;
    cameraViewLogged = false;
    cameraNetworkEyeLogged = false;
    ladderInputBlocked = false;
    if (enabled) ++cameraAttachCount;
    ClearActionKeys();
    if (std::getenv("COF_MOVEMENTTEST") || std::getenv("COF_LADDERTEST"))
        gEngfuncs.Con_Printf("COF_MOVEMENT_ATTACH entity=%d enabled=%d\n", cameraEntity, !!enabled);
    return 1;
}
int LadderMessage(const char*, int size, void* data) {
    if (size != 7 || !data) return 0;
    BEGIN_READ(data, size);
    ladderState = READ_BYTE();
    for (int i = 0; i < 3; ++i) ladderVector[i] = READ_COORD();
    return 1;
}
int FallOverMessage(const char*, int size, void* data) {
    // A recovered server path sends just state; the client capture reads 2 bytes.
    // Accept both explicit variants without reading beyond the packet.
    if ((size != 1 && size != 2) || !data) return 0;
    BEGIN_READ(data, size);
    fallOver = READ_BYTE();
    getupRequired = size == 2 ? READ_BYTE() : 0;
    getupTaps = 0;
    if (fallOver) ClearActionKeys();
    return 1;
}
int HoldBreathMessage(const char*, int size, void* data) {
    if (size != 1 || !data) return 0;
    holdBreath = *static_cast<unsigned char*>(data) != 0;
    return 1;
}
int CameraZoomMessage(const char*, int size, void* data) {
    if (size != 4 || !data) return 0;
    BEGIN_READ(data, size);
    // 100393d0 stores a persistent rate. 10073610 consumes it when the separately
    // transported target changes; receiving this before SetFOV must not cancel it.
    const float rate = READ_COORD();
    READ_BYTE(); READ_BYTE();
    zoomRate = std::max(0.0f, std::min(1000.0f, rate));
    return 1;
}
}

bool CofMovementStudioEvent(const mstudioevent_s* event, const cl_entity_s* entity) {
    if (!event || !entity) return false;
    const bool soundEvent = event->event == 5090 || event->event == 5093 || event->event == 5094;
    // Our local animated camera is serviced independently of model culling.
    // Suppress the renderer's second delivery of the same authored events.
    if (soundEvent && !ladderSoundDispatch && entity->curstate.iuser4 == 0x434f46 &&
        (entity->index == cameraEntity || entity->index == ladderSoundEntity)) return true;
    // Native HUD_StudioEvent 1004c6c0. These are authored client events in
    // ladder_climb.mdl, not a movement timer or server-side animation events.
    const char* sample = nullptr;
    float volume = 1;
    bool positional = true;
    switch (event->event) {
    case 5090: {
        static const char* sounds[] = {"common/bodydrop1.wav", "common/bodydrop2.wav",
                                     "common/bodydrop3.wav", "common/bodydrop4.wav"};
        sample = sounds[gEngfuncs.pfnRandomLong(0, 3)];
        break;
    }
    case 5093:
        sample = "player/get_up.wav"; volume = 0.5f;
        break;
    case 5094:
        sample = gEngfuncs.pfnRandomLong(0, 1) ? "player/ladder_2.wav" : "player/ladder_1.wav";
        positional = false;
        break;
    default:
        // 5095 exists in the model but is outside the original sound switch.
        return false;
    }
    const float* origin = entity->curstate.iuser4 == 0x434f46 ? entity->curstate.vuser1 : entity->attachment[0];
    if (positional) gEngfuncs.pfnPlaySoundByNameAtLocation(sample, volume, origin);
    else gEngfuncs.pfnPlaySoundByName(sample, volume);
    if (std::getenv("COF_LADDERTEST") && entity->curstate.iuser4 == 0x434f46)
        gEngfuncs.Con_Printf("COF_LADDER_AUDIO event=%d sequence=%d frame=%d entity=%d sample=%s\n",
            event->event, ladderSoundDispatch ? ladderSoundEmittingSequence : entity->curstate.sequence,
            event->frame, entity->index, sample);
    return true;
}

static void LadderSoundEvents(const cl_entity_t* camera, const studiohdr_t* hdr, float frame) {
    const int sequence = camera->curstate.sequence;
    if (!hdr || sequence < 0 || sequence >= hdr->numseq) return;
    const auto* sequences = reinterpret_cast<const mstudioseqdesc_t*>(reinterpret_cast<const byte*>(hdr) + hdr->seqindex);
    const auto emit = [&](int seq, float start, float end) {
        const auto& desc = sequences[seq];
        const auto* events = reinterpret_cast<const mstudioevent_t*>(reinterpret_cast<const byte*>(hdr) + desc.eventindex);
        ladderSoundDispatch = true;
        ladderSoundEmittingSequence = seq;
        for (int i = 0; i < desc.numevents; ++i)
            if (events[i].frame > start && events[i].frame <= end) CofMovementStudioEvent(&events[i], camera);
        ladderSoundDispatch = false;
    };
    if (camera->index != ladderSoundEntity || camera->curstate.iuser1 != ladderSoundSerial || sequence != ladderSoundSequence) {
        // A new serial on the same manager camera means the preceding authored
        // step completed. Catch its tail even if snapshots crossed the boundary.
        if (camera->index == ladderSoundEntity && ladderSoundSequence >= 0 && ladderSoundSequence < hdr->numseq)
            emit(ladderSoundSequence, ladderSoundFrame, float(sequences[ladderSoundSequence].numframes - 1));
        ladderSoundEntity = camera->index; ladderSoundSerial = camera->curstate.iuser1;
        ladderSoundSequence = sequence; ladderSoundFrame = -1;
    }
    frame = std::max(0.0f, std::min(frame, float(sequences[sequence].numframes - 1)));
    emit(sequence, ladderSoundFrame, frame);
    ladderSoundFrame = std::max(ladderSoundFrame, frame);
}

bool CofMovementCameraActive() { return cameraEntity != 0; }
bool CofMovementDirectionDown(int direction) {
    if (direction < 0 || direction >= 4 || OverlayOpen() || fallOver) return false;
    if (cameraEntity) {
        if (direction < 2)
            gEngfuncs.pfnServerCmd(direction == 0 ? "forwardpressed" : "backpressed");
        return direction < 2;
    }
    const float now = gEngfuncs.GetClientTime();
    if ((noDoubleTap && noDoubleTap->value == 0 && now < directionDeadline[direction]) ||
        (dodgeKey.state & 3)) SendDodge(direction);
    directionDeadline[direction] = now + 0.18f;
    return true;
}
void CofMovementDirectionUp(int direction) {
    if (cameraEntity && direction < 2 && direction >= 0)
        gEngfuncs.pfnServerCmd(direction == 0 ? "forwardreleased" : "backreleased");
}
bool CofMovementJumpDown() {
    if (OverlayOpen() || cameraEntity) return false;
    if (fallOver) {
        if (++getupTaps >= getupRequired) gEngfuncs.pfnServerCmd("tapgetup");
        return false;
    }
    return true;
}
bool CofMovementDuckDown() { return !OverlayOpen() && !cameraEntity && !fallOver; }

void CofMovementCreateMove(usercmd_s* cmd, int active) {
    if (!cmd) return;
    LadderInputTransition(!active || OverlayOpen());
    cmd->buttons &= ~(SprintBit | DodgeBit);
    if (!active || OverlayOpen()) { sprintKey.state &= ~2; dodgeKey.state &= ~2; return; }
    if (fallOver || cameraEntity) {
        cmd->forwardmove = cmd->sidemove = cmd->upmove = 0;
        cmd->buttons &= ~(IN_JUMP | IN_DUCK | IN_ATTACK | IN_ATTACK2 | SprintBit | DodgeBit);
        return;
    }
    if (!Nightmare() && (sprintKey.state & 3)) cmd->buttons |= SprintBit;
    if (dodgeKey.state & 3) cmd->buttons |= DodgeBit;
    if (dodgeKey.state & 3) {
        if (in_forward.state & 1) SendDodge(0);
        else if (in_back.state & 1) SendDodge(1);
        else if (in_moveright.state & 1) SendDodge(3);
        else if (in_moveleft.state & 1) SendDodge(2);
    }
    sprintKey.state &= ~2;
    // Clear the pressed impulse to avoid a sticky dodge after a quick tap.
    // Deliberate SDK-port fix: the original button-list omitted this clear.
    dodgeKey.state &= ~2;
}

void CofMovementDamageFlash(int enabled) {
    if (enabled) damageUntil = gEngfuncs.GetClientTime() + 0.15f;
}

void CofMovementView(ref_params_s* view) {
    dodgeGrounded = view && view->onground != 0;
    if (!view || view->intermission || view->spectator || CofGameMenuWorld()) return;
    if (cameraEntity) {
        cl_entity_t* camera = gEngfuncs.GetEntityByIndex(cameraEntity);
        if (camera && camera->model) {
            const bool networkEye = camera->curstate.iuser4 == 0x434f46;
            if (networkEye && IEngineStudio.Mod_Extradata) {
                const auto* hdr = static_cast<const studiohdr_t*>(IEngineStudio.Mod_Extradata(camera->model));
                if (hdr && camera->curstate.sequence >= 0 && camera->curstate.sequence < hdr->numseq) {
                    const auto* seq = reinterpret_cast<const mstudioseqdesc_t*>(reinterpret_cast<const byte*>(hdr) + hdr->seqindex) + camera->curstate.sequence;
                    const float frame = camera->curstate.frame * (seq->numframes - 1) / 256.0f +
                        std::max(0.0f, view->time - camera->curstate.animtime) * camera->curstate.framerate * seq->fps;
                    LadderSoundEvents(camera, hdr, frame);
                }
            }
            bool attachmentValid = false;
            for (int i = 0; i < 3; ++i)
                attachmentValid = attachmentValid || std::fabs(camera->attachment[0][i]) > 0.001f;
            for (int i = 0; i < 3; ++i) {
                view->vieworg[i] = networkEye ? camera->curstate.vuser1[i] :
                    attachmentValid ? camera->attachment[0][i] : camera->origin[i];
                view->viewangles[i] = networkEye ? camera->curstate.vuser2[i] : camera->angles[i];
            }
            gEngfuncs.pfnAngleVectors(view->viewangles, view->forward, view->right, view->up);
            if ((!cameraViewLogged || (networkEye && !cameraNetworkEyeLogged)) &&
                (std::getenv("COF_MOVEMENTTEST") || std::getenv("COF_LADDERTEST"))) {
                cameraViewLogged = true;
                cameraNetworkEyeLogged = networkEye;
                gEngfuncs.Con_Printf("COF_MOVEMENT_CAMERA_APPLIED entity=%d network_eye=%d pos=%.3f,%.3f,%.3f\n",
                    cameraEntity, networkEye ? 1 : 0, view->vieworg[0], view->vieworg[1], view->vieworg[2]);
            }
            cl_entity_t* weapon = gEngfuncs.GetViewModel();
            if (weapon) weapon->model = nullptr; // SDK rebuilds viewmodel next frame.
        }
    }
}

float CofMovementFov(float target, float time) {
    ++fovUpdateCount;
    // Original 10078070 outputs a FLOAT in client_data_t. Xash computes the
    // actual projection/widescreen FOV afterward; ref_params.fov_x/y do not
    // override its ordinary view. Keep HUD's integer target separate.
    target = std::max(10.0f, std::min(150.0f, target > 0 ? target : 90.0f));
    if (zoomFov < 0 || zoomTime < 0 || time < zoomTime) {
        zoomFov = completedZoomFov = target;
        zoomTime = time;
        return zoomFov;
    }
    const float elapsed = time - zoomTime;
    zoomTime = time;
    const float rate = zoomRate != 0 ? zoomRate : defaultZoomSpeed ? defaultZoomSpeed->value : 100.0f;
    const float distance = target - zoomFov;
    float scale = std::max(30.0f, std::fabs(distance)) / 30.0f;
    if (target == 30 || completedZoomFov == 30) scale *= 2;
    const float step = std::max(0.0f, rate * elapsed * scale);
    if (rate == 666 || std::fabs(distance) <= step) {
        zoomFov = completedZoomFov = target;
    } else zoomFov += distance < 0 ? -step : step;
    return zoomFov;
}

void CofMovementReset() {
    ladderSoundEntity = ladderSoundSerial = 0; ladderSoundSequence = -1;
    ladderSoundFrame = -1; ladderSoundDispatch = false;
    ClearActionKeys();
    fallOver = getupRequired = getupTaps = cameraEntity = ladderState = holdBreath = 0;
    cameraViewLogged = false;
    cameraNetworkEyeLogged = false;
    std::fill(directionDeadline, directionDeadline + 4, 0.0f);
    std::fill(ladderVector, ladderVector + 3, 0.0f);
    zoomFov = zoomTime = -1; damageUntil = zoomRate = completedZoomFov = 0;
    ladderInputBlocked = false;
    dodgeGrounded = false;
    CofStatusHudReset();
}
void CofMovementInit() {
    CofMovementReset();
    clientTestsComplete = false;
    cameraAttachCount = 0;
    fovUpdateCount = 0;
    noDoubleTap = gEngfuncs.pfnRegisterVariable("cl_nodoubletapdodge", "0", FCVAR_ARCHIVE);
    defaultZoomSpeed = gEngfuncs.pfnRegisterVariable("cl_zoomspeed", "100", 0);
    gEngfuncs.pfnAddCommand("+sprint", SprintDown);
    gEngfuncs.pfnAddCommand("-sprint", SprintUp);
    // Existing HL-style configs can keep their shift binding in the native port.
    gEngfuncs.pfnAddCommand("+speed", SprintDown);
    gEngfuncs.pfnAddCommand("-speed", SprintUp);
    gEngfuncs.pfnAddCommand("+dodge", DodgeDown);
    gEngfuncs.pfnAddCommand("-dodge", DodgeUp);
    gEngfuncs.pfnAddCommand("finishladder", FinishLadder);
    gEngfuncs.pfnHookUserMsg("AttachCam", AttachCameraMessage);
    gEngfuncs.pfnHookUserMsg("Ladder", LadderMessage);
    gEngfuncs.pfnHookUserMsg("FallOver", FallOverMessage);
    gEngfuncs.pfnHookUserMsg("HoldBreath", HoldBreathMessage);
    gEngfuncs.pfnHookUserMsg("CameraZoom", CameraZoomMessage);
}

namespace {
int ladderCommandCount, ladderCommandMask;
int CaptureLadderCommand(const char* command) {
    ++ladderCommandCount;
    if (!std::strcmp(command, "forwardreleased")) ladderCommandMask |= 1;
    if (!std::strcmp(command, "backreleased")) ladderCommandMask |= 2;
    if (!std::strcmp(command, "forwardpressed")) ladderCommandMask |= 4;
    if (!std::strcmp(command, "backpressed")) ladderCommandMask |= 8;
    for (int i = 0; i < 4; ++i)
        if (!std::strcmp(command, dodgeCommands[i])) ladderCommandMask |= 16 << i;
    return 1;
}
int TestNoClipOff() { return 0; }
int soundCalls, soundRandom, soundRandomHigh, soundPositioned;
float soundVolume, soundOrigin[3];
const char* soundName;
int CaptureSoundRandom(int low, int high) { soundRandomHigh = high; return low + soundRandom; }
void CaptureSound(const char* name, float volume) {
    ++soundCalls; soundName = name; soundVolume = volume; soundPositioned = 0;
}
void CaptureSoundAt(const char* name, float volume, const float* origin) {
    CaptureSound(name, volume); soundPositioned = 1;
    std::copy(origin, origin + 3, soundOrigin);
}
}
void CofMovementTestFrame(float time) {
    if (!std::getenv("COF_MOVEMENTTEST") || clientTestsComplete || time < 0.5f ||
        OverlayOpen() || cameraEntity || !gEngfuncs.GetLocalPlayer()) return;
    clientTestsComplete = true;
    int failures = 0;
    const auto check = [&](bool ok, const char* name) {
        if (!ok) ++failures;
        gEngfuncs.Con_Printf("COF_MOVEMENT_CLIENT %s %s\n", ok ? "PASS" : "FAIL", name);
    };
    const kbutton_t oldSprint = sprintKey, oldDodge = dodgeKey;
    const kbutton_t oldJump = in_jump, oldDuck = in_duck;
    const kbutton_t oldForward = in_forward, oldBack = in_back;
    const kbutton_t oldLeft = in_moveleft, oldRight = in_moveright;
    const bool oldLadderBlocked = ladderInputBlocked;
    const bool oldDodgeGrounded = dodgeGrounded;
    const int oldFall = fallOver, oldRequired = getupRequired, oldTaps = getupTaps;
    const int oldCamera = cameraEntity, oldLadder = ladderState, oldAttachCount = cameraAttachCount;
    const int oldHealth = gHUD.m_Health.m_iHealth, oldFlags = gHUD.m_Health.m_iFlags;
    const float oldFade = gHUD.m_Health.m_fFade, oldDamage = damageUntil;
    const float oldZoomRate = zoomRate, oldZoomFov = zoomFov, oldZoomTime = zoomTime;
    const float oldCompletedZoomFov = completedZoomFov;
    const int oldFovUpdateCount = fovUpdateCount;
    float oldVector[3]; std::copy(ladderVector, ladderVector + 3, oldVector);
    fallOver = 0; gHUD.m_Health.m_iHealth = 100;
    in_forward = {}; in_back = {}; in_moveleft = {}; in_moveright = {};
    struct GuardedCommand { usercmd_t cmd; unsigned guard; } packet = {};
    packet.guard = 0x13572468u;
    sprintKey.state = 3; dodgeKey.state = 0;
    CofMovementCreateMove(&packet.cmd, 1);
    check((Nightmare() ? !(packet.cmd.buttons & SprintBit) : !!(packet.cmd.buttons & SprintBit)) &&
          packet.guard == 0x13572468u, "sprint_sdk_button_and_command_bounds");
    sprintKey.state = 4; packet.cmd.buttons = 0;
    CofMovementCreateMove(&packet.cmd, 1);
    check(!(packet.cmd.buttons & SprintBit), "sprint_release");
    // Simulate press+release in the same input frame: one impulse, no sticky bit.
    dodgeKey.state = 6; packet.cmd.buttons = 0;
    CofMovementCreateMove(&packet.cmd, 1);
    check((packet.cmd.buttons & DodgeBit) != 0, "dodge_short_tap_emitted");
    packet.cmd.buttons = 0; CofMovementCreateMove(&packet.cmd, 1);
    check(!(packet.cmd.buttons & DodgeBit), "dodge_short_tap_released");
    unsigned char fallen[] = {1, 4};
    check(FallOverMessage("FallOver", 2, fallen) && fallOver == 1 && getupRequired == 4 && getupTaps == 0,
          "fallover_two_byte_protocol");
    packet.cmd.forwardmove = 100; packet.cmd.buttons = IN_JUMP | IN_DUCK;
    CofMovementCreateMove(&packet.cmd, 1);
    check(packet.cmd.forwardmove == 0 && !(packet.cmd.buttons & (IN_JUMP | IN_DUCK)), "fallover_blocks_locomotion");
    check(!FallOverMessage("FallOver", 3, fallen) && fallOver == 1, "fallover_bad_length_rejected");
    fallen[0] = 0;
    check(FallOverMessage("FallOver", 1, fallen) && fallOver == 0 && getupRequired == 0,
          "fallover_short_server_variant");
    unsigned char attach[] = {0xff, 0xff, 1}, detach[] = {0, 0, 0};
    check(!AttachCameraMessage("AttachCam", 3, attach) && !cameraEntity, "camera_invalid_index_rejected");
    check(AttachCameraMessage("AttachCam", 3, detach) && !cameraEntity, "camera_detach_protocol");
    unsigned char ladder[] = {1, 8, 0, 0xf0, 0xff, 24, 0};
    check(LadderMessage("Ladder", 7, ladder) && ladderState == 1 && ladderVector[0] == 1 &&
          ladderVector[1] == -2 && ladderVector[2] == 3, "ladder_signed_coords");
    unsigned char health[] = {65, 0, 0};
    check(gHUD.m_Health.MsgFunc_Health("Health", 3, health) && gHUD.m_Health.m_iHealth == 65,
          "health_cof_three_bytes");
    check(!gHUD.m_Health.MsgFunc_Health("Health", 2, health) && gHUD.m_Health.m_iHealth == 65,
          "health_short_packet_rejected");
    health[1] = 255; health[2] = 1;
    check(!gHUD.m_Health.MsgFunc_Health("Health", 3, health) && gHUD.m_Health.m_iHealth == 65,
          "health_player_index_bounds");
    unsigned char damage[13] = {}; damage[12] = 1;
    check(gHUD.m_Health.MsgFunc_Damage("Damage", 13, damage) && damageUntil > gEngfuncs.GetClientTime(),
          "damage_trailing_flag_protocol");
    check(!gHUD.m_Health.MsgFunc_Damage("Damage", 11, damage), "damage_short_packet_rejected");
    failures += CofStatusHudProtocolTest();
    failures += CofPMRunTests();
    // Exercise the exported renderer callback while intercepting audio calls.
    // This stays silent even if somebody runs the opt-in fixture without -nosound.
    auto oldSound = gEngfuncs.pfnPlaySoundByName;
    auto oldSoundAt = gEngfuncs.pfnPlaySoundByNameAtLocation;
    auto oldRandom = gEngfuncs.pfnRandomLong;
    gEngfuncs.pfnPlaySoundByName = CaptureSound;
    gEngfuncs.pfnPlaySoundByNameAtLocation = CaptureSoundAt;
    gEngfuncs.pfnRandomLong = CaptureSoundRandom;
    cl_entity_t soundEntity = {};
    soundEntity.attachment[0][0] = 11; soundEntity.attachment[0][1] = 22; soundEntity.attachment[0][2] = 33;
    mstudioevent_t soundEvent = {};
    soundEvent.event = 5094;
    bool ladderSounds = true;
    for (int i = 0; i < 2; ++i) {
        soundRandom = i; soundCalls = 0;
        HUD_StudioEvent(&soundEvent, &soundEntity);
        ladderSounds = ladderSounds && soundCalls == 1 && soundRandomHigh == 1 && !soundPositioned && soundVolume == 1 &&
            !std::strcmp(soundName, i ? "player/ladder_2.wav" : "player/ladder_1.wav");
    }
    check(ladderSounds, "ladder_studio_event_two_native_grip_sounds");
    soundEvent.event = 5093; soundCalls = 0;
    HUD_StudioEvent(&soundEvent, &soundEntity);
    check(soundCalls == 1 && soundPositioned && soundVolume == .5f &&
          !std::strcmp(soundName, "player/get_up.wav") && soundOrigin[0] == 11 && soundOrigin[1] == 22 && soundOrigin[2] == 33,
          "ladder_mount_sound_uses_attachment_and_half_volume");
    const char* bodySounds[] = {"common/bodydrop1.wav", "common/bodydrop2.wav", "common/bodydrop3.wav", "common/bodydrop4.wav"};
    bool bodyDrops = true;
    soundEvent.event = 5090;
    for (int i = 0; i < 4; ++i) {
        soundRandom = i; soundCalls = 0;
        HUD_StudioEvent(&soundEvent, &soundEntity);
        bodyDrops = bodyDrops && soundCalls == 1 && soundRandomHigh == 3 && soundPositioned && soundVolume == 1 &&
            !std::strcmp(soundName, bodySounds[i]);
    }
    check(bodyDrops, "ladder_custom_exit_bodydrop_sound_variants");
    soundEvent.event = 5095; soundCalls = 0;
    HUD_StudioEvent(&soundEvent, &soundEntity);
    check(soundCalls == 0, "ladder_5095_has_no_invented_sound");
    struct SoundModelFixture { studiohdr_t hdr; mstudioseqdesc_t seq; mstudioevent_t events[3]; } soundModel = {};
    soundModel.hdr.numseq = 1;
    soundModel.hdr.seqindex = int(reinterpret_cast<byte*>(&soundModel.seq) - reinterpret_cast<byte*>(&soundModel));
    soundModel.seq.numframes = 55; soundModel.seq.numevents = 3;
    soundModel.seq.eventindex = int(reinterpret_cast<byte*>(soundModel.events) - reinterpret_cast<byte*>(&soundModel));
    // Deliberately unsorted and with two authored events at the same frame.
    soundModel.events[0].frame = 32; soundModel.events[1].frame = soundModel.events[2].frame = 10;
    for (auto& event : soundModel.events) event.event = 5094;
    soundRandom = 0; soundCalls = 0;
    soundEntity.index = 2047; soundEntity.curstate.iuser1 = 1;
    ladderSoundEntity = 0;
    LadderSoundEvents(&soundEntity, &soundModel.hdr, 12);
    check(soundCalls == 2, "ladder_timeline_preserves_authored_simultaneous_events");
    LadderSoundEvents(&soundEntity, &soundModel.hdr, 12);
    LadderSoundEvents(&soundEntity, &soundModel.hdr, 9);
    LadderSoundEvents(&soundEntity, &soundModel.hdr, 20);
    check(soundCalls == 2, "ladder_timeline_paused_or_corrected_frame_does_not_repeat");
    LadderSoundEvents(&soundEntity, &soundModel.hdr, 40);
    check(soundCalls == 3, "ladder_timeline_crosses_skipped_render_frames");
    ++soundEntity.curstate.iuser1;
    LadderSoundEvents(&soundEntity, &soundModel.hdr, 12);
    check(soundCalls == 5, "ladder_timeline_repeated_sequence_uses_play_serial");
    soundEntity.curstate.iuser4 = 0x434f46; soundEvent.event = 5094;
    HUD_StudioEvent(&soundEvent, &soundEntity);
    check(soundCalls == 5, "ladder_timeline_suppresses_duplicate_renderer_sound");
    // Do not retain the synthetic camera when the real test starts climbing.
    ladderSoundEntity = 0; ladderSoundFrame = -1;
    gEngfuncs.pfnPlaySoundByName = oldSound;
    gEngfuncs.pfnPlaySoundByNameAtLocation = oldSoundAt;
    gEngfuncs.pfnRandomLong = oldRandom;
    check(fovUpdateCount > 0, "fov_float_hud_output_hook_invoked");
    zoomFov = zoomTime = -1; zoomRate = 0;
    check(CofMovementFov(90, 0) == 90, "fov_initialization");
    unsigned char zoom[] = {0x90, 1, 0, 0}; // COORD50 then two flags.
    check(CameraZoomMessage("CameraZoom", 4, zoom) && zoomRate == 50 &&
          !CameraZoomMessage("CameraZoom", 3, zoom), "camera_zoom_rate_and_length");
    check(CofMovementFov(90, 0.01f) == 90, "fov_message_before_target_preserved");
    const float firstZoom = CofMovementFov(95, 0.02f);
    check(std::fabs(firstZoom - 90.5f) < 0.001f, "fov_sprint_first_step_half_degree");
    float previousFov = firstZoom;
    bool smoothOnset = true;
    for (int i = 3; i <= 12; ++i) {
        const float fov = CofMovementFov(95, i * 0.01f);
        smoothOnset = smoothOnset && std::isfinite(fov) && fov >= previousFov &&
                      fov - previousFov <= 0.501f && fov <= 95;
        previousFov = fov;
    }
    check(smoothOnset && previousFov == 95, "fov_sprint_monotonic_clamped_endpoint");
    CameraZoomMessage("CameraZoom", 4, zoom);
    check(CofMovementFov(95, 0.13f) == 95 &&
          std::fabs(CofMovementFov(90, 0.14f) - 94.5f) < 0.001f,
          "fov_stop_delayed_target_smooth_return");
    // Engine V_AdjustFov performs this 4:3-base -> 16:9 projection AFTER HUD.
    const auto wideFov = [](float base) {
        return std::atan(std::tan(base * 3.141592653589793 / 360.0) * (4.0 / 3.0)) * 360.0 / 3.141592653589793;
    };
    check(wideFov(firstZoom) > 106 && wideFov(firstZoom) < 107 &&
          wideFov(firstZoom) - wideFov(90) < 0.51,
          "fov_base_output_preserves_widescreen_projection");
    zoomRate = oldZoomRate; zoomFov = oldZoomFov; zoomTime = oldZoomTime;
    completedZoomFov = oldCompletedZoomFov; fovUpdateCount = oldFovUpdateCount;
    // Capture the real transition's network commands, without sending fixture
    // input to the server or touching the user's desktop.
    auto oldServerCommand = gEngfuncs.pfnServerCmd;
    gEngfuncs.pfnServerCmd = CaptureLadderCommand;
    cameraEntity = 0; dodgeGrounded = false;
    ladderCommandCount = 0;
    SendDodge(0);
    check(ladderCommandCount == 0, "airborne_dodge_not_sent");
    dodgeGrounded = true;
    SendDodge(0);
    check(ladderCommandCount == (gEngfuncs.IsNoClipping() ? 0 : 1), "grounded_dodge_noclip_gate");
    auto oldNoClip = gEngfuncs.IsNoClipping;
    gEngfuncs.IsNoClipping = TestNoClipOff;
    in_forward = {}; in_back = {}; in_moveleft = {}; in_moveright = {};
    bool tapDirections = true, heldDirections = true;
    kbutton_t* directions[] = {&in_forward, &in_back, &in_moveleft, &in_moveright};
    for (int i = 0; i < 4; ++i) {
        directions[i]->state = 1;
        dodgeKey.state = 6; // Alt down/up before the next CreateMove.
        ladderCommandCount = ladderCommandMask = 0;
        CofMovementCreateMove(&packet.cmd, 1);
        CofMovementCreateMove(&packet.cmd, 1);
        tapDirections = tapDirections && ladderCommandCount == 1 && ladderCommandMask == (16 << i);
        dodgeKey.state = 1;
        ladderCommandCount = ladderCommandMask = 0;
        CofMovementCreateMove(&packet.cmd, 1);
        CofMovementCreateMove(&packet.cmd, 1);
        heldDirections = heldDirections && ladderCommandCount == 2 && ladderCommandMask == (16 << i);
        directions[i]->state = 0;
    }
    check(tapDirections, "alt_tap_each_direction_sends_once");
    check(heldDirections, "alt_hold_each_direction_retries_server_cooldown");
    gEngfuncs.IsNoClipping = oldNoClip;
    cameraEntity = 1; ladderInputBlocked = false;
    ladderCommandCount = ladderCommandMask = 0;
    in_forward.state = 1; in_back.state = 0;
    LadderInputTransition(true); LadderInputTransition(true);
    check(ladderCommandCount == 2 && ladderCommandMask == 3, "ladder_overlay_releases_once");
    LadderInputTransition(false);
    check(ladderCommandCount == 3 && ladderCommandMask == 7, "ladder_overlay_restores_only_held_direction");
    gEngfuncs.pfnServerCmd = oldServerCommand;
    in_forward = oldForward; in_back = oldBack; ladderInputBlocked = oldLadderBlocked;
    in_moveleft = oldLeft; in_moveright = oldRight;
    dodgeGrounded = oldDodgeGrounded;
    sprintKey = oldSprint; dodgeKey = oldDodge; in_jump = oldJump; in_duck = oldDuck;
    fallOver = oldFall; getupRequired = oldRequired; getupTaps = oldTaps;
    cameraEntity = oldCamera; ladderState = oldLadder; cameraAttachCount = oldAttachCount;
    std::copy(oldVector, oldVector + 3, ladderVector);
    damageUntil = oldDamage; gHUD.m_Health.m_iHealth = oldHealth;
    gHUD.m_Health.m_iFlags = oldFlags; gHUD.m_Health.m_fFade = oldFade;
    gEngfuncs.Con_Printf("COF_MOVEMENT_CLIENT_COMPLETE failures=%d\n", failures);
}

