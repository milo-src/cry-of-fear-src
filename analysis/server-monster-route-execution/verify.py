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
assert e['primary']=='100bc290 100155d0 100c2390 100ab8b0'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW' not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2012
assert e['accounting']==dict(new_primary=e['primary'],updated_existing=[])
for off,target in [(0x15c,0x100c0750),(0x160,0x100c0e70),(0x158,0x100bd590),(0x164,0x100c2390),(0x16c,0x100155d0),(0x168,0x10013510)]:
 assert struct.unpack('<I',raw(0x101ce36c+off,4))[0]==target
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];name=('.?AV'+t['name']+'@@').encode()+b'\0';assert raw(typ+8,len(name))==name
for table,checks in [('ENTVARS',[(0x108,'movetype')]),('MONSTER',[(0x210,'m_flMoveWaitFinished'),(0x218,'m_IdealActivity'),(0x22c,'m_iTaskStatus'),(0x2d0,'m_movementActivity'),(0x304,'m_afCapability')]),('ANIMATING',[(0xf0,'m_flGroundSpeed')])]:
 fields=next(t['fields']for t in e['save_tables']if t['name']==table)
 for off,name in checks:assert any(v(f['offset'])==off and f['name']==name for f in fields),(table,off,name)
for a,fmt,value in [(0x101a1ed8,'f',8.0),(0x101a1e10,'d',.2),(0x101a1390,'f',1.0),(0x101cac38,'f',75.0),(0x101a1f1c,'f',100.0),(0x101a9730,'f',300.0)]:
 assert struct.unpack('<'+fmt,raw(a,struct.calcsize(fmt)))[0]==value
assert struct.unpack('<4I',raw(0x101a13e0,16))==(0x80000000,)*4
assert struct.unpack('<4I',raw(0x100c11bc,16))==(0x100c1165,0x100c1165,0x100c117b,0x100c119d)
anchors={
 0x100155d5:'ff90680100008986180200005ec3',
 0x100c239b:'33c00f2f45080f93c05dc20400',
 0x100bc29c:'83f907',0x100bc2d0:'84c00f88',0x100bc2d8:'257ffeffff',
 0x100bc2e7:'ff90dc0000008b8ebc02000089460c',
 0x100bc349:'8d4d08515057',0x100bc35c:'85c07849',
 0x100bc388:'8b45088d0c40a1c0382210',0x100bc3aa:'ff86bc020000',
 0x100bc3d0:'660f2fc17607',0x100ab8e0:'0f2f0590131a10',
 0x100ab989:'660f2ec8',0x100ab9a4:'0f2ec8',
 0x100abad6:'ff9258010000',0x100abc2b:'ff9068010000',
 0x100abc84:'c20c00',0x101174cf:'0f5705e0131a10'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
s=(O/'100ab8b0-0.asm').read_text();assert s.count('ret    0xc')==3 and s.count('call   0x10119420')==1 and s.count('call   0x100c0e70')==1
assert s.count('call   0x101174a0')==2 and 'test   eax,eax' in s
assert e['exact_le32_data_refs']['targets']['0x100ab8b0']==[]
g=e['global_vector'];sec=g['section'];delta=v(g['address'])-base-v(sec['rva']);assert delta>=sec['raw_size'] and delta+g['size']<=sec['virtual_size'] and g['runtime_value_known'] is False
for addr,name in [(0x10222f74,'pfnMoveToOrigin'),(0x1022303c,'pfnAlertMessage')]:
 assert next(s['name']for s in e['api_binding']['slots']if v(s['address'])==addr)==name
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==4
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
