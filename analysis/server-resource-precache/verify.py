"""Read-only PE provenance checks for resource precache captures; never loads DLL code.

Checks the adjacent evidence.json (or an explicitly supplied resource-packet manifest).
"""
from pathlib import Path
import hashlib
import json
import re
import struct
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata

path = Path(sys.argv[1]) if len(sys.argv) > 1 else Path(__file__).with_name('evidence.json')
e = json.loads(path.read_text(encoding='utf-8'))
b = Path(e['binary']).read_bytes()
sha = lambda value: hashlib.sha256(value).hexdigest()
va = lambda value: int(value, 16) if isinstance(value, str) else value
assert sha(b) == e['sha256']
assert e['target_executed'] is False
pe = pe_metadata(b)


def raw(address, size):
    for section in pe['sections']:
        offset = address - va(pe['image_base']) - va(section['rva'])
        if 0 <= offset and offset + size <= section['raw_size']:
            start = section['raw_offset'] + offset
            return b[start:start + size]
    raise AssertionError((hex(address), size))


for item in e['source_c'] + e['ranges'] + e.get('supporting_sources', []):
    assert sha((ROOT / item['path']).read_bytes()) == item['sha256'], item['path']
rows = 0
for item in e['ranges']:
    start, end = va(item['start']), va(item['end_exclusive'])
    assert sha(raw(start, end - start)) == item['binary_range_sha256']
    position = start
    for line in (ROOT / item['path']).read_text(encoding='utf-8').splitlines():
        match = re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2}(?:\s+|$))+)', line)
        if match:
            address, value = va(match[1]), bytes.fromhex(match[2])
            assert address == position and raw(address, len(value)) == value
            position += len(value)
            rows += 1
    assert position == end

raw_count = 0


def verify_raw(item):
    global raw_count
    if isinstance(item, list):
        for child in item:
            verify_raw(child)
    elif isinstance(item, dict):
        if 'bytes_hex' in item:
            value = bytes.fromhex(item['bytes_hex'])
            address = va(item['address'])
            assert raw(address, len(value)) == value
            assert sha(value) == item['sha256']
            assert address + len(value) == va(item['end_exclusive'])
            offset = va(item['file_offset'])
            assert b[offset:offset + len(value)] == value
            if 'ascii' in item:
                assert value == item['ascii'].encode('ascii') + b'\0'
            raw_count += 1
        for child in item.values():
            verify_raw(child)


verify_raw(e)
for table in e['vtables']:
    for slot in table['slots']:
        assert struct.unpack('<I', raw(va(table['address']) + va(slot['offset']), 4))[0] == va(slot['target'])
fields = 0
for table in e['save_tables']:
    for index, field in enumerate(table['fields']):
        kind, name, offset, count, flags = struct.unpack('<IIIhH', raw(va(table['address']) + index * 16, 16))
        assert (kind, offset, count, flags) == (field['type_id'], va(field['offset']), field['count'], field['flags'])
        assert raw(name, len(field['name']) + 1) == field['name'].encode('ascii') + b'\0'
        fields += 1
api = e['api_binding']
header = ROOT / api['header']
assert sha(header.read_bytes()) == api['header_sha256']
names = re.findall(r'\(\*(pfn\w+)\)', header.read_text().split('typedef struct enginefuncs_s', 1)[1])
for slot in api['slots']:
    assert names[slot['slot']] == slot['name']
    assert va(slot['address']) == va(api['base']) + slot['slot'] * 4
for index, decal in enumerate(e.get('decals', [])):
    name, value = struct.unpack('<II', raw(0x1021b940 + index * 8, 8))
    assert name == va(decal['name_pointer']) and value == decal['initial_index']
    assert va(decal['result_global']) == 0x1021b944 + index * 8
    assert raw(name, len(decal['name']) + 1) == decal['name'].encode() + b'\0'
for index, style in enumerate(e.get('lightstyles', [])):
    target = struct.unpack('<I', raw(0x100b6b94 + index * 4, 4))[0]
    assert target == va(style['target'])
    assert raw(target, 2) == bytes.fromhex('8b0d') and raw(target + 6, 1) == b'\xb8'
    name = struct.unpack('<I', raw(target + 7, 4))[0]
    assert name == va(style['string_pointer'])
    assert raw(name, len(style['pattern']) + 1) == style['pattern'].encode() + b'\0'
for call in e.get('resource_calls', []):
    assert raw(va(call['string_pointer']), len(call['name']) + 1) == call['name'].encode() + b'\0'
    address = va(call['call_va'])
    if call['callee'].startswith('0x'):
        assert raw(address, 1) == b'\xe8'
        assert (address + 5 + struct.unpack('<i', raw(address + 1, 4))[0]) & 0xffffffff == va(call['callee'])
    else:
        assert raw(address, 6) == bytes.fromhex('ff1530312210')
for table in e['sound_tables']:
    assert table['count']==len(table['items'])
    for item in table['items']:
        ptr=struct.unpack('<I',raw(va(table['address'])+item['index']*4,4))[0]
        assert ptr==va(item['pointer']) and raw(ptr,len(item['name'])+1)==item['name'].encode()+b'\0'
notes = json.loads(path.with_name('notes.json').read_text(encoding='utf-8'))['functions']
assert {item['address'] for item in e['source_c'] if item['role'] == 'primary'} == {note['address'] for note in notes}
for note in notes:
    for item in note['evidence_paths']:
        assert (ROOT / item).is_file(), item
print('PASS', len(e['source_c']), 'C,', len(e['ranges']), 'ASM,', rows, 'byte rows,', raw_count, 'raw,', fields, 'save fields,', len(notes), 'cards')
