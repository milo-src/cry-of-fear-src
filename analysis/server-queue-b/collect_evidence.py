"""Static evidence only: hash saved Ghidra C and decode bounded original PE bytes."""
import hashlib, json, re, struct, subprocess, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata
OUT = Path(__file__).resolve().parent
BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
blob = BINARY.read_bytes()
sha = hashlib.sha256(blob).hexdigest()
assert sha == '751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
pe = pe_metadata(blob)
def read(va, size):
    rva = va - int(pe['image_base'], 16)
    for s in pe['sections']:
        delta = rva-int(s['rva'], 16)
        if 0 <= delta and delta+size <= s['raw_size']:
            return blob[s['raw_offset']+delta:s['raw_offset']+delta+size]
    raise ValueError(hex(va))
def string(va):
    return read(va, 128).split(b'\0')[0].decode('ascii')
catalog = (ROOT/'decompiled/FUNCTION_CATALOG.txt').read_text(encoding='utf-8-sig')
records=[]
(OUT/'asm').mkdir(exist_ok=True)
for p in sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c')):
    va=int(p.stem,16)
    if not 0x1008ce10 <= va <= 0x1008f3b0: continue
    text=p.read_text()
    block=catalog.split('[FUNCTION server:'+hex(va)+']',1)[1].split('[FUNCTION ',1)[0]
    assert 'REVIEW' not in block, hex(va)
    lo, hi=(int(s,16) for s in re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+)',text).groups())
    cmd=['objdump','-d','-M','intel','--start-address='+hex(lo),'--stop-address='+hex(hi+1),str(BINARY)]
    asm=subprocess.run(cmd,capture_output=True,check=True).stdout
    dst=OUT/'asm'/f'{va:08x}.asm';dst.write_bytes(asm)
    records.append({'address':hex(va),'source':p.relative_to(ROOT).as_posix(),'source_sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'prior_review':False,'range_inclusive':[hex(lo),hex(hi)],'original_bytes_sha256':hashlib.sha256(read(lo,hi-lo+1)).hexdigest(),'assembly':dst.relative_to(ROOT).as_posix(),'assembly_sha256':hashlib.sha256(asm).hexdigest(),'command':cmd})
assert len(records)==34
literals={hex(va):string(va) for va in [0x101a3c60,0x101a4010,0x101a568c,0x101a5690,0x101a5694,0x101a56a8,0x101a56b0,0x101a56b8,0x101a56bc,0x101a56c0,0x101a56c4,0x101a56c8,0x101a56dc,0x101a56e4,0x101a56ec]}
descriptors={}
for va,count in [(0x10213a30,10),(0x10213ad0,3),(0x10219a98,20)]:
    rows=[]
    for i in range(count):
        raw=read(va+i*16,16)
        typ,name,offset,size,flags=struct.unpack('<IIIHH',raw)
        rows.append({'address':hex(va+i*16),'raw_hex':raw.hex(),'field_type':typ,'name_address':hex(name),'name':string(name),'object_offset':hex(offset),'count':size,'flags':flags})
    descriptors[hex(va)]=rows
vtables={}
for va in [0x1008ce10,0x1008ce70,0x1008ced0]:
    asm=(OUT/'asm'/f'{va:08x}.asm').read_text()
    match=re.search(r'mov\s+DWORD PTR \[eax\],(0x[0-9a-f]+)',asm)
    if match:
        vt=int(match[1],16)
        vtables[hex(vt)]={'factory':hex(va),'entries':[{'slot_offset':hex(i*4),'target':hex(struct.unpack('<I',read(vt+i*4,4))[0])} for i in range(72)]}
auxiliary=[]
for va in [0x1008f580,0x1008f590,0x1008f5a0]:
    raw=read(va,5)
    assert raw[0]==0xe9
    auxiliary.append({'address':hex(va),'raw_hex':raw.hex(),'instruction':'JMP rel32','target':hex(va+5+struct.unpack('<i',raw[1:])[0])})
sources=[]
for va in [0x10102890,0x10102b20,0x10117010,0x1011adc0,0x10102320,0x101025c0,0x10101b50,0x10102930,0x10017740,0x10017790,0x10017780,0x100177a0,0x10119060,0x10017ad0,0x100c4550,0x100c4590,0x10119320]:
    p=ROOT/f'decompiled/server/partial-pass/functions/{hex(va)}.c'
    sources.append({'address':hex(va),'source':p.relative_to(ROOT).as_posix(),'sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'role':'supporting body, not a new review card'})
output={'scope':'Static original server PE; 34 saved Ghidra C bodies, no REA/runtime execution. SDK names are supplementary, native bytes authoritative.','binary':str(BINARY),'binary_sha256':sha,'image_base':pe['image_base'],'functions':records,'literals':literals,'save_descriptors':descriptors,'vtables':vtables,'export_jump_bytes':auxiliary,'supporting_sources':sources}
(OUT/'evidence.json').write_text(json.dumps(output,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print(json.dumps({'functions':len(records),'literals':literals,'save_descriptors':descriptors,'vtables':list(vtables)},ensure_ascii=False,indent=2))
