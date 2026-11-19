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


def ktx2(image):
    levels = [image.convert('RGBA')]
    while levels[-1].size != (1, 1):
        w, h = levels[-1].size
        levels.append(levels[-1].resize((max(1, w//2), max(1, h//2)), Image.Resampling.BOX))
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
                if channels[3] != (255, 255) or (suffix == 'orm' and channels[0] != (255, 255)):
                    raise ValueError('Unexpected opacity/AO in numeric mask: ' + name)
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
