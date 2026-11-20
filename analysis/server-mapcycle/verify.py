"""Verify static capture provenance; neither imports nor executes the target DLL."""
from pathlib import Path
import hashlib,json,re,struct,sys
ROOT=Path(__file__).resolve().parents[2]
p=Path(__file__).with_name('evidence.json')
e=json.loads(p.read_text(encoding='utf-8'));b=Path(e['binary']).read_bytes()
sha=lambda x:hashlib.sha256(x).hexdigest();va=lambda x:int(x,16)
assert sha(b)==e['sha256'] and e['target_executed'] is False
# Independent minimal PE section mapper, not capture.py's metadata helper.
pe=struct.unpack_from('<I',b,0x3c)[0];count=struct.unpack_from('<H',b,pe+6)[0]
opt=pe+24;optsize=struct.unpack_from('<H',b,pe+20)[0];base=struct.unpack_from('<I',b,opt+28)[0]
sections=[struct.unpack_from('<8sIIIIIIHHI',b,opt+optsize+i*40) for i in range(count)]
def raw(a,n):
 for s in sections:
  delta=a-base-s[2]
  if 0<=delta and delta+n<=s[3]:return b[s[4]+delta:s[4]+delta+n]
 raise AssertionError((hex(a),n))
for r in e['source_c']+e['ranges']+e['supporting_sources']:
 assert sha((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
rows=0
for r in e['ranges']:
 start,end=va(r['start']),va(r['end_exclusive']);at=start
 assert sha(raw(start,end-start))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text(encoding='utf-8').splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=va(m[1]);v=bytes.fromhex(m[2]);assert addr==at and raw(addr,len(v))==v
   at+=len(v);rows+=1
 assert at==end
raw_count=0
def check(o):
 global raw_count
 if isinstance(o,dict):
  if 'bytes_hex' in o:
   v=bytes.fromhex(o['bytes_hex']);a=va(o['address'])
   assert raw(a,len(v))==v and sha(v)==o['sha256'] and a+len(v)==va(o['end_exclusive'])
   assert b[va(o['file_offset']):va(o['file_offset'])+len(v)]==v
   if 'ascii'in o:assert v==o['ascii'].encode('ascii')+b'\0'
   raw_count+=1
  for child in o.values():check(child)
 elif isinstance(o,list):
  for child in o:check(child)
check(e)
for v in e['vtables']:
 for s in v['slots']:assert struct.unpack('<I',raw(va(v['address'])+va(s['offset']),4))[0]==va(s['target'])
api=e['api_binding'];h=ROOT/api['header'];assert sha(h.read_bytes())==api['header_sha256']
names=re.findall(r'\(\*(pfn\w+)\s*\)',h.read_text(encoding='utf-8').split('typedef struct enginefuncs_s',1)[1])
for s in api['slots']:
 assert names[s['slot']]==s['name'] and va(s['address'])==va(api['base'])+s['slot']*4
notes=json.loads(p.with_name('notes.json').read_text(encoding='utf-8'))['functions']
assert {r['address']for r in e['source_c']if r['role']=='primary'}=={n['address']for n in notes}
for n in notes:
 for f in n['evidence_paths']:assert (ROOT/f).is_file(),f
 assert n['module']=='server' and n['subsystem']=='world'
print('PASS',len(notes),'cards,',len(e['source_c']),'C,',len(e['ranges']),'ASM,',rows,'byte rows,',raw_count,'raw,',len(e['vtables']),'vtable, no cache dependency')
