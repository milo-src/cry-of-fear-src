"""Generate catalog cards from the authored, peer-reviewable contracts."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;R=O.parents[1]
s=(O/'contract.md').read_text(encoding='utf8')
metadata={
 '100e3020':('CBasePlayer_CombineInventorySlots','Сравнивает combined_result двух GUI предметов и выполняет accessory или generic combine с точным порядком очистки/обновлений.'),
 '100e42f0':('CBasePlayer_IsGuiInventoryFull','Проверяет ненулевые string_t в первых трёх или шести GUI slots, возвращая полный EAX0/1.'),
 '100e0310':('Player_FindWeaponById','Обходит шесть linked item chains и возвращает первый virtual174 result с совпадающим ID.')}
old=json.loads((O/'notes.json').read_text(encoding='utf8')) if (O/'notes.json').exists() else {'functions':[]}
old={r['address'][2:]:r for r in old['functions']}
rows=[]
for a,(name,summary) in metadata.items():
 body=s.split('## 0x'+a+' — ',1)[1].split('\n',1)[1].split('\n## ',1)[0].strip()
 details=[p.replace('\n',' ')for p in body.split('\n\n')if p.strip()]
 evidence=[f'decompiled/server/partial-pass/functions/0x{a}.c']+[p.relative_to(R).as_posix()for p in sorted(O.glob(a+'-*.asm'))]+['analysis/server-inventory-combine/evidence.json','analysis/server-inventory-combine/contract.md']
 evidence=list(dict.fromkeys(evidence+old.get(a,{}).get('evidence_paths',[])))
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='weapons' if a=='100e0310' else 'inventory',summary_ru=summary,confidence='high',evidence_paths=evidence,details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=rows,subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('Wrote',len(rows),'cards:2new1refinement')
