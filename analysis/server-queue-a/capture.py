"""Static brush-family evidence. Does not load or execute original DLL."""
from pathlib import Path
import hashlib, json, re, shutil, struct, subprocess, sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
data=BINARY.read_bytes();assert hashlib.sha256(data).hexdigest()==SHA
pe=pe_metadata(data);tool=shutil.which('objdump');assert tool
TARGETS='1000fb00 1000fbc0 1000fc20 1000fc80 1000fda0 1000fe00 1000fee0 10010230 100102e0 100105e0 10010b10 10010df0 10010e80 10010f80 10010f90 10011120 100114a0 10011a90 10011bc0 10012480 10011810 100123a0 10011880 100123e0 10012210 10012270 10010270 100112b0 10012320 100122a0 100113f0 10010570 10011450 10012360'.split()
SUPPORT='1000e1f0 10017110 10018350 100183a0 10012420 100c4b90 10119fe0 10102b80 101021d0 1000e2e0 1000dba0 10102480'.split()
def raw(v,n):
    for s in pe['sections']:
        delta=v-int(pe['image_base'],16)-int(s['rva'],16)
        if 0<=delta and delta+n<=s['raw_size']:
            o=s['raw_offset']+delta;b=data[o:o+n]
            return dict(va=hex(v),end_exclusive=hex(v+n),length=n,file_offset=hex(o),bytes_hex=b.hex(),sha256=hashlib.sha256(b).hexdigest())
    raise ValueError(hex(v))
def string(v):
    for n in range(1,257):
        r=raw(v,n);b=bytes.fromhex(r['bytes_hex'])
        if b[-1]==0:r['ascii']=b[:-1].decode('ascii');return r
    raise ValueError('Unterminated bounded string')
j=dict(schema=1,scope='Six brush utility classes;34 manually read saved functions, not full native class coverage.',binary=BINARY.as_posix(),binary_sha256=SHA,image_base=pe['image_base'],method='Existing Ghidra C + bounded read-only PE/objdump. No REA process, DLL load, game, build or runtime validation.',range_convention='Preferred-image VA start inclusive,end exclusive; file offsets/raw SHA refer to exact original binary.',objdump=tool,objdump_version=subprocess.check_output([tool,'--version'],text=True).splitlines()[0],targets=[],support=[],assembly=[],vtables=[],raw=[],export_thunks=[])
for a in TARGETS+SUPPORT:
    p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)
    record=dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),saved_name=re.search(r'// name: (.*)',t)[1],saved_range_inclusive=[r[1],r[2]])
    j['targets' if a in TARGETS else 'support'].append(record)
factories=[('conveyor',0x1000fb00,0x101a3a20,0x100124e0,0xe0),('illusionary',0x1000fbc0,0x101a3b40,0x10012500,0x180),('monsterclip',0x1000fc20,0x101a3d8c,0x10012510,0xe0),('rotating',0x1000fc80,0x101a3ebc,0x10012530,0xf8),('wall',0x1000fda0,0x101a37e0,0x10012560,0xe0),('wall_toggle',0x1000fe00,0x101a3900,0x10012570,0xe0)]
asm=[(f'{n}-factory',a,a+0x5c,'Complete contiguous factory body, including existing-private-data return.')for n,a,_,_,_ in factories]
asm += [('rotating-hurt',0x100102e0,0x10010425,'Touch normalization,zero-distance fallback,damage and velocity overwrite.'),('rotating-keyvalue',0x100105e0,0x100107ec,'Full KeyValue function,especially spawnorigin handled-flag behavior.'),('rotating-spawn',0x100114a0,0x100116c5,'Full Spawn function,axes and flags.'),('conveyor-pack',0x100122a0,0x10012310,'Full rendercolor speed encoder.'),('wall-off',0x10012210,0x1001223b,'Hide/collision off and SetOrigin current-origin relink.'),('wall-on',0x10012270,0x1001229b,'Show/collision on and SetOrigin current-origin relink.')]
for name,a,b,scope in asm:
    cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={b:#x}',str(BINARY)]
    p=OUT/(name+'.asm');p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n');r=raw(a,b-a)
    r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd,scope=scope);j['assembly'].append(r)
for name,a,v,thunk,size in factories:
    r=raw(v,0xf4);r.update(class_name='CFunc'+''.join(x.title()for x in name.split('_')),factory=hex(a),allocation_bytes=size,
                         bounded_prefix_only=True,slots=[dict(offset=hex(i),target=hex(struct.unpack('<I',bytes.fromhex(r['bytes_hex'])[i:i+4])[0]))for i in range(0,0xf4,4)])
    assert bytes.fromhex('c700')+struct.pack('<I',v) in bytes.fromhex(raw(a,0x5c)['bytes_hex'])
    j['vtables'].append(r)
    r=raw(thunk,5);b=bytes.fromhex(r['bytes_hex']);assert b[0]==0xe9
    r.update(name='func_'+name,target=hex(thunk+5+struct.unpack('<i',b[1:])[0]));assert int(r['target'],16)==a;j['export_thunks'].append(r)
r=raw(0x10211430,6*16);r['name']='CFuncRotating derived save table';r['count']=6;r['stride']=16;r['fields']=[]
for i in range(6):
    kind,n,offset,count,flags=struct.unpack('<IIIhh',bytes.fromhex(r['bytes_hex'])[i*16:(i+1)*16]);s=string(n);j['raw'].append(s)
    r['fields'].append(dict(record_va=hex(0x10211430+i*16),type_id=kind,name=s['ascii'],offset=hex(offset),count=count,flags=flags))
j['raw'].append(r)
for v in [0x101a4010,0x101a3c60]:j['raw'].append(string(v))
j['virtual_only']=[dict(va='0x10222f34',end_exclusive='0x10222f40',length=12,
    name='shared vector referenced by brush methods',raw_backed=False,
    initial_pe_state='Loader zero-fill; not captured runtime values or proof of immutability.')]
for v in [0x101a1ee0,0x101a1390]:
    r=raw(v,4);r['float32_le']=struct.unpack('<f',bytes.fromhex(r['bytes_hex']))[0];j['raw'].append(r)
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print('Targets',len(j['targets']),'asm',len(j['assembly']),'vtable prefixes',len(j['vtables']))
