"""Derive reproducible export/import indexes from a saved REA evidence bundle.

Reads game files only to verify hashes and decode PE metadata. Never loads DLLs.
Usage: python tools/index_evidence.py analysis/evidence/initial-rea.json
"""
import argparse
import csv
import ctypes
import hashlib
import json
from pathlib import Path
import re
import struct


def pe_metadata(data):
    if data[:2] != b'MZ':
        raise ValueError('Not a DOS/PE image')
    pe = struct.unpack_from('<I', data, 0x3c)[0]
    if data[pe:pe + 4] != b'PE\0\0':
        raise ValueError('Not a PE image')
    machine, count, stamp, _, _, opt_size, flags = struct.unpack_from('<HHIIIHH', data, pe + 4)
    opt = pe + 24
    if struct.unpack_from('<H', data, opt)[0] != 0x10b:
        raise ValueError('This initial metadata reader requires PE32')
    base = struct.unpack_from('<I', data, opt + 28)[0]
    sections = []
    for i in range(count):
        pos = opt + opt_size + i * 40
        name = data[pos:pos + 8].split(b'\0')[0].decode('ascii', 'replace')
        size, rva, raw_size, raw_offset = struct.unpack_from('<IIII', data, pos + 8)
        sections.append(dict(name=name, rva=hex(rva), virtual_size=size,
                             raw_offset=raw_offset, raw_size=raw_size))
    pdb_hints = [m.group().decode('ascii', 'replace') for m in
                 re.finditer(rb'[\x20-\x7e]{1,260}\.pdb', data)]
    return dict(machine=machine, image_base=hex(base), coff_timestamp_raw=stamp,
                flags=flags, sections=sections, embedded_pdb_path_hints=pdb_hints)


def demangler():
    try:
        fn = ctypes.WinDLL('dbghelp').UnDecorateSymbolName
        fn.argtypes = [ctypes.c_char_p, ctypes.c_char_p, ctypes.c_uint32, ctypes.c_uint32]
        fn.restype = ctypes.c_uint32
    except (AttributeError, OSError):
        return lambda name: ''

    def decode(name):
        if not name.startswith('?'):
            return ''
        buf = ctypes.create_string_buffer(16384)
        return buf.value.decode('ascii', 'replace') if fn(name.encode('ascii'), buf, len(buf), 0) else ''
    return decode


def write_csv(path, fields, rows):
    with path.open('w', newline='', encoding='utf-8') as handle:
        writer = csv.DictWriter(handle, fieldnames=fields)
        writer.writeheader()
        writer.writerows(rows)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('bundle', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis'))
    args = parser.parse_args()
    bundle = json.loads(args.bundle.read_text(encoding='utf-8'))
    exports_dir = args.output / 'exports'
    exports_dir.mkdir(parents=True, exist_ok=True)
    decode = demangler()
    manifests = []
    for record in bundle['records']:
        if record['operation'] != 'inspect_native_exports':
            continue
        result = record['normalized_result']
        artifact = result['artifact']
        binary = Path(artifact['path'])
        data = binary.read_bytes()
        if hashlib.sha256(data).hexdigest() != artifact['sha256']:
            raise ValueError(f'Target changed since REA inspection: {binary}')
        rows = []
        for row in result['exports']:
            name = row['name'] or ''
            rows.append(dict(ordinal=row['ordinal'], name=name, demangled=decode(name),
                             address=row['address'], forwarder=row['forwarder'] or '',
                             evidence_id=record['evidence_id']))
        write_csv(exports_dir / f'{binary.stem}.csv',
                  ['ordinal', 'name', 'demangled', 'address', 'forwarder', 'evidence_id'], rows)
        entry = dict(module=binary.name, sha256=artifact['sha256'], bytes=len(data),
                     export_count=len(rows), coverage=result['coverage'],
                     exports_evidence_id=record['evidence_id'], **pe_metadata(data))
        imports = [r for r in bundle['records'] if r['operation'] == 'inspect_pe_imports'
                   and r['normalized_result']['artifact']['sha256'] == artifact['sha256']]
        if imports:
            imported = imports[0]
            entry['imports_evidence_id'] = imported['evidence_id']
            entry['imported_libraries'] = [lib['name'] for lib in imported['normalized_result']['imports']]
            import_rows = [dict(library=lib['name'], name=fn['name'] or '', ordinal=fn['ordinal'],
                                iat_rva=hex(fn['iat_rva']), evidence_id=imported['evidence_id'])
                           for lib in imported['normalized_result']['imports'] for fn in lib['functions']]
            write_csv(exports_dir / f'{binary.stem}-imports.csv',
                      ['library', 'name', 'ordinal', 'iat_rva', 'evidence_id'], import_rows)
        manifests.append(entry)
    (args.output / 'modules.json').write_text(json.dumps(manifests, indent=2) + '\n', encoding='utf-8')
    for module in manifests:
        print(f"{module['module']}: {module['export_count']} exports; base {module['image_base']}")


if __name__ == '__main__':
    main()
