"""Static saved-C/PE/ASM evidence for complete map equipment parser100c6570."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY=['100c6570']
SUPPORT='100b4aa0 1002f550 1002f350 1002f49f 10037300 1002f8d0 1013f5f0 101406b0 1016b55e 1016a01f 10169fb8 100e0a80 100e4360 100308f0 10030290 10122ff5 1013dd48 1013dbb3'.split()

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
e['literals']=[]
keep(0x101a84c8,2,'writer newline string LF NUL')
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in sorted({(int(v,16)-base)//4 for r in e['ranges'] for v in re.findall(r'(?:call|jmp)\s+DWORD PTR ds:0x([0-9a-f]+)',(ROOT/r['path']).read_text()) if base<=int(v,16)<base+144*4})])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-stats-lifecycle/contract.md','analysis/server-state-reader/contract.md','analysis/server-player-equipment/contract.md','analysis/server-player-inventory/contract.md','analysis/server-item-lifecycle/contract.md','analysis/server-serializer/contract.md','external/hlsdk-portable/common/const.h','external/hlsdk-portable/engine/progdefs.h']]
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

e['caller_search']=[dict(**ref(ROOT/'decompiled/server/partial-pass/functions/0x10029090.c'),callee='0x100c6570',scope='saved C direct caller, two sites; whole restore contract owned separately')]
e['support_documents'].append(ref(ROOT/'analysis/server-state-restore/10029090-0.asm'))
e['caller_edges']=[]
for a in [0x10029158,0x100293c6]:
 x=keep(a,5,'restore direct call map equipment parser');assert x[0]==0xe8 and a+5+struct.unpack('<i',x[1:])[0]==0x100c6570
 e['caller_edges'].append(dict(callsite=hex(a),actual_caller='0x10029090',target='0x100c6570',bytes_hex=x.hex()))
e['field_grammar']=[]
fields=[('health ',0x164,'pev float32 from signed atoi'),('stamina ',0x21f0,'player float32 from signed atoi'),('quicksel1 ',0x204c,'player existing string TO scratch'),('quicksel2 ',0x20cc,'player existing string TO scratch'),('quicksel3 ',0x214c,'player existing string TO scratch')]
asm=(OUT/'100c6570-0.asm').read_text()
for label,off,action in fields:
 lit=next(v for v in e['literals'] if v['text']==label)
 block=asm.split('push   '+lit['address'],1)[1]
 erase=re.search(r'([0-9a-f]+):[^\n]*mov    edx,0x([0-9a-f]+)',block)
 assert int(erase[2],16)==len(label)
 e['field_grammar'].append(dict(label=label,literal=lit['address'],erase_prefix_bytes=len(label),erase_instruction='0x'+erase[1],owner_offset=hex(off),action=action))
e['critical_native_checks']=[]
for a,n,label in [(0x100c6dd1,1,'plain cdecl RET'),(0x100c68de,6,'quicksel1 SOURCE player'),(0x100c69ae,6,'quicksel2 SOURCE player'),(0x100c6a7e,6,'quicksel3 SOURCE player'),(0x100c68f9,4,'quicksel writes scratch'),(0x100c6734,5,'post-copy length guard256'),(0x100c6b22,7,'global BYTE latch=1'),(0x100c6b31,5,'GiveNamedItem call'),(0x100c6b3c,7,'global BYTE latch=0 normal return'),(0x100c6c78,6,'node clip write'),(0x100c6cfb,7,'player ammo write'),(0x100c6d67,5,'six Inventory calls before destructor'),(0x100c6db1,5,'ifstream destructor call')]:
 x=keep(a,n,label);e['critical_native_checks'].append(dict(address=hex(a),bytes_hex=x.hex(),meaning=label))
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
