"""Derive ten new, evidence-backed cards from the reviewed UTF-8 contract."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent
e=json.loads((O/'evidence.json').read_text(encoding='utf8'))
c=(O/'contract.md').read_text(encoding='utf8')
summaries={
 '100ab410':'Ищет верхнюю Z вертикальным trace на +4096 и при mask0x2 ограничивает её границей воды; сохраняет ST0 и различает float/double arithmetic.',
 '100ab4d0':'При movetype5 плавно меняет roll по signed yaw delta, затем всегда вызывает базовый ChangeYaw и передаёт его ST0.',
 '100ab5a0':'Проверяет local move hull2 со сдвигом обеих точек +32Z, optional distance output и исключением разрешённого target через global trace_ent.',
 '100ab710':'Перепаковывает пять исходных аргументов TriangulateDetour без дополнительной логики и возвращает полный EAX базового helper.',
 '100ab740':'Возвращает Z вертикального trace вниз на2048: при ordered fraction1 берёт endpoint, иначе trace.endPos, включая unordered fraction.',
 '100ab7d0':'Обрабатывает event8 записью speed400, event9 воспроизведением M380 и передаёт остальные события базовому обработчику tail-jump.',
 '100ab880':'При movetype5 копирует speed storage M374 в groundspeed и затем безусловно вызывает общий Move с исходным interval.',
 '100abc90':'Проверяет согласованность начальной среды и двоичным поиском вычисляет fraction границы contents с precision1 world unit.',
 '100abea0':'Проверяет waypoint distance с порогом groundspeed*frametime+64; для terminal flag считает собственную3D длину.',
 '100abf60':'Условно сбрасывает speed при смене ideal activity, обнуляет pitch/roll и копирует shared direction vector; groundspeed не меняет.'}
cards=[]
for a in e['primary']:
 section=c.split('## 0x'+a+' — ',1)[1].split('\n## ',1)[0];name,body=section.split('\n',1)
 paths=[r['path']for r in e['source_c']+e['ranges']+e['support_documents']]
 paths+=['analysis/server-flying-monster-behavior/contract.md','analysis/server-flying-monster-behavior/evidence.json',e['api_binding']['header']['path']]
 cards.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=list(dict.fromkeys(paths)),details_ru=[x.strip()for x in re.split(r'\n\s*\n',body)if x.strip()]))
(O/'notes.json').write_text(json.dumps(dict(functions=cards),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
