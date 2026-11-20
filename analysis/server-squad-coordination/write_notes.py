"""Build only the ten reviewed squad contracts, leaving support functions uncounted."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent
e=json.loads((O/'evidence.json').read_text(encoding='utf8'));c=(O/'contract.md').read_text(encoding='utf8')
summaries={
'10101090':'Резервирует первый доступный из 11 запрошенных squad bits либо ставит отдельный marker400 при разных enemies; без squad возвращает1 без записи.',
'101011e0':'Записывает участника в первый invalid EHANDLE из четырёх и устанавливает его leader; valid handle с NULL private остаётся занятым.',
'10101230':'Копирует три raw компонента enemy LKP от resolved leader к receiver, с fallback self-copy и возвратом z bits в EAX.',
'10101270':'Считает ненулевые private pointers четырёх member handles и лидера без dedup или alive проверки.',
'101012e0':'Сравнивает resolved enemies участников с однократным snapshot enemy лидера, различая valid EHANDLE и NULL private.',
'10101380':'Передаёт нового enemy отряду, сохраняя прежнего в history и его LKP, обновляет origin snapshot и condition10000.',
'10101490':'Проверяет горизонтальную дистанцию от точки до каждого участника и лидера с точным FP порядком и ordered radius comparison.',
'10101550':'Копирует собственный enemy LKP к resolved leader либо самому себе, без изменения enemy handle или условий.',
'10101590':'Набирает отряд по netname либо сфере с classification и trace guards; исходный limit после проверки заменён счётчиком.',
'10101910':'После общего MonsterStart условно набирает squad с radius1024 и initialLimit4; печатает даже ненулевой результат1 без additions.'}
cards=[]
for a in e['primary']:
 section=c.split('## 0x'+a+' — ',1)[1].split('\n## ',1)[0];name,body=section.split('\n',1)
 paths=[r['path']for r in e['source_c']+e['ranges']+e['support_documents']]+['analysis/server-squad-coordination/contract.md','analysis/server-squad-coordination/evidence.json',e['api_binding']['header']['path']]
 cards.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=list(dict.fromkeys(paths)),details_ru=[x.strip()for x in re.split(r'\n\s*\n',body)if x.strip()]))
(O/'notes.json').write_text(json.dumps(dict(functions=cards),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
