"""Collect static original server evidence for parent/scheduler dependencies."""
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
addresses='10017110 100171b0 10018090 100c3fa0 100c40c0 100c4120 100c41b0 100c4240 100c4550 100c4590 100c47f0 100c4810 100c4830 100c4850 100c4880 100c48e0 100c4920 100c4b90 100c4c90 100c4db0 100c4ed0'.split()
aux='100c3e50 100c44e0 100c48b0 10017ad0 10017250 10119fe0 1001e770 1001e7b0 10120eb0'.split()
(OUT/'asm-parent').mkdir(exist_ok=True)
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
    dst=OUT/'asm-parent'/f'{a}.asm';dst.write_bytes(asm)
    records.append({'address':'0x'+a,'new_review':a in addresses,'source':p.relative_to(ROOT).as_posix(),'source_sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'range_inclusive':[hex(lo),hex(hi)],'original_bytes_sha256':hashlib.sha256(read(lo,hi-lo+1)).hexdigest(),'assembly':dst.relative_to(ROOT).as_posix(),'assembly_sha256':hashlib.sha256(asm).hexdigest(),'command':cmd})
result={'binary':str(BINARY),'binary_sha256':sha,'scope':'21 new actual C identities plus nine supporting dependencies; static only, no shared catalogue mutation','functions':records,'literals':{'0x101cb6e8':read(0x101cb6e8,64).split(b'\0')[0].decode('ascii'),'0x101a46f0':struct.unpack('<d',read(0x101a46f0,8))[0],'0x101a61c8':struct.unpack('<d',read(0x101a61c8,8))[0]}}
(OUT/'evidence-parent.json').write_text(json.dumps(result,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print(str(len(addresses))+' new + '+str(len(aux))+' supporting bodies')
