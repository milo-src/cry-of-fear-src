"""Prepare a disposable SDK build tree with explicit prototype adaptations."""
from pathlib import Path
import shutil
import json
from prepare_sdk import ROOT


def prepare():
    original = ROOT / 'external/hlsdk-portable'
    target = ROOT / 'build/game-source'
    target.mkdir(parents=True, exist_ok=True)
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
    text = '#include "recovered_inventory.h"\n#include "recovered_menu.h"\n' + text
    text = text.replace('TYPEDESCRIPTION\tCBasePlayer::m_playerSaveData[] =\n{',
                        'TYPEDESCRIPTION\tCBasePlayer::m_playerSaveData[] =\n{\n'
                        '\tDEFINE_ARRAY(CBasePlayer, m_cofInventory, FIELD_STRING, 7),')
    text = text.replace('\tg_pGameRules->PlayerSpawn( this );',
                        '\tg_pGameRules->PlayerSpawn( this );\n\tpev->weapons |= (1 << WEAPON_SUIT); // enable prototype flashlight')
    anchor = '\t\tInitStatusBar();\n\t}'
    if anchor not in text:
        raise ValueError('Unexpected player HUD initialization source revision')
    text = text.replace(anchor, '\t\tCofInventorySync(this);\n\t\tCofMenuPlayerInit(this);\n' + anchor)
    (target / 'dlls/player.cpp').write_text(text)
    text = (original / 'dlls/player.h').read_text()
    anchor = 'class CBasePlayer : public CBaseMonster\n{\npublic:'
    if anchor not in text:
        raise ValueError('Unexpected player class source revision')
    text = text.replace(anchor, anchor + '\n\tstring_t m_cofInventory[7]; // port slots 1..6, saved as strings')
    (target / 'dlls/player.h').write_text(text)
    text = (target / 'dlls/world.cpp').read_text()
    anchor = 'void CWorld::Precache( void )\n{'
    if anchor not in text:
        raise ValueError('Unexpected world precache source revision')
    text = text.replace(anchor, 'extern void CofInventoryPrecache();\nextern void CofMenuPrecache();\n' + anchor + '\n\tCofInventoryPrecache();\n\tCofMenuPrecache();')
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
    text = '#include "ui_draw.h"\nextern void CofInventoryClientInit();\nextern void CofInventoryVidInit();\nextern void CofStatusHudInit();\nextern void CofGameMenuInit();\nextern void CofGameMenuVidInit();\n' + text
    text = text.replace('\tgHUD.Init();', '\tgHUD.Init();\n\tCofInventoryClientInit();\n\tCofStatusHudInit();\n\tCofGameMenuInit();')
    text = text.replace('\tgHUD.VidInit();', '\tgHUD.VidInit();\n\tCofUiVidInit();\n\tCofInventoryVidInit();\n\tCofGameMenuVidInit();')
    (target / 'cl_dll/cdll_int.cpp').write_text(text)
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
    anchor = 'void StartFrame( void )\n{'
    if anchor not in text:
        raise ValueError('Unexpected StartFrame source revision')
    text = '#include "recovered_inventory.h"\n#include "recovered_menu.h"\n' + text
    text = text.replace(anchor, 'extern void CofDoorTestFrame();\n' + anchor + '\n\tCofDoorTestFrame();\n\tCofInventoryTestFrame();')
    anchor = '\tentvars_t *pev = &pEntity->v;\n\n\tif( FStrEq( pcmd, "say" ) )'
    if anchor not in text:
        raise ValueError('Unexpected ClientCommand source revision')
    text = text.replace(anchor, '\tentvars_t *pev = &pEntity->v;\n'
                        '\tif (CofInventoryCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;\n'
                        '\tif (CofMenuCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;\n'
                        '\n\tif( FStrEq( pcmd, "say" ) )')
    (target / 'dlls/client.cpp').write_text(text)
    for name in ('door_runtime_tests.inc', 'inventory_runtime_tests.inc'):
        shutil.copy2(ROOT / 'tests/cof/server' / name, target / 'dlls' / name)
    shutil.copy2(ROOT / 'tests/cof/client/ui_runtime_tests.inc', target / 'cl_dll/ui_runtime_tests.inc')
    shutil.copy2(ROOT / 'tests/cof/client/menu_runtime_tests.inc', target / 'cl_dll/menu_runtime_tests.inc')
    # Source ownership follows src/cof; the disposable SDK tree keeps its layout.
    # reference/ contains incomplete analysis models and must not enter either DLL.
    for side, folder, names in [
        ('server', 'dlls', ('prototype_entities.cpp', 'recovered_doors.cpp',
                            'recovered_inventory.cpp', 'recovered_inventory.h', 'recovered_menu.cpp', 'recovered_menu.h',
                            'recovered_camera.cpp')),
        ('client', 'cl_dll', ('prototype_client.cpp', 'inventory_client.cpp',
                                'ui_draw.cpp', 'ui_draw.h', 'ui_font.cpp', 'ui_font.h', 'status_hud.cpp',
                                'game_menu.cpp', 'secondary_menus.cpp', 'save_load_menu.cpp')),
    ]:
        for name in names:
            shutil.copy2(ROOT / 'src/cof' / side / name, target / folder / name)
    shutil.copy2(ROOT / 'src/cof/shared/item_descriptor.h', target / 'common/item_descriptor.h')
    # Keep the complete vendored renderer ABI; adapt only its basic-type include to SDK types.
    renderer = ROOT / 'external/xash3d-fwgs/common'
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
