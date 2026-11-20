"""Rebuild ten analyst cards from the reviewed local contract; never edit the global ledger."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;R=O.parents[1]
e=json.loads((O/'evidence.json').read_text(encoding='utf8'))
s=(O/'contract.md').read_text(encoding='utf8')
summaries={
'10045580':'Создаёт private object CGlock или возвращает существующий; выделяет204h и напрямую устанавливает vptr/pev.',
'1011dd70':'Разбирает шесть точных KeyValue: custom models/script, movewith, skill и style; неизвестный ключ не передаёт базе.',
'1011f260':'Сохраняет два собственных DWORD-поля CGlock после базового weapon Save, сохраняя native return ABI.',
'1011eaa0':'Читает блок CGlock с двумя DWORD-полями после успешного weapon Restore без отката или resync.',
'1011fc80':'Отправляет CurWeapon по изменению state/clip/FOV/cache, затем рекурсивно обновляет m_pNext.',
'1011d520':'Проверяет signed clip/reserve и sentinel max-ammo=-1 через конкретный ammo-index callback.',
'1011e510':'Возвращает полный DWORD индекса primary ammo из W1dc без проверки диапазона.',
'1011c020':'Разрешает Deploy при NULL владельце или movetype владельца, отличном от5; другие условия не проверяет.',
'1011e4a0':'Выбирает empty/noclick sample по DWORD latch, вызывает emitter и сбрасывает latch, оставляя EAX0.',
'1011e590':'Устанавливает DWORD empty-sound latch в1 без звука, таймера и гарантии return status.'}

paths=[x['path']for x in e['source_c']+e['ranges']+e['support_documents']]+[(O/'contract.md').relative_to(R).as_posix(),(O/'evidence.json').relative_to(R).as_posix()]
out=[]
for a,name,body in re.findall(r'^## 0x([0-9a-f]{8}) — ([^\n]+)\n\n(.*?)(?=^## |\Z)',s,re.M|re.S):
 out.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='weapons',summary_ru=summaries[a],confidence='high',evidence_paths=list(dict.fromkeys(paths)),details_ru=body.strip().split('\n\n')))
assert len(out)==10
(O/'notes.json').write_text(json.dumps(dict(functions=out),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('PASS',len(out),'cards')
