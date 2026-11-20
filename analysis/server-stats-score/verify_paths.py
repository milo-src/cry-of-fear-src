"""Bounded saved-ASM interpreter versus score tables; no native target execution.

Supports only the instructions present in these three bodies. Rejects unknown
instructions. Float replay models round-to-nearest float32 with masked exceptions,
not arbitrary MXCSR/x87 environments. Synthetic ratio override isolates NaN guards.
"""
from pathlib import Path
import bisect,json,math,random,re,struct
OUT=Path(__file__).resolve().parent
MASK=0xffffffff;PLAYER=0x20000000
def u32(x):return x&MASK
def i32(x):return (x&MASK)-(1<<32) if x&0x80000000 else x&MASK
def f32(x):return struct.unpack('<f',struct.pack('<f',x))[0]
def bits(x):return struct.unpack('<I',struct.pack('<f',x))[0]
def flt(x):return struct.unpack('<f',struct.pack('<I',x&MASK))[0]
code={}
for a in ['100dbfb0','10092ce0','10092f60']:
 ins=[]
 for line in (OUT/(a+'-0.asm')).read_text().splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s+(?:[0-9a-f]{2}\s+)+\s*([a-z][a-z0-9]*)\s*(.*?)\s*$',line)
  if m:ins.append((int(m[1],16),m[2],m[3]))
 for n,(at,op,args) in enumerate(ins):code[at]=(op,args,ins[n+1][0] if n+1<len(ins) else None)
e=json.loads((OUT/'evidence.json').read_text(encoding='utf-8'))
constants={int(r['address'],16):struct.unpack('<I',bytes.fromhex(r['bytes_hex']))[0] for r in e['raw'] if r['label']=='native literal operand'}

def execute(entry,fields,ratio_override=None):
 regs={x:0 for x in ['eax','ebx','ecx','edx','esi','edi','esp','ebp']};regs.update(esp=0x80000000,ecx=PLAYER)
 mem=dict(constants);mem[regs['esp']]=0xfffffff0;mem[regs['esp']+4]=PLAYER
 for off,value in fields.items():mem[PLAYER+off]=u32(value)
 xmm={};st=[];flags=dict(cf=False,zf=False,sf=False,of=False,pf=False)
 def addr(s):
  s=s.replace(' ', '');total=0
  for term in re.findall(r'[+-]?[^+-]+',s):
   sign=-1 if term.startswith('-') else 1;term=term.lstrip('+-');value=1
   for factor in term.split('*'):value*=regs[factor] if factor in regs else int(factor,0)
   total+=sign*value
  return u32(total)
 def get(x):
  if x in regs:return regs[x]
  if x in xmm:return xmm[x]
  if x in ['al','bl','cl','dl']:return regs['e'+x[0]+'x']&255
  if 'PTR ' in x:
   a=addr(x.split('[',1)[1].split(']')[0]) if '[' in x else int(x.split('ds:')[1],16)
   if x.startswith('BYTE'):return (mem.get(a&~3,0)>>((a&3)*8))&255
   return mem[a]
  return int(x,0)
 def put(x,v):
  if x in regs:regs[x]=u32(v)
  elif x.startswith('xmm'):xmm[x]=v
  elif x in ['al','bl','cl','dl']:
   r='e'+x[0]+'x';regs[r]=(regs[r]&0xffffff00)|(v&255)
  else:mem[addr(x.split('[',1)[1].split(']')[0])]=u32(v)
 def intflags(a,b,result,sub=False):
  z=u32(result);flags.update(zf=z==0,sf=bool(z&0x80000000),cf=(a<b if sub else result>MASK),of=bool(((a^b)&(a^z) if sub else (~(a^b)&(a^z)))&0x80000000))
 def cond(c):
  f=flags
  return {'e':f['zf'],'ne':not f['zf'],'b':f['cf'],'ae':not f['cf'],'a':not f['cf'] and not f['zf'],'be':f['cf'] or f['zf'],'g':not f['zf'] and f['sf']==f['of'],'ge':f['sf']==f['of'],'l':f['sf']!=f['of'],'le':f['zf'] or f['sf']!=f['of']}[c]
 pc=int(entry,16)
 for step in range(1000):
  op,args,nextpc=code[pc];a=args.split(',') if args else []
  if op=='push':regs['esp']=u32(regs['esp']-4);mem[regs['esp']]=get(a[0])
  elif op=='pop':put(a[0],mem[regs['esp']]);regs['esp']=u32(regs['esp']+4)
  elif op=='mov':put(a[0],get(a[1]))
  elif op=='lea':put(a[0],addr(a[1][1:-1]))
  elif op in ['add','sub','xor','shl']:
   x,y=get(a[0]),get(a[1]);v=x+y if op=='add' else x-y if op=='sub' else x^y if op=='xor' else x<<y
   put(a[0],v);intflags(x,y,v,op=='sub')
   if op=='xor':flags.update(cf=False,of=False)
  elif op=='inc':put(a[0],get(a[0])+1)
  elif op=='cmp':intflags(get(a[0]),get(a[1]),get(a[0])-get(a[1]),True)
  elif op=='test':v=get(a[0])&get(a[1]);flags.update(zf=v==0,sf=bool(v&0x80000000),cf=False,of=False)
  elif op.startswith('cmov'):
   if cond(op[4:]):put(a[0],get(a[1]))
  elif op.startswith('set'):put(a[0],int(cond(op[3:])))
  elif op=='jmp':nextpc=int(a[0],16)
  elif op.startswith('j'):
   if cond(op[1:]):nextpc=int(a[0],16)
  elif op=='call':regs['esp']-=4;mem[regs['esp']]=nextpc;nextpc=int(a[0],16);assert nextpc==0x100dbfb0
  elif op=='ret':
   nextpc=mem[regs['esp']];regs['esp']+=4
   if ratio_override is not None and nextpc in (0x10092d06,0x10092f6f):mem[PLAYER+0x64c]=bits(ratio_override);st[-1]=ratio_override
   if nextpc==0xfffffff0:return regs['eax'],mem[PLAYER+0x64c],st
  elif op=='movd':xmm[a[0]]=get(a[1])
  elif op=='movss':
   v=get(a[1]);v=v if a[1].startswith('xmm') else flt(v)
   put(a[0],v if a[0].startswith('xmm') else bits(v))
  elif op=='cvtdq2ps':xmm[a[0]]=f32(i32(get(a[1])))
  elif op=='divss':xmm[a[0]]=f32(get(a[0])/get(a[1]))
  elif op=='mulss':xmm[a[0]]=f32(get(a[0])*get(a[1]))
  elif op=='xorps':assert a[0]==a[1];xmm[a[0]]=0.0
  elif op=='fld':st.append(flt(get(a[0])))
  elif op=='fstp':assert a[0]=='st(0)';st.pop()
  elif op=='comiss':
   x=get(a[0]);y=get(a[1]);y=y if a[1].startswith('xmm') else flt(y)
   nan=math.isnan(x) or math.isnan(y);flags.update(cf=nan or x<y,zf=nan or x==y,pf=nan,sf=False,of=False)
  else:raise AssertionError((hex(pc),op,args))
  pc=nextpc
 raise AssertionError('Interpreter did not terminate')

def ratio(d,n):
 d=i32(d);n=i32(n)
 if d<=0 or n<0:return 100.0
 if n==0:return 0.0
 return f32(f32(f32(n)/f32(d))*100.0)
def rpoints(r):return 0 if math.isnan(r) else bisect.bisect_right([30.,40.,50.,60.,70.,80.,90.],r)
def expected(which,f,override=None):
 r=ratio(f[0x63c],f[0x640]) if override is None else override
 t=i32(u32(f[0x668]+60*f[0x66c]));sel=i32(f[0x67c])
 if which=='10092ce0':
  total={1:2,2:4,3:6,4:7}.get(sel,0)+rpoints(r)
  total += [7,6,5,4,3,2,1][bisect.bisect_left([5,10,25,40,60,70],i32(f[0x650]))]
  total += [7,6,5,4,3,2,1][bisect.bisect_left([2,10,20,30,40,45],i32(f[0x644]))]
  total += [7,5,4,3,2,1,0][bisect.bisect_left([150,180,240,300,360,420],t)]
 else:total=(4 if sel in [1,2,3,4] else 0)+rpoints(r)+[7,6,5,4,3,2,1,0][bisect.bisect_left([8,9,10,11,12,13,14],t)]
 return total if f[0x678]&255==1 else 0

def main():
 cases=0;rng=random.Random(130723)
 base={0x63c:100,0x640:70,0x644:0,0x650:0,0x668:0,0x66c:0,0x678:1,0x67c:4}
 for d in [-2147483648,-1,0,1,3,16777217,2147483647]:
  for n in [-2147483648,-1,0,1,2,16777217,2147483647]:
   f=dict(base);f.update({0x63c:d,0x640:n});eax,out,st=execute('100dbfb0',f)
   assert out==bits(ratio(d,n)) and bits(st[-1])==out;cases+=1
 for which in ['10092ce0','10092f60']:
  values={0x644:[-1,0,2,3,10,11,20,21,30,31,40,41,45,46,2147483647],0x650:[-1,5,6,10,11,25,26,40,41,60,61,70,71],0x668:[-2147483648,-1,0,8,9,10,11,12,13,14,15,150,151,180,181,240,241,300,301,360,361,420,421,2147483647],0x66c:[-2147483648,-1,0,1,7,35791394,35791395,2147483647],0x678:[0,1,2,255],0x67c:[-1,0,1,2,3,4,5,2147483647]}
  inputs=[]
  for key,vs in values.items():
   for v in vs:f=dict(base);f[key]=v;inputs.append(f)
  for _ in range(300):inputs.append({k:rng.randrange(1<<32) for k in base})
  for f in inputs:
   result,out,st=execute(which,f);assert result==expected(which,f),(which,f,result,expected(which,f));assert out==bits(ratio(f[0x63c],f[0x640])) and st==[];cases+=1
  for r in [-math.inf,-1.,0.,29.999,30.,39.999,40.,49.999,50.,59.999,60.,69.999,70.,79.999,80.,89.999,90.,100.,1000.,math.inf,math.nan]:
   r=f32(r);result,out,st=execute(which,base,r);assert result==expected(which,base,r),(which,r,result);cases+=1
 print('PASS',cases,'saved-ASM score/ratio replays, exact thresholds/overflow/BYTE gate; synthetic NaN guards; no target execution')
if __name__=='__main__':main()
