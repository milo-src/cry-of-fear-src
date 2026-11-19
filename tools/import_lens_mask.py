"""Optional local visor mask import. Never writes to a game installation.

Only the generated build cache contains the imported pixels; no game artwork
is added to the repository. Without this cache the shader uses its own mask.
"""
from pathlib import Path
import argparse
import hashlib
import io
import json
import struct
import zipfile
import zlib

ROOT = Path(__file__).resolve().parents[1]

def import_mask(game):
    from PIL import Image
    pak = game / 'C3/Textures.pak'
    member = 'Textures/lights/lens_flares/visor_scratch.dds.0'
    with zipfile.ZipFile(pak) as archive:
        info = archive.getinfo(member)
        if info.flag_bits & 1 or info.file_size > 16 * 1024 * 1024:
            raise ValueError('Unsupported mask archive entry')
        # CryEngine uses different path separators in the two ZIP headers.
        with pak.open('rb') as stream:
            stream.seek(info.header_offset)
            header = stream.read(30)
            if header[:4] != b'PK\x03\x04': raise ValueError('Invalid local ZIP header')
            name_size, extra_size = struct.unpack_from('<HH', header, 26)
            stream.seek(name_size + extra_size, 1)
            packed = stream.read(info.compress_size)
        if info.compress_type == 8: data = zlib.decompress(packed, -15)
        elif info.compress_type == 0: data = packed
        else: raise ValueError('Unsupported ZIP compression')
        if len(data) != info.file_size or zlib.crc32(data) & 0xffffffff != info.CRC:
            raise ValueError('Mask CRC mismatch')
    mask = Image.open(io.BytesIO(data)).convert('L').resize((128, 64), Image.Resampling.LANCZOS)
    folder = ROOT / 'build/rtx-lens'
    folder.mkdir(parents=True, exist_ok=True)
    pixels = mask.tobytes()
    (folder / 'visor.bin').write_bytes(pixels)
    (folder / 'source.json').write_text(json.dumps(dict(
        pak=str(pak), member=member, source_sha256=hashlib.sha256(data).hexdigest(),
        pixels_sha256=hashlib.sha256(pixels).hexdigest(), width=128, height=64), indent=2))
    print('Imported local visor mask:', folder)

def prepare_include(destination):
    folder = ROOT / 'build/rtx-lens'
    if not (folder / 'source.json').exists():
        destination.write_text('#define COF_LOCAL_VISOR_MASK 0\n')
        return
    meta = json.loads((folder / 'source.json').read_text())
    pixels = (folder / 'visor.bin').read_bytes()
    if len(pixels) != 8192 or hashlib.sha256(pixels).hexdigest() != meta['pixels_sha256']:
        raise ValueError('Local visor mask cache mismatch; import again')
    packed = struct.unpack('<2048I', pixels)
    destination.write_text('#define COF_LOCAL_VISOR_MASK 1\nconst uint cofVisor[2048] = uint[](\n' +
        ',\n'.join(','.join(str(v)+'u' for v in packed[i:i+16]) for i in range(0,2048,16)) + '\n);\n')

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game-dir', type=Path, required=True)
    import_mask(parser.parse_args().game_dir)
