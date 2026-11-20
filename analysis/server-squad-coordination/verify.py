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
assert next(x['name']for x in e['api_binding']['slots']if v(x['address'])==0x10223060)=='pfnEntOffsetOfPEntity'
assert next(x['name']for x in e['api_binding']['slots']if v(x['address'])==0x10223064)=='pfnIndexOfEdict'
for f in e['explicit_strings']:assert raw(v(f['address']),len(f['text_latin1'])+1)==f['text_latin1'].encode('latin1')+b'\0'

assert e['primary']=='10101090 101011e0 10101230 10101270 101012e0 10101380 10101490 10101550 10101590 10101910'.split()
assert e['accounting']==dict(new_primary=e['primary'],updated_existing=[])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2072
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW'not in x['block']for x in e['pending_checks'])
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];f=struct.unpack('<5I',raw(col,20));name=('.?AV'+t['name']+'@@').encode()+b'\0';assert raw(f[3]+8,len(name))==name
 ch=struct.unpack('<4I',raw(f[4],16));ds=struct.unpack('<'+'I'*ch[2],raw(ch[3],4*ch[2]));assert ch[2]>0
 for d in ds:
  z=struct.unpack('<6I',raw(d,24));assert raw(z[0]+8,4)==b'.?AV'
vt={t['name']:{v(x['offset']):v(x['target'])for x in t['slots']}for t in e['vtables']}
for cls in ['CSquadMonster','CFlier']:
 assert vt[cls][0x148]==0x10101910 and vt[cls][0x7c]==0x10041890 and vt[cls][0xbc]==0x10013550
assert vt['CSquadMonster'][0x50]==0x100132a0 and vt['CFlier'][0x50]==0x10040770
assert e['exact_le32_data_refs']['targets']['0x10101910']==['0x101afa2c','0x101afcc4']
for a in e['primary'][:-1]:assert e['exact_le32_data_refs']['targets']['0x'+a]==[]
fields=next(t['fields']for t in e['save_tables']if t['name']=='SQUAD')
assert [(f['type_id'],f['name'],v(f['offset']),f['count'],f['flags'])for f in fields]==[(4,'m_hSquadLeader',0x368,1,0),(4,'m_hSquadMember',0x370,4,0),(12,'m_fEnemyEluded',0x398,1,0),(15,'m_flLastEnemySightTime',0x394,1,0),(10,'m_iMySlot',0x39c,1,0)]
fields=next(t['fields']for t in e['save_tables']if t['name']=='MONSTER')
for off,nm in [(0x184,'m_hEnemy'),(0x180,'m_afConditions'),(0x2f4,'m_vecEnemyLKP'),(0x34c,'m_pCine'),(0x350,'m_iClass'),(0x304,'m_afCapability')]:assert any(v(f['offset'])==off and f['name']==nm for f in fields)
anchors={0x101010b1:'c7869c03000000040000',0x101010e2:'3bd7741f',0x10101100:'83f90b7ceb',0x10101125:'c20400',0x101011ff:'83fe047cec',0x10101219:'8d8e68030000',0x10101258:'8b80fc020000',0x101012d1:'83fe057cda',0x1010130d:'8d8b84010000',0x1010134f:'3b45f87515',0x10101409:'f6868001000010',0x10101427:'50',0x10101436:'e83502fcff',0x1010145f:'818e8001000000000100',0x10101502:'660f2ec87706',0x1010151c:'0f2fc87314',0x1010157a:'8b86fc020000',0x101015ba:'837d0c020f8c',0x101015d0:'be0100000089750c',0x1010163a:'7413',0x1010167d:'660f6e4508',0x10101685:'0f5bc0',0x101016c0:'ff92bc000000',0x101016ce:'83be4c03000000',0x10101703:'7548',0x1010175d:'8b4704',0x10101776:'f30f108078010000',0x101017ac:'f30f108078010000',0x101017f5:'9ff6c4447a0f',0x10101835:'83fe01750a',0x1010184c:'c20800',0x10101918:'f6860403000008',0x1010193c:'f680a401000020',0x10101945:'6a046800040000',0x10041890:'8bc1c3',0x10040770:'b805000000c3'}
for a,q in anchors.items():assert raw(a,len(bytes.fromhex(q)))==bytes.fromhex(q),hex(a)
assert struct.unpack('<f',raw(0x101a1390,4))[0]==1.
for a,text in [(0x101df054,'ERROR: SquadMakeEnemy() - pEnemy is NULL!\n'),(0x101df080,'netname'),(0x101df088,'Squad of %d %s formed\n')]:assert raw(a,len(text)+1)==text.encode()+b'\0'
import subprocess,shutil
scan=e['direct_edge_scan'];listing=subprocess.check_output([shutil.which('objdump'),*scan['command'][1:]],text=True);assert h(listing.encode())==scan['listing_sha256']
targets={v(a)for a in scan['targets']};found=[]
for line in listing.splitlines():
 m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})\s+(call|jmp)\s+0x([0-9a-f]+)',line)
 if not m:continue
 a=v(m[1]);q=bytes.fromhex(m[2]);target=v(m[4])
 if target in targets and len(q)==5 and q[0]in(0xe8,0xe9):
  assert raw(a,5)==q and(a+5+struct.unpack('<i',q[1:])[0])&0xffffffff==target
  found.append(dict(address=hex(a),target=hex(target),mnemonic=m[3],bytes_hex=q.hex()))
assert found==scan['matches'] and len(found)==8
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==10
for n in notes:
 assert n['subsystem']=='monsters' and all(d in contract for d in n['details_ru'])
 for path in n['evidence_paths']:assert(R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
