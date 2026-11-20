"""Capture bounded monster scheduler evidence from a hash-pinned original PE; never execute DLL."""
from pathlib import Path
import hashlib,json,re,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
b=BINARY.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
pe=pe_metadata(b);tool=shutil.which('objdump');assert tool
TARGETS='1000aa50 1000aad0 1000aaf0 1000ab50 1000ab70 1000abf0 1000afe0 1000b000 1000b020 1000b070 1000b230 1000b260 1000b2f0 1000bbf0 1000bc60'.split()
SUPPORT='100c26f0 100bdf30 100be5b0 100bed20 100c1a70 1010b540 1010f330 10017780 10017790 100177a0 100c2a70 1000aba0 1000e950 100b0f30 100b05e0 100b09e0 100b0940 100c1ec0 100c19a0 1008ca70 10014b20 100132b0'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n]
   return dict(start=hex(a),end_exclusive=hex(a+n),file_offset=hex(o),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def string(a):
 for n in range(1,257):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError('bounded string exceeds256')
j=dict(schema=1,module='server',binary=BINARY.as_posix(),binary_sha256=SHA,image_base=pe['image_base'],method='Saved Ghidra C and bounded static PE/objdump; original DLL not executed; no REA process, runtime, game, build.',range_convention='ASM VA start-inclusive/end-exclusive; saved C inclusive.',source_c=[],assembly=[],tables=[],strings=[])
for a in TARGETS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)
 j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='primary'if a in TARGETS else'support',saved_range_inclusive=[r[1],r[2]],all_saved_ranges_inclusive=[list(x) for x in re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)]))
for record in j['source_c']:
 
 a=int(record['address'],16);end=int(record['saved_range_inclusive'][1],16)+1
 cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(BINARY)]
 p=OUT/(record['address'][2:]+'.asm');p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n');r=raw(a,end-a);r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd);j['assembly'].append(r)


# Exact literal operands and pushed strings in bounded instruction ranges.
seen=set()
for row in j['assembly']:
 text=(ROOT/row['path']).read_text()
 for m in re.finditer(r'(DWORD|QWORD|XMMWORD) PTR ds:0x(101a[0-9a-f]{4})',text):
  a=int(m[2],16);n={'DWORD':4,'QWORD':8,'XMMWORD':16}[m[1]]
  if (a,n) in seen:continue
  seen.add((a,n));r=raw(a,n);r['name']='literal operand '+m[1]
  if n in (4,8):r['floating_value']=struct.unpack('<f' if n==4 else '<d',bytes.fromhex(r['bytes_hex']))[0]
  j['tables'].append(r)
 for a in [int(x,16) for x in re.findall(r'(?:push|mov\s+e[a-z]{2},)\s*0x(101[a-f][0-9a-f]{4})',text)]:
  if any(int(x['start'],16)==a for x in j['strings']):continue
  try:r=string(a)
  except (ValueError,UnicodeDecodeError):continue
  if r['ascii'] and all(c in '\r\n\t' or 32<=ord(c)<127 for c in r['ascii']):j['strings'].append(r)

for a,n,label in [(0x101ce36c,0x23c,'CGenericMonster vtable from factory100b05e0'),(0x1000afbc,9*4,'GetSchedule state switch'),(0x1000bb48,16*4,'RunTask targets'),(0x1000bb88,92,'RunTask byte remap task1..92'),(0x1000d09c,92*4,'StartTask task1..92'),(0x1000d20c,8*4,'script action activity switch')]:
 r=raw(a,n);r['name']=label
 if n%4==0:r['dwords_hex']=[hex(x) for x in struct.unpack('<'+'I'*(n//4),bytes.fromhex(r['bytes_hex']))]
 j['tables'].append(r)
r=raw(0x10216e08,49*16);r['name']='native CBaseMonster save descriptors';r['fields']=[]
for i in range(49):
 typ,name,offset,count,flags=struct.unpack('<IIIHH',bytes.fromhex(r['bytes_hex'])[i*16:i*16+16]);ns=string(name);j['strings'].append(ns);r['fields'].append(dict(type_id=typ,name=ns['ascii'],offset=hex(offset),count=count,flags=flags))
j['tables'].append(r)
# Numeric schedule records and task arrays, as selected by saved base selector.
addresses={0x10213310}
addresses.update(int(x,16) for x in re.findall(r'PTR_DAT_([0-9a-f]{8})',(ROOT/'decompiled/server/partial-pass/functions/0x1008ca70.c').read_text()))
for a in sorted(addresses):
 r=raw(a,20);ptr,count,interrupt,sounds,name=struct.unpack('<IIIII',bytes.fromhex(r['bytes_hex']));r['name']='schedule';ns=string(name);j['strings'].append(ns);r['schedule_name']=ns['ascii'];r['task_pointer']=hex(ptr);r['count']=count;r['interrupt_mask']=hex(interrupt);r['sound_mask']=hex(sounds);j['tables'].append(r)
 assert count<100
 r=raw(ptr,count*8);r['name']='task array '+ns['ascii'];r['tasks']=[dict(id=t[0],data=t[1]) for t in struct.iter_unpack('<If',bytes.fromhex(r['bytes_hex']))];j['tables'].append(r)

j['navigation_sources']=[dict(path='analysis/exports/hl.csv',sha256=hashlib.sha256((ROOT/'analysis/exports/hl.csv').read_bytes()).hexdigest(),role='saved native export index; monster_generic=100b0f30')]
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print(len(TARGETS),'targets',len(j['assembly']),'ASM')
