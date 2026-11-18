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
    text = (original / 'dlls/world.cpp').read_text()
    # CoF does not ship the unrelated Half-Life gib models.
    for name in ('hgibs', 'agibs'):
        text = text.replace(f'\tPRECACHE_MODEL( "models/{name}.mdl" );', '')
    (target / 'dlls/world.cpp').write_text(text)
    text = (original / 'dlls/player.cpp').read_text()
    text = text.replace('\tg_pGameRules->PlayerSpawn( this );',
                        '\tg_pGameRules->PlayerSpawn( this );\n\tpev->weapons |= (1 << WEAPON_SUIT); // enable prototype flashlight')
    (target / 'dlls/player.cpp').write_text(text)
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
    (target / 'cl_dll/hud_redraw.cpp').write_text(text)
    for name, folder in [('prototype_client.cpp', 'cl_dll'), ('prototype_entities.cpp', 'dlls')]:
        shutil.copy2(ROOT / 'src' / name, target / folder / name)
    text = (original / 'mod_options.txt').read_text()
    text = text.replace('GAMEDIR=valve', 'GAMEDIR=cryoffear')
    text = text.replace('CLIENT_WEAPONS=ON', 'CLIENT_WEAPONS=OFF')
    (target / 'mod_options.txt').write_text(text)
    return target


if __name__ == '__main__':
    print(prepare())
