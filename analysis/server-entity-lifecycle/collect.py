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
addresses='1001f1a0 1001f200 1001f340 1001f390 1001f4f0 1001fb40 1001fd20 1001fd40 1001fdd0 1001fe10 1001fe70 1001fef0 10020600 10020660 100206c0 100207a0 100207b0 100207c0 10020cb0 10020ce0 10020cf0 10020d20 10020d60 10020dc0 10020e60 10020f20'.split()
aux='100c20c0 1000f3e0 10117180 1000eda0 1000e5f0 1000e9b0 1000e9e0 10119fe0 1000aba0 100125e0 10017740 100177a0 1000ea60 1000eaa0 1000f530'.split()
(OUT/'asm').mkdir(exist_ok=True)
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
    dst=OUT/'asm'/f'{a}.asm';dst.write_bytes(asm)
    records.append({'address':'0x'+a,'new_review':a in addresses,'source':p.relative_to(ROOT).as_posix(),'source_sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'range_inclusive':[hex(lo),hex(hi)],'original_bytes_sha256':hashlib.sha256(read(lo,hi-lo+1)).hexdigest(),'assembly':dst.relative_to(ROOT).as_posix(),'assembly_sha256':hashlib.sha256(asm).hexdigest(),'command':cmd})

result={'binary':str(BINARY),'binary_sha256':sha,'scope':'26 new keypad/camera actual C identities + supporting dependencies; static only','functions':records}
(OUT/'evidence.json').write_text(json.dumps(result,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print(len(addresses),len(aux))
