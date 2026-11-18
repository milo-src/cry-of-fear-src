"""Statically inventory shipped CoF menu resources, BSP entities, and studio metadata."""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import struct

from PIL import Image
from inspect_door_maps import parse_entities
from inspect_ui_assets import contact

ROOT = Path(__file__).resolve().parents[1]


def digest(data):
    return hashlib.sha256(data).hexdigest()


def cstring(data):
    return data.split(b'\0', 1)[0].decode('latin1')


def studio(data):
    if data[:4] != b'IDST' or struct.unpack_from('<i', data, 4)[0] != 10:
        raise ValueError('Unsupported studio model')
    seq_count, seq_offset = struct.unpack_from('<ii', data, 164)
    tex_count, tex_offset = struct.unpack_from('<ii', data, 180)
    sequences = []
    for i in range(seq_count):
        off = seq_offset + i * 176
        sequences.append({'index': i, 'label': cstring(data[off:off+32]),
                          'fps': struct.unpack_from('<f', data, off+32)[0],
                          'flags': struct.unpack_from('<i', data, off+36)[0],
                          'frames': struct.unpack_from('<i', data, off+56)[0],
                          'bounds': list(struct.unpack_from('<6f', data, off+96))})
    textures = []
    for i in range(tex_count):
        off = tex_offset + i * 80
        flags, width, height, pixels = struct.unpack_from('<4i', data, off+64)
        textures.append({'name': cstring(data[off:off+64]), 'flags': flags,
                         'size': [width, height], 'pixel_offset': pixels})
    return {'sequences': sequences, 'textures': textures}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear'))
    parser.add_argument('--output', type=Path, default=ROOT/'analysis/menu/assets.json')
    parser.add_argument('--previews', type=Path, default=ROOT/'analysis/local/menu-assets')
    args = parser.parse_args()
    game = args.game.resolve()
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.previews.mkdir(parents=True, exist_ok=True)
    maps, assets = [], []
    candidates = set((game/'gfx/vgui/menu').glob('*'))
    candidates.update((game/'resource').rglob('*'))
    candidates.update(game.glob('*_textscheme.txt'))
    for name in ('menu_logo.tga', 'menu_logo_ts.tga', 'backgroundtoall.TGA', '640_difficulty.tga', '640_difficultylocked.tga', 'mouse.tga'):
        candidates.add(game/'gfx/vgui'/name)
    candidates.update([game/'models/bookmenu.mdl', game/'media/menu.mp3', game/'mp3/gamestartup.mp3', game/'valve.rc', game/'menu_settings.txt'])
    for name in ('c_game_menu1', 'c_loadgame'):
        path = game/'maps'/f'{name}.bsp'
        data = path.read_bytes()
        offset, length = struct.unpack_from('<ii', data, 4)
        entities = parse_entities(data[offset:offset+length])
        tex_off, tex_size = struct.unpack_from('<ii', data, 20)
        tex_count = struct.unpack_from('<i', data, tex_off)[0]
        textures = []
        for i in range(tex_count):
            relative = struct.unpack_from('<i', data, tex_off+4+4*i)[0]
            if relative < 0:
                continue
            off = tex_off + relative
            width, height, mip0 = struct.unpack_from('<3I', data, off+16)
            textures.append({'name': cstring(data[off:off+16]), 'size': [width, height], 'embedded': mip0 != 0})
        maps.append({'path': path.relative_to(game).as_posix(), 'sha256': digest(data), 'entity_lump_offset': offset,
                     'entity_lump_size': length, 'entity_lump_sha256': digest(data[offset:offset+length]),
                     'class_counts': dict(Counter(e['keyvalues']['classname'] for e in entities)),
                     'entities': entities, 'textures': textures})
        (args.previews/f'{name}.ent').write_bytes(data[offset:offset+length])
        for entity in entities:
            kv = entity['keyvalues']
            if kv.get('model', '').lower().endswith(('.mdl', '.spr')):
                candidates.add(game/kv['model'])
            if kv.get('message', '').lower().endswith('.wav'):
                candidates.add(game/'sound'/kv['message'])
    groups = {'buttons': [], 'panels': []}
    for path in sorted(candidates):
        if not path.is_file():
            continue
        data = path.read_bytes()
        relative = path.relative_to(game).as_posix()
        row = {'path': relative, 'bytes': len(data), 'sha256': digest(data)}
        if path.suffix.lower() == '.tga':
            with Image.open(path) as source:
                image = source.convert('RGBA')
                row.update(size=list(image.size), alpha_range=list(image.getchannel('A').getextrema()), alpha_bounds=image.getchannel('A').getbbox())
            if '/vgui/menu/' in relative:
                groups['buttons'].append((path.name, image))
            elif '/vgui/' in relative:
                groups['panels'].append((path.name, image))
        elif path.suffix.lower() == '.mdl':
            row['studio'] = studio(data)
        elif path.suffix.lower() in ('.txt', '.res'):
            row['encoding'] = 'utf-16le-bom' if data.startswith(b'\xff\xfe') else 'ascii' if data.isascii() else 'undetermined'
        assets.append(row)
    for name, pictures in groups.items():
        contact(pictures, args.previews/f'{name}.png', cell=(360, 150) if name == 'buttons' else (400, 320), columns=4)
    background = Image.new('RGB', (1024, 768))
    for y in range(3):
        for x, letter in enumerate('abcd'):
            with Image.open(game/f'resource/background/1024_{y+1}_{letter}_loaded.tga') as tile:
                background.paste(tile, (x*256, y*256))
    background.save(args.previews/'background-2d.png')
    args.output.write_text(json.dumps({'schema': 1, 'method': 'Static file parsing; no original code executed.',
                                     'target': str(game), 'maps': maps, 'assets': assets}, ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(f'Inspected {len(assets)} resources and {len(maps)} maps; output {args.output}')


if __name__ == '__main__':
    main()
