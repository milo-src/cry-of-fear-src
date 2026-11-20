"""Static saved-C/PE/ASM evidence for Follower speech initialization and group callback."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10105f70 101058c0'.split()
SUPPORT='100b4aa0 10104f70 1000aba0 10104040 10118460 10118480 1011a800 10104d60 10105210 10104d40 10104110 101041f0 10104540 101048c0 10105920 10105410 101059e0 10105280 10104ec0'.split()

def h(x):return hashlib.sha256(x).hexdigest()
def raw(a,n):
 for s in pe['sections']:
  d=a-BASE-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;return b[off:off+n],off
 raise ValueError(hex(a))
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()))
e=dict(objdump=shutil.which('objdump'),objdump_version=subprocess.check_output([shutil.which('objdump'),'--version'],text=True).splitlines()[0],method='Read-only static saved C + bounded native objdump + PE raw reads; no target execution.',module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[])
for a in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text(encoding='utf8');e['source_c'].append(dict(**ref(p),entry='0x'+a,primary=a in PRIMARY))
 for k,(lo,hi) in enumerate(re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  start=int(lo,16);end=int(hi,16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a}-{k}.asm';p.write_text(t,encoding='utf8',newline='\n');pos=start
  for line in t.splitlines():
   m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
   if m:
    at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
  assert pos==end
  e['ranges'].append(dict(**ref(p),command=cmd,entry='0x'+a,start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0])))
def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode('latin1')[:-1]
e['vtables']=[]
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('MONSTER',0x10216e08,49),('BASE',0x10211760,22),('TALK',0x10219c18,11)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
# Retain immediate strings and raw static float operands from the exact bounded ASM.
for r in e['ranges']:
 t=(ROOT/r['path']).read_text(encoding='utf8')
 for m in re.finditer(r'(DWORD|QWORD) PTR ds:0x(101[a-f][0-9a-f]{4})',t):
  keep(int(m[2],16),4 if m[1]=='DWORD' else 8,'native literal operand')
 for a in [int(x,16)for x in re.findall(r'(?:push|mov\s+e[a-z]{2},)\s*0x(101[a-f][0-9a-f]{4})',t)]:
  try:
   x,off=raw(a,256);v=x.split(b'\0',1)[0]
   if v and all(c in (9,10,13)or 32<=c<127 for c in v):st(a)
  except (ValueError,UnicodeDecodeError):pass
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
e['support_documents']=[ref(ROOT/p) for p in ['analysis/server-follower-behavior/contract.md','analysis/server-monster-groups/contract.md','analysis/server-follower-gates/contract.md','analysis/server-follower-tasks/contract.md','analysis/exports/hl.csv','external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h']]

e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['explicit_strings']=[dict(address=hex(a),text_latin1=st(a))for a in [0x101df948,0x101df94c,0x101df954,0x101df960,0x101df968,0x101df970,0x101df974,0x101df97c,0x101df984,0x101df98c,0x101df994,0x101df99c,0x101df9a4,0x101df9ac,0x101df9b8,0x101df9c0,0x101df9c8,0x101dfa28]]
# Suffix write order is decoded from the primary native body, including immediate text.
e['payload_slots']=[dict(offset=hex(off),suffix_clear=clear,suffix_set=set_,alloc_call=hex(call))for off,clear,set_,call in [
(0x374,'ANSWER','ANSWER',0x1010600d),(0x378,'QUESTION','QUESTION',0x10106042),(0x37c,'IDLE','IDLE',0x10106072),(0x380,'STARE','STARE',0x101060a3),(0x384,'OK','PFOLLOW',0x101060f7),(0x388,'WAIT','PWAIT',0x1010614d),(0x38c,'NOTOK','POK',0x10106199),(0x390,'STOP','STOP',0x101061c9),(0x394,'NOSHOOT','NOSHOOT',0x101061f5),(0x398,'HELLO','HELLO',0x10106226),(0x3a8,'PLHURT1','PLHURT1',0x10106252),(0x3ac,'PLHURT2','PLHURT2',0x1010627e),(0x3b0,'PLHURT3','PLHURT3',0x101062aa),(0x39c,'PHELLO','PHELLO',0x101062e6),(0x3a0,'PIDLE','PIDLE',0x10106317),(0x3a4,'PQUESTION','PQUESTION',0x1010634d),(0x3b4,'SMELL','SMELL',0x1010637e),(0x3b8,'WOUND','WOUND',0x101063af),(0x3bc,'MORTAL','MORTAL',0x101063eb)]]
e['immediate_suffixes']=[]
for a,n,expected in [(0x101060cd,16,b'PFOLLOW\0'),(0x10106177,8,b'POK\0'),(0x101061e5,16,b'NOSHOOT\0'),(0x10106242,16,b'PLHURT1\0'),(0x1010626e,16,b'PLHURT2\0'),(0x1010629a,16,b'PLHURT3\0')]:
 q=keep(a,n,'immediate suffix instructions');text=q[4:8]+(q[12:16]if n==16 else b'');assert text==expected
 e['immediate_suffixes'].append(dict(address=hex(a),length=n,text_latin1=text[:-1].decode()))
e['lexical_callers']={}
for a in PRIMARY:
 hits=[]
 for p in sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c')):
  if p.stem=='0x'+a:continue
  ss=p.read_text(encoding='utf8')
  if 'FUN_'+a+'(' in ss:hits.append(dict(**ref(p),lines=[i for i,l in enumerate(ss.splitlines(),1) if 'FUN_'+a+'(' in l]))
 e['lexical_callers']['0x'+a]=hits
e['lexical_callers_scope']='Exact FUN_address( text in saved server partial-pass C only; not a full binary call graph or virtual reachability proof.'

# Native export bindings and bounded exact LE32 references; absence is not a full call graph.
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0]
ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));ob,nf,nn,funcs,names,ords=ex[5:]
e['exports']=[]
for i in range(nn):
 nr=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0];oi=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0];fr=struct.unpack('<I',raw(BASE+funcs+4*oi,4)[0])[0]
 if BASE+fr in [int(a,16)for a in PRIMARY]+[0x101048c0]:
  keep(BASE+names+4*i,4,'export name RVA');keep(BASE+ords+2*i,2,'export ordinal');keep(BASE+funcs+4*oi,4,'export function RVA')
  e['exports'].append(dict(name=st(BASE+nr),entry=hex(BASE+fr),ordinal=ob+oi,name_index=i))
e['exact_le32_data_refs']=dict(method='All byte offsets in raw PE .rdata/.data only, exact preferred-base LE32 values. Not instruction decoding, runtime scan or complete xrefs.',sections=[],targets={})
for sec in pe['sections']:
 if sec['name'] not in ['.rdata','.data']:continue
 e['exact_le32_data_refs']['sections'].append(dict(name=sec['name'],rva=sec['rva'],raw_offset=sec['raw_offset'],raw_size=sec['raw_size'],sha256=h(b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']])))
for a in PRIMARY+['101048c0','101050b0']:
 vals=[]
 for sec in e['exact_le32_data_refs']['sections']:
  data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];off=0
  while True:
   off=data.find(struct.pack('<I',int(a,16)),off)
   if off<0:break
   va=BASE+int(sec['rva'],16)+off;keep(va,4,'exact LE32 function-address data reference');vals.append(hex(va));off+=1
 e['exact_le32_data_refs']['targets']['0x'+a]=vals
e['classname_table']=dict(address='0x10219cc8',entries=[])
for i,v in enumerate(struct.unpack('<6I',keep(0x10219cc8,24,'six class pointer slots accessed through virtual250'))):
 e['classname_table']['entries'].append(dict(index=i,pointer=hex(v),text_latin1=st(v)))
# Bounded absence claim: exact RTTI name bytes in all raw sections, not proof of runtime nonexistence.
e['rtti_name_scan']=dict(needle='.?AVCTalkMonster@@',sections=[],hits=[])
needle=b'.?AVCTalkMonster@@\0'
for sec in pe['sections']:
 data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']]
 e['rtti_name_scan']['sections'].append(dict(name=sec['name'],rva=sec['rva'],raw_offset=sec['raw_offset'],raw_size=sec['raw_size'],sha256=h(data)))
 pos=0
 while True:
  pos=data.find(needle,pos)
  if pos<0:break
  e['rtti_name_scan']['hits'].append(hex(BASE+int(sec['rva'],16)+pos));pos+=1
# Preserve the initial pending snapshot when replaying after catalog integration.
previous=OUT/'evidence.json'
if previous.is_file() and 'pending_check' in json.loads(previous.read_text(encoding='utf8')):
 e['pending_check']=json.loads(previous.read_text(encoding='utf8'))['pending_check']
else:
 catalog=ROOT/'decompiled/FUNCTION_CATALOG.txt';ct=catalog.read_text(encoding='utf8')
 blocks={a:ct.split('[FUNCTION server:0x'+a+']',1)[1].split('[FUNCTION',1)[0]for a in PRIMARY}
 assert all('REVIEW'not in text for text in blocks.values())
 e['pending_check']=dict(catalog_sha256=h(catalog.read_bytes()),entries=PRIMARY,blocks=blocks,note='Initial catalog snapshot before authoring; preserved during replay after integration. Supporting functions are not new reviews.')
snapshot=ROOT/'analysis/local/fullpass18-prior-reviews.json'
if snapshot.is_file():
 prior=json.loads(snapshot.read_text(encoding='utf8'))
 assert all('server:0x'+a not in prior for a in PRIMARY)
e['baseline_progress_report']=ref(ROOT/'analysis/full-reverse-pass17-verification.json')
e['accounting']=dict(new_primary=PRIMARY,updated_existing=[])
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
