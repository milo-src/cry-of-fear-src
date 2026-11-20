from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys,os
ROOT=Path.cwd();OUT=ROOT/'analysis/server-sentence-lifecycle';OUT.mkdir(exist_ok=True);sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='100fc8f0 100fc970 100fcaf0 100fc7d0 101004c0 100fe990 100fd7f0 101002c0 1011a220'.split()
SUPPORT='100fc9f0 100b4aa0 101217c0 100fdf70 10119680 10116a30'.split()

def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n];return dict(address=f'0x{a:08x}',end_exclusive=f'0x{a+n:08x}',file_offset=hex(o),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def string(a):
 for n in range(1,256):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError(hex(a))
j=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,method='Saved C, static objdump and PE byte reads; no REA session or target execution.',source_c=[],ranges=[],literals=[],vtables=[],save_tables=[],export_thunks=[])
for a in IDS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t);j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='primary'if a in IDS else 'support'))
 start=int(r[1],16);end=0x100cbfd4 if a=='100cbd50' else int(r[2],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{a}.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))

# Raw operands used in primary functions; classify each conservatively by instruction width.
for rr in j['ranges']:
 text=(ROOT/rr['path']).read_text()
 for line in text.splitlines():
  m=re.search(r'(XMMWORD|QWORD|DWORD) PTR ds:(0x[0-9a-f]+)',line)
  if m:
   n={'XMMWORD':16,'QWORD':8,'DWORD':4}[m[1]]
   try:r=raw(int(m[2],16),n)
   except ValueError:
    j.setdefault('unbacked_operands',[]).append(dict(address=m[2],width=n));continue
   r['role']='static memory operand; may be mutable global, bytes are on-disk initial state';j['literals'].append(r)

# Exact decimal format and native file path literals.
j['literals'].append(string(0x101c20cc))
# PUSH immediate operands which point at printable NUL strings.
for rr in j['ranges']:
 for line in (ROOT/rr['path']).read_text(encoding='utf-8').splitlines():
  m=re.search(r'push\s+(0x10[0-9a-f]+)',line)
  if m:
   try:
    r=string(int(m[1],16))
    if r['ascii'] and all(c.isprintable() or c in '\n\r\t' for c in r['ascii']):j['literals'].append(r)
   except (ValueError,UnicodeError):pass
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1]);j['api_binding']=dict(initializer='0x100b4aa0',base='0x10222f48',copied_dwords=144,slots=[dict(slot=i,name=names[i],address=f'0x{0x10222f48+i*4:08x}')for i in [1,21,29,46,47,48,53,54,57,63,69,72,75,90,95,96]],header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest())

j['supporting_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest()) for x in ['analysis/server-sentence-groups/contract.md','analysis/server-world-bootstrap/contract.md','analysis/exports/hl.csv','external/hlsdk-portable/common/const.h','external/hlsdk-portable/dlls/util.h']]
for a in ['10120eb0','100e5fc0','100ef2d0']:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c'
 j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='support: callsite or copy-helper boundary, not full-body review'))
j['range_corrections']=[]
j['pending_check']=dict(command=['python','tools/catalog_decompiled.py','--pending','server','--limit','10000'],addresses=['0x'+a for a in IDS],checked_before_authoring=True)
j['unbacked_operands']=list({(r['address'],r['width']):r for r in j.get('unbacked_operands',[])}.values())
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
# Additional bounded assembly supports comparator semantics and global ownership;
# these are not synthetic C functions or additional REVIEW cards.
def assembly(start,end,label):
 cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)]
 p=OUT/(label+'.asm');t=subprocess.check_output(cmd,text=True);p.write_text(t,encoding='utf-8',newline='\n');pos=start
 for line in t.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   a=int(m[1],16);x=bytes.fromhex(m[2]);assert a==pos and raw(a,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=hex(start),end_exclusive=hex(end),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))
for start,end,label in [(0x1017bc82,0x1017bcbb,'1017bc82-ascii'),(0x1017bcbb,0x1017bd04,'1017bcbb-dispatch'),(0x1017bd04,0x1017bd92,'1017bd04-mapped'),(0x100ef7c1,0x100ef7da,'100ef7c1-volume-owner'),(0x100e606d,0x100e608b,'100e6079-HudText'),(0x100e633f,0x100e6358,'100e6346-RadioIcon')]:
 assembly(start,end,label)
u32=lambda a:struct.unpack('<I',bytes.fromhex(raw(a,4)['bytes_hex']))[0]
vt=raw(0x101dec68,0x11c);vt['slots']=[dict(offset=hex(i),target=hex(u32(0x101dec68+i)))for i in range(0,0x11c,4)];j['vtables'].append(vt)
col=u32(0x101dec64);td=u32(col+12)
j['literals'] += [raw(0x101dec64,4),raw(col,20),raw(td,8),string(td+8),string(0x101a8e8c),raw(0x101a1df0,8),raw(0x101a1e18,8)]
fields=[]
for i in range(102):
 kind,name,off,count,flags=struct.unpack('<IIIhH',bytes.fromhex(raw(0x1021aae0+i*16,16)['bytes_hex']))
 fields.append(dict(type_id=kind,name=string(name)['ascii'],offset=hex(off),count=count,flags=flags))
tab=raw(0x1021aae0,102*16);tab['fields']=fields;j['save_tables'].append(tab)
for i in range(102):j['literals'].append(string(u32(0x1021aae0+i*16+4)))
for rr in j['ranges']:
 for line in (ROOT/rr['path']).read_text(encoding='utf-8').splitlines():
  m=re.search(r'push\s+(0x10[0-9a-f]+)',line)
  if m:
   try:
    r=string(int(m[1],16))
    if r['ascii'] and all(c.isprintable() or c in '\n\r\t' for c in r['ascii']):j['literals'].append(r)
   except (ValueError,UnicodeError):pass
j['export_thunks']=[dict(name='radio_sentence',entry='0x101004c0',target='0x100fc7d0',raw=raw(0x101004c0,5))]
def load_operand_listing(binary, listing):
 # This runs the static disassembler, never the target DLL. Cache is optional.
 command=[shutil.which('objdump'),'-d','-M','intel',binary.as_posix()]
 if command[0] is None:raise RuntimeError('objdump is required for static evidence capture')
 if not listing.is_file():
  text=subprocess.check_output(command,text=True,encoding='utf-8')
  # Match the historical Windows listing byte convention deterministically.
  data=text.replace('\r\n','\n').replace('\n','\r\n').encode('utf-8')
  listing.parent.mkdir(parents=True,exist_ok=True);listing.write_bytes(data)
 return listing.read_bytes(),command

canonical_listing=ROOT/'analysis/local/hl-sentence-lifecycle-text.asm'
# Optional override permits non-destructive missing-cache tests; evidence keeps
# the repository-relative optional cache location, not a transient test path.
listing=Path(os.environ.get('COF_SENTENCE_LISTING',str(canonical_listing)))
listing_bytes,listing_command=load_operand_listing(B,listing)
text=listing_bytes.decode('utf-8')
refs=[]
for line in text.splitlines():
 if re.search(r'0x(?:1022c8c4|10222f0c|10226489)\b',line):
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   refs.append(dict(line=line,address='0x'+m[1],first_row=raw(int(m[1],16),len(bytes.fromhex(m[2])))))
j['direct_operand_scan']=dict(source_listing=canonical_listing.relative_to(ROOT).as_posix(),source_sha256=hashlib.sha256(listing_bytes).hexdigest(),command=listing_command,encoding='utf-8',newlines='CRLF',cache_optional=True,scope='Literal direct operands in objdump -d text; not alias/bulk-copy analysis or proof of no other writer.',matches=refs)
j['global_sections']=[]
for a in [0x1022c8c4,0x10222f0c,0x10226489,0x10232e78]:
 for s in pe['sections']:
  delta=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=delta<max(s['virtual_size'],s['raw_size']):j['global_sections'].append(dict(address=hex(a),section=s,section_offset=hex(delta),file_backed=delta+4<=s['raw_size']))
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']),len(j['source_c']),len(j['literals']))
