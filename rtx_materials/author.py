"""Author numeric PBR masks from read-only WAD evidence; never export albedo.

Run explicitly when authoring, not during a regular build. Requires numpy/Pillow.
Periodic filtering avoids introducing a seam into repeating surface textures.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct

import numpy as np
from PIL import Image

ROOT = Path(__file__).resolve().parent


def wad_images(folder, names):
    found = {}
    for path in sorted(folder.glob('*.wad')):
        data = path.read_bytes()
        if data[:4] != b'WAD3':
            continue
        count, directory = struct.unpack_from('<ii', data, 4)
        for index in range(count):
            pos, size, _, kind, compression, _, raw = struct.unpack_from('<iiiBBH16s', data, directory + index * 32)
            name = raw.split(b'\0')[0].decode('latin1').lower()
            if name not in names or compression or kind != 0x43:
                continue
            mip = data[pos:pos + size]
            w, h, *offsets = struct.unpack_from('<6I', mip, 16)
            if not offsets[0]:
                continue
            palette = offsets[3] + (w // 8) * (h // 8)
            if struct.unpack_from('<H', mip, palette)[0] != 256:
                raise ValueError('Expected 256-color palette: ' + name)
            image = Image.frombytes('P', (w, h), mip[offsets[0]:offsets[0] + w * h])
            image.putpalette(mip[palette + 2:palette + 770])
            rgba = image.convert('RGBA')
            if name in found and found[name][0].tobytes() != rgba.tobytes():
                raise ValueError('Ambiguous WAD texture: ' + name)
            found[name] = rgba, path.name
    if names - found.keys():
        raise ValueError('Missing WAD evidence: ' + str(names - found.keys()))
    return found


def blur(field, sigma):
    # Fourier Gaussian with periodic boundaries; removes baked broad shading.
    h, w = field.shape
    fy, fx = np.fft.fftfreq(h)[:, None], np.fft.fftfreq(w)[None, :]
    return np.fft.ifft2(np.fft.fft2(field) * np.exp(-2 * np.pi**2 * sigma**2 * (fx*fx + fy*fy))).real


def fnv(data):
    value = 2166136261
    for byte in data:
        value = ((value ^ byte) * 16777619) & 0xffffffff
    return value


def masks(image, profile):
    rgb = np.asarray(image, dtype=np.float64)[..., :3] / 255
    lum = rgb @ [0.2126, 0.7152, 0.0722]
    # Local detail only: never interpret the original broad painted shadows as
    # a height field. Strength is bounded even on contrasty low-res textures.
    detail = blur(lum, 0.65) - blur(lum, 3.5)
    medium = blur(lum, 2.0) - blur(lum, 12.0)
    # Retain medium-scale relief as well as fine grain, while rejecting broad
    # baked lighting. Slopes and parallax now derive from this same height field.
    height = (0.35 * np.clip(detail / max(float(np.std(detail)) * 3, 0.06), -1, 1)
              + 0.65 * np.clip(medium / max(float(np.std(medium)) * 3, 0.06), -1, 1))
    relief_height = np.clip(.5 + height * min(.48, profile['relief'] * 1.5), .02, .98)
    gx = (np.roll(relief_height, -1, 1) - np.roll(relief_height, 1, 1)) * image.width * .006
    gy = (np.roll(relief_height, -1, 0) - np.roll(relief_height, 1, 0)) * image.height * .006
    normal = np.ones((*lum.shape, 4), dtype=np.float64)
    # RTGL uses tangent XY slopes (not a conventional normalized XYZ normal).
    normal[..., 0] = 0.5 - np.clip(gx, -0.95, 0.95) * 0.5
    normal[..., 1] = 0.5 - np.clip(gy, -0.95, 0.95) * 0.5
    normal[..., 2] = relief_height
    normal[..., 3] = 254/255
    rough = profile['roughness'] - profile['variation'] * height
    metallic = np.zeros_like(lum)
    if profile['kind'] == 'rust':
        rust = np.clip((rgb[..., 0] - rgb[..., 2]) * 5 + (rgb[..., 0] - rgb[..., 1]) * 2, 0, 1)
        rough = rough * (1 - rust) + 0.93 * rust
        metallic = profile['metallic'] * (1 - rust)**2
    # Broad, subdued damp variation on authored paving only. No emission,
    # puddle geometry or uniform mirror coating, and no color texture changes.
    if profile.get('damp'):
        h, w = lum.shape
        y, x = np.mgrid[:h, :w]
        patch = np.sin(2*np.pi*x/w + 0.7*np.sin(2*np.pi*y/h)) * np.cos(2*np.pi*y/h)
        rough -= profile['damp'] * np.clip(patch, 0, 1)**2
    orm = np.ones((*lum.shape, 4), dtype=np.float64)
    orm[..., 1] = np.clip(rough, 0.40 if profile['kind'] in ('earth', 'stone') else 0.32, 0.99)
    orm[..., 2] = metallic
    return [Image.fromarray(np.rint(a*255).astype(np.uint8)) for a in (orm, normal)]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--wad-dir', type=Path, required=True)
    parser.add_argument('--only', nargs='+', help='Author selected profile keys and retain the rest of the committed pack')
    args = parser.parse_args()
    profiles = json.loads((ROOT/'profiles.json').read_text())['materials']
    if args.only:
        profiles = {name: profiles[name] for name in args.only}
    if any(not name.replace('_', '').isalnum() or name != name.lower() for name in profiles):
        raise ValueError('Profile keys must be lowercase texture names using letters, digits and underscores')
    sources = wad_images(args.wad_dir, set(profiles))
    output = ROOT/'masks'
    output.mkdir(exist_ok=True)
    manifest = dict(version=1, channels='ORM: G=perceptual roughness, B=metallic; N: RG=tangent slopes, B=height, A=254 height marker (255 legacy)', materials=[])
    if args.only and (ROOT/'manifest.json').exists():
        manifest['materials'] = [e for e in json.loads((ROOT/'manifest.json').read_text())['materials'] if e['name'] not in profiles]
    for name, profile in profiles.items():
        original, wad = sources[name]
        orm, normal = masks(original, profile)
        for suffix, mask in (('orm', orm), ('n', normal)):
            mask.save(output/f'{name}_{suffix}.png', optimize=True)
        manifest['materials'].append(dict(name=name, width=original.width, height=original.height,
            source_wad=wad, source_rgba_sha256=hashlib.sha256(original.tobytes()).hexdigest(),
            source_rgba_fnv1a=fnv(original.tobytes())))
    (ROOT/'manifest.json').write_text(json.dumps(manifest, indent=2)+'\n')
    print(f'Authored {len(profiles)*2} masks; original resources read only')


if __name__ == '__main__':
    main()
