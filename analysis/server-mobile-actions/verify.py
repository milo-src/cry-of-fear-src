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
assert e['primary']==['10052f20','10053060','10053800','10053a70','10053d80']
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary']
assert all('REVIEW' not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1910
assert {(x['ordinal'],x['entry'])for x in e['exports']}=={(126,'0x10052f20'),(131,'0x10053060'),(199,'0x10053800'),(187,'0x100e7af0')}
for a,n in [(0x101b26c8,'CMobile'),(0x101a4da8,'CBasePlayer')]:
 col=struct.unpack('<I',raw(a-4,4))[0];sig,offset,cd,typ,hier=struct.unpack('<5I',raw(col,20));name=b'.?AV'+n.encode()+b'@@\0';assert raw(typ+8,len(name))==name
for off,target in [(8,0x1011f680),(0x198,0x1011f5d0),(0x19c,0x1011f640),(0x1a8,0x10053a70),(0x1b0,0x10053d80)]:assert struct.unpack('<I',raw(0x101b26c8+off,4))[0]==target
for cls,off,name,typ in [('PLAYER',0x1e98,'m_iMobileFlashMode',10),('PLAYER',0x5d0,'m_iFlashlightFlags',10),('PLAYER',0x1f1c,'m_bPhoneLow',12),('PLAYER',0x1f14,'m_iPhoneDisabled',10),('PLAYER',0x1f20,'m_fNextPhoneWarnTime',15),('MONSTER',0x308,'m_flNextAttack',15),('ITEM',0x160,'m_pPlayer',3),('ITEM',0x128,'m_iSprintState',10),('WEAPON',0x1d4,'m_flNextTertiaryAttack',15)]:
 fields=next(x['fields']for x in e['save_tables']if x['name']==cls);assert any(v(x['offset'])==off and x['name']==name and x['type_id']==typ for x in fields)
assert struct.unpack('<d',raw(0x101a1e48,8))[0]==0.5
assert struct.unpack('<f',raw(0x101a9724,4))[0]==5.0
assert struct.unpack('<f',raw(0x101a1390,4))[0]==1.0
assert struct.unpack('<f',raw(0x101a1eec,4))[0]==20.0
assert raw(0x101dad50,9)==b'VGUIMenu\0' and raw(0x101dad74,6)==b'Phone\0' and raw(0x101dae74,11)==b'WeaponBody\0'
anchors={0x10053066:'f680d005000001',0x10053087:'740f',0x10053089:'83c802',0x100530a0:'7409',0x100530a2:'83c801',0x100530ab:'c3',0x10053835:'c704240000803f',0x1005383f:'c74678202f0510',0x1005387e:'c3',0x10052fa6:'c686f901000000',0x10052ffb:'c6801c1f000000',0x10053015:'c686f801000000',0x1005305b:'c3',0x10053a97:'0f2fc1',0x10053a9a:'0f8702010000',0x10053ad3:'83be2801000000',0x10053b2c:'c704242731083e',0x10053b45:'c74078f07a0e10',0x10053ba3:'c3',0x10053dd9:'776e',0x10053ddb:'68c8000000',0x10053e4a:'c3',0x1011f68b:'d84508',0x1011f691:'d95d08',0x1011f6a8:'c20400',0x1011f676:'c20800',0x1000f7d3:'7f3c',0x1000f7ed:'7d21',0x1000f7fe:'f7f9',0x1000f801:'f77d08'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==5
for n in notes:
 assert n['subsystem']=='weapons' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
