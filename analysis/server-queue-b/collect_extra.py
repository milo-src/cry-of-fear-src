"""Collect static original server evidence for movement/target dispatch dependencies."""
import hashlib,json,re,struct,subprocess,sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
OUT=Path(__file__).resolve().parent
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
blob=BINARY.read_bytes();sha=hashlib.sha256(blob).hexdigest()
assert sha=='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
pe=pe_metadata(blob)
def read(va,size):
    rva=va-int(pe['image_base'],16)
    for s in pe['sections']:
        d=rva-int(s['rva'],16)
        if d>=0 and d+size<=s['raw_size']:return blob[s['raw_offset']+d:s['raw_offset']+d+size]
    raise ValueError(hex(va))
addresses='10101b50 10101b90 10101ba0 10101c60 10101dc0 10101e00 10101eb0 10101ee0 10101f20 10101ff0 101021d0 10102320 10102350 101023c0 10102480 101025c0 10102600 10102610 101026e0 10102930'.split()
aux='101019d0 10101a30 10101a90 100c4850 100c48b0 100c48e0 100c4920 100c4b90 100c4ed0 10017ad0 10017740 10017790 10017110 1000e1f0 1011a800'.split()
(OUT/'asm-extra').mkdir(exist_ok=True)
cat=(ROOT/'decompiled/FUNCTION_CATALOG.txt').read_text(encoding='utf-8-sig')
records=[]
for a in addresses+aux:
    p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text()
    lo,hi=[int(s,16) for s in re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+)',t).groups()]
    if a in addresses:
        block=cat.split('[FUNCTION server:0x'+a+']',1)[1].split('[FUNCTION ',1)[0]
        assert 'REVIEW' not in block,a
    cmd=['objdump','-d','-M','intel','--start-address='+hex(lo),'--stop-address='+hex(hi+1),str(BINARY)]
    asm=subprocess.run(cmd,capture_output=True,check=True).stdout
    dst=OUT/'asm-extra'/f'{a}.asm';dst.write_bytes(asm)
    records.append({'address':'0x'+a,'new_review':a in addresses,'source':p.relative_to(ROOT).as_posix(),'source_sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'range_inclusive':[hex(lo),hex(hi)],'original_bytes_sha256':hashlib.sha256(read(lo,hi-lo+1)).hexdigest(),'assembly':dst.relative_to(ROOT).as_posix(),'assembly_sha256':hashlib.sha256(asm).hexdigest(),'command':cmd})
vtables={}
for a in ['101019d0','10101a30','10101a90']:
    s=(OUT/'asm-extra'/f'{a}.asm').read_text()
    m=re.search(r'mov\s+DWORD PTR \[eax\],(0x[0-9a-f]+)',s)
    if m:
        va=int(m[1],16)
        vtables[hex(va)]={'factory':'0x'+a,'entries':[{'slot_offset':hex(i*4),'target':hex(struct.unpack('<I',read(va+i*4,4))[0])} for i in range(64)]}
literals={hex(a):read(a,32).split(b'\0')[0].decode('ascii') for a in [0x101cb1e8,0x101d7e30]}
result={'binary':str(BINARY),'binary_sha256':sha,'scope':'20 new actual C identities plus supporting dependencies; static only, no shared catalogue mutation','functions':records,'vtables':vtables,'literals':literals}
(OUT/'evidence-extra.json').write_text(json.dumps(result,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print('20 new + '+str(len(aux))+' supporting bodies; '+str(literals))
