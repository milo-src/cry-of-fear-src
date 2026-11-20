"""Static CBaseButton dispatch, response, movement completion and capability evidence."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10012a80 10012ba0 10012d00 10012d50 10012f00 10012f70 10013090 10013220 10013f00 10015960'.split()
SUPPORT='10012580 100148e0 10017740 10017790 10017ad0 10119060 1008e010 101025c0 10101b50 10102930 10118500 10119810 100fc9f0 100132d0 100b4aa0 1000e1f0 10017ba0'.split()
SUPPORT=list(dict.fromkeys(SUPPORT))

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
for nm,a,offsets in [('CBaseButton',0x101a4c84,[0x8,0x34,0x38,0x3c,0x40,0xe8])]:
 slots=[]
 for off in offsets:
  x=keep(a+off,4,nm+' vtable slot');slots.append(dict(offset=hex(off),target=hex(struct.unpack('<I',x)[0])))
 e['vtables'].append(dict(name=nm,address=hex(a),slots=slots))
 # Microsoft x86 complete object locator and its type descriptor name.
 col=struct.unpack('<I',keep(a-4,4,nm+' COL pointer'))[0]
 x=keep(col,20,nm+' COL');sig,off,cd,typ,hier=struct.unpack('<5I',x)
 keep(typ,8,nm+' type descriptor header');st(typ+8)

e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('BASE',0x10211760,22),('DELAY',0x10219a68,3),('ANIMATING',0x10211178,5),('TOGGLE',0x10219a98,20),('BUTTON',0x10211640,18)]:
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
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-toggle-persistence/contract.md','analysis/server-targets/contract.md','analysis/server-handles/contract.md','analysis/server-queue-b/contract-extra.md','analysis/server-queue-a/contract-extra.md','analysis/server-entity-predicates/contract.md','analysis/exports/hl.csv','external/hlsdk-portable/engine/progdefs.h']]

e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['explicit_strings']=[]
# Native export bindings and bounded exact LE32 references; absence is not a full call graph.
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0]
ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));ob,nf,nn,funcs,names,ords=ex[5:]
e['exports']=[]
for i in range(nn):
 nr=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0];oi=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0];fr=struct.unpack('<I',raw(BASE+funcs+4*oi,4)[0])[0]
 if BASE+fr in [int(a,16)for a in PRIMARY]:
  keep(BASE+names+4*i,4,'export name RVA');keep(BASE+ords+2*i,2,'export ordinal');keep(BASE+funcs+4*oi,4,'export function RVA')
  e['exports'].append(dict(name=st(BASE+nr),entry=hex(BASE+fr),ordinal=ob+oi,name_index=i))
e['exact_le32_data_refs']=dict(method='All byte offsets in raw PE .rdata/.data only, exact preferred-base LE32 values. Not instruction decoding, runtime scan or complete xrefs.',sections=[],targets={})
for sec in pe['sections']:
 if sec['name'] not in ['.rdata','.data']:continue
 e['exact_le32_data_refs']['sections'].append(dict(name=sec['name'],rva=sec['rva'],raw_offset=sec['raw_offset'],raw_size=sec['raw_size'],sha256=h(b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']])))
for a in PRIMARY:
 vals=[]
 for sec in e['exact_le32_data_refs']['sections']:
  data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];off=0
  while True:
   off=data.find(struct.pack('<I',int(a,16)),off)
   if off<0:break
   va=BASE+int(sec['rva'],16)+off;keep(va,4,'exact LE32 function-address data reference');vals.append(hex(va));off+=1
 e['exact_le32_data_refs']['targets']['0x'+a]=vals
# Lexical saved-C references are navigation only, not a complete native call graph.
e['saved_c_lexical_references']={}
for a in PRIMARY:
 refs=[]
 for p in sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c')):
  t=p.read_text(encoding='utf8')
  if re.search(r'FUN_'+a+r'\(',t):refs.append(dict(**ref(p),selector=p.stem,occurrences=len(re.findall(r'FUN_'+a+r'\(',t)),scope='lexical token includes declaration; not proof of native caller'))
 e['saved_c_lexical_references']['0x'+a]=refs
e['baseline']=dict(reviewed=2012,pending=6643,source='analysis/full-reverse-pass26-verification.json')
e['baseline_report']=ref(ROOT/'analysis/full-reverse-pass26-verification.json')
e['accounting']=dict(new_primary=PRIMARY,updated_existing=[])
prior=OUT/'evidence.json'
old=json.loads(prior.read_text(encoding='utf8')) if prior.exists() else {}
if 'pending_checks' in old:e['pending_checks']=old['pending_checks']
else:
 cat=(ROOT/'decompiled/FUNCTION_CATALOG.txt').read_text(encoding='utf8');e['pending_checks']=[]
 for a in PRIMARY:
  block=cat.split('[FUNCTION server:0x'+a+']',1)[1].split('[/FUNCTION]',1)[0];assert '[REVIEW server:' not in block
  e['pending_checks'].append(dict(entry='0x'+a,block=block,catalog_sha256=h(cat.encode('utf8'))))
for nm,p in [('const_header','external/hlsdk-portable/common/const.h'),('usermessage_registry','analysis/network/usermessage-registry.json')]:e[nm]=ref(ROOT/p)
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')


