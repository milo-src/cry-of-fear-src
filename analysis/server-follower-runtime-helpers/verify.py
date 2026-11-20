"""Independent PE byte/provenance checks. Never executes the target."""
from pathlib import Path
import hashlib,json,re,struct
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes()
h=lambda x:hashlib.sha256(x).hexdigest()
assert h(b)==e['sha256'] and e['target_executed'] is False
nt=struct.unpack_from('<I',b,0x3c)[0];n=struct.unpack_from('<H',b,nt+6)[0];opt=struct.unpack_from('<H',b,nt+20)[0];base=struct.unpack_from('<I',b,nt+52)[0]
sections=[]
for i in range(n):
 at=nt+24+opt+40*i;vs,rva,sz,off=struct.unpack_from('<4I',b,at+8)
 sections.append((b[at:at+8].split(b'\0')[0].decode(),rva,sz,off))
def raw(a,n):
 for _,rva,sz,off in sections:
  d=a-base-rva
  if 0<=d and d+n<=sz:return b[off+d:off+d+n]
 raise ValueError(hex(a))
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['accounting']['prior_function_blocks']]+e['saved_c_callers']
for r in refs:assert h((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
lines=0
for r in e['ranges']:
 start=int(r['start'],16);end=int(r['end_exclusive'],16);pos=start
 assert h(raw(start,end-start))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text().splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if m:
   a=int(m[1],16);v=bytes.fromhex(m[2]);assert a==pos and raw(a,len(v))==v;pos+=len(v);lines+=1
 assert pos==end
for r in e['raw']:
 v=bytes.fromhex(r['bytes_hex']);off=int(r['file_offset'],16)
 assert raw(int(r['address'],16),len(v))==v and h(v)==r['sha256'] and b[off:off+len(v)]==v
for table in e['save_tables']:
 for i,r in enumerate(table['fields']):
  t,nm,off,c,fl=struct.unpack('<IIIhh',raw(int(table['address'],16)+16*i,16))
  assert (t,off,c,fl)==(r['type_id'],int(r['offset'],16),r['count'],r['flags'])
  assert raw(nm,len(r['name'])+1)==r['name'].encode()+b'\0'
fields={t['name']:{r['name']:int(r['offset'],16)for r in t['fields']}for t in e['save_tables']}
assert fields['MONSTER']['m_hTargetEnt']==0x18c and fields['MONSTER']['m_hEnemy']==0x184
assert fields['MONSTER']['m_afMemory']==0x2ec
assert fields['ENTVARS']['origin']==8 and fields['ENTVARS']['velocity']==0x20 and fields['ENTVARS']['ideal_yaw']==0xac
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/e['api_binding']['header']['path']).read_text().split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:assert names[r['slot']]==r['name'] and int(r['address'],16)==int(e['api_binding']['base'],16)+4*r['slot']
assert names[9]=='pfnVecToYaw'
for r in e['constants']:assert raw(int(r['address'],16),r['size']).hex()==r['bytes_hex']
assert struct.unpack('<f',raw(0x101bbb68,4))[0]==1000000
assert struct.unpack('<f',raw(0x101a1efc,4))[0]==50
assert struct.unpack('<2Q',raw(0x101a1f90,16))==(0x7fffffffffffffff,)*2
for target,expected in e['exact_le32_data_refs']['targets'].items():
 found=[]
 for sec in e['exact_le32_data_refs']['sections']:
  assert any((nm,rva,sz,off)==(sec['name'],int(sec['rva'],16),sec['raw_size'],sec['raw_offset'])for nm,rva,sz,off in sections)
  data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];assert h(data)==sec['sha256'];pos=0
  while (pos:=data.find(struct.pack('<I',int(target,16)),pos))>=0:found.append(hex(base+int(sec['rva'],16)+pos));pos+=1
 assert found==expected
# Local machine anchors: full EAX forwarding, SETA normalization, dual handle reload,
# sqrt unordered route, ST0/RET and double fabs/add before the float threshold.
anchors={0x10104027:'8b01',0x1010402b:'ff90bc000000',0x10104032:'c20400',0x10104035:'ff9044020000',0x1010403c:'c20400',0x1010645d:'ff92bc000000',0x101064b0:'7718',0x101064b2:'f20f51c0',0x101064c0:'d944240c',0x101064c9:'c3',0x101064e3:'d90568bb1b10',0x101064ee:'c3',0x1010652b:'0f5ad2',0x1010652e:'0f5ac0',0x1010653f:'f20f58d0',0x10106543:'660f5ac2',0x1010654e:'762a',0x10106550:'818e8001000000000010',0x1010657d:'c20400'}
for a,v in anchors.items():assert raw(a,len(bytes.fromhex(v))).hex()==v,hex(a)
t=(OUT/'10104f50-0.asm').read_text();assert 'xor    eax,eax' in t and 'seta   al' in t and 'comiss xmm0,DWORD PTR [ecx]' in t
for a,target in [(0x10106454,0x100177a0),(0x1010646c,0x100177a0),(0x10106575,0x100c00f0)]:assert raw(a,1)==b'\xe8' and a+5+struct.unpack('<i',raw(a+1,4))[0]==target
notes=json.loads((OUT/'notes.json').read_text(encoding='utf8'))['functions'];contract=(OUT/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])==sorted(e['accounting']['new_primary'])
prior=(OUT/'prior-function-blocks.txt').read_text(encoding='utf8');assert '[REVIEW]' not in prior
for n in notes:
 assert n['address'] in prior
 for p in n['evidence_paths']:assert (ROOT/p).is_file(),p
 for d in n['details_ru']:assert d in contract
print('PASS',len(e['source_c']),'C,',len(e['ranges']),'ASM,',lines,'byte rows,',len(e['raw']),'raw,',sum(len(t['fields'])for t in e['save_tables']),'descriptors,',len(notes),'cards')
