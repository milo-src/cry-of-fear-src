"""Numeric leaf/branch relief from verified masked studio skins; no albedo export."""
import argparse
import hashlib
import json
from pathlib import Path
import struct

import numpy as np
from PIL import Image, ImageFilter
from author_vehicles import fnv


def masks(image, coverage):
    w, h = image.size
    while max(w, h) > 256 and w % 2 == 0 and h % 2 == 0:
        w, h = w // 2, h // 2
    size = w, h
    coverage = coverage.resize(size, Image.Resampling.BOX)
    alpha = np.asarray(coverage, dtype=float) / 255
    rounded = np.asarray(coverage.filter(ImageFilter.GaussianBlur(1.2)), dtype=float) / 255
    rgb = np.asarray(image.resize(size, Image.Resampling.BOX), dtype=float)[..., :3] / 255
    # Coverage rounds each surviving leaf/needle/branch instead of interpreting
    # the palette's bright red/green/blue transparent key as physical relief.
    gy, gx = np.gradient(rounded)
    normal = np.zeros((h, w, 4), dtype=np.uint8)
    normal[..., 0] = np.clip(127.5 - gx * 270, 45, 210)
    normal[..., 1] = np.clip(127.5 - gy * 270, 45, 210)
    normal[..., 2] = 255
    normal[..., 3] = 251  # thin two-sided foliage, no opaque-surface POM
    normal[alpha == 0, :2] = 128
    orm = np.full((h, w, 4), 255, dtype=np.uint8)
    orm[..., 1] = np.clip((.76 - .12 * rgb.max(axis=2)) * 255, 150, 205)
    orm[..., 2] = 0
    return Image.fromarray(orm), Image.fromarray(normal)


def author(game, output):
    path = output / 'manifest.json'
    manifest = json.loads(path.read_text())
    if 'foliage A=251' not in manifest['channels']:
        manifest['channels'] += '; foliage A=251, RG=leaf/branch slopes'
    entries = [e for e in manifest['materials'] if not e.get('foliage')]
    for model in sorted((game / 'models/Props/Vaxter').glob('*.mdl')):
        data = model.read_bytes()
        if data[:4] != b'IDST' or struct.unpack_from('<i', data, 4)[0] != 10:
            raise ValueError('Expected studio v10: ' + str(model))
        count, offset = struct.unpack_from('<2i', data, 180)
        for i in range(count):
            skin, flags, w, h, start = struct.unpack_from('<64s4i', data, offset + 80*i)
            if flags != 64:  # Only masked plant skins, no trunk/animated/additive material.
                continue
            if not 1 < w <= 2048 or not 1 < h <= 2048 or start+w*h+768 > len(data):
                raise ValueError('Invalid masked skin')
            skin = skin.split(b'\0')[0].decode('ascii')
            indexed = Image.frombytes('P', (w, h), data[start:start+w*h])
            indexed.putpalette(data[start+w*h:start+w*h+768])
            image = indexed.convert('RGBA')  # identity hashes use the raw palette, including index 255
            coverage = Image.fromarray(np.where(np.asarray(indexed) == 255, 0, 255).astype('uint8'))
            orm, normal = masks(image, coverage)
            name = 'foliage_' + model.stem.lower() + '_' + str(i)
            for suffix, im in (('orm', orm), ('n', normal)):
                im.save(output/'masks'/(name+'_'+suffix+'.png'))
            entries.append(dict(name=name, foliage=True,
                studio_texture='#'+model.relative_to(game).with_suffix('').as_posix()+'/'+Path(skin).stem+'.mdl',
                width=w, height=h, mask_width=normal.width, mask_height=normal.height,
                source_rgba_fnv1a=fnv(image.tobytes()),
                source_sha256=hashlib.sha256(image.tobytes()).hexdigest(),
                source_model_sha256=hashlib.sha256(data).hexdigest()))
    manifest['materials'] = entries
    path.write_text(json.dumps(manifest, indent=2)+'\n')
    print('Authored', sum(bool(e.get('foliage')) for e in entries), 'masked foliage skins')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game-dir', type=Path, required=True)
    args = parser.parse_args()
    author(args.game_dir, Path(__file__).parent)
