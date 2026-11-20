"""Generate catalog cards from the authored, peer-reviewable contracts."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;R=O.parents[1]
s=(O/'contract.md').read_text(encoding='utf8')
metadata={'10012640': ('CButtonTarget_Factory', 'Создаёт CButtonTarget либо возвращает existing private object; native factory failure paths.'), '10012880': ('CRotButton_Factory', 'Создаёт CRotButton и связывает concrete vtable, наследуемые методы и export.'), '10013e80': ('CRotButton_KeyValue', 'Разбирает axes как movedir vector с точным inherited fallback.'), '10013f80': ('CButtonTarget_ObjectCaps', 'Возвращает caps0/8 после побочного parent callback и fresh spawnflag read.'), '100140a0': ('CBaseButton_RecomputeLinearEndpoints', 'Пересчитывает линейные endpoints с parent-relative origin и float32 порядком.'), '10015010': ('CButtonTarget_Spawn', 'Готовит damageable BSP target и условный начальный frame без сброса иначе.'), '100153b0': ('CRotButton_Spawn', 'Инициализирует вращающуюся кнопку, ось, angular endpoints и XOR Use routing.'), '10015620': ('CBaseButton_TakeDamage', 'Обрабатывает damage как button response с EHANDLE и точным target/callback порядком.'), '10015700': ('CButtonTarget_TakeDamage', 'Передаёт damage в virtual Use с четырьмя явными аргументами, возвращает1.'), '10015f60': ('CButtonTarget_Use', 'Проверяет useType/frame, арифметически переключает frame и немедленно вызывает target.'), '10016740': ('button_target_Export', 'Пятибайтовый экспортный переход к фабрике CButtonTarget.'), '100167a0': ('func_rot_button_Export', 'Пятибайтовый экспортный переход к фабрике CRotButton.')}
old=json.loads((O/'notes.json').read_text(encoding='utf8')) if (O/'notes.json').exists() else {'functions':[]}
old={r['address'][2:]:r for r in old['functions']}
rows=[]
for a,(name,summary) in metadata.items():
 body=s.split('## 0x'+a+' — ',1)[1].split('\n',1)[1].split('\n## ',1)[0].strip()
 details=[p.replace('\n',' ')for p in body.split('\n\n')if p.strip()]
 evidence=[f'decompiled/server/partial-pass/functions/0x{a}.c']+[p.relative_to(R).as_posix()for p in sorted(O.glob(a+'-*.asm'))]+['analysis/server-button-variants/evidence.json','analysis/server-button-variants/contract.md']
 evidence=list(dict.fromkeys(evidence+old.get(a,{}).get('evidence_paths',[])))
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='entity-core',summary_ru=summary,confidence='high',evidence_paths=evidence,details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=rows,subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('Wrote',len(rows),'cards:12new')
