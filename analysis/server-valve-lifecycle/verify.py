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
assert e['primary']=='10042560 100425c0 100426a0 10042720 10042740 100429b0 100429d0 10042a00 10042b00 10042b40 10042ba0 10042da0 10043130 10043380'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('[REVIEW server:'not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2012
for key,refs in e['saved_c_lexical_references'].items():
 for r in refs:
  t=(R/r['path']).read_text(encoding='utf8');assert h((R/r['path']).read_bytes())==r['sha256'];assert len(re.findall(r'FUN_'+key[2:]+r'\(',t))==r['occurrences']
for t in e['vtables']:
 a=v(t['address']);col=struct.unpack('<I',raw(a-4,4))[0];sig,offset,cd,typ,hier=struct.unpack('<5I',raw(col,20));name=b'.?AV'+t['name'].encode()+b'@@\0';assert raw(typ+8,len(name))==name
assert struct.unpack('<f',raw(0x101b00e0,4))[0]==359.0
assert struct.unpack('<d',raw(0x101ae0a0,8))[0]==0.31
assert struct.unpack('<d',raw(0x101b00d8,8))[0]==0.025
for cls,off,name in [('ENTVARS',0x248,'iuser1'),('ENTVARS',0x24c,'iuser2'),('ENTVARS',0x250,'iuser3'),('ENTVARS',0x254,'iuser4'),('ENTVARS',0x188,'impulse'),('BASE',0x14,'m_pMoveWith'),('BASE',0x78,'m_pfnThink'),('VALVE',0x1a0,'m_flNextCharge'),('VALVE',0x1a4,'m_iOn'),('VALVE',0x1a8,'m_flSoundTime'),('VALVE',0x198,'m_hRotateModel'),('VALVE',0x18c,'m_vInitialEntityAngles')]:
 assert any(v(f['offset'])==off and f['name']==name for t in e['save_tables']if t['name']==cls for f in t['fields'])
assert all(v(f['offset'])!=0x188 for t in e['save_tables']if t['name'] in ['VALVE','BASE'] for f in t['fields'])
anchors={0x10042592:'68ac010000',0x100425b4:'33c0897004',0x10042df0:'0f8333030000',0x10042737:'0f47c2',0x10042e67:'c21000',0x1004312c:'c21000',0x10042b14:'c20400',0x10042b9c:'c20400',0x100429bc:'b810000000',0x10042ac2:'f6c444',0x10042ac5:'7b1a',0x1004260d:'0f8287000000',0x10042c87:'7c0d'}
for a,q in anchors.items():q=bytes.fromhex(q);assert raw(a,len(q))==q,hex(a)
for call,target in [(0x10042631,0x10101ff0),(0x10042ae4,0x100425c0),(0x10042a1b,0x10043130),(0x10042dc9,0x10017740),(0x10042b27,0x10117010),(0x10042b84,0x1011adc0),(0x100426c0,0x10118590)]:
 assert raw(call,1)==b'\xe8'and call+5+struct.unpack('<i',raw(call+1,4))[0]==target
assert raw(0x10043380,1)==b'\xe9'and 0x10043385+struct.unpack('<i',raw(0x10043381,4))[0]==0x10042560
expected={0x2c:0x10042ba0,0x30:0x100429d0,0x34:0x10042740,0x38:0x10042b40,0x3c:0x10042b00,0x40:0x100429b0,0x5c:0x10042720,0xe8:0x10042da0}
for offset,target in expected.items():assert struct.unpack('<I',raw(0x101aff4c+offset,4))[0]==target
assert not any('bad)' in (R/r['path']).read_text()for r in e['ranges'])
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8').replace('\n',' ')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==14
for n in notes:
 assert n['subsystem']=='doors'and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
