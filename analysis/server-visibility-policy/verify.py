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
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['prior_review']]
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

for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];f=struct.unpack('<5I',raw(col,20))
 assert col==v(t['col']) and raw(f[3]+8,len(t['rtti_name'])+1)==t['rtti_name'].encode()+b'\0'
 for r in t['slots']:assert struct.unpack('<I',raw(v(t['address'])+v(r['offset']),4))[0]==v(r['target'])
for a,x in [(0x100fc430,'33c0c3'),(0x100c90b0,'b801000000c3'),(0x100135b0,'b801000000c3'),(0x100f1935,'e9a6d0f1ff'),(0x100f18fd,'c7806002000000004040'),(0x100f18db,'ff1570302210'),(0x100f18e1,'83c40450'),(0x100f18ef,'83c408d800')]:assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x)
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/e['api_binding']['header']['path']).read_text().split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:assert names[r['slot']]==r['name'] and v(r['address'])==v(e['api_binding']['base'])+4*r['slot']
assert names[74]=='pfnGetModelPtr'
s=e['debug_reference_scan'];assert s['file_size']==len(b) and s['file_sha256']==h(b)
for q in s['matches']:
 needle=struct.pack('<I',v(q['value']));at=0;hits=[]
 while True:
  at=b.find(needle,at)
  if at<0:break
  va=next((base+rva+at-off for vs,rva,sz,off in sections if off<=at<off+sz),None)
  hits.append(dict(file_offset=hex(at),address=hex(va)if va is not None else None));at+=1
 assert hits==q['hits']
rr,rs=struct.unpack_from('<II',b,nt+24+96+40);r=raw(base+rr,rs);assert h(r)==s['relocations']['sha256'];at=0;total=0;near=[]
while at<len(r):
 page,n=struct.unpack_from('<II',r,at)
 if not n:break
 assert n>=8 and at+n<=len(r)
 for p in range(at+8,at+n,2):
  x=struct.unpack_from('<H',r,p)[0]
  if x>>12==3:
   total+=1;a=base+page+(x&4095);value=struct.unpack('<I',raw(a,4))[0]
   if 0x10222e47<=value<=0x10222e4f:near.append(dict(address=hex(a),value=hex(value)))
 at+=n
assert total==s['relocations']['highlow_count'] and near==s['relocations']['nearby']
z=s['zero_fill'];vs,rva,sz,off=next(q for q in sections if q[1]<=v(z['rva'])<q[1]+q[0]);assert rva==v(z['section_rva']) and rva+sz==v(z['raw_end_rva']) and rva+vs==v(z['virtual_end_rva']) and rva+sz<=v(z['rva'])
matches=[];paths=sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c'));assert len(paths)==e['saved_text_scan_file_count']
for p in paths:
 hits=[dict(line=i+1,text=line)for i,line in enumerate(p.read_text(encoding='utf8').splitlines()) if '10222e4e' in line or re.search(r'0x260\) = (?:0x40400000|3\.0)',line)]
 if hits:matches.append(dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()),hits=hits))
assert matches==e['saved_text_scan']
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];ct=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==4 and sorted(n['address'][2:]for n in notes)==sorted(e['primary'])
for n in notes:
 assert all(q in ct for q in n['details_ru']) and n['proposed_name'] and n['summary_ru']
 for p in n['evidence_paths']:assert (ROOT/p).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards; VA/reloc/saved-C scans reproduced')

