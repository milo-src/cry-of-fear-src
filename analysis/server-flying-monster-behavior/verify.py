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
assert e['primary']=='100ab410 100ab4d0 100ab5a0 100ab710 100ab740 100ab7d0 100ab880 100abc90 100abea0 100abf60'.split()
assert len(e['primary'])==10 and e['accounting']==dict(new_primary=e['primary'],updated_existing=[])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2041
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW'not in x['block']for x in e['pending_checks'])
for table,checks in [('ENTVARS',[(0x50,'angles'),(0x108,'movetype'),(0x1a8,'flags')]),('MONSTER',[(0x218,'m_IdealActivity')]),('ANIMATING',[(0xf0,'m_flGroundSpeed')])]:
 fields=next(t['fields']for t in e['save_tables']if t['name']==table)
 for off,name in checks:assert any(v(f['offset'])==off and f['name']==name for f in fields)
for a,fmt,value in [(0x101cac30,'d',4096.),(0x101cac28,'d',220.),(0x101cac3c,'f',-20.),(0x101a13c0,'f',90.),(0x101a1f78,'f',-90.),(0x101afed8,'f',2048.),(0x101a1e48,'d',.5),(0x101a1f04,'f',64.),(0x101a9728,'f',32.)]:
 assert struct.unpack('<'+fmt,raw(a,struct.calcsize(fmt)))[0]==value
anchors={
 0x100ab44a:'f20f580530ac1c10',0x100ab473:'7b0c',0x100ab489:'f680a801000002',
 0x100ab4a6:'e885f50600',0x100ab4b3:'c20400',0x100ab4fa:'d95df8',
 0x100ab4fd:'ff9068010000',0x100ab518:'0f2fc1760a',0x100ab527:'0f2f0dec1e1a10',
 0x100ab550:'f20f590528ac1c10',0x100ab58a:'e8311801005e8be55dc20400',
 0x100ab5c5:'83f8fd0f8535010000',0x100ab5fb:'6a026a00',
 0x100ab65c:'85ff7466',0x100ab6c6:'837c242400750f',0x100ab6d5:'0f2f442430761a',
 0x100ab6f1:'3b4874750d',0x100ab6f6:'b802000000',0x100ab70a:'c21000',
 0x100ab72a:'e8512801005dc21400',0x100ab793:'7b09',
 0x100ab7b0:'8b4904b832000000ba0100000083b908010000050f45c2c3',
 0x100ab7e6:'e9253b0100',0x100ab823:'c781740300000000c843',
 0x100ab88f:'8b81740300008981f0000000',0x100ab8a6:'e8a54e01005dc20400',
 0x100abcb7:'d1ea83e20183fbfd0f94c13bd17417',0x100abcc9:'c70000000000',
 0x100abcf0:'c7000000803f33c0',0x100abd85:'7a08',
 0x100abde3:'f20f590d481e1a10f20f58c8',0x100abe83:'f30f5e542428',
 0x100abeb2:'f684ce4402000080',0x100abf46:'0f2fc10f93c0',
 0x100abf71:'7410c7867403000000000000898618020000',
 0x100abfa7:'a13c2f22108986700300005ec3'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
native=e['native_only_entry'];assert native['saved_c']is False and native['review_count']==0 and native['entry']=='0x100ab7b0'
assert raw(0x100ab7a7,9)==bytes.fromhex(native['preceding_padding'])==b'\xcc'*9
assert raw(0x100ab7c8,8)==bytes.fromhex(native['following_padding'])==b'\xcc'*8
assert not (R/'decompiled/server/partial-pass/functions/0x100ab7b0.c').exists()
assert all(not refs for refs in e['exact_le32_data_refs']['targets'].values())
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];name=('.?AV'+t['name']+'@@').encode()+b'\0';assert raw(typ+8,len(name))==name
g=e['global_vector'];s=g['section'];d=v(g['address'])-base-v(s['rva']);assert d>=s['raw_size'] and d+g['size']<=s['virtual_size'] and g['runtime_value_known']is False
# Independent rerun: full static listing is ephemeral, never a target DLL execution.
import subprocess,shutil
scan=e['direct_edge_scan'];command=[shutil.which('objdump'),*scan['command'][1:]];listing=subprocess.check_output(command,text=True)
assert h(listing.encode())==scan['listing_sha256']
targets={v(a)for a in scan['targets']};found=[]
for line in listing.splitlines():
 m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})\s+(call|jmp)\s+0x([0-9a-f]+)',line)
 if not m:continue
 a=v(m[1]);q=bytes.fromhex(m[2]);target=v(m[4])
 if target in targets and len(q)==5 and q[0]in(0xe8,0xe9):
  assert raw(a,5)==q and(a+5+struct.unpack('<i',q[1:])[0])&0xffffffff==target
  found.append(dict(address=hex(a),target=hex(target),mnemonic=m[3],bytes_hex=q.hex()))
assert found==scan['matches']==[]
assert [i for i in range(len(b))if b.startswith(e['rtti_name_scan']['needle_ascii'].encode(),i)]==e['rtti_name_scan']['file_offsets']==[]
for address,name in [(0x10222ffc,'pfnPointContents'),(0x10222fc4,'pfnTraceLine'),(0x10222fd0,'pfnTraceHull')]:assert next(s['name']for s in e['api_binding']['slots']if v(s['address'])==address)==name
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==10
for n in notes:
 assert n['subsystem']=='monsters' and all(d in contract for d in n['details_ru'])
 for path in n['evidence_paths']:assert(R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards; native-only entry not counted')
