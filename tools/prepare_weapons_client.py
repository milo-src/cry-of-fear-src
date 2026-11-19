"""Apply recovered weapon client contracts to disposable SDK sources only."""
from pathlib import Path
import shutil


def replace(text, old, new):
    if text.count(old) != 1:
        raise ValueError('Unexpected weapons client anchor: ' + old[:90])
    return text.replace(old, new, 1)


def prepare(target):
    target = Path(target)
    root = Path(__file__).resolve().parents[1]
    shutil.copy2(root / 'src/cof/shared/weapon_studio_interface.h', target / 'cl_dll/weapon_studio_interface.h')
    for name in ('cof_weapons_client.cpp', 'cof_weapons_client.h'):
        shutil.copy2(root / 'src/cof/client' / name, target / 'cl_dll' / name)
    for filename in ('input.cpp', 'entity.cpp', 'ammo.cpp', 'cdll_int.cpp', 'hud_msg.cpp', 'prototype_client.cpp', 'view.cpp', 'StudioModelRenderer.cpp', 'GameStudioModelRenderer.cpp'):
        path = target / 'cl_dll' / filename
        text = '#include "cof_weapons_client.h"\n' + path.read_text()
        if filename == 'StudioModelRenderer.cpp':
            anchor = '\tAngleMatrix( angles, ( *m_protationmatrix ) );'
            text = replace(text, anchor, anchor+'\n\t// Port adapter: reflect authored left-hand model, including attachments.\n\tif (CofWeaponsMirrorHand()) for (int axis=0; axis<3; ++axis) (*m_protationmatrix)[axis][1] *= -1;')
            anchor = '\tIEngineStudio.SetupRenderer( rendermode );'
            text = replace(text, anchor, anchor+'\n\tif (CofWeaponsMirrorHand()) gEngfuncs.pTriAPI->CullFace(TRI_NONE);')
            anchor = '\t\tIEngineStudio.StudioClientEvents();'
            # StudioDrawPlayer also contains this call. Only the model path is
            # relevant; insert into the first (StudioDrawModel) occurrence.
            position = text.index(anchor, text.index('int CStudioModelRenderer::StudioDrawModel('))
            text = text[:position]+'\t\tCofWeaponsHandEvent(true);\n'+anchor+'\n\t\tCofWeaponsHandEvent(false);'+text[position+len(anchor):]
        elif filename == 'GameStudioModelRenderer.cpp':
            text = replace(text, '#include "r_studioint.h"', '#include "r_studioint.h"\n#include "weapon_studio_interface.h"')
            anchor = 'int R_StudioDrawModel( int flags )\n{\n\treturn g_StudioRenderer.StudioDrawModel( flags );\n}'
            text = replace(text, anchor, 'static int CofDrawSingleHand(int flags) { return g_StudioRenderer.StudioDrawModel(flags); }\n'
                           'int R_StudioDrawModel( int flags )\n{\n\tint result=CofWeaponsRenderHands(flags,CofDrawSingleHand);\n'
                           '\treturn result<0 ? CofDrawSingleHand(flags) : result;\n}')
            anchor = 'r_studio_interface_t studio =\n{\n\tSTUDIO_INTERFACE_VERSION,\n\tR_StudioDrawModel,\n\tR_StudioDrawPlayer,\n};'
            text = replace(text, anchor,
                           'static int CofMirrorHandBridge(void) { return CofWeaponsMirrorHand() ? 1 : 0; }\n'
                           'static void CofHandEventBridge(int begin) { CofWeaponsHandEvent(begin != 0); }\n'
                           'CofWeaponStudioInterface studio =\n{\n'
                           '\t{ COF_WEAPON_STUDIO_VERSION, R_StudioDrawModel, R_StudioDrawPlayer },\n'
                           '\tCofWeaponsRenderHands, CofMirrorHandBridge, CofHandEventBridge\n};')
            text = replace(text, '\t*ppinterface = &studio;', '\t*ppinterface = &studio.base;')
        elif filename == 'input.cpp':
            text = replace(text, '\tCofMovementCreateMove(cmd, active);',
                           '\tCofMovementCreateMove(cmd, active);\n\tCofWeaponsClientMove(cmd, active);')
        elif filename == 'entity.cpp':
            text = replace(text, '\tif (CofMovementStudioEvent(event, entity)) return;',
                           '\tif (CofWeaponsStudioEvent(event, entity)) return;\n\tif (CofMovementStudioEvent(event, entity)) return;')
        elif filename == 'cdll_int.cpp':
            text = replace(text, '\tCofMovementInit();', '\tCofMovementInit();\n\tCofWeaponsClientInit();')
        elif filename == 'hud_msg.cpp':
            anchor = 'int CHud::MsgFunc_ResetHUD( const char *pszName, int iSize, void *pbuf )\n{'
            text = replace(text, anchor, anchor+'\n\tCofWeaponsClientReset();')
        elif filename == 'prototype_client.cpp':
            text = replace(text, '        CofStatusHudDraw();', '        CofStatusHudDraw();\n        CofWeaponsClientDraw();')
        elif filename == 'view.cpp':
            text = replace(text, '\tCofMovementView(pparams);', '\tCofMovementView(pparams);\n\tCofWeaponsClientView(pparams);')
            start = text.index('\tfor( i = 0; i < 3; i++ )\n\t{\n\t\tview->origin[i] += bob * 0.4f')
            end = text.index('\n\t// pushing the view origin', start)
            text = text[:start] + '\t// Native IronSights disables weapon bob/sway.\n\tif (!CofWeaponsAiming()) {\n' + text[start:end] + '\n\t}\n' + text[end:]
        elif filename == 'ammo.cpp':
            for method, hook in (('AmmoX', 'Ammo'), ('CurWeapon', 'Current'), ('WeaponList', 'List')):
                anchor = 'int CHudAmmo::MsgFunc_' + method + '( const char *pszName, int iSize, void *pbuf )\n{'
                text = replace(text, anchor, anchor + '\n\tif (!CofWeapons'+hook+'Message(iSize,pbuf)) return 0;')
            start = text.index('int CHudAmmo::MsgFunc_AmmoX(')
            end = text.index('int CHudAmmo::MsgFunc_AmmoPickup(', start)
            text = text[:start] + replace(text[start:end], 'int iCount = READ_BYTE();', 'int iCount = READ_SHORT();') + text[end:]
        path.write_text(text)


apply = prepare
