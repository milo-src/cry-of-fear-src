"""Capture scoped instruction evidence for the REA-located inventory UI.

This never loads or executes the original DLLs. REA pseudocode captures and
interpretation are indexed in analysis/ui/inventory.md.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import subprocess

from index_evidence import pe_metadata

TARGETS = {
    'client': ('client.dll', 'e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360', [
        ('color_button', 0x1001e960, 0x1001ea70),
        ('constructor', 0x10041140, 0x10043130),
        ('actions', 0x10043130, 0x10043990),
        ('layout', 0x10044a30, 0x10044ef0),
        ('key_event', 0x10044040, 0x10044100),
        ('message', 0x1006ff40, 0x100709a0),
        ('toggle_callbacks', 0x100790c0, 0x100791e0),
        ('toggle_registration', 0x10079dff, 0x10079e32),
        ('constructor_caller', 0x100a8514, 0x100a8585),
    ]),
    'server': ('hl.dll', '751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641', [
        ('server_inventoryequip', 0x100e40e0, 0x100e42f0),
    ]),
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('game_directory', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis/local/inventory-ui-static'))
    args = parser.parse_args()
    executable = shutil.which('objdump')
    if not executable:
        parser.error('GNU objdump is required')
    args.output.mkdir(parents=True, exist_ok=True)
    result = {'target_executed': False, 'producer': subprocess.check_output(
        [executable, '--version'], text=True).splitlines()[0], 'targets': []}
    for kind, (name, expected, ranges) in TARGETS.items():
        path = (args.game_directory / 'cl_dlls' / name).resolve()
        data = path.read_bytes()
        digest = hashlib.sha256(data).hexdigest()
        if digest != expected:
            raise ValueError(f'{name}: different build; re-resolve addresses with REA')
        meta = pe_metadata(data)

        def offset(va):
            for section in meta['sections']:
                delta = va - int(meta['image_base'], 16) - int(section['rva'], 16)
                if 0 <= delta < section['raw_size']:
                    return section['raw_offset'] + delta
            raise ValueError(f'Not file-backed: {va:#x}')

        target = dict(kind=kind, path=str(path), sha256=digest, ranges=[])
        for label, start, end in ranges:
            command = [executable, '-d', '-M', 'intel', f'--start-address={start:#x}',
                       f'--stop-address={end:#x}', str(path)]
            capture = subprocess.run(command, capture_output=True, text=True,
                                     check=True, timeout=20)
            (args.output / (label + '.asm')).write_text(capture.stdout, encoding='utf-8')
            target['ranges'].append(dict(label=label, start=hex(start), end_exclusive=hex(end),
                file_offset=offset(start), bytes_sha256=hashlib.sha256(
                    data[offset(start):offset(start) + end - start]).hexdigest(), command=command))
        target['unchanged_after_capture'] = hashlib.sha256(path.read_bytes()).hexdigest() == digest
        result['targets'].append(target)
    (args.output / 'identity.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(f'Saved scoped static evidence: {args.output}')


if __name__ == '__main__':
    main()
