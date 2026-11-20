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
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['const_header'],e['usermessage_registry'],e['baseline_report']]:assert h((R/r['path']).read_bytes())==r['sha256']
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
assert e['primary']=='10091300 100aa8c0 1009e090 100967c0 1009aff0 1009a690 100a7c50 100a7480 100e9ff0'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW'not in x['block']for x in e['pending_checks'])
f=e['baseline_report'];assert h((R/f['path']).read_bytes())==f['sha256'];assert json.loads((R/f['path']).read_text(encoding='utf8'))['after_reviewed']==1927
assert e['exports']==[dict(name='trigger_cofmobile',entry='0x100aa8c0',ordinal=772,name_index=771)]
for a,n in [(0x101b26c8,'CMobile'),(0x101c3b90,'CCofTriggerMobile'),(0x101c6aa4,'CCofPhoneDisable'),(0x101c3698,'CCofPhoneCheck')]:
 col=struct.unpack('<I',raw(a-4,4))[0];sig,offset,cd,typ,hier=struct.unpack('<5I',raw(col,20));name=b'.?AV'+n.encode()+b'@@\0';assert raw(typ+8,len(name))==name
for off,target in [(0x2c,0x1009e090),(0x34,0x100967c0),(0x38,0x1009aff0),(0x3c,0x1009a690),(0xe8,0x100a7c50)]:assert struct.unpack('<I',raw(0x101c3b90+off,4))[0]==target
assert struct.unpack('<I',raw(0x101c6aa4+0xe8,4))[0]==0x100a7480
f=next(t['fields']for t in e['save_tables']if t['name']=='TRIGGER_MOBILE');assert f==[dict(type_id=10,name='m_iszBodyNumber',offset='0xdc',count=1,flags=0)]
for a,t,value in [(0x101ca820,'d',1.52),(0x101b5ff0,'d',1.1),(0x101a1390,'f',1.0),(0x101a1eb8,'f',4.0)]:assert struct.unpack('<'+t,raw(a,struct.calcsize(t)))[0]==value
anchors={0x10091348:'c700903b1c10',0x10091354:'33c0897004',0x100aa8c0:'e93b6afeff',0x1009e0a0:'c7801801000080000000',0x10096806:'8987dc000000',0x10096816:'c20400',0x1009a6be:'c20400',0x1009b04c:'c20400',0x100a7efb:'c21000',0x100a75a6:'c21000',0x100ea1e4:'c20400',0x100ea047:'f6c444',0x100ea04a:'7a11',0x100ea0ed:'81fb8f030000',0x100ea0f5:'83fb70',0x100a7532:'c686f901000001',0x100a7d3a:'c683c01e000001'}
for a,q in anchors.items():q=bytes.fromhex(q);assert raw(a,len(q))==q,hex(a)
for call,target in [(0x1009681c,0x1000dba0),(0x100967fe,0x1016b55e),(0x100a7d0c,0x10052e30),(0x100a7522,0x10052e30),(0x100ea108,0x10052e30),(0x1001980a,0x100e9ff0),(0x100ea056,0x100a1cd0),(0x100ea067,0x10094270)]:
 assert raw(call,1)==b'\xe8'and call+5+struct.unpack('<i',raw(call+1,4))[0]==target
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8').replace('\n',' ')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==9
for n in notes:
 assert n['subsystem']=='weapons'and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
