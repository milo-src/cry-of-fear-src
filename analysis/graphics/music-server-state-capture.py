"""Bounded, read-only PE evidence. Never loads/executes the target DLL."""
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata

BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
EXPECTED = '751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
OUT = ROOT / 'analysis/graphics'
data = BINARY.read_bytes()
assert hashlib.sha256(data).hexdigest() == EXPECTED
pe = pe_metadata(data)


def raw(va, length):
    for section in pe['sections']:
        delta = va - int(pe['image_base'], 16) - int(section['rva'], 16)
        if 0 <= delta and delta + length <= section['raw_size']:
            offset = section['raw_offset'] + delta
            blob = data[offset:offset + length]
            return {'va': hex(va), 'end_exclusive': hex(va + length),
                    'length': length, 'file_offset': hex(offset),
                    'section': section['name'], 'bytes_hex': blob.hex(),
                    'sha256': hashlib.sha256(blob).hexdigest()}
    raise ValueError(hex(va))


def cstring(va):
    blob = bytearray()
    for i in range(512):
        b = bytes.fromhex(raw(va + i, 1)['bytes_hex'])
        blob.extend(b)
        if b == b'\0':
            r = raw(va, len(blob))
            r['ascii'] = blob[:-1].decode('ascii')
            return r
    raise ValueError('Unterminated bounded string')


tool = shutil.which('objdump')
assert tool
evidence = {'schema': 1, 'method': 'Static PE byte reads and bounded objdump disassembly; no target execution or new REA session.',
            'binary': BINARY.as_posix(), 'binary_sha256': EXPECTED,
            'image_base': pe['image_base'], 'objdump': tool,
            'objdump_version': subprocess.check_output([tool, '--version'], text=True).splitlines()[0],
            'range_convention': 'VA start inclusive, end exclusive; file offsets refer to the exact SHA-256-pinned original.',
            'assembly': [], 'raw': []}
for name, start, end, reason in [
    ('stop-early', 0x100eb83a, 0x100eb917, 'First PostThink music sender, pending/path guards and both stop/play branches.'),
    ('stop-late', 0x100ef0b0, 0x100ef190, 'Second PostThink music sender, pending/path guards and both stop/play branches.'),
    ('factory', 0x101084f0, 0x1010854c, 'Complete allocated factory block through ret; excludes following function.'),
    ('save', 0x100f1940, 0x100f1983, 'Complete contiguous saved-Ghidra Save range, including PLAYER table/count caller.'),
    ('restore', 0x100f14c0, 0x100f17da, 'Complete contiguous saved-Ghidra Restore range, table/count and music requeue.'),
]:
    command = [tool, '-d', '-M', 'intel', f'--start-address={start:#x}', f'--stop-address={end:#x}', str(BINARY)]
    assembly = subprocess.check_output(command, text=True, timeout=20)
    path = OUT / f'music-server-state-{name}.asm'
    path.write_text(assembly, encoding='utf-8', newline='\n')
    record = raw(start, end - start)
    record.update({'reason': reason, 'command': command, 'path': path.relative_to(ROOT).as_posix(),
                   'assembly_sha256': hashlib.sha256(path.read_bytes()).hexdigest()})
    evidence['assembly'].append(record)

table = raw(0x10217fe8, 207 * 16)
table.update({'name': 'PLAYER save fields', 'stride': 16, 'count': 207,
              'record_layout': 'little-endian <IIIhh: type, name VA, object offset, count, flags; count/stride corroborated by Save/Restore and field helpers.'})
fields = []
for i in range(207):
    r = raw(0x10217fe8 + i * 16, 16)
    kind, name_va, offset, count, flags = struct.unpack('<IIIhh', bytes.fromhex(r['bytes_hex']))
    name = cstring(name_va)
    fields.append({'index': i, 'record_va': r['va'], 'type': kind, 'name_va': hex(name_va),
                   'name': name['ascii'], 'object_offset': hex(offset), 'count': count, 'flags': flags})
    if offset in (0x2310, 0x2318, 0x231c, 0x2320):
        evidence['raw'].append(name)
table['fields'] = fields
table['pending_0x2314_records'] = [r for r in fields if r['object_offset'] == '0x2314']
evidence['raw'].append(table)
sizes = raw(0x1021b140, 18 * 4)
sizes.update({'name': 'Native save-field type sizes', 'type_sizes': list(struct.unpack('<18I', bytes.fromhex(sizes['bytes_hex'])))})
evidence['raw'].append(sizes)
for offset in (0x2c, 0x34, 0xe8):
    r = raw(0x101e4438 + offset, 4)
    r.update({'name': f'Factory-assigned vtable101e4438 slot+{offset:x}',
              'target': hex(struct.unpack('<I', bytes.fromhex(r['bytes_hex']))[0])})
    evidence['raw'].append(r)
evidence['raw'].append(cstring(0x101a8bf0))
evidence['raw'].append(cstring(0x101db5e4))
evidence['raw'].append(cstring(0x101db5ec))
for address, name in [(0x10115c80, 'ambient_fmodstream'), (0x10115f20, 'trigger_mp3'), (0x10115f30, 'trigger_mp3audio')]:
    r = raw(address, 5)
    blob = bytes.fromhex(r['bytes_hex'])
    assert blob[0] == 0xe9
    r.update({'name': name, 'encoding': 'E9 rel32 jump', 'target': hex(address + 5 + struct.unpack('<i', blob[1:])[0])})
    evidence['raw'].append(r)
assert hashlib.sha256(BINARY.read_bytes()).hexdigest() == EXPECTED
(OUT / 'music-server-state-evidence.json').write_text(json.dumps(evidence, indent=2, ensure_ascii=False) + '\n', encoding='utf-8', newline='\n')
print(json.dumps({'assembly_ranges': len(evidence['assembly']), 'player_fields': len(fields), 'pending_present': bool(table['pending_0x2314_records']), 'music_fields': [r for r in fields if 0x2310 <= int(r['object_offset'], 16) <= 0x2320]}, indent=2))
