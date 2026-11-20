from pathlib import Path
import re,json
OUT=Path(__file__).resolve().parent
s=(OUT/'contract.md').read_text(encoding='utf8');e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'));notes=[]
for a in e['primary']:
 m=re.search(r'^### 0x'+a+r' — (.*?)\n\n(.*?)(?=^### |^## |\Z)',s,re.M|re.S);name,body=m.groups();parts=[x.replace('\n',' ')for x in body.strip().split('\n\n')]
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-derived-death/{a}-0.asm','analysis/server-derived-death/contract.md','analysis/server-derived-death/evidence.json']
 for group in ['source_c','ranges','support_documents']:
  for r in e[group]:
   if r['path'] not in paths:paths.append(r['path'])
 notes.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=parts[0],confidence='high',evidence_paths=paths,details_ru=parts[1:]))
(OUT/'notes.json').write_text(json.dumps({'functions':notes,'subsystems':[]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('wrote',len(notes),'cards')
