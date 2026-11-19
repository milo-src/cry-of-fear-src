"""Build committed PNG masks into linear RGBA8 KTX2 sidecars for RTGL1.

Uncompressed KTX2 layout follows the bundled Khronos KTX headers/createdfd.c.
No original game files or numpy required to build the authored pack.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct

from PIL import Image


def material_levels(image, normal=None):
    """Linear numeric mips; optionally carry normal slope variance into ORM.

    Keep base masks untouched. Average r^4 and slope moments independently:
    recomputing moments from already filtered roughness would count variance
    repeatedly. The bounded 0.25 response is a conservative renderer heuristic,
    not a reconstruction of the source material's physical microgeometry.
    """
    levels = [image.convert('RGBA')]
    moments = None
    if normal is not None:
        if normal.size != image.size or normal.mode != 'RGBA':
            raise ValueError('Normal/ORM dimensions or mode mismatch')
        moments = []
        for orm, n in zip(levels[0].getdata(), normal.getdata()):
            sx, sy = n[0]/127.5-1, n[1]/127.5-1
            moments.append(((orm[1]/255)**4, sx, sy, sx*sx+sy*sy))
    while levels[-1].size != (1, 1):
        w, h = levels[-1].size
        nw, nh = max(1, w//2), max(1, h//2)
        source = list(levels[-1].getdata())
        pixels, next_moments = [], []
        for y in range(nh):
            for x in range(nw):
                indices = [sy*w+sx for sy in range(y*h//nh, (y+1)*h//nh)
                           for sx in range(x*w//nw, (x+1)*w//nw)]
                count = len(indices)
                pixel = [(sum(source[i][c] for i in indices)+count//2)//count for c in range(4)]
                if moments is not None:
                    mean = tuple(sum(moments[i][c] for i in indices)/count for c in range(4))
                    next_moments.append(mean)
                    variance = max(0, mean[3]-mean[1]**2-mean[2]**2)
                    pixel[1] = int(255*min(1, mean[0]+.25*variance)**.25+.5)
                pixels.append(tuple(pixel))
        mip = Image.new('RGBA', (nw, nh))
        mip.putdata(pixels)
        levels.append(mip)
        moments = next_moments if moments is not None else None
    return levels


def ktx2(image, normal=None):
    levels = material_levels(image, normal)
    # Khronos basic DFD v1.3; RGBSDA / BT709 / LINEAR, straight alpha.
    dfd = [92, 0, 2 | (88 << 16), 1 | (1 << 8) | (1 << 16), 0, 4, 0]
    for offset, channel in ((0, 0), (8, 1), (16, 2), (24, 15)):
        dfd += [offset | (7 << 16) | (channel << 24), 0, 0, 255]
    dfd = struct.pack('<23I', *dfd)
    dfd_offset = 80 + len(levels)*24
    payload = bytearray(dfd)
    index = []
    # KTX2 stores smallest mip first, while the level index is largest first.
    for level in reversed(levels):
        while (dfd_offset + len(payload)) % 8:
            payload.append(0)
        data = level.tobytes()
        index.append((dfd_offset + len(payload), len(data), len(data)))
        payload.extend(data)
    header = b'\xabKTX 20\xbb\r\n\x1a\n' + struct.pack('<13I2Q',
        37, 1, image.width, image.height, 0, 0, 1, len(levels), 0,
        dfd_offset, len(dfd), 0, 0, 0, 0)
    return header + b''.join(struct.pack('<3Q', *item) for item in reversed(index)) + payload


def build(source, output):
    manifest = json.loads((source/'manifest.json').read_text())
    output.mkdir(parents=True, exist_ok=True)
    header = ['/* Generated from the authored mask manifest. */', 'static CofPbrEntry cof_pbr_entries[] = {']
    files = {}
    for entry in manifest['materials']:
        name = entry['name']
        if not name.replace('_', '').isalnum() or name != name.lower():
            raise ValueError('Invalid texture key: ' + name)
        header.append('    {"#maps/%s.mip", "cof_pbr/%s", %du, %du, %du},' %
            (name, name, entry['width'], entry['height'], entry['source_rgba_fnv1a']))
        for suffix in ('orm', 'n'):
            with Image.open(source/'masks'/f'{name}_{suffix}.png') as image:
                if image.mode != 'RGBA' or image.size != (entry['width'], entry['height']):
                    raise ValueError('Invalid mask dimensions/mode: ' + name)
                channels = image.getextrema()
                valid_alpha = ((255,255),(254,254)) if suffix=='n' else ((255,255),)
                if channels[3] not in valid_alpha or (suffix == 'orm' and channels[0] != (255, 255)):
                    raise ValueError('Unexpected opacity/AO in numeric mask: ' + name)
                if suffix == 'orm':
                    with Image.open(source/'masks'/f'{name}_n.png') as normal:
                        data = ktx2(image, normal)
                else:
                    data = ktx2(image)
            filename = f'{name}_{suffix}.ktx2'
            (output/filename).write_bytes(data)
            files[filename] = hashlib.sha256(data).hexdigest()
    header += ['};', '']
    (output/'rtx_pbr_catalog.inc').write_text('\n'.join(header))
    (output/'pack.json').write_text(json.dumps(dict(version=1, files=files), indent=2)+'\n')
    print(f'Built {len(files)} numeric PBR sidecars (no albedo/emissive replacements)')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    build(args.source, args.output)
