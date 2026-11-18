// Original marker/message/transition evidence: analysis/menu/switching.md.
#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "saverestore.h"
#include "shake.h"
#include "menu.h"
#include <cstring>
#include <string>

namespace {
int gameMenuMessage;
int vguiMenuMessage;
int unlocksMessage;
int saveLoadMessage;
cvar_t menuDifficulty = {"difficulty", "1", FCVAR_SERVER};
cvar_t subtitleLanguage = {"cof_subtitlelanguage", "1", FCVAR_ARCHIVE | FCVAR_SERVER};
std::string selectedCampaign;

bool ValidCampaignMap(const char* name) {
    if (!name || !*name || std::strlen(name) > 63) return false;
    for (const unsigned char* p = reinterpret_cast<const unsigned char*>(name); *p; ++p)
        if (!((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') ||
              (*p >= '0' && *p <= '9') || *p == '_' || *p == '-')) return false;
    return IS_MAP_VALID(const_cast<char*>(name)) != 0;
}
}

class CCofGameMenu : public CPointEntity {
public:
    void Spawn() override { // Original hl.dll 0x1009d940.
        pev->solid = SOLID_NOT;
        pev->effects = EF_NODRAW;
        pev->movetype = MOVETYPE_NONE;
    }

    void Think() override { // Original hl.dll 0x100a0aa0.
        pev->nextthink = 0;
        if (pev->iuser1 == 1) SERVER_COMMAND("map c_difficulty_settings\n");
        if (pev->iuser1 == 2) SERVER_COMMAND("map c_video_stress_test\n");
    }
};
LINK_ENTITY_TO_CLASS(cof_gamemenu, CCofGameMenu);

// Both original marker Spawn functions only hide a nonsolid, stationary point:
// cof_difficultysettings 0x1009d8d0; cof_loadgame 0x1009dbc0.
class CCofPanelMarker : public CPointEntity {
public:
    void Spawn() override {
        pev->solid = SOLID_NOT;
        pev->effects = EF_NODRAW;
        pev->movetype = MOVETYPE_NONE;
    }
};
LINK_ENTITY_TO_CLASS(cof_difficultysettings, CCofPanelMarker);
LINK_ENTITY_TO_CLASS(cof_loadgame, CCofPanelMarker);

// CEnvModel menu subset, recovered from 0x1009e640 / 0x10096bc0 /
// 0x1009bed0 / 0x100a0b90 / 0x100a8e80. Map-driven sequence actions are
// independent of the model's embedded loop bit: action 1 loops, 2 toggles.
class CCofEnvModel : public CBaseAnimating {
public:
    string_t m_sequenceOn, m_sequenceOff;
    int m_actionOn, m_actionOff;
    static TYPEDESCRIPTION m_SaveData[];
    int Save(CSave& save) override;
    int Restore(CRestore& restore) override;
    int ObjectCaps() override { return CBaseAnimating::ObjectCaps() & ~FCAP_ACROSS_TRANSITION; }

    void Precache() override {
        if (pev->model) PRECACHE_MODEL(const_cast<char*>(STRING(pev->model)));
    }
    void Spawn() override {
        if (!pev->model) { UTIL_Remove(this); return; }
        Precache();
        SET_MODEL(edict(), STRING(pev->model));
        UTIL_SetOrigin(pev, pev->origin);
        if (pev->spawnflags & 4) {
            pev->solid = SOLID_SLIDEBOX;
            UTIL_SetSize(pev, Vector(-10, -10, -10), Vector(10, 10, 10));
        }
        if (pev->spawnflags & 2) { pev->origin.z += 1; DROP_TO_FLOOR(edict()); }
        if (std::strstr(STRING(pev->model), "skogsris")) pev->renderfx = 94;
        if (!pev->renderfx && !std::strstr(STRING(pev->model), "obbsror")) pev->renderfx = 92;
        SetBoneController(0, pev->fuser1); SetBoneController(1, pev->fuser2);
        SetBoneController(2, pev->fuser3); SetBoneController(3, pev->fuser4);
        ChangeSequence();
        pev->nextthink = gpGlobals->time + 0.1f;
    }
    void KeyValue(KeyValueData* kv) override {
        if (FStrEq(kv->szKeyName, "m_iszSequence_On")) m_sequenceOn = ALLOC_STRING(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_iszSequence_Off")) m_sequenceOff = ALLOC_STRING(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_iAction_On")) m_actionOn = atoi(kv->szValue);
        else if (FStrEq(kv->szKeyName, "m_iAction_Off")) m_actionOff = atoi(kv->szValue);
        else { CBaseAnimating::KeyValue(kv); return; }
        kv->fHandled = TRUE;
    }
    void ChangeSequence() {
        const string_t sequence = (pev->spawnflags & 1) ? m_sequenceOff : m_sequenceOn;
        if (!sequence) return;
        pev->sequence = LookupSequence(STRING(sequence));
        if (pev->sequence < 0) {
            ALERT(at_warning, "env_model: unknown sequence %s\n", STRING(sequence));
            pev->sequence = 0;
        }
        pev->frame = 0;
        ResetSequenceInfo();
        m_fSequenceLoops = ((pev->spawnflags & 1) ? m_actionOff : m_actionOn) == 1;
    }
    void Use(CBaseEntity*, CBaseEntity*, USE_TYPE type, float) override {
        if (!ShouldToggle(type, !(pev->spawnflags & 1))) return;
        pev->spawnflags ^= 1;
        ChangeSequence();
        pev->nextthink = gpGlobals->time + 0.1f;
    }
    void Think() override {
        StudioFrameAdvance();
        if (m_fSequenceFinished && !m_fSequenceLoops) {
            if (((pev->spawnflags & 1) ? m_actionOff : m_actionOn) != 2) return;
            pev->spawnflags ^= 1;
            ChangeSequence();
        }
        pev->nextthink = gpGlobals->time + 0.1f;
    }
};
LINK_ENTITY_TO_CLASS(env_model, CCofEnvModel);
TYPEDESCRIPTION CCofEnvModel::m_SaveData[] = {
    DEFINE_FIELD(CCofEnvModel, m_sequenceOn, FIELD_STRING),
    DEFINE_FIELD(CCofEnvModel, m_sequenceOff, FIELD_STRING),
    DEFINE_FIELD(CCofEnvModel, m_actionOn, FIELD_INTEGER),
    DEFINE_FIELD(CCofEnvModel, m_actionOff, FIELD_INTEGER),
};
IMPLEMENT_SAVERESTORE(CCofEnvModel, CBaseAnimating);

// Original CEnvFMODStream::Use 0x101148b0 queues a track on the player.
// This port uses Xash's streamed music backend for the menu's zero-fade case.
class CCofAmbientStream : public CPointEntity {
public:
    void Use(CBaseEntity* activator, CBaseEntity*, USE_TYPE, float) override {
        if (!pev->message) return;
        const char* name = STRING(pev->message);
        const std::string track(name);
        if (track.empty() || track.size() > 127 || track.front() == '/' ||
            track.find("..") != std::string::npos) return;
        for (unsigned char ch : track)
            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
                  (ch >= '0' && ch <= '9') || ch == '_' || ch == '-' ||
                  ch == '.' || ch == '/' || ch == ' ')) return;
        if (!activator || !activator->IsPlayer()) activator = UTIL_PlayerByIndex(1);
        if (activator) {
            const std::string path = "mp3/" + track;
            CLIENT_COMMAND(activator->edict(), "music \"%s\" \"%s\"\n", path.c_str(),
                           (pev->spawnflags & 2) ? path.c_str() : "");
        }
        if (pev->spawnflags & 1) UTIL_Remove(this);
    }
};
LINK_ENTITY_TO_CLASS(ambient_fmodstream, CCofAmbientStream);

// Port adapter: original schedules CBasePlayer::GameStart; a separate entity
// leaves the SDK player's existing Think behavior intact during the fade.
class CCofMenuGameStart : public CPointEntity {
public:
    void Spawn() override {
        pev->solid = SOLID_NOT;
        pev->movetype = MOVETYPE_NONE;
        pev->effects = EF_NODRAW;
    }
    void Think() override {
        const char* map = pev->message ? STRING(pev->message) : "c_intro";
        if (pev->owner && !pev->owner->free && ValidCampaignMap(map))
            CLIENT_COMMAND(pev->owner, "map %s\n", map);
        UTIL_Remove(this);
    }
};
LINK_ENTITY_TO_CLASS(cof_menu_game_start, CCofMenuGameStart);

void CofMenuRegisterCvars() {
    if (!CVAR_GET_POINTER("difficulty")) CVAR_REGISTER(&menuDifficulty);
    if (!CVAR_GET_POINTER("cof_subtitlelanguage")) CVAR_REGISTER(&subtitleLanguage);
}

void CofMenuPrecache() {
    if (!gameMenuMessage) gameMenuMessage = REG_USER_MSG("GameMenu", 0);
    if (!vguiMenuMessage) vguiMenuMessage = REG_USER_MSG("VGUIMenu", 2);
    if (!unlocksMessage) unlocksMessage = REG_USER_MSG("Unlocks", -1);
    if (!saveLoadMessage) saveLoadMessage = REG_USER_MSG("SaveLoad", -1);
    CofMenuRegisterCvars();
    PRECACHE_SOUND("inventory/game_start.wav");
}

void CofMenuPlayerInit(CBasePlayer* player) {
    if (!player || !gameMenuMessage) return;
    CBaseEntity* marker = nullptr;
    while ((marker = UTIL_FindEntityByClassname(marker, "cof_difficultysettings"))) {
        // Original player initialization 0x100f28a3 / ShowVGUIMenu 0x100f4050.
        // Persisted unlock state is not recovered; a fresh profile has no flags.
        MESSAGE_BEGIN(MSG_ONE, unlocksMessage, nullptr, player->pev);
        WRITE_LONG(0); WRITE_BYTE(0); WRITE_BYTE(0);
        MESSAGE_END();
        MESSAGE_BEGIN(MSG_ONE, vguiMenuMessage, nullptr, player->pev);
        WRITE_BYTE(32); WRITE_BYTE(0);
        MESSAGE_END();
        player->m_iHideHUD |= 8;
        player->EnableControl(FALSE);
    }
    while ((marker = UTIL_FindEntityByClassname(marker, "cof_loadgame"))) {
        MESSAGE_BEGIN(MSG_ONE, saveLoadMessage, nullptr, player->pev);
        WRITE_BYTE(1); WRITE_STRING("nothing");
        MESSAGE_END();
    }
    while ((marker = UTIL_FindEntityByClassname(marker, "cof_gamemenu"))) {
        // Original player initialization 0x100f2966 sends no payload.
        MESSAGE_BEGIN(MSG_ONE, gameMenuMessage, nullptr, player->pev);
        MESSAGE_END();
    }
}

bool CofMenuCommand(CBasePlayer* player, const char* command) {
    if (!std::strcmp(command, "subtitleset")) {
        const char* argument = CMD_ARGV(1);
        if (player && CMD_ARGC() == 2 && argument && argument[0] >= '1' &&
            argument[0] <= '7' && !argument[1])
            CVAR_SET_FLOAT("cof_subtitlelanguage", static_cast<float>(argument[0] - '0'));
        // Original also stores per-player language at +0x684; that field belongs
        // to the unrecovered dialogue/subtitle system, not to menu translation.
        return true;
    }
    if (!std::strcmp(command, "campaign")) {
        selectedCampaign.clear();
        if (player && gpGlobals->maxClients == 1 && CMD_ARGC() == 2 &&
            ValidCampaignMap(CMD_ARGV(1))) selectedCampaign = CMD_ARGV(1);
        return true;
    }
    if (!std::strcmp(command, "skillset")) {
        if (!player || gpGlobals->maxClients != 1) return true;
        const char* argument = CMD_ARGV(1);
        if (CMD_ARGC() != 2 || !argument || !argument[0] || argument[1] ||
            argument[0] < '1' || argument[0] > '4') return true;
        // A strict range check is an intentional improvement over original atoi.
        CVAR_SET_FLOAT("difficulty", static_cast<float>(argument[0] - '0'));
        EMIT_SOUND_DYN(player->edict(), CHAN_AUTO, "inventory/game_start.wav",
                       1, 0.8f, 0, 100);
        UTIL_ScreenFade(player, Vector(255, 255, 255), 5, 5, 255,
                       FFADE_OUT | FFADE_STAYOUT);
        CBaseEntity* pending = UTIL_FindEntityByClassname(nullptr, "cof_menu_game_start");
        if (!pending)
            pending = CBaseEntity::Create("cof_menu_game_start", g_vecZero, g_vecZero,
                                          player->edict());
        if (pending) {
            pending->pev->owner = player->edict();
            pending->pev->message = ALLOC_STRING(selectedCampaign.empty()
                ? "c_intro" : selectedCampaign.c_str());
            selectedCampaign.clear();
            pending->pev->nextthink = gpGlobals->time + 5;
        }
        return true;
    }
    if (std::strcmp(command, "gamemenucmd")) return false;
    if (!player || !std::strstr(STRING(gpGlobals->mapname), "game_menu")) return true;
    CBaseEntity* marker = UTIL_FindEntityByClassname(nullptr, "cof_gamemenu");
    if (!marker) return true;
    // Accept only the two recovered actions, without atoi's trailing garbage.
    const char* argument = CMD_ARGV(1);
    if (CMD_ARGC() != 2 || !argument || !argument[0] || argument[1] ||
        (argument[0] != '1' && argument[0] != '2')) return true;
    marker->pev->iuser1 = argument[0] - '0';
    marker->pev->nextthink = gpGlobals->time + marker->pev->iuser1;
    UTIL_ScreenFade(player, Vector(255, 255, 255), 1, 10, 255, FFADE_OUT);
    return true;
}
