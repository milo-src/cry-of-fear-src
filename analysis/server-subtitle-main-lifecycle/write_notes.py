from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;e=json.loads((O/'evidence.json').read_text(encoding='utf8'));s=(O/'contract.md').read_text(encoding='utf8')
rows=[('1005fbc0','Subtitle_GetOrCreatePrivate','Возвращает существующий private object или выделяет CSubtitle; сохраняет native незащищённые failure paths.'),('10077910','subtitle_main_ExportThunk','Экспорт classname subtitle_main: native tail JMP в factory без отдельного Spawn.'),('100772e0','Subtitle_KeyValue','Принимает linenumber как float32, три inline base-ключа и выставляет handled без playback.'),('10077440','Subtitle_Restore','Восстанавливает inherited state, затем единственный float CurrentLine через ReadFields.'),('10077480','Subtitle_Save','Сохраняет inherited state и CurrentLine с diagnostic targetname/classname, возвращая native writer EAX.'),('100774e0','Subtitle_Spawn','Обновляет origin, присваивает solid0/effects80 и копирует shared vector в v_angle, не сбрасывая CurrentLine.')]
paths=['analysis/server-subtitle-main-lifecycle/contract.md','analysis/server-subtitle-main-lifecycle/evidence.json']
for group in ['source_c','ranges','support_documents']:
 for x in e[group]:
  if x['path']not in paths:paths.append(x['path'])
shared=s.split('Native factory',1)[1].split('## 0x',1)[0];shared='Native factory'+shared
out=[]
for a,name,summary in rows:
 body=re.search(r'## 0x'+a+r'[^\n]*\n\n(.*?)(?=\n## |\Z)',s,re.S).group(1)
 details=[x.replace('\n',' ')for x in body.strip().split('\n\n')]
 if a=='1005fbc0':details=[x.replace('\n',' ')for x in shared.strip().split('\n\n')]+details
 out.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='subtitles',summary_ru=summary,confidence='high',evidence_paths=paths,details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=out,subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
