from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=ROOT/'analysis/server-graph-lifecycle';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='100ca780 100ca7c0 100cb740 100cbbf0 100cc810 100ccba0 100ccde0 100cdaf0 100cdc20 100cdf20 100cf550'.split()
SUPPORT='100ca860 100cf310 100cf940 100ca650 100ca590 10118480 1013dbb3 100b4aa0 100cdcb0 10120eb0 100f0520'.split()


def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n];return dict(address=f'0x{a:08x}',end_exclusive=f'0x{a+n:08x}',file_offset=hex(o),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def string(a):
 for n in range(1,256):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError(hex(a))
j=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,method='Saved C, static objdump and PE byte reads; no REA session or target execution.',source_c=[],ranges=[],literals=[],vtables=[],save_tables=[],export_thunks=[])
for a in IDS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t);j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='primary'if a in IDS else 'support'))
 start=int(r[1],16);end=0x100cbbc6 if a=='100cb740' else int(r[2],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{a}.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))

# Raw operands used in primary functions; classify each conservatively by instruction width.
for rr in j['ranges']:
 text=(ROOT/rr['path']).read_text()
 for line in text.splitlines():
  m=re.search(r'(XMMWORD|QWORD|DWORD) PTR ds:(0x[0-9a-f]+)',line)
  if m:
   n={'XMMWORD':16,'QWORD':8,'DWORD':4}[m[1]]
   try:r=raw(int(m[2],16),n)
   except ValueError:
    j.setdefault('unbacked_operands',[]).append(dict(address=m[2],width=n));continue
   r['role']='static memory operand; may be mutable global, bytes are on-disk initial state';j['literals'].append(r)

# Native monster vtable and native ENTVARS labels; no SDK object-layout assumption.
r=raw(0x101ce36c,0x240);x=bytes.fromhex(r['bytes_hex']);r.update(class_name='CGenericMonster',slots=[dict(offset=hex(i),target=f'0x{struct.unpack_from("<I",x,i)[0]:08x}')for i in range(0,len(x),4)]);j['vtables'].append(r)
for a,n in [(0x10216e08,49),(0x1021aae0,102)]:
 r=raw(a,n*16);r['fields']=[];x=bytes.fromhex(r['bytes_hex'])
 for i in range(n):
  kind,nm,off,count,flags=struct.unpack_from('<IIIhh',x,i*16);st=string(nm);j['literals'].append(st);r['fields'].append(dict(type_id=kind,name=st['ascii'],offset=hex(off),count=count,flags=flags))
 j['save_tables'].append(r)
# PUSH immediate operands which point at printable NUL strings.
for rr in j['ranges']:
 for line in (ROOT/rr['path']).read_text(encoding='utf-8').splitlines():
  m=re.search(r'push\s+(0x10[0-9a-f]+)',line)
  if m:
   try:
    r=string(int(m[1],16))
    if r['ascii'] and all(c.isprintable() or c in '\n\r\t' for c in r['ascii']):j['literals'].append(r)
   except (ValueError,UnicodeError):pass
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1]);j['api_binding']=dict(initializer='0x100b4aa0',base='0x10222f48',copied_dwords=144,slots=[dict(slot=i,name=names[i],address=f'0x{0x10222f48+i*4:08x}')for i in [21,22,61,63,86,87,89,90,95,96,98,99]],header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest())
j['literals'].append(raw(0x102177f8,0x2c4))
for a in [0x101d6e14,0x101d6e44,0x101d6e4c,0x101d6e54,0x101d7230]:j['literals'].append(string(a))
# Allocation wrappers are local CRT code, not IAT imports; only retain their
# forwarding boundary here. Their allocator implementations remain pending.
for a,n in [(0x10171536,11),(0x101714d1,27)]:j['literals'].append(raw(a,n))
base=int(pe['image_base'],16)
def u32(a):return struct.unpack('<I',bytes.fromhex(raw(a,4)['bytes_hex']))[0]
nt=struct.unpack_from('<I',b,0x3c)[0];opt=nt+24
assert struct.unpack_from('<H',b,opt)[0]==0x10b
d=base+struct.unpack_from('<I',b,opt+104)[0];j['imports']=[]
while bytes.fromhex(raw(d,20)['bytes_hex'])!=bytes(20):
 oft,_,_,nm,iat=struct.unpack('<5I',bytes.fromhex(raw(d,20)['bytes_hex']));i=0
 while u32(base+(oft or iat)+i*4):
  at=base+iat+i*4;lookup=base+(oft or iat)+i*4;v=u32(lookup)
  if at==0x101a100c:
   assert not v&0x80000000
   st=string(base+v+2);dll=string(base+nm)
   j['imports'].append(dict(iat=hex(at),lookup_entry=hex(lookup),import_name=hex(base+v),name=st['ascii'],dll=dll['ascii']))
   j['literals'] += [raw(d,20),raw(at,4),raw(lookup,4),raw(base+v,2),st,dll]
  i+=1
 d+=20
assert len(j['imports'])==1 and j['imports'][0]['name']=='CreateDirectoryA'
j['supporting_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest()) for x in ['external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h']]
j['range_corrections']=[dict(address='0x100cb740',saved_c_end_inclusive='0x100cb9a9',asm_end_exclusive='0x100cbbc6',reason='Saved range ends at JMP100cb9b3, before sorting/bucket/cache continuation. Same frame branches converge on RET100cbbc5; INT3 padding follows. Original C unchanged.')]
j['unbacked_operands']=list({(r['address'],r['width']):r for r in j.get('unbacked_operands',[])}.values())
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']),len(j['source_c']),len(j['literals']))
