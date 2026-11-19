"""Wire reconstructed ladders into a disposable SDK tree, never original resources."""
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]


def replace_once(text, old, new, label):
    if text.count(old) != 1:
        raise ValueError(f"Unexpected ladder integration anchor: {label}")
    return text.replace(old, new, 1)


def apply(target):
    target = Path(target)
    for name in ('ladders.cpp', 'ladders.h'):
        shutil.copy2(ROOT / 'src/cof/server' / name, target / 'dlls' / name)
    shutil.copy2(ROOT / 'tests/cof/server/ladder_runtime_tests.inc', target / 'dlls/ladder_runtime_tests.inc')
    path = target / 'dlls/triggers.cpp'
    text = path.read_text()
    text = replace_once(text, 'LINK_ENTITY_TO_CLASS( func_ladder, CLadder )',
                        '// CoF func_ladder and func_laddercontrol are in ladders.cpp.', 'stock ladder export')
    path.write_text(text)
    path = target / 'dlls/world.cpp'
    text = path.read_text()
    text = '#include "ladders.h"\n' + text
    anchor = 'void CWorld::Precache( void )\n{'
    text = replace_once(text, anchor, anchor + '\n\tCofLadderPrecache();', 'world precache')
    path.write_text(text)
    path = target / 'dlls/player.cpp'
    text = '#include "ladders.h"\n' + path.read_text()
    for signature, call in [('void CBasePlayer::PreThink( void )', 'CofLadderPlayerFrame(this);'),
                            ('void CBasePlayer::Spawn( void )', 'CofLadderCancel(this);'),
                            ('void CBasePlayer::Killed( entvars_t *pevAttacker, int iGib )', 'CofLadderCancel(this);')]:
        anchor = signature + '\n{'
        text = replace_once(text, anchor, anchor + '\n\t' + call, signature)
    path.write_text(text)
    path = target / 'dlls/client.cpp'
    text = '#include "ladders.h"\n' + path.read_text()
    anchor = 'void ClientCommand( edict_t *pEntity )\n{'
    text = replace_once(text, anchor, anchor + '\n\tif (pEntity->pvPrivateData && CofLadderCommand(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)), CMD_ARGV(0))) return;', 'client command')
    anchor = 'void ClientDisconnect( edict_t *pEntity )\n{'
    text = replace_once(text, anchor, anchor + '\n\tif (pEntity->pvPrivateData) CofLadderCancel(static_cast<CBasePlayer*>(CBaseEntity::Instance(pEntity)));', 'disconnect')
    anchor = '\tCofMovementTestFrame();'
    text = replace_once(text, anchor, anchor + '\n\tCofLadderTestFrame();', 'runtime tests after movement fixture')
    anchor = 'void SetupVisibility( edict_t *pViewEntity, edict_t *pClient, unsigned char **pvs, unsigned char **pas )\n{'
    text = replace_once(text, anchor, anchor + '\n\tif (pClient->pvPrivateData) {\n\t\tedict_t* camera = CofLadderViewEntity(static_cast<CBasePlayer*>(CBaseEntity::Instance(pClient)));\n\t\tif (camera) pViewEntity = camera;\n\t}', 'camera visibility')
    # Restrict the insertion to the end of AddToFullPack, not another return 1.
    begin = text.index('int AddToFullPack(')
    end = text.index('// defaults for clientinfo messages', begin)
    block = text[begin:end]
    # Unlike visible render entities, hidden ladder hulls must still reach client
    # PM prediction. Keep EF_NODRAW in the packet: both engines' CL_LinkPacketEntities
    # skip drawing it, while CL_AddLinksToPmove accepts SOLID_NOT/CONTENTS_LADDER.
    # Do not exempt trigger brushes or manager entities from the ordinary visibility gate.
    block = replace_once(block, 'if( ( ent->v.effects & EF_NODRAW ) && ( ent != host ) )',
        'if( ( ent->v.effects & EF_NODRAW ) && ( ent != host ) &&\n'
        '\t    !( ent->v.solid == SOLID_NOT && ent->v.skin == CONTENTS_LADDER ) )',
        'hidden ladder prediction visibility')
    block = replace_once(block, '\treturn 1;\n}', '\tCofLadderPackCamera(state, ent);\n\treturn 1;\n}', 'camera network state')
    # The animated eye can leave the camera model's PVS leaf during mount/exit.
    # Its owner still needs every animation snapshot for both view and sound.
    block = replace_once(block, '\tif( ent != host )\n',
        '\tif( ent != host && !( ent->v.owner == host && FClassnameIs(ent, "camera_model") ) )\n',
        'owner camera survives model PVS culling')
    text = text[:begin] + block + text[end:]
    path.write_text(text)
