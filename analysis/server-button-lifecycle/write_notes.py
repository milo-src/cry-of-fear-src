"""Generate catalog cards from the authored, peer-reviewable contracts."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;R=O.parents[1]
s=(O/'contract.md').read_text(encoding='utf8')
metadata={'10012580': ('CBaseButton_InstanceOrAllocate', 'Возвращает существующий private object либо выделяет0x1e4 и связывает CBaseButton; фиксирует native failure paths.'), '10016790': ('func_button_ExportFactoryThunk', 'Экспортный пятибайтовый переход к единственной фабрике CBaseButton.'), '100135e0': ('CBaseButton_KeyValue', 'Разбирает13 точных ключей с byte/string/int storage и inherited Toggle fallback.'), '10014260': ('CBaseButton_Precache', 'Регистрирует spark/custom resources и преобразует sound/sentence codes в feedback strings.'), '10102b80': ('Entvars_SetMoveDirectionFromAngles', 'Получает movedir через by-value angles и special up/down helper, затем копирует shared vector в angles.'), '10014cc0': ('CBaseButton_Spawn', 'Инициализирует brush, lock/timers/defaults, вычисляет endpoints и назначает Use/Touch по двум bits.'), '100146f0': ('CBaseButton_Restore', 'После Toggle Restore читает18 native descriptors CBaseButton с точными типами.'), '100148e0': ('CBaseButton_Save', 'После Toggle Save пишет18 полей через context writer с targetname/classname label.')}
old=json.loads((O/'notes.json').read_text(encoding='utf8')) if (O/'notes.json').exists() else {'functions':[]}
old={r['address'][2:]:r for r in old['functions']}
rows=[]
for a,(name,summary) in metadata.items():
 body=s.split('## 0x'+a+' — ',1)[1].split('\n',1)[1].split('\n## ',1)[0].strip()
 details=[p.replace('\n',' ')for p in body.split('\n\n')if p.strip()]
 evidence=[f'decompiled/server/partial-pass/functions/0x{a}.c']+[p.relative_to(R).as_posix()for p in sorted(O.glob(a+'-*.asm'))]+['analysis/server-button-lifecycle/evidence.json','analysis/server-button-lifecycle/contract.md']
 evidence=list(dict.fromkeys(evidence+old.get(a,{}).get('evidence_paths',[])))
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='entity-core',summary_ru=summary,confidence='high',evidence_paths=evidence,details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=rows,subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('Wrote',len(rows),'cards:8new')
