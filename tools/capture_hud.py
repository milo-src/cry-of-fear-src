"""Capture bounded static CoF HUD geometry evidence; never executes the DLL."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess

from index_evidence import pe_metadata

EXPECTED = 'e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360'
RANGES = {
    'tga-loader': (0x10008640, 0x10008702),
    'hud-exports': (0x1001d4a0, 0x1001d575),
    'bar-construction': (0x100362b0, 0x10037d00),
    'message-registration': (0x10038900, 0x10038a04),
    'visibility': (0x10038a10, 0x10038df0),
    'health-cap-message': (0x10039a70, 0x10039c55),
    'stamina-message': (0x1003a360, 0x1003a3da),
    'bar-update': (0x1003bf20, 0x1003d2f9),
    'hud-draw-registration': (0x1006d741, 0x1006d764),
    'message-readers': (0x10080850, 0x10080a60),
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis/local/hud-capture'))
    args = parser.parse_args()
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Resolve addresses again for this different client.dll')
    meta = pe_metadata(data)

    def offset(va):
        for section in meta['sections']:
            delta = va - int(meta['image_base'], 16) - int(section['rva'], 16)
            if 0 <= delta < section['raw_size']:
                return section['raw_offset'] + delta
        raise ValueError(hex(va))

    executable = shutil.which('objdump')
    if not executable:
        raise RuntimeError('GNU objdump is required')
    args.output.mkdir(parents=True, exist_ok=True)
    captured = []
    for name, (start, end) in RANGES.items():
        command = [executable, '-d', '-M', 'intel', f'--start-address={start:#x}',
                   f'--stop-address={end:#x}', str(args.binary.resolve())]
        result = subprocess.run(command, capture_output=True, text=True, check=True, timeout=20)
        (args.output / f'{name}.asm').write_text(result.stdout, encoding='utf-8')
        captured.append(dict(name=name, start=hex(start), end_exclusive=hex(end), command=command,
                             sha256=hashlib.sha256(data[offset(start):offset(end)]).hexdigest()))
    root = args.binary.parent.parent
    assets = []
    for pattern in ('640_healthbar*.tga', '640_staminabar*.tga', 'crosshair.tga'):
        for path in sorted((root / 'gfx/vgui').glob(pattern)):
            raw = path.read_bytes()
            width, height = struct.unpack_from('<HH', raw, 12)
            assets.append(dict(path=path.relative_to(root).as_posix(), width=width, height=height,
                               bits_per_pixel=raw[16], sha256=hashlib.sha256(raw).hexdigest()))
    manifest = dict(binary=str(args.binary.resolve()), sha256=digest, target_executed=False,
                    ranges=captured, assets=assets,
                    constants={'empty_bar_height_per_percent': struct.unpack_from('<d', data, offset(0x101468b8))[0],
                               'coord_scale': struct.unpack_from('<d', data, offset(0x1013ee58))[0]},
                    input_unchanged=hashlib.sha256(args.binary.read_bytes()).hexdigest() == digest,
                    objdump_version=subprocess.run([executable, '--version'], capture_output=True,
                                                   text=True, check=True).stdout.splitlines()[0])
    (args.output / 'capture.json').write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')


if __name__ == '__main__':
    main()
