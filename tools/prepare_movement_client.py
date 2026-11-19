"""Apply movement client hooks to the disposable SDK tree, never the vendor tree."""
from pathlib import Path
import shutil


def replace_once(text, old, new, label):
    if text.count(old) != 1:
        raise ValueError('Unexpected movement client anchor: ' + label)
    return text.replace(old, new, 1)


def prepare(target):
    target = Path(target)
    root = Path(__file__).resolve().parents[1]
    for name in ('movement.cpp', 'movement.h'):
        shutil.copy2(root / 'src/cof/client' / name, target / 'cl_dll' / name)

    path = target / 'cl_dll/input.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    for name, direction in (('Forward', 0), ('Back', 1), ('Moveleft', 2), ('Moveright', 3)):
        anchor = f'void IN_{name}Down( void )\n{{'
        text = replace_once(text, anchor, anchor + f'\n\tif (!CofMovementDirectionDown({direction})) return;', name+' down')
        anchor = f'void IN_{name}Up( void )\n{{'
        text = replace_once(text, anchor, anchor + f'\n\tCofMovementDirectionUp({direction});', name+' up')
    for name in ('Jump', 'Duck'):
        anchor = f'void IN_{name}Down( void )\n{{'
        text = replace_once(text, anchor, anchor + f'\n\tif (!CofMovement{name}Down()) return;', name)
    for name in ('SpeedDown', 'SpeedUp'):
        command = '+speed' if name == 'SpeedDown' else '-speed'
        text = replace_once(text, f'\tgEngfuncs.pfnAddCommand( "{command}", IN_{name} );\n', '', command+' alias')
    for name in ('cl_forwardspeed', 'cl_backspeed', 'cl_sidespeed'):
        text = replace_once(text, f'"{name}", "400"', f'"{name}", "230"', name+' recovered default')
    # The original cmd has neither stock HL speed-key attenuation nor the
    # GetClientMaxspeed clamp: CoF's maxspeed field is a percentage in PM_Move.
    start = text.index('\t\t// adjust for speed key')
    end = text.index('\t\t// Allow mice and other controllers', start)
    text = text[:start] + text[end:]
    anchor = '\tif (CofInventoryVisible() || CofGameMenuVisible()) {'
    text = replace_once(text, anchor, '\tCofMovementCreateMove(cmd, active);\n' + anchor, 'CreateMove before overlay suppression')
    path.write_text(text)

    path = target / 'cl_dll/hud_update.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    text = replace_once(text, '\tcdata->fov = m_iFOV;',
                        '\tcdata->fov = CofMovementFov(static_cast<float>(m_iFOV), time);',
                        'float FOV output before engine projection')
    path.write_text(text)

    path = target / 'cl_dll/hl/hl_weapons.cpp'
    text = path.read_text()
    # CoF owns every axis of vuser3 as predicted camera spring velocity. Reserve
    # fuser4 for the SDK's secondary ammo type, matching the server adapter.
    # vuser4.z remains the secondary ammo COUNT and must not be overwritten.
    # CLIENT_WEAPONS is currently off; keep the optional prediction path safe too.
    for state in ('from', 'to'):
        text = replace_once(text, f'{state}->client.vuser3[2]',
                            f'{state}->client.fuser4', state+' secondary ammo transport')
    path.write_text(text)

    path = target / 'cl_dll/entity.cpp'
    text = path.read_text()
    anchor = '\tpcd->fuser3\t\t\t\t\t= ppcd->fuser3;'
    text = replace_once(text, anchor, anchor +
                        '\n\t// Native CoF adapter: preserve remapped secondary ammo type.\n'
                        '\tpcd->fuser4 = ppcd->fuser4;', 'prediction secondary ammo type')
    path.write_text(text)

    path = target / 'cl_dll/health.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    text = replace_once(text, '#include "hud.h"', '#include "hud.h"\n#include "cl_entity.h"', 'Health entity header order')
    start = text.index('int CHudHealth::MsgFunc_Health(')
    end = text.index('int CHudHealth::MsgFunc_Damage(', start)
    text = text[:start] + '''int CHudHealth::MsgFunc_Health(const char*, int size, void* data)
{
    // Accept the original CoF wire format and old one-byte test/demo messages.
    if ((size != 1 && size != 3) || !data) return 0;
    BEGIN_READ(data, size);
    const int health = READ_BYTE();
    if (size == 3) {
        const int index = READ_BYTE(), mode = READ_BYTE();
        cl_entity_t* local = gEngfuncs.GetLocalPlayer();
        if (mode) {
            if (index < 1 || index > gEngfuncs.GetMaxClients()) return 0;
            if (!local || index != local->index) return 1;
        }
    }
    m_iFlags |= HUD_ACTIVE;
    if (health != m_iHealth) { m_fFade = FADE_TIME; m_iHealth = health; }
    if (getenv("COF_MOVEMENTTEST")) gEngfuncs.Con_Printf("COF_MOVEMENT_CLIENT_HEALTH value=%d bytes=%d\\n", health, size);
    return 1;
}

''' + text[end:]
    anchor = 'int CHudHealth::MsgFunc_Damage( const char *pszName, int iSize, void *pbuf )\n{'
    text = replace_once(text, anchor, anchor + '\n\tif ((iSize != 12 && iSize != 13) || !pbuf) return 0;', 'Damage bounds')
    anchor = '\tUpdateTiles( gHUD.m_flTime, bitsDamage );'
    text = replace_once(text, anchor, '\tif (iSize == 13) CofMovementDamageFlash(READ_BYTE());\n' + anchor, 'Damage trailing flag')
    path.write_text(text)

    path = target / 'cl_dll/cdll_int.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    anchor = '\tCofStatusHudInit();'
    text = replace_once(text, anchor, anchor+'\n\tCofMovementInit();', 'Init after HUD')
    path.write_text(text)

    path = target / 'cl_dll/hud_msg.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    for name, args in (('ResetHUD', 'const char *pszName, int iSize, void *pbuf'),
                       ('InitHUD', 'const char *pszName, int iSize, void *pbuf')):
        prefix = 'int' if name == 'ResetHUD' else 'void'
        anchor = f'{prefix} CHud::MsgFunc_{name}( {args} )\n{{'
        text = replace_once(text, anchor, anchor+'\n\tCofMovementReset();', name)
    path.write_text(text)

    path = target / 'cl_dll/view.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    anchor = '\tCofGameMenuView(pparams);'
    text = replace_once(text, anchor, '\tCofMovementView(pparams);\n'+anchor, 'Refdef after normal view before menu/weather')
    path.write_text(text)

