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
for f in e['classname_table']['entries']:
 assert struct.unpack('<I',raw(0x10219cc8+4*f['index'],4))[0]==v(f['pointer']);assert raw(v(f['pointer']),len(f['text_latin1'])+1)==f['text_latin1'].encode()+b'\0'
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
scan=e['rtti_name_scan'];found=[]
for sec in scan['sections']:
 data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];assert h(data)==sec['sha256'];pos=0
 while True:
  pos=data.find(scan['needle'].encode()+b'\0',pos)
  if pos<0:break
  found.append(hex(base+v(sec['rva'])+pos));pos+=1
assert found==scan['hits']
# Exact instructions controlling false/true, signed probability, by-value vector, FP and discard.
checks={0x10104009:'33c0',0x1010400d:'b801000000',0x10104d4d:'038670030000',0x10104d91:'83f84b',0x10104d94:'7c44',0x10104ddd:'c20400',0x10104e02:'b802000000',0x10104e09:'c20400',0x10104e26:'f7860403000000040000',0x100c2797:'c20c00',0x10104e92:'7604',0x10104ea3:'7604',0x10104eb1:'6a00',0x10104eb8:'ddd8',0x10104ebc:'c20400',0x10104f37:'b801000000',0x10104f3e:'33c0',0x10105f43:'7218',0x10105f5a:'c20400'}
for a,x in checks.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
for a,value in [(0x101a13c4,180.0),(0x101a13cc,360.0),(0x101a13d4,-180.0),(0x101a1ea0,3.0)]:assert struct.unpack('<f',raw(a,4))[0]==value
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary']) and len(notes)==8
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',len(e['save_tables']),'tables',len(e['exports']),'export',len(notes),'cards')
