"""Independent static PE/selector/token-dispatch verification; never executes the target."""
from pathlib import Path
import hashlib,json,re,struct
ROOT=Path(__file__).resolve().parents[2];P=Path(__file__).resolve().parent;e=json.loads((P/'evidence.json').read_text(encoding='utf8'))
b=Path(e['binary']).read_bytes();h=lambda x:hashlib.sha256(x).hexdigest();assert h(b)==e['sha256']
pe=struct.unpack_from('<I',b,0x3c)[0];n=struct.unpack_from('<H',b,pe+6)[0];op=pe+24
size=struct.unpack_from('<H',b,pe+20)[0];base=struct.unpack_from('<I',b,op+28)[0]
ss=[struct.unpack_from('<8sIIIIIIHHI',b,op+size+i*40)for i in range(n)]
def raw(a,n):
 for s in ss:
  d=a-base-s[2]
  if 0<=d and d+n<=s[3]:return b[s[4]+d:s[4]+d+n]
 raise AssertionError(hex(a))
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header']]:assert h((ROOT/r['path']).read_bytes())==r['sha256']
rows=0
for r in e['ranges']:
 a=int(r['start'],16);end=int(r['end_exclusive'],16);assert h(raw(a,end-a))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text(encoding='utf8').splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   x=bytes.fromhex(m[2]);assert int(m[1],16)==a and raw(a,len(x))==x;a+=len(x);rows+=1
 assert a==end
for r in e['raw']:
 x=bytes.fromhex(r['bytes_hex']);assert raw(int(r['address'],16),len(x))==x and h(x)==r['sha256']
 assert b[int(r['file_offset'],16):int(r['file_offset'],16)+len(x)]==x
imp=base+struct.unpack_from('<I',b,op+104)[0];imports={};i=0
def cstr(a):
 x=bytearray()
 while raw(a+len(x),1)!=b'\0':x+=raw(a+len(x),1)
 return x.decode('ascii')
while True:
 fields=struct.unpack('<5I',raw(imp+i*20,20));i+=1
 if not any(fields):break
 ilt,_,_,dll,iat=fields;j=0
 while True:
  v=struct.unpack('<I',raw(base+(ilt or iat)+j*4,4))[0]
  if not v:break
  if not v&0x80000000:imports[base+iat+j*4]=(cstr(base+dll),cstr(base+v+2))
  j+=1
for va,name in [(0x101a1160,'DeleteFileW'),(0x101a1164,'MoveFileExW'),(0x101a10d0,'GetLastError')]:assert imports[va][1]==name
# Independent bounded symbolic evaluator: decoded data/branch operations only, no native execution.
def run(fn,start,stop,mask,mode=0,kind='selector'):
 ins={}
 for line in (P/(fn+'-0.asm')).read_text(encoding='utf8').splitlines():
  parts=line.split('\t')
  if len(parts)>2 and re.fullmatch('[0-9a-f]{8}:',parts[0]):
   text=parts[-1].strip()
   if text:ins[int(parts[0][:-1],16)]=text
 addresses=sorted(ins);nxt=dict(zip(addresses,addresses[1:]));pc=start
 d={'esi':mask,'edi':mask,'eax':0,'ecx':0,'bl':mode,'ebp':0x700000};stack=[];z=False;gt=False;calls=[]
 def value(t):
  if t in d:return d[t]
  if t.startswith('0x'):return int(t,16)
  raise AssertionError(t)
 def signed(x):return (x+0x80000000)%0x100000000-0x80000000
 for _ in range(200):
  if pc==stop:return d,stack,calls
  op,*rest=ins[pc].split(None,1);args=rest[0].split(',')if rest else [];dest=nxt.get(pc)
  if op=='cmp':
   a,c=map(value,args);z=a==c;gt=signed(a)>signed(c)
  elif op=='test':z=(value(args[0])&value(args[1]))==0
  elif op in ['jmp','je','jne','jg']:
   if op=='jmp' or op=='je'and z or op=='jne'and not z or op=='jg'and gt:dest=int(args[0],16)
  elif op=='mov':d[args[0]]=value(args[1])
  elif op=='cmovne':
   if not z:d[args[0]]=value(args[1])
  elif op=='lea':
   m=re.fullmatch(r'\[(\w+)([+-])(0x[0-9a-f]+)\]',args[1]);assert m
   d[args[0]]=(value(m[1])+(1 if m[2]=='+'else -1)*int(m[3],16))&0xffffffff
  elif op=='push':stack.append(value(args[0]))
  elif op=='add' and args[0]=='esp':del stack[-(int(args[1],16)//4):]
  elif op=='call':
   assert kind!='selector'
   target=int(args[0],16)
   if target==0x100493b0:return d,stack,calls
   assert target==0x1013f5f0
   calls.append(stack[-2]);d['eax']=0
   if len(calls)==2:return d,stack,calls
  else:raise AssertionError((hex(pc),ins[pc]))
  pc=dest
 raise AssertionError('loop')
tokens=[t for t in e['tokens']if 'mask'in t]
for t in tokens:
 mask=int(t['mask'],16)
 for fn,a,z,out in [('100dd000',0x100dd08e,0x100dd354,'DWORD PTR [ebp-0x2c]'),('100e0db0',0x100e0e27,0x100e10c4,'DWORD PTR [ebp-0x2c]'),('100e1690',0x100e17e7,0x100e1a38,'edi'),('100f2ed0',0x100f303b,0x100f32c5,'edi')]:
  d,_,_=run(fn,a,z,mask);assert d[out]==t['ordinal_decimal']
 for fn,a in [('100dd000',0x100dd3ec),('100e0db0',0x100e10ef)]:
  _,_,calls=run(fn,a,None,mask,kind='reader')
  assert calls==[int(t['false_address'],16),int(t['true_address'],16)]
 for fn,a in [('100e1690',0x100e1ac6),('100f2ed0',0x100f3356)]:
  for mode in [0,1]:
   _,stack,_=run(fn,a,None,mask,mode,'writer');assert stack[-2]==int(t['writer_false_address'if mode else 'writer_true_address'],16)
for t in e['tokens']:
 for k in ['false','true']:
  x=t[k+'_token'].encode('latin1');assert raw(int(t[k+'_address'],16),len(x)+1)==x+b'\0'
  assert raw(int(t['writer_'+k+'_address'],16),len(x)+2)==x+b'\n\0'
ns=json.loads((P/'notes.json').read_text(encoding='utf8'))['functions'];ct=(P/'contract.md').read_text(encoding='utf8')
for r in ns:
 assert r['summary_ru']in ct and all(s in ct for s in r['details_ru'])
print('INDEPENDENT PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'rows',len(e['raw']),'raw;128selector,64reader dispatch,128writer polarity paths,34token pairs')
