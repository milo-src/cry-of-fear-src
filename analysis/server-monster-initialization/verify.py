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
assert e['primary']=='100c0200 100c0370 100c0430'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW' not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1985
for table,checks in [(0x101ce36c,[(0x134,0x100c0430),(0x13c,0x100c0200),(0x140,0x100c0370),(0x148,0x100c2450),(0x144,0x100876d0),(0x200,0x100c2010),(0x128,0x100c2970),(0x15c,0x100c0750),(0x8,0x1000e1f0),(0x4,0x10017110)]),(0x101d608c,[(0xf0,0x100c86d0),(0x20,0x100c90b0)])]:
 for off,target in checks:assert struct.unpack('<I',raw(table+off,4))[0]==target
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];name=('.?AV'+t['name']+'@@').encode()+b'\0';assert raw(typ+8,len(name))==name
for table,checks in [('ENTVARS',[(0x118,'effects'),(0xac,'ideal_yaw'),(0x188,'impulse'),(0x1b8,'teleport_time'),(0x208,'radsuit_finished'),(0x138,'animtime'),(0x13c,'framerate')]),('MONSTER',[(0x1f0,'m_bIsFlickerAppearing'),(0x1f4,'m_flFlickerAppearTime'),(0x1f8,'m_flNextFlickerAppear'),(0x220,'m_bUngibbable'),(0x1e4,'m_vOriginalOrigin'),(0x328,'m_flDistTooFar'),(0x32c,'m_flDistLook')]),('BASE',[(9,'m_bFrozenByCamera'),(10,'m_bIsBoss')]),('ANIMATING',[(0xf8,'m_fSequenceFinished'),(0xfc,'m_fSequenceLoops')])]:
 fields=next(t['fields']for t in e['save_tables']if t['name']==table)
 for off,name in checks:assert any(v(f['offset'])==off and f['name']==name for f in fields)
anchors={0x100c0217:'750f',0x100c021d:'8188a801000000000040',0x100c022e:'c6862002000001',0x100c02d1:'8d8e84010000',0x100c0333:'c7467820040c10',0x100c0340:'c7868000000040070c10',0x100c03a9:'68342f221068342f2210',0x100c03f0:'83c414',0x100c0400:'c74678e0d80b10',0x100c0430:'558bec51568bf1',0x100c0448:'c7803c01000000000000',0x100c0455:'c7803c01000000000000',0x100c048a:'0f2fc17665',0x100c048f:'0f2f8ef80100000f8682000000',0x100c05de:'7a50',0x100c062e:'7b2e',0x100c0641:'ddd8',0x100c0677:'807e09007514',0x100c068c:'d95dfc',0x100c06fd:'f30f1045fc',0x100c071a:'f30f1045fc',0x100c0727:'ff905c010000',0x10001160:'8b01ffa034010000',0x100c0420:'8b01ffa048010000',0x100c074a:'c21000',0x1000e723:'c20400',0x100c075e:'807f0900',0x100b0e24:'ff903c010000'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
s=(O/'1000e5f0-0.asm').read_text();assert not re.search(r'\[ebp\+0x8\]',s)
s=(O/'100c0430-0.asm').read_text();assert len(re.findall(r'fstp   DWORD PTR \[ebp-0x4\]',s))==1
z=e['global_vector'];sec=z['section'];d=v(z['address'])-base-v(sec['rva']);assert sec['raw_size']<=d and d+z['size']<=sec['virtual_size'] and not z['runtime_value_known']
sec_native=next(s for s in sections if s[0].rstrip(b'\0')==b'.data');assert(sec_native[1],sec_native[2],sec_native[3],sec_native[4])==(sec['virtual_size'],v(sec['rva']),sec['raw_size'],sec['raw_offset'])
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==3
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
