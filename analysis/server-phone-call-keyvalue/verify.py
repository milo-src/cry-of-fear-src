"""Read-only verification with independent PE mapping and all native branch checks."""
from pathlib import Path
import hashlib,json,re,struct
ROOT=Path(__file__).resolve().parents[2];O=Path(__file__).resolve().parent
e=json.loads((O/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes();h=lambda x:hashlib.sha256(x).hexdigest();v=lambda x:int(x,16)
assert h(b)==e['sha256'] and not e['target_executed']
nt=struct.unpack_from('<I',b,60)[0];n=struct.unpack_from('<H',b,nt+6)[0];os=struct.unpack_from('<H',b,nt+20)[0];base=struct.unpack_from('<I',b,nt+52)[0]
sections=[struct.unpack_from('<4I',b,nt+24+os+i*40+8)for i in range(n)]
def raw(a,n):
 for vs,rva,sz,off in sections:
  d=a-base-rva
  if 0<=d and d+n<=sz:return b[off+d:off+d+n]
 raise ValueError(hex(a))
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['assembly_only_inventory']['source'],e['accounting']['prior_function_blocks']]
for r in refs:assert h((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
rows=0
for r in e['ranges']:
 a=v(r['start']);end=v(r['end_exclusive']);pos=a;assert h(raw(a,end-a))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text().splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if m:
   at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))==x;pos+=len(x);rows+=1
 assert pos==end
for r in e['raw']:
 x=bytes.fromhex(r['bytes_hex']);off=v(r['file_offset']);assert raw(v(r['address']),len(x))==x and h(x)==r['sha256'] and b[off:off+len(x)]==x
for table in e['save_tables']:
 for i,r in enumerate(table['fields']):
  ty,nm,off,c,fl=struct.unpack('<IIIhh',raw(v(table['address'])+16*i,16))
  assert(ty,off,c,fl)==(r['type_id'],v(r['offset']),r['count'],r['flags'])
  assert raw(nm,len(r['name'])+1)==r['name'].encode()+b'\0'
f=e['save_tables'][0]['fields'];assert [(v(r['offset']),r['type_id'],r['count'])for r in f]==[(0xe8,10,33),(0x16c,0,33),(0x1f0,17,1),(0x1f4,10,1),(0x1f8,4,1),(0x200,12,1),(0xe0,4,1)]
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];sig,off,cd,td,ch=struct.unpack('<5I',raw(col,20))
 assert sig==0 and col==v(t['locator']) and td==v(t['type_descriptor']) and ch==v(t['class_hierarchy'])
 assert raw(td+8,len(t['rtti_name'])+1)==t['rtti_name'].encode()+b'\0'
 for r in t['slots']:assert struct.unpack('<I',raw(v(t['address'])+v(r['offset']),4))[0]==v(r['target'])
assert e['keyvalue_binding']==[{'vtable':'0x101b5a20','offset':'0x34','target':'0x10060140'}]
assert raw(0x101b5a54,4)==struct.pack('<I',0x10060140)
assert raw(0x1005fba8,6)==bytes.fromhex('c700205a1b10')
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/e['api_binding']['header']['path']).read_text().split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:assert names[r['slot']]==r['name'] and v(r['address'])==v(e['api_binding']['base'])+4*r['slot']
assert names[67]=='pfnAllocString' and 0x10222f48+4*67==0x10223054
def call(a,target):assert raw(a,1)==b'\xe8' and a+5+struct.unpack('<i',raw(a+1,4))[0]==target,hex(a)
assert len(e['key_branches'])==65
for i,r in enumerate(e['key_branches']):
 key=('subtitlenumber'+str(i+1))if i<32 else ('subtitletime'+str(i-31))if i<64 else 'audiofile'
 assert key==r['key'];ptr=v(r['key_pointer']);a=v(r['branch_start']);s=v(r['store_address']);off=v(r['storage_offset'])
 assert raw(ptr,len(key)+1)==key.encode()+b'\0'
 assert raw(a,5)==(b'\xb9'if i<3 else b'\x68')+struct.pack('<I',ptr)
 assert off==(0xec+4*i if i<32 else 0x170+4*(i-32)if i<64 else 0x1f0)
 opcode=b'\x89\x83'if i<32 or i==64 else b'\xd9\x9b'
 assert raw(s,6)==opcode+struct.pack('<I',off)==bytes.fromhex(r['store_bytes'])
 assert v(r['handled_address'])==s+6 and raw(s+6,7)==bytes.fromhex('c7460c01000000')
 assert v(r['ret_address'])==s+17 and raw(s+13,7)==bytes.fromhex('5f5e5b5dc20400')
 if i<64:
  call(s-8,0x1016b55e if i<32 else 0x1016f5ec);assert raw(s-11,3)==bytes.fromhex('ff7608') and raw(s-3,3)==bytes.fromhex('83c404');guard=s-13
 else:
  assert raw(s-12,12)==bytes.fromhex('ff7608ff155430221083c404');guard=s-14
 assert raw(guard,1)==(b'\x75'if i<3 else b'\x74')
 assert guard+2+struct.unpack('<b',raw(guard+1,1))[0]==v(r['next_branch'])
 if i>=3:
  assert raw(a+5,1)==b'\x57';call(a+6,0x1000aba0);assert raw(a+11,5)==bytes.fromhex('83c40885c0')
 for c in r['calls']:
  x=bytes.fromhex(c['bytes_hex']);assert raw(v(c['address']),len(x))==x
assert raw(0x10060e1a,3)==bytes.fromhex('568bcb');call(0x10060e1d,0x1000dba0)
assert raw(0x10060e22,7)==bytes.fromhex('5f5e5b5dc20400')
assert raw(0x1016f5f1,5)==bytes.fromhex('6a00ff7508');call(0x1016f5f6,0x1016da44);assert raw(0x1016f5fb,4)==bytes.fromhex('59595dc3')
assert e['primary']==e['accounting']['new_primary']==['10060140']
prior=(O/'prior-function-blocks.txt').read_text(encoding='utf8');assert '[REVIEW]'not in prior and '[FUNCTION server:0x10060140]'in prior
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];ct=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==1 and notes[0]['address']=='0x10060140'
for d in notes[0]['details_ru']:assert d in ct
for p in notes[0]['evidence_paths']:assert(ROOT/p).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(e['key_branches']),'keys, 1 card')
