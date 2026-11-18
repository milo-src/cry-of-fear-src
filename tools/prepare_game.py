"""Prepare a disposable SDK build tree with explicit prototype adaptations."""
from pathlib import Path
import shutil
import json
from prepare_sdk import ROOT


def prepare(raytracing=False):
    original = ROOT / 'external/hlsdk-portable'
    target = ROOT / ('build/game-rtx-source' if raytracing else 'build/game-source')
    target.mkdir(parents=True, exist_ok=True)
    # Remove the previous CoF filenames: Waf discovers every .cpp in dlls.
    for name in ('camera.cpp', 'chat.inc', 'doors.cpp', 'graphics.cpp', 'graphics.h',
                 'inventory.cpp', 'inventory.h', 'menu.cpp', 'menu.h'):
        (target / 'dlls' / ('recovered_' + name)).unlink(missing_ok=True)
    manifest = target / '.vendor-files.json'
    files = {path.relative_to(original).as_posix(): path for path in original.rglob('*')
             if path.is_file() and not any(part == '__pycache__' or part.startswith('waf3-')
                                          for part in path.relative_to(original).parts)
             and not path.name.startswith('.lock-waf')}
    previous = json.loads(manifest.read_text()) if manifest.exists() else []
    for relative in set(previous) - files.keys():
        stale = (target / relative).resolve()
        if not stale.is_relative_to(target.resolve()):
            raise ValueError('Invalid SDK source manifest path')
        stale.unlink(missing_ok=True)
    for relative, source in files.items():
        destination = target / relative
        destination.parent.mkdir(parents=True, exist_ok=True)
        if not destination.exists() or source.read_bytes() != destination.read_bytes():
            shutil.copy2(source, destination)
    manifest.write_text(json.dumps(sorted(files)) + '\n')
    text = (original / 'dlls/weapons.cpp').read_text()
    begin = text.index('\t// custom items...')
    end = text.index('\tg_sModelIndexFireball =', begin)
    text = text[:begin] + '\t// Exploration prototype: no Half-Life inventory precaches.\n' + text[end:]
    (target / 'dlls/weapons.cpp').write_text(text)
    text = (original / 'dlls/triggers.cpp').read_text()
    anchor = '#define SF_CAMERA_PLAYER_POSITION'
    if anchor not in text:
        raise ValueError('Unexpected trigger_camera source revision')
    # CoF camera behavior has its own source, including original SDK attribution.
    (target / 'dlls/triggers.cpp').write_text(text[:text.index(anchor)])
    text = (original / 'dlls/game.cpp').read_text()
    anchor = 'void GameDLLInit( void )\n{'
    if anchor not in text:
        raise ValueError('Unexpected GameDLLInit source revision')
    text = text.replace(anchor, 'extern void CofMenuRegisterCvars();\n' + anchor + '\n\tCofMenuRegisterCvars();')
    (target / 'dlls/game.cpp').write_text(text)
    text = (original / 'dlls/world.cpp').read_text()
    # CoF does not ship the unrelated Half-Life gib models.
    for name in ('hgibs', 'agibs'):
        text = text.replace(f'\tPRECACHE_MODEL( "models/{name}.mdl" );', '')
    (target / 'dlls/world.cpp').write_text(text)
    text = (original / 'dlls/player.cpp').read_text()
    text = '#include "graphics.h"\n#include "inventory.h"\n#include "menu.h"\n' + text
    text = text.replace('TYPEDESCRIPTION\tCBasePlayer::m_playerSaveData[] =\n{',
                        'TYPEDESCRIPTION\tCBasePlayer::m_playerSaveData[] =\n{\n'
                        '\tDEFINE_ARRAY(CBasePlayer, m_cofInventory, FIELD_STRING, 7),\n'
                        '\tDEFINE_FIELD(CBasePlayer, m_cofBlackAndWhite, FIELD_INTEGER),\n'
                        '\tDEFINE_FIELD(CBasePlayer, m_cofRainDrips, FIELD_INTEGER),\n'
                        '\tDEFINE_FIELD(CBasePlayer, m_cofRainIdealDrips, FIELD_INTEGER),\n'
                        '\tDEFINE_ARRAY(CBasePlayer, m_cofRainValues, FIELD_FLOAT, 4),\n'
                        '\tDEFINE_ARRAY(CBasePlayer, m_cofRainIdeal, FIELD_FLOAT, 4),\n'
                        '\tDEFINE_FIELD(CBasePlayer, m_cofRainEnd, FIELD_TIME),\n'
                        '\tDEFINE_FIELD(CBasePlayer, m_cofRainNext, FIELD_TIME),')
    text = text.replace('\tg_pGameRules->PlayerSpawn( this );',
                        '\tg_pGameRules->PlayerSpawn( this );\n\tpev->weapons |= (1 << WEAPON_SUIT); // enable prototype flashlight')
    anchor = '\t\tInitStatusBar();\n\t}'
    if anchor not in text:
        raise ValueError('Unexpected player HUD initialization source revision')
    text = text.replace(anchor, '\t\tCofInventorySync(this);\n\t\tCofMenuPlayerInit(this);\n\t\tCofGraphicsPlayerInit(this);\n' + anchor)
    text = text.replace('void CBasePlayer::UpdateClientData( void )\n{',
        'void CBasePlayer::UpdateClientData( void )\n{\n\tCofGraphicsPlayerFrame(this);')
    (target / 'dlls/player.cpp').write_text(text)
    text = (original / 'dlls/player.h').read_text()
    anchor = 'class CBasePlayer : public CBaseMonster\n{\npublic:'
    if anchor not in text:
        raise ValueError('Unexpected player class source revision')
    text = text.replace(anchor, anchor + '\n\tstring_t m_cofInventory[7]; // port slots 1..6, saved as strings\n'
        '\tint m_cofBlackAndWhite, m_cofRainDrips, m_cofRainIdealDrips;\n'
        '\tfloat m_cofRainValues[4], m_cofRainIdeal[4], m_cofRainEnd, m_cofRainNext;')
    (target / 'dlls/player.h').write_text(text)
    text = (target / 'dlls/world.cpp').read_text()
    anchor = 'void CWorld::Precache( void )\n{'
    if anchor not in text:
        raise ValueError('Unexpected world precache source revision')
    text = text.replace(anchor, 'extern void CofGraphicsPrecache();\nextern void CofInventoryPrecache();\nextern void CofMenuPrecache();\n' + anchor + '\n\tCofInventoryPrecache();\n\tCofMenuPrecache();\n\tCofGraphicsPrecache();')
    (target / 'dlls/world.cpp').write_text(text)
    text = (original / 'cl_dll/hud.h').read_text()
    text = text.replace('return ( index < 0 ) ? 0 : m_rghSprites[index];',
                        'return (index < 0 || index >= m_iSpriteCount) ? 0 : m_rghSprites[index];')
    text = text.replace('return m_rgrcRects[index];',
                        'static wrect_t empty = {};\n\t\treturn (index < 0 || index >= m_iSpriteCount) ? empty : m_rgrcRects[index];')
    (target / 'cl_dll/hud.h').write_text(text)
    text = (target / 'dlls/weapons.cpp').read_text()
    text = text.replace('\tPRECACHE_MODEL( "models/grenade.mdl" );', '')
    (target / 'dlls/weapons.cpp').write_text(text)
    text = (original / 'cl_dll/hud_redraw.cpp').read_text()
    text = text.replace('int CHud::Redraw( ', 'extern void CofPrototypeFrame(float time);\nint CHud::Redraw( ')
    anchor = '\tm_iIntermission = intermission;\n\n\t// if no redrawing'
    if anchor not in text:
        raise ValueError('Unexpected HUD source revision')
    text = text.replace(anchor, '\tm_iIntermission = intermission;\n\tCofPrototypeFrame(flTime);\n\n\t// if no redrawing')
    # Replace HL-specific artwork, preserving messages/chat and other SDK infrastructure.
    anchor = '\t\twhile( pList )\n\t\t{'
    text = text.replace(anchor, anchor + '\n\t\t\tif (pList->p == &m_Health || pList->p == &m_Ammo || pList->p == &m_Battery ||\n'
                        '\t\t\t    pList->p == &m_Flash || pList->p == &m_Train || pList->p == &m_AmmoSecondary) {\n'
                        '\t\t\t\tpList = pList->pNext; continue;\n\t\t\t}')
    (target / 'cl_dll/hud_redraw.cpp').write_text(text)
    text = (original / 'cl_dll/cdll_int.cpp').read_text()
    anchor = 'void DLLEXPORT HUD_Init( void )\n{'
    if anchor not in text:
        raise ValueError('Unexpected HUD_Init source revision')
    text = '#include "graphics.h"\n#include "ui_draw.h"\nextern void CofInventoryClientInit();\nextern void CofInventoryVidInit();\nextern void CofStatusHudInit();\nextern void CofGameMenuInit();\nextern void CofGameMenuVidInit();\n' + text
    text = text.replace('\tgHUD.Init();', '\tgHUD.Init();\n\tCofGraphicsInit();\n\tCofInventoryClientInit();\n\tCofStatusHudInit();\n\tCofGameMenuInit();')
    text = text.replace('\tgHUD.VidInit();', '\tgHUD.VidInit();\n\tCofGraphicsVidInit();\n\tCofUiVidInit();\n\tCofInventoryVidInit();\n\tCofGameMenuVidInit();')
    (target / 'cl_dll/cdll_int.cpp').write_text(text)
    text = text.replace('CofGraphicsInit();', 'CofGraphicsInit();\n\tCofWeatherInit();')
    (target / 'cl_dll/cdll_int.cpp').write_text('#include "weather.h"\n' + text)
    for name, anchor, call in (
        ('hud_msg.cpp', 'int CHud::MsgFunc_ResetHUD( const char *pszName, int iSize, void *pbuf )\n{', 'CofGraphicsReset();'),
        ('view.cpp', 'void DLLEXPORT V_CalcRefdef( struct ref_params_s *pparams )\n{', 'CofGraphicsFrame(pparams->time);'),
        ('entity.cpp', 'int DLLEXPORT HUD_AddEntity( int type, struct cl_entity_s *ent, const char *modelname )\n{', 'if (!CofGraphicsAddEntity(ent)) return 0;'),
    ):
        text = (original / 'cl_dll' / name).read_text()
        if text.count(anchor) != 1:
            raise ValueError('Unexpected graphics hook in ' + name)
        text = '#include "graphics.h"\n' + text.replace(anchor, anchor + '\n\t' + call)
        (target / 'cl_dll' / name).write_text(text)
    path = target / 'cl_dll/view.cpp'
    text = path.read_text()
    anchor = '/*\n// Example of how to overlay the whole screen with red at 50 % alpha'
    if text.count(anchor) != 1: raise ValueError('Weather camera hook changed')
    path.write_text('#include "weather.h"\n' + text.replace(anchor, '\tCofWeatherView(pparams);\n' + anchor))
    text = (original / 'cl_dll/tri.cpp').read_text()
    anchor = 'void DLLEXPORT HUD_DrawTransparentTriangles( void )\n{'
    if text.count(anchor) != 1: raise ValueError('Weather draw hook changed')
    (target / 'cl_dll/tri.cpp').write_text('#include "weather.h"\n' + text.replace(anchor, anchor+'\n\tCofWeatherDraw();'))
    text = (original / 'cl_dll/input.cpp').read_text()
    text = 'extern bool CofInventoryVisible();\nextern int CofInventoryKeyEvent(int, int, const char*);\nextern bool CofGameMenuVisible();\nextern int CofGameMenuKeyEvent(int, int, const char*);\n' + text
    anchor = 'int DLLEXPORT HUD_Key_Event( int down, int keynum, const char *pszCurrentBinding )\n{'
    text = text.replace(anchor, anchor + '\n\tif (!CofGameMenuKeyEvent(down, keynum, pszCurrentBinding)) return 0;\n\tif (!CofInventoryKeyEvent(down, keynum, pszCurrentBinding)) return 0;')
    anchor = 'void DLLEXPORT CL_CreateMove( float frametime, struct usercmd_s *cmd, int active )\n{'
    text = text.replace(anchor, anchor + '\n\tfloat cofAngles[3];\n\tgEngfuncs.GetViewAngles(cofAngles);')
    anchor = '\n}\n\n/*\n============\nCL_IsDead'
    if anchor not in text:
        raise ValueError('Unexpected CL_CreateMove source revision')
    text = text.replace(anchor, '\n\tif (CofInventoryVisible() || CofGameMenuVisible()) {\n'
                        '\t\tcmd->forwardmove = cmd->sidemove = cmd->upmove = 0;\n'
                        '\t\tcmd->buttons = cmd->impulse = cmd->weaponselect = 0;\n'
                        '\t\tgEngfuncs.SetViewAngles(cofAngles);\n'
                        '\t\tVectorCopy(cofAngles, cmd->viewangles);\n\t}\n' + anchor)
    (target / 'cl_dll/input.cpp').write_text(text)
    text = (original / 'dlls/client.cpp').read_text()
    # Sky models live in a separate miniature area, outside the camera PVS.
    text = text.replace('if( !FClassnameIs( ent, "env_sky" ) )',
        'if( !FClassnameIs( ent, "env_sky" ) && ent->v.renderfx != 70 && ent->v.renderfx != 137 && ent->v.renderfx != 184 )')
    begin = text.index('void Host_Say( edict_t *pEntity, int teamonly )')
    end = text.index('/*\n===========\nClientCommand', begin)
    text = text[:begin] + '#include "chat.inc"\n\n' + text[end:]
    shutil.copy2(ROOT / 'src/cof/server/chat.inc', target / 'dlls/chat.inc')
    anchor = 'void StartFrame( void )\n{'
    if anchor not in text:
        raise ValueError('Unexpected StartFrame source revision')
    text = '#include "inventory.h"\n#include "menu.h"\n' + text
    text = text.replace(anchor, 'extern void CofMenuSceneTestFrame();\nextern void CofDoorTestFrame();\n' + anchor + '\n\tCofMenuSceneTestFrame();\n\tCofDoorTestFrame();\n\tCofInventoryTestFrame();')
    anchor = '\tentvars_t *pev = &pEntity->v;\n\n\tif( FStrEq( pcmd, "say" ) )'
    if anchor not in text:
        raise ValueError('Unexpected ClientCommand source revision')
    text = text.replace(anchor, '\tentvars_t *pev = &pEntity->v;\n'
                        '\tif (CofInventoryCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;\n'
                        '\tif (CofMenuCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;\n'
                        '\n\tif( FStrEq( pcmd, "say" ) )')
    (target / 'dlls/client.cpp').write_text(text)
    for name in ('menu_scene_tests.inc', 'door_runtime_tests.inc', 'inventory_runtime_tests.inc', 'graphics_runtime_tests.inc'):
        shutil.copy2(ROOT / 'tests/cof/server' / name, target / 'dlls' / name)
    shutil.copy2(ROOT / 'tests/cof/client/ui_runtime_tests.inc', target / 'cl_dll/ui_runtime_tests.inc')
    shutil.copy2(ROOT / 'tests/cof/client/chat_runtime_tests.inc', target / 'cl_dll/chat_runtime_tests.inc')
    shutil.copy2(ROOT / 'tests/cof/client/menu_runtime_tests.inc', target / 'cl_dll/menu_runtime_tests.inc')
    shutil.copy2(ROOT / 'tests/cof/client/graphics_runtime_tests.inc', target / 'cl_dll/graphics_runtime_tests.inc')
    shutil.copy2(ROOT / 'tests/cof/client/graphics_protocol_tests.inc', target / 'cl_dll/graphics_protocol_tests.inc')
    # Source ownership follows src/cof; the disposable SDK tree keeps its layout.
    # reference/ contains incomplete analysis models and must not enter either DLL.
    for side, folder, names in [
        ('server', 'dlls', ('prototype_entities.cpp', 'doors.cpp',
                            'inventory.cpp', 'inventory.h', 'menu.cpp', 'menu.h',
                            'camera.cpp', 'graphics.cpp', 'graphics.h')),
        ('client', 'cl_dll', ('prototype_client.cpp', 'inventory_client.cpp', 'saytext.cpp',
                                'ui_draw.cpp', 'ui_draw.h', 'ui_font.cpp', 'ui_font.h', 'status_hud.cpp',
                                'game_menu.cpp', 'secondary_menus.cpp', 'save_load_menu.cpp', 'graphics.cpp', 'graphics.h', 'weather.cpp', 'weather.h')),
    ]:
        for name in names:
            # Preserve the SDK's standard doors.cpp alongside CoF's custom doors.
            destination = 'cof_doors.cpp' if side == 'server' and name == 'doors.cpp' else name
            shutil.copy2(ROOT / 'src/cof' / side / name, target / folder / destination)
    path = target / 'dlls/menu.cpp'
    path.write_text(path.read_text() + '\n#include "menu_scene_tests.inc"\n')
    shutil.copy2(ROOT / 'src/cof/shared/item_descriptor.h', target / 'common/item_descriptor.h')
    # Keep the complete vendored renderer ABI; adapt only its basic-type include to SDK types.
    renderer = ROOT / ('external/xash-rt/common' if raytracing else 'external/xash3d-fwgs/common')
    shutil.copy2(renderer / 'render_api.h', target / 'common/cof_render_api.h')
    lightstyle = (renderer / 'lightstyle.h').read_text().replace('#include "xash3d_types.h"',
        '// Basic types supplied by the HLSDK client headers.')
    (target / 'common/lightstyle.h').write_text(lightstyle)
    text = (original / 'mod_options.txt').read_text()
    text = text.replace('GAMEDIR=valve', 'GAMEDIR=cryoffear')
    text = text.replace('CLIENT_WEAPONS=ON', 'CLIENT_WEAPONS=OFF')
    (target / 'mod_options.txt').write_text(text)
    return target


if __name__ == '__main__':
    print(prepare())
