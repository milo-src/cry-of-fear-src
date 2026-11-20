"""Read-only integrity/coverage verification; target code is never run."""
from pathlib import Path
import hashlib,json,re,struct
from capture import scan,instructions,TARGETS
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes();H=lambda v:hashlib.sha256(v).hexdigest()
assert H(b)==e['sha256'];assert not e['new_primary'] and not e['target_executed']
assert json.loads((OUT/'notes.json').read_text())=={'functions':[]}
# Independent PE mapper; do not rely on the capture mapper for byte provenance.
nt=struct.unpack_from('<I',b,0x3c)[0];ns=struct.unpack_from('<H',b,nt+6)[0];op=struct.unpack_from('<H',b,nt+20)[0];base=struct.unpack_from('<I',b,nt+52)[0]
sections=[struct.unpack_from('<4I',b,nt+24+op+40*i+8) for i in range(ns)]
def raw(a,n):
 for vs,rv,sz,fp in sections:
  d=a-base-rv
  if 0<=d and d+n<=sz:return b[fp+d:fp+d+n]
 raise AssertionError(hex(a))
manifest=json.loads((ROOT/e['searched_c_manifest']['path']).read_text(encoding='utf8'))
for r in e['source_c']+e['ranges']+e['support_documents']+manifest+[e['searched_c_manifest']]:assert H((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
assert {r['path'] for r in manifest}=={p.relative_to(ROOT).as_posix() for p in (ROOT/'decompiled/server').rglob('*.c')}
rows=0;aligned={}
for r in e['ranges']:
 pos=int(r['start'],16);end=int(r['end_exclusive'],16);assert H(raw(pos,end-pos))==r['binary_range_sha256']
 for x in instructions((ROOT/r['path']).read_text()):
  at=x['address'];v=bytes.fromhex(x['bytes_hex']);assert at==pos and raw(at,len(v))==v;pos+=len(v);rows+=1;aligned[at]=x
 assert pos==end
for r in e['references']:
 at=int(r['address'],16);assert aligned[at]['bytes_hex']==r['bytes_hex'] and aligned[at]['instruction']==r['instruction']
assert scan(b)[0]==e['scan']
global_hits=e['scan']['targets']['0x10222e10']['va_literal'];assert len(global_hits)==16
assert len(e['scan']['target_relocations'])==16
assert {x['value'] for x in e['scan']['target_relocations']}=={'0x10222e10'}
assert len({r['owner'] for r in e['references'] if '0x10222e10' in r['literal_targets']})==7
assert not e['scan']['target_exports'] and not e['scan']['text_body_exports'] and not e['scan']['text_body_rel32_candidates']
for a in ['0x1004a6e0','0x100c5300']:
 r=e['scan']['targets'][a];assert not r['va_literal'] and not r['rva_literal'] and not r['rel32_candidates']
 matches=[x for x in e['saved_c_search'] if 'FUN_'+a[2:] in x['terms']];assert len(matches)==1 and matches[0]['entry']==a
assert raw(0x1002a49a,3)==bytes.fromhex('c60100')
assert raw(0x1002a4ed,3)==bytes.fromhex('8d7304') and raw(0x1002a5d0,3)==bytes.fromhex('c60601')
assert raw(0x1001cd50,3)==bytes.fromhex('803a00') and raw(0x100290ba,6)==bytes.fromhex('8a0784c0741d')
assert raw(0x10121127,5)==bytes.fromhex('a3102e2210') and raw(0x10121137,5)==bytes.fromhex('a3102e2210')
assert raw(0x10029073,10)==bytes.fromhex('68380f01006a008d4604')
print('PASS audit0:',len(manifest),'searched C,',len(e['source_c']),'pinned C,',len(e['ranges']),'ASM,',rows,'native rows,',len(e['references']),'aligned refs,',len(global_hits),'global literals, 846 EAT entries')
