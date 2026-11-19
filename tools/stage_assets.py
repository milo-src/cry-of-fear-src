"""Stage local CoF art/maps only. Original executables and DLLs are never copied."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import time
import os

ROOT = Path(__file__).resolve().parents[1]
ALLOWED = {'.bsp', '.wad', '.mdl', '.spr', '.wav', '.mp3', '.ogg', '.tga', '.bmp',
           '.png', '.jpg', '.jpeg', '.dds', '.txt', '.seq', '.lst', '.lmp', '.res', '.custom', '.chw', '.scr'}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear'))
    parser.add_argument('--reset-settings', action='store_true')
    args = parser.parse_args()
    source = args.game.resolve()
    target = ROOT / 'out/runtime/cryoffear'
    if not (source / 'maps/c_sdkmap1.bsp').is_file():
        raise RuntimeError('Choose a CoF game asset directory containing maps/c_sdkmap1.bsp')
    target.mkdir(parents=True, exist_ok=True)
    copied = 0
    skipped = 0
    for path in source.rglob('*'):
        if not path.is_file():
            continue
        rel = path.relative_to(source)
        if path.suffix.lower() not in ALLOWED or (len(rel.parts) > 1 and rel.parts[0].lower() not in
                {'maps', 'models', 'sprites', 'sound', 'gfx', 'textures', 'events', 'inventoryitems', 'resource', 'mp3'}):
            continue
        destination = target / rel
        destination.parent.mkdir(parents=True, exist_ok=True)
        if destination.exists() and destination.stat().st_size == path.stat().st_size and destination.stat().st_mtime_ns == path.stat().st_mtime_ns:
            skipped += 1
            continue
        shutil.copy2(path, destination)
        copied += 1
    # Original GameUI also searches platform/resource for VGUI controls and
    # localization. Preserve the game's overrides; never stage platform DLLs.
    platform = source.parent / 'platform/resource'
    for path in platform.rglob('*'):
        if not path.is_file() or path.suffix.lower() not in {'.tga', '.res', '.txt'}:
            continue
        rel = Path('resource') / path.relative_to(platform)
        if (source / rel).exists():
            continue
        destination = target / rel
        destination.parent.mkdir(parents=True, exist_ok=True)
        if destination.exists() and destination.stat().st_size == path.stat().st_size and destination.stat().st_mtime_ns == path.stat().st_mtime_ns:
            skipped += 1
            continue
        shutil.copy2(path, destination)
        copied += 1
    # A separate entity patch bypasses the test map's 28-second scripted intro.
    # It does not modify the BSP or any file in the installed game.
    bsp = (source / 'maps/c_sdkmap1.bsp').read_bytes()
    offset, size = struct.unpack_from('<ii', bsp, 4)
    entities = bsp[offset:offset + size].decode('latin1').rstrip('\0')
    blocks = re.findall(r'\{[^{}]*\}', entities)
    removed = [b for b in blocks if re.search(r'"classname"\s+"trigger_once"', b)
               and re.search(r'"target"\s+"multiintro"', b)]
    if len(removed) != 1:
        raise RuntimeError('Unexpected test map intro: inspect before altering entities')
    patch = target / 'maps/c_sdkmap1.ent'
    patch.write_text('\n'.join(b for b in blocks if b not in removed) + '\n', encoding='latin1')
    modified = max(time.time(), (target / 'maps/c_sdkmap1.bsp').stat().st_mtime + 2)
    os.utime(patch, (modified, modified))
    for file in (ROOT / 'runtime').rglob('*'):
        if file.is_file():
            destination = target / file.relative_to(ROOT / 'runtime')
            if file.name == 'config.cfg' and destination.exists() and not args.reset_settings:
                continue
            destination.parent.mkdir(parents=True, exist_ok=True)
            shutil.copy2(file, destination)
    # One-time migration from the old text-only prototype, which forced hud_draw=0.
    # Later user changes to hud_draw remain persistent.
    migration = target / '.cof-tga-hud-v1'
    if not migration.exists():
        config = target / 'config.cfg'
        text = config.read_text(encoding='latin1')
        text = re.sub(r'(?m)^hud_draw\s+"?0"?\s*$', 'hud_draw "1"', text)
        config.write_text(text, encoding='latin1')
        migration.write_text('Original TGA HUD enabled\n')
    # The shipped hud.txt header declares 211 entries but only 57 are present.
    migration = target / '.cof-chat-v1'
    if not migration.exists():
        config = target / 'config.cfg'
        text = config.read_text(encoding='latin1')
        bindings = dict(re.findall(r'(?mi)^bind\s+"([^"\r\n]+)"\s+"([^"\r\n]*)"', text))
        for key, command in (('y', 'messagemode'), ('u', 'messagemode2')):
            if key not in bindings and command not in bindings.values():
                text += f'\nbind "{key}" "{command}"\n'
        config.write_text(text, encoding='latin1')
        migration.write_text('Chat defaults installed without replacing existing bindings\n')
    hud = target / 'sprites/hud.txt'
    lines = hud.read_text(encoding='latin1').splitlines()
    entries = [line for line in lines[1:] if len(line.split('//')[0].split()) == 7]
    hud.write_text(str(len(entries)) + '\n' + '\n'.join(lines[1:]) + '\n', encoding='latin1')
    from stage_movement import stage as stage_movement
    stage_movement(target.parent, source)
    manifest = dict(source=str(source), copied=copied, unchanged=skipped,
                    binary_policy='Only asset extensions allowed; no original DLL/EXE/PDB copied',
                    test_map_sha256=hashlib.sha256(bsp).hexdigest(),
                    prototype_entity_patch='c_sdkmap1.ent removes only trigger_once -> multiintro')
    (ROOT / 'out/runtime/assets-manifest.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(f'Staged assets: {copied} copied, {skipped} unchanged; original game binaries excluded')


if __name__ == '__main__':
    main()
