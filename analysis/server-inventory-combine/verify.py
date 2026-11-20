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
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['baseline_report']]:assert h((R/r['path']).read_bytes())==r['sha256']
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
for t in e['save_tables']:
 for i,f in enumerate(t['fields']):
  ty,nm,off,c,fl=struct.unpack('<IIIhh',raw(v(t['address'])+16*i,16));assert (ty,off,c,fl)==(f['type_id'],v(f['offset']),f['count'],f['flags']);assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0'
for t in e['vtables']:
 for f in t['slots']:assert struct.unpack('<I',raw(v(t['address'])+v(f['offset']),4))[0]==v(f['target'])
erv=struct.unpack_from('<I',b,opt+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+erv,40))
for f in e['exports']:
 i=f['name_index'];nm=base+struct.unpack('<I',raw(base+ex[9]+4*i,4))[0];ix=struct.unpack('<H',raw(base+ex[10]+2*i,2))[0];entry=base+struct.unpack('<I',raw(base+ex[8]+4*ix,4))[0]
 assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0' and ex[5]+ix==f['ordinal'] and entry==v(f['entry'])
for target,expected in e['exact_le32_data_refs']['targets'].items():
 found=[]
 for s in e['exact_le32_data_refs']['sections']:
  d=b[s['raw_offset']:s['raw_offset']+s['raw_size']];assert h(d)==s['sha256'];at=0
  while True:
   at=d.find(struct.pack('<I',v(target)),at)
   if at<0:break
   found.append(hex(base+v(s['rva'])+at));at+=1
 assert found==expected


header=(R/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for f in e['api_binding']['slots']:assert names[f['slot']]==f['name'] and v(f['address'])==v(e['api_binding']['base'])+4*f['slot']
for f in e['explicit_strings']:assert raw(v(f['address']),len(f['text_latin1'])+1)==f['text_latin1'].encode('latin1')+b'\0'
assert e['primary']=='100e3020 100e42f0 100e0310'.split()
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2005
for key,refs in e['saved_c_lexical_references'].items():
 for r in refs:
  t=(R/r['path']).read_text(encoding='utf8');assert h((R/r['path']).read_bytes())==r['sha256'];assert len(re.findall(r'FUN_'+key[2:]+r'\(',t))==r['occurrences']
for cls,off,name in [('PLAYER',0x21fc,'inventorySlot'),('PLAYER',0x1e9c,'m_bThreeSlots'),('PLAYER',0x1ee8,'m_bInPhoneCall'),('PLAYER',0x2514,'m_rgpPlayerItems'),('ITEM',0x168,'m_iId'),('ITEM',0x164,'m_pNext')]:
 assert any(v(f['offset'])==off and f['name']==name for t in e['save_tables']if t['name']==cls for f in t['fields'])
for a,q in {0x100e344f:'c20c00',0x100e0367:'c20400',0x100e3227:'c680f801000001',0x100e32bc:'c680f801000001',0x100e4328:'b801000000',0x100e4351:'33c0',0x100e0334:'ff9074010000',0x100e0346:'8bb664010000'}.items():
 q=bytes.fromhex(q);assert raw(a,len(q))==q,hex(a)
for call,target in [(0x100e309c,0x100e4ee0),(0x100e30f9,0x100dff70),(0x100e310b,0x1001f160),(0x100e3215,0x100dd990),(0x100e321e,0x100e0310),(0x100e323a,0x100e4360),(0x100e33c9,0x100dd990),(0x100e33d3,0x100dd990)]:
 assert raw(call,1)==b'\xe8' and call+5+struct.unpack('<i',raw(call+1,4))[0]==target
assert not any('bad)' in (R/r['path']).read_text()for r in e['ranges'])
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=' '.join((O/'contract.md').read_text(encoding='utf8').split())
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==3
for n in notes:
 assert all(' '.join(x.split()) in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
