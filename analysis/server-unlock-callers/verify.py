"""Read-only verification of pinned C/ASM/raw evidence; no target execution."""
from pathlib import Path
import hashlib,json,re,struct,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes()
h=lambda x:hashlib.sha256(x).hexdigest()
assert h(b)==e['sha256'];pe=pe_metadata(b);base=int(pe['image_base'],16)
def raw(a,n):
 for s in pe['sections']:
  d=a-base-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:return b[s['raw_offset']+d:s['raw_offset']+d+n]
 raise ValueError(hex(a))
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header']]:assert h((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
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
 v=bytes.fromhex(r['bytes_hex']);assert raw(int(r['address'],16),len(v))==v and h(v)==r['sha256'];assert b[int(r['file_offset'],16):int(r['file_offset'],16)+len(v)]==v
for table in e['vtables']:
 for r in table['slots']:
  assert int(r['target'],16)==struct.unpack('<I',raw(int(table['address'],16)+int(r['offset'],16),4))[0]
for table in e['save_tables']:
 for i,r in enumerate(table['fields']):
  t,nm,off,c,fl=struct.unpack('<IIIhh',raw(int(table['address'],16)+i*16,16))
  assert (t,off,c,fl)==(r['type_id'],int(r['offset'],16),r['count'],r['flags'])
  assert raw(nm,len(r['name'])+1)==r['name'].encode()+b'\0'
header=(ROOT/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:
 assert names[r['slot']]==r['name'] and int(r['address'],16)==int(e['api_binding']['base'],16)+4*r['slot']
scan=e['direct_reference_scan'];targets={int(x,16) for x in scan['targets']}
matches=[]
for sec in pe['sections']:
 if sec['name']!='.text':continue
 origin=base+int(sec['rva'],16);x=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']]
 for i in range(len(x)-4):
  if x[i] not in (0xe8,0xe9):continue
  target=(origin+i+5+struct.unpack_from('<i',x,i+1)[0])&0xffffffff
  if target in targets:matches.append((hex(origin+i),hex(target),x[i:i+5].hex()))
assert matches==[(r['site'],r['target'],r['bytes_hex'])for r in scan['records']]
for r in scan['records']:
 assert r['instruction_aligned'] and r['saved_owners']
 for owner in r['saved_owners']:
  rng=next(x for x in e['ranges'] if x['entry']==owner and int(x['start'],16)<=int(r['site'],16)<int(x['end_exclusive'],16))
  assert re.search(r'^'+r['site'][2:]+r':\s+(?:[0-9a-f]{2}\s+){5}\s*(?:call|jmp)\s+'+r['target']+r'\s*$',(ROOT/rng['path']).read_text(),re.M)
assert len(scan['records'])==236
assert len({x for r in scan['records']for x in r['saved_owners']})==20
for cls,entry in zip(e['vtables'],e['primary']):
 assert next(r['target']for r in cls['slots']if r['offset']=='0xe8')=='0x'+entry
notes=json.loads((OUT/'notes.json').read_text(encoding='utf8'))['functions']
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary'])
for n in notes:
 for p in n['evidence_paths']:assert (ROOT/p).is_file(),p
print('PASS',len(e['source_c']),'C,',len(e['ranges']),'ASM,',lines,'byte rows,',len(e['raw']),'raw,',len(notes),'cards')
