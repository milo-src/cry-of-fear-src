"""Reproduce bounded hw.dll wire/ABI evidence without loading the target."""
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[3]
OUT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata

BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/hw.dll')
EXPECTED = '9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875'
data = BINARY.read_bytes()
assert hashlib.sha256(data).hexdigest() == EXPECTED
pe = pe_metadata(data)
base = int(pe['image_base'], 16)


def raw(va, length):
    for section in pe['sections']:
        delta = va - base - int(section['rva'], 16)
        if 0 <= delta and delta + length <= section['raw_size']:
            offset = section['raw_offset'] + delta
            blob = data[offset:offset + length]
            return dict(va=hex(va), end_exclusive=hex(va + length), length=length,
                        file_offset=hex(offset), section=section['name'],
                        bytes_hex=blob.hex(), sha256=hashlib.sha256(blob).hexdigest())
    raise ValueError(f'Not wholly raw-backed: {va:#x}+{length:#x}')


def cstring(va):
    for n in range(1, 513):
        r = raw(va, n)
        blob = bytes.fromhex(r['bytes_hex'])
        if blob[-1] == 0:
            r['ascii'] = blob[:-1].decode('ascii')
            return r
    raise ValueError('Unterminated bounded string')


tool = shutil.which('objdump')
assert tool
evidence = {
    'schema': 1,
    'method': 'Read-only original PE bytes and bounded objdump. No target load/execution; no new REA process.',
    'binary': BINARY.as_posix(), 'binary_sha256': EXPECTED,
    'image_base': pe['image_base'], 'sections': pe['sections'],
    'range_convention': 'Preferred-image VA start inclusive/end exclusive. File offsets refer to the pinned original PE. Raw pointer values may be relocated at runtime.',
    'objdump': tool,
    'objdump_version': subprocess.check_output([tool, '--version'], text=True).splitlines()[0],
    'assembly': [], 'raw': [], 'virtual_only': [],
}
ranges = [
    ('loader', 0x1df396e, 0x1df39a6, 'Bounded GiveFnptrsToDll symbol lookup and callback-table/globalvars handoff, not the full loader.'),
    ('write-coord', 0x1da68ad, 0x1da68e4, 'COORD wrapper, MessageBegin guard, float multiply, truncation helper, short writer.'),
    ('ftol', 0x1e7163c, 0x1e71663, 'x87 control word save/change to truncate/FISTP qword/restore and EDX:EAX return.'),
    ('write-short', 0x1d47080, 0x1d470b3, 'Two-byte buffer reservation and explicit little-endian low16 stores.'),
    ('write-string-wrapper', 0x1da68e4, 0x1da6910, 'STRING callback, MessageBegin guard and common message-buffer handoff.'),
    ('write-string', 0x1d47171, 0x1d471b1, 'Null source writes one byte from2079bcc; nonnull source calls length helper then writes length+1.'),
]
for name, start, end, reason in ranges:
    command = [tool, '-d', '-M', 'intel', f'--start-address={start:#x}', f'--stop-address={end:#x}', str(BINARY)]
    assembly = subprocess.check_output(command, text=True, timeout=20)
    path = OUT / (name + '.asm')
    path.write_text(assembly, encoding='utf-8', newline='\n')
    r = raw(start, end - start)
    r.update(reason=reason, command=command, path=path.relative_to(ROOT).as_posix(),
             assembly_sha256=hashlib.sha256(path.read_bytes()).hexdigest())
    evidence['assembly'].append(r)

table = raw(0x1eced18, 76 * 4)
table.update(name='Engine callback table prefix, first76 slots only', stride=4, count=76,
             limitation='This bounded prefix proves the requested slots; it does not claim the complete table has76 entries.')
labels = {46: 'MessageBegin', 47: 'MessageEnd', 48: 'WriteByte',
          53: 'WriteCoord', 54: 'WriteString', 75: 'RegUserMsg'}
table['slots'] = []
for index, target in enumerate(struct.unpack('<76I', bytes.fromhex(table['bytes_hex']))):
    slot = dict(index=index, offset=hex(index * 4), va=hex(0x1eced18 + index * 4), target=hex(target))
    if index in labels:
        slot['abi_label'] = labels[index]
    table['slots'].append(slot)
evidence['raw'].append(table)

constant = raw(0x1e8cc48, 4)
constant.update(name='WriteCoord x87 FMUL m32 constant', float32_le=struct.unpack('<f', bytes.fromhex(constant['bytes_hex']))[0])
evidence['raw'].append(constant)
for address, role in [
    (0x1ec2768, 'WriteCoord missing MessageBegin diagnostic'),
    (0x1ec2798, 'WriteString missing MessageBegin diagnostic'),
    (0x1ecf4f0, 'Loader export lookup name'),
    (0x1ecf500, 'Loader lookup-failure diagnostic'),
]:
    r = cstring(address)
    r['role'] = role
    evidence['raw'].append(r)

va = 0x2079bcc
for section in pe['sections']:
    delta = va - base - int(section['rva'], 16)
    if 0 <= delta < section['virtual_size']:
        assert delta >= section['raw_size']
        evidence['virtual_only'].append({
            'va': hex(va), 'length': 1, 'section': section['name'],
            'section_delta': hex(delta), 'section_raw_size': section['raw_size'],
            'section_virtual_size': section['virtual_size'],
            'file_offset': None, 'raw_backed': False,
            'initial_mapping': 'PE virtual-only tail: initially zero-filled by image loader.',
            'runtime_limitation': 'No current/runtime value or immutability proven. Null STRING writer reads this address; this pass does not trace all writers.',
        })
        break
else:
    raise ValueError('Expected BSS address not in a section')

assert hashlib.sha256(BINARY.read_bytes()).hexdigest() == EXPECTED
for r in evidence['assembly'] + evidence['raw']:
    assert hashlib.sha256(bytes.fromhex(r['bytes_hex'])).hexdigest() == r['sha256']
    assert int(r['end_exclusive'], 16) - int(r['va'], 16) == r['length']
(OUT / 'capture.json').write_text(json.dumps(evidence, ensure_ascii=False, indent=2) + '\n', encoding='utf-8', newline='\n')
print(json.dumps({'assembly_ranges': len(evidence['assembly']), 'callback_prefix_slots': len(table['slots']),
                  'coord_multiplier': constant['float32_le'], 'strings': [r['ascii'] for r in evidence['raw'] if 'ascii' in r],
                  'virtual_only': evidence['virtual_only']}, indent=2))
