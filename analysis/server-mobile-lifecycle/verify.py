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
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header']]:assert h((R/r['path']).read_bytes())==r['sha256']
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
header=(R/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for f in e['api_binding']['slots']:assert names[f['slot']]==f['name'] and v(f['address'])==v(e['api_binding']['base'])+4*f['slot']
for f in e['explicit_strings']:assert raw(v(f['address']),len(f['text_latin1'])+1)==f['text_latin1'].encode('latin1')+b'\0'

assert all('REVIEW'not in x for x in e['pending_check']['blocks'].values())
assert set(e['pending_check']['entries'])==set(e['primary'])
f=e['baseline_progress_report'];assert h((R/f['path']).read_bytes())==f['sha256'];assert json.loads((R/f['path']).read_text(encoding='utf8'))['after_reviewed']==1910
vt={int(x['offset'],16):int(x['target'],16)for x in e['vtables'][0]['slots']}
assert len(vt)==118 and {k:vt[k]for k in [8,0x2c,0x30,0x13c,0x144,0x19c,0x1cc]}=={8:0x1011f680,0x2c:0x10053bc0,0x30:0x10053880,0x13c:0x10053150,0x144:0x10052e90,0x19c:0x1011f640,0x1cc:0x10053bb0}
assert e['exports'][0]['name']=='weapon_mobile'and e['exports'][0]['ordinal']==826 and len(e['exports'])==1
col=struct.unpack('<I',raw(0x101b26c4,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];assert raw(typ+8,14)==b'.?AVCMobile@@\0'
f=e['diagnostic_clip_string'];assert raw(v(f['address']),len(f['text_latin1'])+1)==f['text_latin1'].encode('latin1')+b'\0'and f['text_latin1']=='m_iclip:  %i\n'
anchors={0x10052e78:'c700c8261b10',0x10052e84:'33c0897004',0x10053e50:'e9dbefffff',0x10052ec4:'ff909c010000',0x100531a7:'b801000000',0x100531ad:'c20400',0x10053bb0:'b801000000c3',0x10053c60:'898e10010000',0x10053c66:'74e8',0x10053c88:'898e0c010000',0x1011f676:'c20800',0x1011f6a8:'c20400',0x10120286:'c20400'}
for a,q in anchors.items():q=bytes.fromhex(q);assert raw(a,len(q))==q,hex(a)
for call,target in [(0x10052efa,0x1011c1a0),(0x10052f0d,0x1011c1a0),(0x10053c26,0x1011d150),(0x1012022d,0x1000f390),(0x1011f686,0x1011ab20)]:
 assert raw(call,1)==b'\xe8'and call+5+struct.unpack('<i',raw(call+1,4))[0]==target
info=(O/'10053150-0.asm').read_text();assert '[eax+0x24]'not in info
stores=re.findall(r'mov\s+DWORD PTR \[eax(?:\+0x([0-9a-f]+))?\],(0x[0-9a-f]+)',info)
assert {int(a or '0',16):int(x,16)for a,x in stores}=={0:1,4:0,8:0,12:0xffffffff,16:0,20:0xffffffff,28:0xffffffff,32:2,40:1}
assert '[eax+0x18],ecx'in info
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8').replace('\n',' ')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==7
for n in notes:
 assert n['subsystem']=='weapons'and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',len(e['save_tables']),'tables',len(e['exports']),'exports',len(notes),'cards')
