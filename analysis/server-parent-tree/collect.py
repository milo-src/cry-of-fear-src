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
addresses='10017210 10017250 100172a0 10017bc0 10017f30 10018000 10018140 10017910 100176f0 10101a90 10102300 10102840 101028e0 10102be0 10102dd0'.split()
aux='1000dba0 1000df80 1000e1f0 10018350 10118590 100c4550 100c4ed0 10102c50 10017ad0 1011a030 10116c30 1011ad70 10116020 10116080'.split()
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
def cstr(a):
    return read(a,128).split(b'\0')[0].decode('ascii')
def rawrecord(a,n):
    data=read(a,n)
    return {'address':hex(a),'bytes_hex':data.hex(),'sha256':hashlib.sha256(data).hexdigest()}
raw=[rawrecord(0x101df4f0,0x100),rawrecord(0x10211760,22*16),rawrecord(0x10102f90,5),rawrecord(0x10017aa0,5),rawrecord(0x101a6198,12)]
savefields=[]
for i in range(22):
    va=0x10211760+i*16;typ,name,offset,count,flags=struct.unpack('<IIIHH',read(va,16))
    savefields.append({'descriptor':hex(va),'type_id':typ,'name':cstr(name),'name_address':hex(name),'offset':hex(offset),'count':count,'flags':flags})
vt=[{'slot':hex(i*4),'target':hex(struct.unpack('<I',read(0x101df4f0+i*4,4))[0])} for i in range(64)]
result={'binary':str(BINARY),'binary_sha256':sha,'scope':'15 new actual C identities + supporting dependencies; static only','functions':records,'save_fields':savefields,'info_movewith_vtable':vt,'raw':raw,'block_name':cstr(0x101a6198)}
(OUT/'evidence.json').write_text(json.dumps(result,indent=2,ensure_ascii=False)+'\n',encoding='utf-8')
print(str(len(addresses))+' new + '+str(len(aux))+' supporting bodies;22 save descriptors')
