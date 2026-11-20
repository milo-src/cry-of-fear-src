from pathlib import Path
import json,hashlib,struct,re
R=Path(__file__).resolve().parents[2];O=Path(__file__).resolve().parent;e=json.loads((O/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes();h=lambda v:hashlib.sha256(v).hexdigest();v=lambda x:int(x,16)
assert h(b)==e['sha256'] and not e['target_executed']
nt=struct.unpack_from('<I',b,60)[0];opt=nt+24;base=struct.unpack_from('<I',b,opt+28)[0];sh=opt+struct.unpack_from('<H',b,nt+20)[0]
sections=[struct.unpack_from('<8sIIIIIIHHI',b,sh+40*i)for i in range(struct.unpack_from('<H',b,nt+6)[0])]
def raw(a,n):
 for s in sections:
  d=a-base-s[2]
  if 0<=d and d+n<=s[3]:return b[s[4]+d:s[4]+d+n]
 raise AssertionError((hex(a),n))
for r in e['source_c']+e['ranges']+e['support_documents']+[e['api_binding']['header']]:assert h((R/r['path']).read_bytes())==r['sha256']
rows=0
for r in e['ranges']:
 a,end=v(r['start']),v(r['end_exclusive']);pos=a
 assert h(raw(a,end-a))==r['binary_range_sha256']
 for line in (R/r['path']).read_text().splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   at=v(m[1]);q=bytes.fromhex(m[2]);assert pos==at and raw(at,len(q))==q;pos+=len(q);rows+=1
 assert pos==end
for r in e['raw']:
 q=bytes.fromhex(r['bytes_hex']);assert raw(v(r['address']),len(q))==q and h(q)==r['sha256'];assert b[v(r['file_offset']):v(r['file_offset'])+len(q)]==q
erv=struct.unpack_from('<I',b,opt+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+erv,40))
for f in e['exports']:
 i=f['name_index'];nm=base+struct.unpack('<I',raw(base+ex[9]+4*i,4))[0];ix=struct.unpack('<H',raw(base+ex[10]+2*i,2))[0];entry=base+struct.unpack('<I',raw(base+ex[8]+4*ix,4))[0]
 assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0' and ex[5]+ix==f['ordinal'] and entry==v(f['entry'])
header=(R/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for f in e['api_binding']['slots']:assert names[f['slot']]==f['name'] and v(f['address'])==v(e['api_binding']['base'])+4*f['slot']

for f in e['literals']:assert raw(v(f['address']),len(f['text'])+1)==f['text'].encode('latin1')+b'\0'
for table in e['vtables']:
 for slot in table['slots']:assert struct.unpack('<I',raw(v(table['address'])+v(slot['offset']),4))[0]==v(slot['target'])
 col=struct.unpack('<I',raw(v(table['address'])-4,4))[0];typeptr=struct.unpack('<5I',raw(col,20))[3]
 assert raw(typeptr+8,len(table['rtti_name'])+1)==table['rtti_name'].encode()+b'\0'
for table in e['save_tables']:
 for f in table['fields']:
  ty,nm,off,n,fl=struct.unpack('<IIIhH',raw(v(f['record_va']),16));assert (ty,off,n,fl)==(f['type_id'],v(f['offset']),f['count'],f['flags'])
  assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0'
for item in e['float_constants']:assert struct.unpack('<f',raw(v(item['address']),4))[0]==item['value']
# Exact branch opcodes retain unordered behavior and callback store order.
for a,x in [(0x1008aac7,'762b'),(0x1008ab09,'7232'),(0x1008ab43,'7623'),(0x1008ab77,'7229'),(0x1008abca,'761a'),(0x1008ac3a,'c74678a0aa0810'),(0x1008abfc,'c74678e0281010')]:assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary']) and len(notes)==4
for n in notes:
 assert all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',len(e['exports']),'exports',len(notes),'cards')
