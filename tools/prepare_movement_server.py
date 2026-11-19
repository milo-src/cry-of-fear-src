"""Wire evidence-guided player systems into the disposable SDK tree only."""
from pathlib import Path
import shutil


FIELDS = {
    'm_cofMovementVersion': ('int', 'FIELD_INTEGER'),
    'm_cofStamina': ('float', 'FIELD_FLOAT'),
    'm_cofStaminaLast': ('float', 'FIELD_FLOAT'),
    'm_cofStaminaNext': ('float', 'FIELD_TIME'),
    'm_cofStaminaImpulse': ('float', 'FIELD_FLOAT'),
    'm_cofHealLast': ('int', 'FIELD_INTEGER'),
    'm_cofHealQueue': ('int', 'FIELD_INTEGER'),
    'm_cofDodgeNext': ('float', 'FIELD_TIME'),
    'm_cofFallUntil': ('float', 'FIELD_TIME'),
    'm_cofJumpHeight': ('int', 'FIELD_INTEGER'),
    'm_cofLowHealth': ('int', 'FIELD_INTEGER'),
    'm_cofNightmare': ('int', 'FIELD_INTEGER'),
    'm_cofInStairs': ('int', 'FIELD_INTEGER'),
    'm_cofStairsNext': ('float', 'FIELD_TIME'),
    'm_cofUnlimitedStamina': ('int', 'FIELD_INTEGER'),
    'm_cofDisableJump': ('int', 'FIELD_INTEGER'),
    'm_cofDisableDodge': ('int', 'FIELD_INTEGER'),
    'm_cofHoldBreath': ('int', 'FIELD_INTEGER'),
    'm_cofHoldBreathUntil': ('float', 'FIELD_TIME'),
    'm_cofBreathSoundNext': ('float', 'FIELD_TIME'),
    'm_cofHeartbeatNext': ('float', 'FIELD_TIME'),
    'm_cofWeaponSprintBlocked': ('int', 'FIELD_INTEGER'),
    'm_cofScopedRifle': ('int', 'FIELD_INTEGER'),
}


def replace_once(text, old, new, label):
    if text.count(old) != 1:
        raise ValueError('Unexpected movement hook: ' + label)
    return text.replace(old, new, 1)


def replace_body(text, signature, body):
    start = text.index(signature)
    opening = text.index('{', start)
    level = 1
    end = opening + 1
    # These selected functions contain no braces inside string literals.
    while level:
        if text[end] == '{': level += 1
        elif text[end] == '}': level -= 1
        end += 1
    return text[:opening] + '{\n' + body + '\n}' + text[end:]


def prepare_server_movement(root: Path, target: Path):
    root, target = Path(root), Path(target)
    if (target / 'dlls').resolve() == (root / 'external/hlsdk-portable/dlls').resolve():
        raise ValueError('Movement patch must never modify the original vendor source')
    for name in ('movement.cpp', 'movement.h'):
        shutil.copy2(root / 'src/cof/server' / name, target / 'dlls' / name)
    shutil.copy2(root / 'tests/cof/server/movement_runtime_tests.inc', target / 'dlls/movement_runtime_tests.inc')
    path = target / 'dlls/player.h'
    text = path.read_text()
    declarations = '\n'.join('\t%s %s;' % (types[0], name) for name, types in FIELDS.items())
    anchor = 'class CBasePlayer : public CBaseMonster\n{\npublic:'
    text = replace_once(text, anchor, anchor + '\n' + declarations, 'player members')
    path.write_text(text)
    path = target / 'dlls/player.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    anchor = 'TYPEDESCRIPTION\tCBasePlayer::m_playerSaveData[] =\n{'
    fields = ''.join('\n\tDEFINE_FIELD(CBasePlayer, %s, %s),' % (name, types[1]) for name, types in FIELDS.items())
    text = replace_once(text, anchor, anchor + fields, 'save fields')
    anchor = '\tg_pGameRules->PlayerSpawn( this );'
    text = replace_once(text, anchor, anchor + '\n\tCofMovementSpawn(this);', 'spawn')
    anchor = '\tRenewItems();'
    text = replace_once(text, anchor, '\tCofMovementRestore(this);\n' + anchor, 'restore')
    anchor = '\tg_pGameRules->PlayerThink( this );'
    text = replace_once(text, anchor, '\tCofMovementPreThink(this);\n' + anchor, 'prethink')
    anchor = '\t// check to see if player landed hard enough to make a sound'
    end = '\t// select the proper animation for the player character'
    start, stop = text.index(anchor), text.index(end)
    text = text[:start] + '\tCofMovementLand(this);\n\n' + text[stop:]
    # 100ead70 invokes 100f4d70 BEFORE ItemPostFrame (100e4f80), then landing.
    # The vendor has no weapon ResetMaxSpeed writer requiring reversed order.
    text = replace_once(text, '\tItemPostFrame();', '\tCofMovementPostThink(this);\n\tItemPostFrame();', 'postthink order')
    text = replace_body(text, 'void CBasePlayer::Jump()', '\tCofMovementJump(this);')
    anchor = '\t\tCofInventorySync(this);'
    text = replace_once(text, anchor, '\t\tCofMovementSync(this);\n' + anchor, 'HUD initialization')
    text = replace_once(text, 'REG_USER_MSG( "Health", 1 )', 'REG_USER_MSG( "Health", 3 )', 'Health wire size')
    # Replace the normal HP sender with the CoF 3-byte broadcast, retaining its cache semantics.
    start = text.index('\tif( pev->health != m_iClientHealth )')
    stop = text.index('\n\tif( (int)pev->armorvalue != m_iClientBattery )', start)
    text = text[:start] + ('\tif( pev->health != m_iClientHealth )\n\t{\n'
        '\t\tCofMovementHealth(this);\n\t\tm_iClientHealth = (int)pev->health;\n\t}\n') + text[stop:]
    death = '\tMESSAGE_BEGIN( MSG_ONE, gmsgHealth, NULL, pev );\n\t\tWRITE_BYTE( m_iClientHealth );\n\tMESSAGE_END();'
    text = replace_once(text, death, '\tCofMovementHealth(this);', 'death Health message')
    armor = '!( pev->flags & FL_GODMODE ) && pev->armorvalue && !( bitsDamageType & ( DMG_FALL | DMG_DROWN ) )'
    text = replace_once(text, armor, 'pev->armorvalue && !( bitsDamageType & 0x140a4 )', 'original armor exclusions')
    # The old SDK consumes these bits as acid/lava immunities; CoF uses them for sprint/exhaustion.
    text = text.replace('!( pev->flags & FL_IMMUNE_SLIME )', 'true')
    text = text.replace('!( pev->flags & FL_IMMUNE_LAVA )', 'true')
    path.write_text(text)
    path = target / 'dlls/world.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    anchor = 'void CWorld::Precache( void )\n{'
    path.write_text(replace_once(text, anchor, anchor + '\n\tCofMovementPrecache();', 'world precache'))
    path = target / 'dlls/game.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    anchor = 'void GameDLLInit( void )\n{'
    path.write_text(replace_once(text, anchor, anchor + '\n\tCofMovementRegisterCvars();', 'cvar registration'))
    path = target / 'dlls/client.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    anchor = 'void StartFrame( void )\n{'
    text = replace_once(text, anchor, anchor + '\n\tCofMovementTestFrame();', 'runtime tests')
    anchor = '\tif (CofInventoryCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;'
    text = replace_once(text, anchor, '\tif (CofMovementCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), pcmd)) return;\n' + anchor, 'client commands')
    anchor = '\tcd->maxspeed\t\t= pev->maxspeed;'
    text = replace_once(text, anchor, anchor + '\n\tcd->fuser3 = pev->fuser3; // shared PM stumble/climb state', 'prediction movement state')
    text = text.replace('cd->fuser3 = pl->m_flAmmoStartCharge;', 'cd->fuser3 = pev->fuser3;')
    text = replace_once(text, 'cd->vuser3.z = gun->m_iSecondaryAmmoType;',
                        'cd->fuser4 = gun->m_iSecondaryAmmoType;', 'secondary ammo adapter')
    # CoF PM uses vuser3 for angular spring velocity. Export after the SDK's
    # weapon fields. Optional SDK prediction uses fuser4 for secondary ammo type
    # (matched by the client preparer); vuser4.z still holds secondary ammo count.
    signature = 'void UpdateClientData('
    begin = text.index(signature)
    opening = text.index('{', begin)
    closing, depth = opening + 1, 1
    while depth:
        if text[closing] == '{': depth += 1
        elif text[closing] == '}': depth -= 1
        closing += 1
    text = text[:closing - 1] + '\tcd->vuser3 = pev->vuser3; // CoF camera spring, after weapon overrides\n' + text[closing - 1:]
    path.write_text(text)
    # SP already has the linear formula. MP's SDK option incorrectly substitutes fixed10 damage.
    path = target / 'dlls/multiplay_gamerules.cpp'
    text = '#include "movement.h"\n' + path.read_text()
    text = replace_body(text, 'float CHalfLifeMultiplay::FlPlayerFallDamage( CBasePlayer *pPlayer )', '\treturn CofMovementFallDamage(pPlayer);')
    path.write_text(text)
