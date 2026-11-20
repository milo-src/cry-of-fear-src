"""Static original state restore evidence; never executes the target DLL."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
h=lambda v:hashlib.sha256(v).hexdigest();b=B.read_bytes();assert h(b)==SHA
pe=pe_metadata(b)
PRIMARY='1001cc90 1004c100 100a1f70 100a4500 100e9ab0'.split();SUPPORT='10017740 10017790 10119680 1001f160 101005c0 10100910 101008e0 10119fa0 100deff0 100ea5c0 100f67f0 100125e0 10119060 10118590 10119810 10119c00 10101ff0 100e5fc0 100b4aa0 100e9230 100183d0 10018400 100496b0 1008f7a0 1008ff20 1004aca0 100aa170 100aa420 1004db30'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;v=b[off:off+n]
   return dict(address=hex(a),end_exclusive=hex(a+n),file_offset=hex(off),bytes_hex=v.hex(),sha256=h(v))
 raise ValueError(hex(a))
def string(a):
 for n in range(1,512):
  x=raw(a,n);v=bytes.fromhex(x['bytes_hex'])
  if v[-1]==0:x['ascii']=v[:-1].decode('ascii');return x
 raise ValueError(hex(a))
e=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[],save_tables=[],supporting_sources=[],pending_check=dict(addresses=PRIMARY,review_before=False))
for addr in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{addr}.c';s=p.read_text(encoding='utf8')
 e['source_c'].append(dict(address='0x'+addr,path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()),role='primary'if addr in PRIMARY else 'support'))
 for j,m in enumerate(re.finditer(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  a,end=int(m[1],16),int(m[2],16)+1
  cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)]
  assert cmd[0];text=subprocess.check_output(cmd,text=True);p=OUT/f'{addr}-{j}.asm';p.write_text(text,encoding='utf8',newline='\n');pos=a
  for line in text.splitlines():
   mm=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
   if mm:
    at=int(mm[1],16);v=bytes.fromhex(mm[2]);assert at==pos and raw(at,len(v))['bytes_hex']==v.hex();pos+=len(v)
   mm=re.search(r'(XMMWORD|QWORD|DWORD|WORD|BYTE) PTR ds:(0x[0-9a-f]+)',line)
   if mm:
    try:e['raw'].append(raw(int(mm[2],16),{'XMMWORD':16,'QWORD':8,'DWORD':4,'WORD':2,'BYTE':1}[mm[1]]))
    except ValueError:pass
   for mm in re.finditer(r'(?:push|mov\s+\w+,)\s*(0x10[0-9a-f]+)',line):
    try:
     x=string(int(mm[1],16))
     if x['ascii'] and all(c.isprintable()or c in '\n\r\t'for c in x['ascii']):e['raw'].append(x)
    except (ValueError,UnicodeError):pass
  assert pos==end
  e['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=hex(a),end_exclusive=hex(end),sha256=h(p.read_bytes()),binary_range_sha256=raw(a,end-a)['sha256'],command=cmd))
# Original ENTVARS proves netname, health and related native offsets, not an SDK layout assumption.
t=raw(0x1021aae0,102*16);t.update(name='ENTVARS',fields=[])
for i in range(102):
 ty,nm,off,count,flags=struct.unpack('<IIIhh',bytes.fromhex(raw(0x1021aae0+16*i,16)['bytes_hex']));s=string(nm);e['raw'].append(s)
 t['fields'].append(dict(type_id=ty,name=s['ascii'],offset=hex(off),count=count,flags=flags))
e['save_tables'].append(t)
for path in ['analysis/server-world-bootstrap/contract.md','analysis/server-multiplayer-flow/contract.md','analysis/server-player-equipment/contract.md','analysis/server-player-inventory/contract.md','analysis/server-item-pickup/contract.md','analysis/server-stats-lifecycle/contract.md','external/hlsdk-portable/engine/eiface.h']:
 p=ROOT/path;e['supporting_sources'].append(dict(path=path,sha256=h(p.read_bytes())))
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf8'))
e['api_slots']=[dict(slot=i,name=names[i],address=hex(0x10222f48+i*4))for i in range(144)]
e['vtables']=[]
for a,name in [(0x101b1300,'CInterDoorCoopChangeLevel'),(0x101c85e4,'CCoFChangeLevel'),(0x101c9e48,'CCoFLobbyStart')]:
 t=raw(a,0xec);t.update(name=name,slots=[dict(offset=hex(i),target=hex(struct.unpack('<I',bytes.fromhex(raw(a+i,4)['bytes_hex']))[0]))for i in range(0,0xec,4)])
 col=struct.unpack('<I',bytes.fromhex(raw(a-4,4)['bytes_hex']))[0];c=raw(col,20);vals=struct.unpack('<5I',bytes.fromhex(c['bytes_hex']));assert vals[0]==0
 td=vals[3];st=string(td+8);assert st['ascii']=='.?AV'+name+'@@'
 t['rtti_name']=st['ascii'];e['raw'] += [raw(a-4,4),c,raw(td,8),st];e['vtables'].append(t)
e['dll_callbacks']=raw(0x102119f8,50*4)
e['dll_callbacks']['client_disconnect_slot']=16
# Raw PE export records independently anchor exact names and original entries.
nt=struct.unpack_from('<I',b,0x3c)[0];base=int(pe['image_base'],16);erv=struct.unpack_from('<I',b,nt+24+96)[0]
ex=struct.unpack('<IIHHIIIIIII',bytes.fromhex(raw(base+erv,40)['bytes_hex']));e['raw'].append(raw(base+erv,40));e['exports']=[]
for i in range(ex[7]):
 nm=base+struct.unpack('<I',bytes.fromhex(raw(base+ex[9]+4*i,4)['bytes_hex']))[0];ix=struct.unpack('<H',bytes.fromhex(raw(base+ex[10]+2*i,2)['bytes_hex']))[0];entry=base+struct.unpack('<I',bytes.fromhex(raw(base+ex[8]+4*ix,4)['bytes_hex']))[0]
 if entry in [0x100e9ab0,0x100183d0,0x10018400,0x1004aca0,0x100aa170,0x100aa420,0x1004db30]:
  s=string(nm);e['raw'] += [s,raw(base+ex[9]+4*i,4),raw(base+ex[10]+2*i,2),raw(base+ex[8]+4*ix,4)]
  e['exports'].append(dict(entry=hex(entry),name=s['ascii'],ordinal=ex[5]+ix,name_index=i))
e['explicit_literals']=[]
for a in [0x101b1590,0x101ac294,0x101b5fb0,0x101a8478]:
 n=0
 while raw(a+n,1)['bytes_hex']!='00':n+=1;assert n<512
 r=raw(a,n+1);r['decoded_cp1251']=bytes.fromhex(r['bytes_hex'])[:-1].decode('cp1251');e['explicit_literals'].append(r)
# A bounded direct-call site inside large PlayerPreThink; no full review of that owner.
a,end=0x100f0265,0x100f0293
cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)]
p=OUT/'100f0265-callsite.asm';p.write_text(subprocess.check_output(cmd,text=True),encoding='utf8',newline='\n')
e['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=hex(a),end_exclusive=hex(end),sha256=h(p.read_bytes()),binary_range_sha256=raw(a,end-a)['sha256'],command=cmd,scope='bounded caller only; owner100ef2d0 not reviewed'))
e['supporting_sources'].append(dict(path='analysis/server-state-restore/contract.md',sha256=h((ROOT/'analysis/server-state-restore/contract.md').read_bytes())))
e['raw']=list({(x['address'],x['end_exclusive']):x for x in e['raw']}.values())
assert h(B.read_bytes())==SHA
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('PASS',len(PRIMARY),'primary',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
