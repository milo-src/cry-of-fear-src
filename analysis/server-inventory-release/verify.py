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
assert e['primary']=='100f1350 100f1a50 100f1c20 100f1d00 1011d350 1011e390'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW'not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1946
for key,refs in e['saved_c_lexical_references'].items():
 for r in refs:
  t=(R/r['path']).read_text(encoding='utf8');assert h((R/r['path']).read_bytes())==r['sha256'];assert len(re.findall(r'FUN_'+key[2:]+r'\(',t))==r['occurrences']
for a,n in [(0x101a4da8,'CBasePlayer'),(0x101e614c,'CWeaponBox'),(0x101a7804,'CBasePlayerWeapon')]:
 col=struct.unpack('<I',raw(a-4,4))[0];sig,offset,cd,typ,hier=struct.unpack('<5I',raw(col,20));name=b'.?AV'+n.encode()+b'@@\0';assert raw(typ+8,len(name))==name
assert struct.unpack('<I',raw(0x101a4da8+0x90,4))[0]==0x100f1350
assert struct.unpack('<f',raw(0x101a1ee0,4))[0]==10.0
for cls,off,name in [('PLAYER',0x2538,'m_pNextItem'),('PLAYER',0x1ef9,'m_bWeaponWaitingToDeploy'),('PLAYER',0x2534,'m_pLastItem'),('PLAYER',0x252c,'m_pActiveItem'),('ITEM',0x160,'m_pPlayer'),('ITEM',0x114,'slotnumber'),('WEAPON',0x178,'m_bIronSights'),('MONSTER',0x308,'m_flNextAttack')]:
 assert any(v(f['offset'])==off and f['name']==name for t in e['save_tables']if t['name']==cls for f in t['fields'])
fields=next(t['fields']for t in e['save_tables']if t['name']=='WEAPON_BOX')
assert len(fields)==5 and fields[-1]==dict(type_id=1,name='weaponmodel',offset='0xdc',count=1,flags=0)
anchors={0x100f13ed:'c20400',0x100f1409:'c20400',0x100f1420:'c20400',0x100f1c15:'c20400',0x100f1cef:'c20400',0x100f1ddd:'c20400',0x1011d3c9:'c20400',0x1011d3d5:'c20400',0x1011e48b:'c20800',0x1011e493:'c20800',0x100f1a94:'0f87',0x100f1b40:'0f8b',0x100f1c91:'775a',0x100f1d1a:'0f87',0x100f1dd2:'c686f91e000001',0x100edfd1:'0f86',0x100edfdd:'8b872c250000',0x100ee061:'c687f91e000000',0x1011e3b5:'ff9090000000',0x1011e467:'c7467800000000',0x1011e47f:'c7861401000000000000'}
for a,q in anchors.items():q=bytes.fromhex(q);assert raw(a,len(q))==q,hex(a)
for call,target in [(0x100f1362,0x100f1440),(0x100f1373,0x10017ad0),(0x100f1a66,0x100e4ed0),(0x100f1bd4,0x100f1440),(0x100f1cb7,0x100f1440),(0x100f1dbb,0x100f1440),(0x1011e39b,0x1011d350)]:
 assert raw(call,1)==b'\xe8'and call+5+struct.unpack('<i',raw(call+1,4))[0]==target
# Local no-write claims are checked against disassembly text, not guessed from names.
slot=(O/'100f1d00-0.asm').read_text();unlink=(O/'100f1350-0.asm').read_text()
assert '0x2538' not in slot and '0x2538'not in unlink and '0x1ef9'not in unlink
assert 'cmp    BYTE PTR [ebp+0x8],0x0' in (O/'100f1c20-0.asm').read_text()
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8').replace('\n',' ')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==6
for n in notes:
 assert n['subsystem']=='weapons'and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
