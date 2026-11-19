"""Import the installed Crysis menu's separate rain film into a local cache.

No game installation or tracked artwork is written. The CRN1 cache stores
RGB delta runs, with independent keyframes for bounded seeking. Playback is
silent and needs no video codec, game executable, or audio initialization.
"""
from pathlib import Path
import argparse
import hashlib
import json
import struct
import subprocess
import tempfile
import zipfile
import zlib

ROOT = Path(__file__).resolve().parents[1]


def read_member(pak, name):
    with zipfile.ZipFile(pak) as archive:
        info = archive.getinfo(name)
    if info.flag_bits & 1 or info.file_size > 32 * 1024 * 1024:
        raise ValueError('Unsupported rain archive entry')
    with pak.open('rb') as stream:
        stream.seek(info.header_offset)
        header = stream.read(30)
        if header[:4] != b'PK\x03\x04':
            raise ValueError('Invalid ZIP header')
        name_size, extra_size = struct.unpack_from('<HH', header, 26)
        stream.seek(name_size + extra_size, 1)
        packed = stream.read(info.compress_size)
    if info.compress_type == 8:
        data = zlib.decompress(packed, -15)
    elif info.compress_type == 0:
        data = packed
    else:
        raise ValueError('Unsupported compression')
    if len(data) != info.file_size or zlib.crc32(data) & 0xffffffff != info.CRC:
        raise ValueError('Rain CRC mismatch')
    return data


def encode_frame(frame, previous):
    import numpy as np
    changed = np.any(frame != previous, axis=1) if previous is not None else np.ones(len(frame), bool)
    bounds = np.r_[0, np.flatnonzero(changed[1:] != changed[:-1]) + 1, len(frame)]
    result = bytearray()
    for start, end in zip(bounds[:-1], bounds[1:]):
        literal = bool(changed[start])
        for pos in range(int(start), int(end), 32768):
            count = min(int(end) - pos, 32768)
            result += struct.pack('<H', count - 1 | (0x8000 if literal else 0))
            if literal:
                result += frame[pos:pos + count].tobytes()
    return result


def import_rain(game):
    import imageio_ffmpeg
    import numpy as np
    pak = game / 'C3/Videos-part0.pak'
    member = 'Videos/FrontEnd_Background_Rain.usm'
    video = read_member(pak, member)
    width, height, fps, key = 960, 540, 25, 125
    cache = ROOT / 'build/rtx-menu-rain'
    cache.mkdir(parents=True, exist_ok=True)
    offsets, payload, previous = [0], bytearray(), None
    with tempfile.TemporaryDirectory(prefix='cof-menu-rain-') as temp:
        source = Path(temp) / 'rain.usm'
        source.write_bytes(video)
        command = [imageio_ffmpeg.get_ffmpeg_exe(), '-v', 'fatal', '-nostdin',
                   '-c:v', 'mpeg1video', '-i', str(source), '-an',
                   '-vf', f'scale={width}:{height}:flags=lanczos,fps={fps}',
                   '-f', 'rawvideo', '-pix_fmt', 'rgb24', '-']
        with subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.PIPE) as proc:
            while True:
                raw = proc.stdout.read(width * height * 3)
                if not raw:
                    break
                if len(raw) != width * height * 3 or len(offsets) > 2500:
                    proc.kill()
                    raise ValueError('Unexpected video length')
                frame = np.frombuffer(raw, dtype=np.uint8).reshape(-1, 3)
                index = len(offsets) - 1
                payload += encode_frame(frame, previous if index % key else None)
                previous = frame
                offsets.append(len(payload))
            if proc.wait() != 0:
                raise RuntimeError(proc.stderr.read().decode(errors='replace'))
    count = len(offsets) - 1
    if not count or len(payload) > 240 * 1024 * 1024:
        raise ValueError('Rain cache size out of bounds')
    data = struct.pack('<4s5I', b'CRN1', width, height, count, fps, key)
    data += struct.pack(f'<{len(offsets)}I', *offsets) + payload
    (cache / 'rain.crn').write_bytes(data)
    (cache / 'source.json').write_text(json.dumps(dict(
        pak=str(pak), member=member, source_sha256=hashlib.sha256(video).hexdigest(),
        pixels_sha256=hashlib.sha256(data).hexdigest(), width=width, height=height,
        frames=count, fps=fps, key_interval=key, bytes=len(data),
        evidence='BackgroundObject.gfx sprite4: NetStream.loop=true; PlaceObject3 blendMode=8 (add)',
        limitation='Installed Remastered, not independently verified against the 2013 release'), indent=2))
    print(f'Imported rain: {count} frames, {count/fps:.2f}s, {len(data)/1048576:.1f} MiB')


def stage(runtime):
    import shutil
    cache = ROOT / 'build/rtx-menu-rain'
    if not (cache / 'source.json').exists():
        return {}
    meta = json.loads((cache / 'source.json').read_text())
    source = cache / 'rain.crn'
    if hashlib.sha256(source.read_bytes()).hexdigest() != meta['pixels_sha256']:
        raise ValueError('Menu rain cache mismatch; import again')
    relative = 'cryoffear/rtx_menu/rain.crn'
    destination = runtime / relative
    destination.parent.mkdir(parents=True, exist_ok=True)
    shutil.copy2(source, destination)
    return {relative: meta['pixels_sha256']}


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game-dir', type=Path, required=True)
    import_rain(parser.parse_args().game_dir)
