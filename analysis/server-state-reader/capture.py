"""Static saved-C/PE/ASM evidence for complete player state reader100c5300."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY=['100c5300']
SUPPORT='100b4aa0 100c5040 100c5090 1002f550 1002f350 1002f49f 10037300 1002f8d0 1013f5f0 101406b0 1016b55e 1016a01f 10169fb8 100e0a80 100e4360 1001f160 10030290 10122ff5 1013dd48 1013dbb3'.split()

def h(x):return hashlib.sha256(x).hexdigest()
def raw(a,n):
 for s in pe['sections']:
  d=a-BASE-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;return b[off:off+n],off
 raise ValueError(hex(a))
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()))
e=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[])
for a in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text();e['source_c'].append(dict(**ref(p),entry='0x'+a,primary=a in PRIMARY))
 for k,(lo,hi) in enumerate(re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  start=int(lo,16);end=int(hi,16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a}-{k}.asm';p.write_text(t,encoding='utf8',newline='\n');pos=start
  for line in t.splitlines():
   m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
   if m:
    at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
  assert pos==end
  e['ranges'].append(dict(**ref(p),entry='0x'+a,start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0])))
def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode()[:-1]
e['accounting']=dict(new_primary=PRIMARY,updated_existing=[])
e['jump_tables']=[]
e['vtables']=[]
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('PLAYER',0x10217fe8,207),('ITEM',0x1021b188,26),('WEAPON',0x1021b328,27)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
e['data_operands']=[]
for r in e['ranges']:
 if r['entry'][2:] not in PRIMARY:continue
 text=(ROOT/r['path']).read_text()
 for address in sorted(set(int(x,16) for x in re.findall(r'(?:ds:|,|\s)0x([0-9a-f]{8})',text))):
  if 0x101a0000<=address<0x10230000:
   try:
    v=keep(address,16,'primary ASM direct data operand');e['data_operands'].append(dict(entry=r['entry'],address=hex(address),bytes_hex=v.hex()))
   except ValueError:pass
# Selected real PE export bindings, distinct from Ghidra function-name hints.
nt=struct.unpack_from('<I',b,0x3c)[0];opt=nt+24
erv,esz=struct.unpack_from('<II',b,opt+96);ea=BASE+erv
ex=struct.unpack('<IIHHIIIIIII',keep(ea,40,'PE export directory'))
ordinalbase,nfunc,nnames,funcs,names,ords=ex[5:]
e['exports']=[]
wanted=set(int(a,16) for a in PRIMARY)
for i in range(nnames):
 nrva=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0]
 ordidx=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0]
 frva=struct.unpack('<I',raw(BASE+funcs+4*ordidx,4)[0])[0]
 if BASE+frva in wanted:
  keep(BASE+names+4*i,4,'selected export name pointer');keep(BASE+ords+2*i,2,'selected export ordinal index');keep(BASE+funcs+4*ordidx,4,'selected export target RVA')
  e['exports'].append(dict(name=st(BASE+nrva),entry=hex(BASE+frva),ordinal=ordinalbase+ordidx,name_index=i))
e['literals']=[dict(address=hex(0x101a124c),text=st(0x101a124c))]
keep(0x101a84c8,2,'writer newline string LF NUL')
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in sorted({(int(v,16)-base)//4 for r in e['ranges'] for v in re.findall(r'(?:call|jmp)\s+DWORD PTR ds:0x([0-9a-f]+)',(ROOT/r['path']).read_text()) if base<=int(v,16)<base+144*4})])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-stats-lifecycle/contract.md','analysis/server-player-equipment/contract.md','analysis/server-player-inventory/contract.md','analysis/server-item-lifecycle/contract.md','analysis/server-serializer/contract.md','external/hlsdk-portable/common/const.h','external/hlsdk-portable/engine/progdefs.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
# Preserve native literal pointers from all primary immediates where bytes are printable strings.
seen=set()
for row in e['data_operands']:
 a=int(row['address'],16)
 if a in seen:continue
 seen.add(a)
 try:
  v=raw(a,1)[0][0]
  if 32<=v<=126:
   n=0
   while (32<=raw(a+n,1)[0][0]<=126 or raw(a+n,1)[0] in [b'\n',b'\t']):
    n+=1
    if n>250:break
   if n>3 and raw(a+n,1)[0]==b'\0':e['literals'].append(dict(address=hex(a),text=st(a)))
 except (ValueError,UnicodeDecodeError):pass
e['imports']=[]
irva,isz=struct.unpack_from('<II',b,opt+104);cur=BASE+irva
while True:
 vals=struct.unpack('<5I',raw(cur,20)[0])
 if not any(vals):break
 oft,ts,fw,nm,ft=vals;dll=raw(BASE+nm,100)[0].split(b'\0',1)[0].decode();i=0
 while True:
  thunk=struct.unpack('<I',raw(BASE+(oft or ft)+4*i,4)[0])[0]
  if not thunk:break
  name=('#'+str(thunk&0xffff))if thunk&0x80000000 else raw(BASE+thunk+2,256)[0].split(b'\0',1)[0].decode()
  if name in ['FindFirstFileA','FindNextFileA','FindClose','DeleteFileA']:
   keep(cur,20,'import descriptor '+dll);keep(BASE+(oft or ft)+4*i,4,'import INT');keep(BASE+ft+4*i,4,'import IAT');keep(BASE+thunk,2,'import hint');st(BASE+thunk+2)
   e['imports'].append(dict(dll=dll,name=name,iat=hex(BASE+ft+4*i)))
  i+=1
 cur+=20
# Saved inventory identifies entry; exact bounded native tail wrapper only, no synthetic C.
a=0x101740ac;end=0x101740b7;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/'101740ac-asm-only.asm';p.write_text(t,encoding='utf8',newline='\n')
e['ranges'].append(dict(**ref(p),entry=hex(a),start=hex(a),end_exclusive=hex(end),binary_range_sha256=h(raw(a,end-a)[0]),kind='ASM-only support; actual entry from portable discovered inventory; tail JMP10172c49'))
e['support_documents'].append(ref(ROOT/'analysis/corpus-coverage/server-discovered-evidence.json'))
e['field_grammar']=[]
fields=[('health ',0x164,'pev float32 from signed atoi'),('stamina ',0x21f0,'player float32 from signed atoi'),('quicksel1 ',0x204c,'player existing string TO scratch; no player write'),('quicksel2 ',0x20cc,'player existing string TO scratch; no player write'),('quicksel3 ',0x214c,'player existing string TO scratch; no player write'),('playerstats_shotsfired ',0x63c,'player DWORD'),('playerstats_shotshit ',0x640,'player DWORD'),('playerstats_syringesused ',0x644,'player DWORD'),('playerstats_monsterskilledmelee ',0x670,'player DWORD'),('playerstats_monsterskilledshooting ',0x674,'player DWORD'),('playerstats_seconds ',0x664,'player DWORD'),('playerstats_minutes ',0x668,'player DWORD'),('playerstats_hours ',0x66c,'player DWORD'),('playerstats_damagetaken ',0x658,'player DWORD')]
asm=(OUT/'100c5300-0.asm').read_text()
for label,off,action in fields:
 lit=next(v for v in e['literals'] if v['text']==label)
 block=asm.split('push   '+lit['address'],1)[1]
 erase=re.search(r'([0-9a-f]+):[^\n]*mov    edx,0x([0-9a-f]+)',block)
 assert int(erase[2],16)==len(label)
 e['field_grammar'].append(dict(label=label,literal=lit['address'],erase_prefix_bytes=len(label),erase_instruction='0x'+erase[1],owner_offset=hex(off),action=action))
e['critical_native_checks']=[]
for a,n,label in [(0x100c655c,1,'cdecl RET; one input stack argument'),(0x100c588e,6,'quicksel1 SOURCE player+204c'),(0x100c595e,6,'quicksel2 SOURCE player+20cc'),(0x100c5a2e,6,'quicksel3 SOURCE player+214c'),(0x100c58a9,4,'quicksel writes scratch computed destination, not player'),(0x100c56e4,5,'length guard256 follows NUL copy'),(0x100c63c4,6,'DeleteFileA before stream destructor'),(0x100c642d,5,'filebuf destructor call'),(0x100c64ab,6,'FindNext continuation signed JG'),(0x100c62d8,6,'node clip write'),(0x100c6361,7,'player ammo indexed write')]:
 v=keep(a,n,label);e['critical_native_checks'].append(dict(address=hex(a),bytes_hex=v.hex(),meaning=label))
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')

