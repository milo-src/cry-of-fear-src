"""Integrate the evidence-guided CoF arsenal in the disposable Waf source tree."""
from pathlib import Path
import re
import shutil


def change(text, old, new):
    if text.count(old) != 1:
        raise ValueError('Unexpected weapon integration anchor: ' + old[:100])
    return text.replace(old, new, 1)


def prepare(target):
    root = Path(__file__).resolve().parents[1]
    target = Path(target).resolve()
    if not target.is_relative_to((root / 'build').resolve()):
        raise ValueError('Weapons preparation is restricted to disposable build trees')
    for name in ('cof_weapons.h', 'cof_weapons.cpp', 'cof_ranged.cpp', 'cof_special.cpp', 'cof_ammo.cpp'):
        shutil.copy2(root / 'src/cof/server' / name, target / 'dlls' / name)
    path = target / 'dlls/player.h'
    path.write_text(change(path.read_text(), 'string_t m_cofInventory[7];', 'string_t m_cofInventory[7];\n\tint m_cofQuickSlots[3];'))
    shutil.copy2(root / 'tests/cof/server/weapon_runtime_tests.inc', target / 'dlls/weapon_runtime_tests.inc')
    # Canonical CoF factories replace SDK exports with the same public names.
    own = '\n'.join(p.read_text() for p in (root / 'src/cof/server').glob('cof_*.cpp'))
    names = set(re.findall(r'LINK_ENTITY_TO_CLASS\(\s*(\w+)\s*,', own))
    names.update(re.findall(r'COF_(?:RANGED|SPECIAL|AMMO)\(\w+\s*,\s*(\w+)\s*,', own))
    for path in (target / 'dlls').glob('*.cpp'):
        if path.name.startswith('cof_'): continue
        text = path.read_text()
        text = re.sub(r'LINK_ENTITY_TO_CLASS\(\s*(\w+)\s*,\s*\w+\s*\)\s*;?',
                      lambda m: '/* CoF replacement factory. */\n' if m[1] in names else m[0], text)
        path.write_text(text)
    for name in ('player.cpp', 'client.cpp', 'weapons.cpp'):
        path = target / 'dlls' / name
        text = change(path.read_text(), '#include "weapons.h"', '#include "weapons.h"\n#include "cof_weapons.h"')
        if name == 'player.cpp':
            text = change(text, 'TYPEDESCRIPTION\tCBasePlayer::m_playerSaveData[] =\n{',
                          'TYPEDESCRIPTION\tCBasePlayer::m_playerSaveData[] =\n{\n\tDEFINE_ARRAY(CBasePlayer, m_cofQuickSlots, FIELD_INTEGER, 3),')
            text = change(text, '\t\tCofInventorySync(this);', '\t\tCofInventorySync(this);\n\t\tCofWeaponsHudSync(this);')
            text = change(text, 'CofMovementPreThink(this);', 'CofWeaponsPlayerFrame(this);\n\tCofMovementPreThink(this);')
            text = change(text, '\tDispatchTouch( pent, ENT( pev ) );',
                          '\tCBaseEntity* given = CBaseEntity::Instance(pent);\n'
                          '\tif (given && (given->ObjectCaps() & FCAP_IMPULSE_USE)) given->Use(this, this, USE_TOGGLE, 0);\n'
                          '\telse DispatchTouch( pent, ENT( pev ) );')
            text = change(text, 'REG_USER_MSG( "AmmoX", 2 )', 'REG_USER_MSG( "AmmoX", 3 )')
            text = change(text, 'WRITE_BYTE( Q_max( Q_min( m_rgAmmo[i], 254 ), 0 ) );  // clamp the value to one byte',
                          'WRITE_SHORT( Q_max( Q_min( m_rgAmmo[i], 32767 ), 0 ) ); // original AmmoX BYTE + SHORT')
        elif name == 'weapons.cpp':
            text = change(text, '// Exploration prototype: no Half-Life inventory precaches.', 'CofWeaponsPrecache();')
        else:
            text = change(text, '\tCofInventoryTestFrame();', '\tCofInventoryTestFrame();\n\tCofWeaponsTestFrame();')
            anchor = '\tif (CofInventoryCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;'
            text = change(text, anchor, '\tif (CofWeaponsCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;\n' + anchor)
        path.write_text(text)
    from prepare_weapons_client import prepare as client
    client(target)
    path = target / 'dlls/game.cpp'
    text = 'extern void CofWeaponsRegisterCvars();\n' + path.read_text()
    text = change(text, '\tCofMovementRegisterCvars();', '\tCofMovementRegisterCvars();\n\tCofWeaponsRegisterCvars();')
    path.write_text(text)
