// Evidence: analysis/movement/ladders.md, hl.dll 1004ed40/1004f470/1004f780,
// 1004fb50/1004fe80 and 1010d890/1010d970. SDK classes have a different layout.
// Deliberate robustness adaptations: preserve preexisting flags, reject concurrent
// use, validate sequences/indices, release camera on death/removal/missing endpoint.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "weapons.h"
#include "saverestore.h"
#include "studio.h"
#include "entity_state.h"
#include "ladders.h"
#include <cstdlib>
#include <cstring>
#include <cmath>

namespace {
int attachCamMessage;
const int ladderFlags = FL_FROZEN | FL_GODMODE | FL_NOTARGET;
void AttachCamera(CBasePlayer* player, CBaseEntity* camera) {
    if (!attachCamMessage) attachCamMessage = REG_USER_MSG("AttachCam", 3);
    MESSAGE_BEGIN(MSG_ONE, attachCamMessage, nullptr, player->pev);
    WRITE_SHORT(camera ? camera->entindex() : 0); WRITE_BYTE(camera ? 1 : 0); MESSAGE_END();
    SET_VIEW(player->edict(), camera ? camera->edict() : player->edict());
}
bool Contains(string_t text, const char* part) {
    return text && std::strstr(STRING(text), part);
}
}

void CofLadderPrecache() {
    if (!attachCamMessage) attachCamMessage = REG_USER_MSG("AttachCam", 3);
    PRECACHE_MODEL("models/ladder_climb.mdl");
}

// A studio entity carrying the original animated hands and camera attachments.
// The manager owns animation timing; the ordinary trigger_camera remains separate.
class CCofLadderCamera : public CBaseAnimating {
public:
    void Spawn() override {
        pev->solid = SOLID_NOT; pev->movetype = MOVETYPE_NONE;
        pev->framerate = 1; pev->effects &= ~EF_NODRAW;
        if (pev->model) SET_MODEL(edict(), STRING(pev->model));
    }
    float Play(const char* name) {
        int seq = LookupSequence(name);
        studiohdr_t* hdr = static_cast<studiohdr_t*>(GET_MODEL_PTR(edict()));
        if (!hdr || hdr->numattachments < 2 || seq < 0 || seq >= hdr->numseq) return 0;
        const auto* desc = reinterpret_cast<const mstudioseqdesc_t*>(
            reinterpret_cast<const byte*>(hdr) + hdr->seqindex) + seq;
        if (desc->fps <= 0 || desc->numframes <= 1) return 0;
        pev->sequence = seq; pev->frame = 0; pev->animtime = gpGlobals->time;
        pev->framerate = 1; ResetSequenceInfo();
        // Each authored climbing cycle is a discrete step, including looping sequences.
        m_fSequenceLoops = FALSE;
        return (desc->numframes - 1) / desc->fps;
    }
};
LINK_ENTITY_TO_CLASS(camera_model, CCofLadderCamera);

class CCofLadderManager : public CBaseEntity {
public:
    void Spawn() override;
    void Precache() override;
    void KeyValue(KeyValueData*) override;
    void Use(CBaseEntity*, CBaseEntity*, USE_TYPE, float) override;
    void EXPORT LadderThink();
    void UpdateOnRemove() override { Finish(false); CBaseEntity::UpdateOnRemove(); }
    int Save(CSave&) override;
    int Restore(CRestore&) override;
    static TYPEDESCRIPTION m_SaveData[];
    void AdvanceUp();
    void AdvanceDown();
    bool Play(string_t animation, bool exiting);
    void Finish(bool completed);
    CBasePlayer* Player() { return m_hPlayer ? static_cast<CBasePlayer*>(static_cast<CBaseEntity*>(m_hPlayer)) : nullptr; }
    CCofLadderCamera* Camera() { return m_hCamera ? static_cast<CCofLadderCamera*>(static_cast<CBaseEntity*>(m_hCamera)) : nullptr; }
    EHANDLE m_hPlayer, m_hCamera, m_hTop, m_hBottom;
    string_t m_animation[33], m_top, m_bottom, m_customOff, m_customOn, m_customOffD, m_customOnD, m_previous;
    int m_count, m_index, m_descendOffset, m_descending, m_exiting, m_gotOn, m_queuedPrevious;
    int m_oldFlags, m_oldHideHud, m_input, m_messageInput, m_needsSync;
    float m_finishTime, m_oldFuser3;
};
LINK_ENTITY_TO_CLASS(cof_ladder_manager, CCofLadderManager);

TYPEDESCRIPTION CCofLadderManager::m_SaveData[] = {
    DEFINE_FIELD(CCofLadderManager,m_hPlayer,FIELD_EHANDLE),
    DEFINE_FIELD(CCofLadderManager,m_hCamera,FIELD_EHANDLE),
    DEFINE_FIELD(CCofLadderManager,m_hTop,FIELD_EHANDLE),
    DEFINE_FIELD(CCofLadderManager,m_hBottom,FIELD_EHANDLE),
    DEFINE_ARRAY(CCofLadderManager,m_animation,FIELD_STRING,33),
    DEFINE_FIELD(CCofLadderManager,m_top,FIELD_STRING),
    DEFINE_FIELD(CCofLadderManager,m_bottom,FIELD_STRING),
    DEFINE_FIELD(CCofLadderManager,m_customOff,FIELD_STRING),
    DEFINE_FIELD(CCofLadderManager,m_customOn,FIELD_STRING),
    DEFINE_FIELD(CCofLadderManager,m_customOffD,FIELD_STRING),
    DEFINE_FIELD(CCofLadderManager,m_customOnD,FIELD_STRING),
    DEFINE_FIELD(CCofLadderManager,m_previous,FIELD_STRING),
    DEFINE_FIELD(CCofLadderManager,m_count,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_index,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_descendOffset,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_descending,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_exiting,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_gotOn,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_queuedPrevious,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_oldFlags,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_oldHideHud,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_input,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_messageInput,FIELD_INTEGER),
    DEFINE_FIELD(CCofLadderManager,m_finishTime,FIELD_TIME),
    DEFINE_FIELD(CCofLadderManager,m_oldFuser3,FIELD_FLOAT),
};
int CCofLadderManager::Save(CSave& save) {
    if (!CBaseEntity::Save(save)) return 0;
    return save.WriteFields("CCofLadderManager",this,m_SaveData,ARRAYSIZE(m_SaveData));
}
int CCofLadderManager::Restore(CRestore& restore) {
    if (!CBaseEntity::Restore(restore)) return 0;
    int result = restore.ReadFields("CCofLadderManager",this,m_SaveData,ARRAYSIZE(m_SaveData));
    if (m_hPlayer) { m_needsSync = 1; m_messageInput = 0; m_input = 0; SetThink(&CCofLadderManager::LadderThink); pev->nextthink = gpGlobals->time + .1f; }
    return result;
}
void CCofLadderManager::KeyValue(KeyValueData* kv) {
    int index = 0;
    if (!std::strncmp(kv->szKeyName,"animation",9)) index = std::atoi(kv->szKeyName+9);
    if (index >= 1 && index <= 30) {
        m_animation[index] = ALLOC_STRING(kv->szValue);
        // Adaptation: use max index so repeated keys/animation13 cannot corrupt count.
        if (index > m_count) m_count = index;
    } else if (FStrEq(kv->szKeyName,"customoff")) m_customOff = ALLOC_STRING(kv->szValue);
    else if (FStrEq(kv->szKeyName,"customon")) m_customOn = ALLOC_STRING(kv->szValue);
    else if (FStrEq(kv->szKeyName,"customoffd")) m_customOffD = ALLOC_STRING(kv->szValue);
    else if (FStrEq(kv->szKeyName,"customond")) m_customOnD = ALLOC_STRING(kv->szValue);
    else if (FStrEq(kv->szKeyName,"topent")) m_top = ALLOC_STRING(kv->szValue);
    else if (FStrEq(kv->szKeyName,"bottoment")) m_bottom = ALLOC_STRING(kv->szValue);
    else if (FStrEq(kv->szKeyName,"descendoffset")) m_descendOffset = std::atoi(kv->szValue);
    else { CBaseEntity::KeyValue(kv); return; }
    kv->fHandled = TRUE;
}
void CCofLadderManager::Precache() { if (pev->model) PRECACHE_MODEL(const_cast<char*>(STRING(pev->model))); }
void CCofLadderManager::Spawn() {
    Precache(); pev->solid = SOLID_NOT; pev->effects |= EF_NODRAW;
    pev->movetype = MOVETYPE_NONE; m_index = 1; UTIL_SetOrigin(pev,pev->origin);
}
static CCofLadderManager* ManagerFor(CBasePlayer* player) {
    if (!player) return nullptr;
    CBaseEntity* ent = nullptr;
    while ((ent = UTIL_FindEntityByClassname(ent,"cof_ladder_manager"))) {
        auto* manager = static_cast<CCofLadderManager*>(ent);
        if (manager->Player() == player) return manager;
    }
    return nullptr;
}
void CCofLadderManager::Use(CBaseEntity* activator,CBaseEntity*,USE_TYPE,float value) {
    if (!activator || !activator->IsPlayer() || !activator->IsAlive() || m_hPlayer || !pev->model || m_count < 1) return;
    auto* player = static_cast<CBasePlayer*>(activator);
    if (ManagerFor(player) || (player->pev->flags & FL_FROZEN)) return;
    // Current SDK inventory lacks original dualweapon IDs; preserve the known flare gate.
    if (player->m_pActiveItem && FClassnameIs(player->m_pActiveItem->pev,"weapon_flare") && player->m_pActiveItem->pev->iuser1) {
        ClientPrint(player->pev,HUD_PRINTCENTER,"Drop the flare before climbing."); return;
    }
    for (int i=1;i<=m_count;++i) if (!m_animation[i]) {
        ALERT(at_console,"COF_LADDER missing animation%d on %s\n",i,STRING(pev->targetname)); return;
    }
    auto* camera = static_cast<CCofLadderCamera*>(CBaseEntity::Create("camera_model",pev->origin,pev->angles,player->edict()));
    if (!camera) return;
    camera->pev->model = pev->model; SET_MODEL(camera->edict(),STRING(pev->model));
    m_hPlayer = player; m_hCamera = camera; pev->owner = player->edict();
    m_descending = value != 0; m_index = m_descending ? m_count : 1;
    if (m_descending) UTIL_SetOrigin(camera->pev,camera->pev->origin+Vector(0,0,m_descendOffset));
    m_previous = 0; m_gotOn = m_queuedPrevious = m_exiting = m_input = m_messageInput = 0;
    m_oldFlags = player->pev->flags & ladderFlags; m_oldHideHud = player->m_iHideHUD;
    m_oldFuser3 = player->pev->fuser3; player->pev->fuser3 = 3;
    player->EnableControl(FALSE); player->pev->flags |= FL_GODMODE | FL_NOTARGET;
    player->pev->velocity = player->pev->basevelocity = g_vecZero;
    player->m_iHideHUD |= 1;
    AttachCamera(player,camera);
    SetThink(&CCofLadderManager::LadderThink); pev->nextthink = gpGlobals->time+.01f;
    AdvanceUp();
}
bool CCofLadderManager::Play(string_t animation,bool exiting) {
    auto* camera = Camera();
    float duration = camera && animation ? camera->Play(STRING(animation)) : 0;
    if (!(duration > 0) || !std::isfinite(duration)) {
        ALERT(at_console,"COF_LADDER invalid sequence '%s'; releasing player\n",animation?STRING(animation):"<none>");
        Finish(false); return false;
    }
    m_previous = animation; m_finishTime = gpGlobals->time+duration; m_exiting = exiting;
    return true;
}
void CCofLadderManager::AdvanceUp() {
    auto* camera = Camera(); if (!camera) { Finish(false); return; }
    if (m_index < 1 || m_index > m_count) { Finish(false); return; }
    if (m_index > 1 && !m_descending && !Contains(m_previous,"climb_loop_down") && !m_gotOn)
        UTIL_SetOrigin(camera->pev,camera->pev->origin+Vector(0,0,48));
    string_t animation = m_animation[m_index]; bool wasDescending = m_descending != 0;
    if (Contains(animation,"climb_end") && Contains(animation,"up")) {
        if (!wasDescending && m_customOff) animation = m_customOff;
        if (wasDescending && m_customOnD) animation = m_customOnD;
    }
    // Maps without customond still get the asset's authored descent mount.
    if (wasDescending && !m_customOnD) animation = ALLOC_STRING("climb_start_down");
    if (m_index == 1 && !wasDescending && m_customOn) animation = m_customOn;
    if (!Play(animation,!wasDescending && m_index == m_count)) return;
    if (wasDescending) { m_gotOn = 1; m_descending = 0; m_queuedPrevious = 1; }
    else ++m_index;
}
void CCofLadderManager::AdvanceDown() {
    auto* camera = Camera(); if (!camera) { Finish(false); return; }
    --m_index; if (m_index < 1) m_index = 1;
    m_gotOn = 0;
    if (m_queuedPrevious) { m_queuedPrevious = 0; UTIL_SetOrigin(camera->pev,camera->pev->origin-Vector(0,0,48)); }
    if (Contains(m_previous,"climb_loop_down")) UTIL_SetOrigin(camera->pev,camera->pev->origin-Vector(0,0,48));
    string_t animation = m_index > 1 ? ALLOC_STRING("climb_loop_down") :
        (m_customOffD ? m_customOffD : ALLOC_STRING("climb_end_down"));
    Play(animation,m_index <= 1);
}
void CCofLadderManager::LadderThink() {
    auto* player = Player(); auto* camera = Camera();
    if (!player || !player->IsAlive() || !camera) { Finish(false); return; }
    // ResetHUD must reach the client first, otherwise it erases a same-frame AttachCam.
    if (m_needsSync && !player->m_fInitHUD) { AttachCamera(player,camera); m_needsSync=0; }
    camera->StudioFrameAdvance();
    Vector eye, eyeAngles;
    camera->GetAttachment(0,eye,eyeAngles);
    camera->pev->view_ofs = eye-camera->pev->origin;
    player->pev->velocity = player->pev->basevelocity = g_vecZero;
    if (gpGlobals->time >= m_finishTime) {
        camera->pev->frame = 255; camera->pev->framerate = 0;
        if (m_exiting) { Finish(true); return; }
        // Opposite held buttons cancel instead of advancing two animation steps.
        int input = m_messageInput ? m_input : player->pev->button;
        if ((input & (IN_FORWARD|IN_BACK)) == IN_FORWARD) { m_descending = 0; AdvanceUp(); }
        else if ((input & (IN_FORWARD|IN_BACK)) == IN_BACK) { m_descending = 1; AdvanceDown(); }
    }
    if (m_hPlayer) pev->nextthink = gpGlobals->time+.01f;
}
void CCofLadderManager::Finish(bool completed) {
    auto* player = Player(); auto* camera = Camera();
    m_hPlayer = nullptr; m_hCamera = nullptr; pev->owner = nullptr; SetThink(nullptr); pev->nextthink = 0;
    if (player) {
        AttachCamera(player,nullptr);
        player->EnableControl(TRUE);
        player->pev->flags = (player->pev->flags & ~ladderFlags) | m_oldFlags;
        player->pev->fuser3 = m_oldFuser3;
        player->m_iHideHUD = m_oldHideHud;
        player->pev->velocity = player->pev->basevelocity = g_vecZero;
        CLIENT_COMMAND(player->edict(),"finishladder\n");
        if (completed) {
            EHANDLE& handle = m_descending ? m_hBottom : m_hTop;
            string_t name = m_descending ? m_bottom : m_top;
            if (!handle && name) handle = UTIL_FindEntityByTargetname(nullptr,STRING(name));
            if (handle) {
                UTIL_SetOrigin(player->pev,handle->pev->origin+Vector(0,0,37));
                player->pev->angles = player->pev->v_angle = handle->pev->angles;
                player->pev->fixangle = 1; player->pev->flags &= ~FL_ONGROUND;
            } else ALERT(at_console,"COF_LADDER missing endpoint '%s'; player released\n",name?STRING(name):"<none>");
            if (pev->target) FireTargets(STRING(pev->target),player,player,USE_TOGGLE,0);
        }
    }
    if (camera) UTIL_Remove(camera);
    m_exiting = m_input = m_messageInput = 0;
}
bool CofLadderActive(CBasePlayer* player) { return ManagerFor(player) != nullptr; }
void CofLadderCancel(CBasePlayer* player) { if (auto* manager = ManagerFor(player)) manager->Finish(false); }
edict_t* CofLadderViewEntity(CBasePlayer* player) {
    auto* manager = ManagerFor(player); return manager && manager->Camera() ? manager->Camera()->edict() : nullptr;
}
void CofLadderPackCamera(entity_state_s* state,edict_t* ent) {
    // PM physents need the ordinary ladder enable gate on the predicting client.
    state->iuser1=ent->v.iuser1;
    if (!FClassnameIs(&ent->v,"camera_model")) return;
    auto* camera = static_cast<CCofLadderCamera*>(CBaseEntity::Instance(ent));
    if (!camera || !ent->v.modelindex) return;
    Vector eye, ignored, forwardPoint;
    camera->GetAttachment(0,eye,ignored); camera->GetAttachment(1,forwardPoint,ignored);
    Vector angles=ent->v.angles, direction=forwardPoint-eye;
    if (direction.Length()>0.01f) { angles=UTIL_VecToAngles(direction); angles.x=-angles.x; }
    state->iuser4=0x434f46;
    for(int i=0;i<3;++i) {state->vuser1[i]=eye[i];state->vuser2[i]=angles[i];}
}
void CofLadderPlayerFrame(CBasePlayer* player) {
    auto* manager = ManagerFor(player); if (!manager) return;
    if (!player->IsAlive()) { manager->Finish(false); return; }
    // Also resynchronizes AttachCam after save restoration/client HUD restart.
    if (player->m_fInitHUD) manager->m_needsSync=1;
}
bool CofLadderCommand(CBasePlayer* player,const char* command) {
    bool forward = FStrEq(command,"forwardpressed") || FStrEq(command,"forwardreleased");
    bool back = FStrEq(command,"backpressed") || FStrEq(command,"backreleased");
    bool cancel = FStrEq(command,"laddercancel");
    if (!forward && !back && !cancel) return false;
    auto* manager = ManagerFor(player); if (!manager) return true;
    if (cancel) { manager->Finish(false); return true; }
    manager->m_messageInput = 1;
    int bit = forward ? IN_FORWARD : IN_BACK;
    if (std::strstr(command,"pressed")) manager->m_input |= bit;
    else manager->m_input &= ~bit;
    return true;
}

class CCofLadderPoint : public CPointEntity {
public: void Spawn() override { pev->solid=SOLID_NOT; pev->effects|=EF_NODRAW; UTIL_SetOrigin(pev,pev->origin); }
};
LINK_ENTITY_TO_CLASS(cof_ladderend_top,CCofLadderPoint);
LINK_ENTITY_TO_CLASS(cof_ladderend_bottom,CCofLadderPoint);
LINK_ENTITY_TO_CLASS(cof_ladderclimb,CCofLadderPoint);

class CCofLadderManagerUse : public CBaseToggle {
public:
    void Spawn() override {
        if (pev->noise) PRECACHE_SOUND(const_cast<char*>(STRING(pev->noise)));
        pev->solid=SOLID_BSP; pev->movetype=MOVETYPE_PUSH;
        if (pev->model) SET_MODEL(edict(),STRING(pev->model));
        UTIL_SetOrigin(pev,pev->origin); m_nextUse=0;
    }
    int ObjectCaps() override { return FCAP_IMPULSE_USE; }
    void Use(CBaseEntity* activator,CBaseEntity*,USE_TYPE,float) override {
        if (!activator || !activator->IsPlayer() || !(activator->pev->flags&FL_ONGROUND) ||
            gpGlobals->time<m_nextUse || !UTIL_IsMasterTriggered(m_sMaster,activator)) return;
        if (pev->noise) EMIT_SOUND(activator->edict(),CHAN_AUTO,STRING(pev->noise),1,ATTN_NORM);
        bool allowed=true; float value=float(pev->iuser1);
        if ((pev->spawnflags&1) && pev->target) {
            CBaseEntity* target=UTIL_FindEntityByTargetname(nullptr,STRING(pev->target));
            allowed=target && int(activator->pev->origin.z-target->pev->origin.z)<=40; value=0;
        }
        if (allowed && pev->target) FireTargets(STRING(pev->target),activator,activator,USE_TOGGLE,value);
        m_nextUse=gpGlobals->time+1;
    }
    int Save(CSave& save) override;
    int Restore(CRestore& restore) override;
    static TYPEDESCRIPTION m_SaveData[];
    float m_nextUse;
};
TYPEDESCRIPTION CCofLadderManagerUse::m_SaveData[]={DEFINE_FIELD(CCofLadderManagerUse,m_nextUse,FIELD_TIME)};
IMPLEMENT_SAVERESTORE(CCofLadderManagerUse,CBaseToggle);
LINK_ENTITY_TO_CLASS(cof_ladder_manager_use,CCofLadderManagerUse);

class CCofBrushLadder : public CBaseToggle {
public:
    void Precache() override {
        pev->solid=SOLID_NOT; pev->skin=CONTENTS_LADDER; pev->iuser1=1;
        if (CVAR_GET_FLOAT("showtriggers")==0 && !(pev->spawnflags&1)) pev->effects|=EF_NODRAW;
        else pev->effects&=~EF_NODRAW;
    }
    void Spawn() override { Precache(); if (pev->model) SET_MODEL(edict(),STRING(pev->model)); pev->movetype=MOVETYPE_PUSH; }
};
LINK_ENTITY_TO_CLASS(func_ladder,CCofBrushLadder);

class CCofLadderControl : public CBaseToggle {
public:
    void Spawn() override {
        pev->solid=SOLID_TRIGGER; pev->movetype=MOVETYPE_PUSH;
        if (CVAR_GET_FLOAT("showtriggers")==0) pev->effects|=EF_NODRAW;
        if (pev->model) SET_MODEL(edict(),STRING(pev->model));
        SetThink(&CCofLadderControl::LadderThink); SetTouch(&CCofLadderControl::LadderTouch);
        pev->nextthink=gpGlobals->time+.1f;
    }
    CBaseEntity* Target() { return pev->target ? UTIL_FindEntityByTargetname(nullptr,STRING(pev->target)) : nullptr; }
    void EXPORT LadderTouch(CBaseEntity* other) {
        if (!other || !other->IsPlayer() || !other->IsAlive() || pev->iuser1 || !UTIL_IsMasterTriggered(m_sMaster,other)) return;
        if (pev->netname) {
            const char* filter=STRING(pev->netname);
            if (!FClassnameIs(other->pev,filter) && (!other->pev->targetname || !FStrEq(STRING(other->pev->targetname),filter))) return;
        } else if (pev->spawnflags&2) return; // Original trigger filter disables clients.
        // Original item+1c8/+1f0 semantics remain unknown; the reconstruction's
        // inventory does not have those fields. No guessed weapon-state predicate.
        if (CBaseEntity* target=Target()) target->pev->iuser1=0;
    }
    void EXPORT LadderThink() {
        CBaseEntity* entities[32];
        // Original passes brush mins/maxs. abs bounds also support translated brushes.
        int count=UTIL_EntitiesInBox(entities,32,pev->absmin,pev->absmax,FL_CLIENT);
        if (!count) if (CBaseEntity* target=Target()) target->pev->iuser1=1;
        pev->nextthink=gpGlobals->time+.1f;
    }
};
LINK_ENTITY_TO_CLASS(func_laddercontrol,CCofLadderControl);

#include "ladder_runtime_tests.inc"
