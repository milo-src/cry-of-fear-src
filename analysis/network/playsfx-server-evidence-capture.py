"""Bounded static PlaySFX evidence; original DLL is never loaded or executed."""
import hashlib, json, re, shutil, struct, subprocess, sys
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
EXPECTED = '751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
data = BINARY.read_bytes()
assert hashlib.sha256(data).hexdigest() == EXPECTED
pe = pe_metadata(data)
def raw(va, n):
    for s in pe['sections']:
        delta = va-int(pe['image_base'],16)-int(s['rva'],16)
        if 0 <= delta and delta+n <= s['raw_size']:
            offset=s['raw_offset']+delta; b=data[offset:offset+n]
            return dict(va=hex(va),end_exclusive=hex(va+n),length=n,file_offset=hex(offset),bytes_hex=b.hex(),sha256=hashlib.sha256(b).hexdigest())
    raise ValueError(hex(va))
def string(va):
    for n in range(1,256):
        r=raw(va,n); b=bytes.fromhex(r['bytes_hex'])
        if b[-1]==0:
            r['ascii']=b[:-1].decode('ascii');return r
    raise ValueError('bounded string unterminated')
tool=shutil.which('objdump');assert tool
j=dict(schema=1,binary=BINARY.as_posix(),binary_sha256=EXPECTED,image_base=pe['image_base'],
       method='Read-only bounded objdump/PE; no original process or REA session.',
       ranges='Preferred-image VA start inclusive, end exclusive; raw file offsets and hashes pinned to binary SHA.',
       objdump=tool,objdump_version=subprocess.check_output([tool,'--version'],text=True).splitlines()[0],assembly=[],raw=[],saved_C_sha256={},caller_occurrences=[])
for name,a,b,scope in [
    ('sender',0x10116a40,0x10116c25,'Complete sender range,8DWORD call ABI and both wire branches.'),
    ('caller',0x10047b9f,0x10047bc7,'Glock call setup through ret; excludes next instruction at47bc7.'),
    ('player-factory',0x100125e0,0x1001263c,'Factory assigning CBasePlayer vtable; used only to bind two position slots.'),
    ('weapon-frame',0x1011d560,0x1011d81b,'Prefix of ItemPostFrame through sound-latch release; excludes unrelated remainder.'),
]:
    cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={b:#x}',str(BINARY)]
    p=OUT/f'playsfx-server-evidence-{name}.asm'
    p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n')
    r=raw(a,b-a);r.update(scope=scope,command=cmd,path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest());j['assembly'].append(r)
for va in (0x101a4da8+0x104,0x101a4da8+0x228):
    r=raw(va,4);r.update(vtable='0x101a4da8',slot=hex(va-0x101a4da8),target=hex(struct.unpack('<I',bytes.fromhex(r['bytes_hex']))[0]));j['raw'].append(r)
j['raw'] += [string(0x101e52d4),string(0x101adef4)]
explicit = {'0x10116a40','0x1013f5f0','0x100125e0','0x100e01e0','0x1000d5a0','0x10119680','0x1005b2e0','0x1007f070','0x100e5fc0','0x10116a30'}
files=sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c'))
for p in files:
    t=p.read_text(encoding='utf-8');rel=p.relative_to(ROOT).as_posix()
    calls=[] if p.stem=='0x10116a40' else list(re.finditer(r'FUN_10116a40\((.*?)\);',t,re.S))
    if calls or p.stem in explicit:j['saved_C_sha256'][rel]=hashlib.sha256(p.read_bytes()).hexdigest()
    for m in calls:
        j['caller_occurrences'].append(dict(path=rel,saved_selector_address=p.stem,line=t.count('\n',0,m.start())+1,arguments_as_decompiled=' '.join(m[1].split()),limitation='Lexical caller only; decompiler often hides aggregate/by-value arguments. Not a complete native xref graph.'))
j['caller_scan_scope']=dict(directory='decompiled/server/partial-pass/functions',C_files=len(files),occurrences=len(j['caller_occurrences']),source_files=len({r['path'] for r in j['caller_occurrences']}))
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==EXPECTED
(OUT/'playsfx-server-evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print(j['caller_scan_scope'])
