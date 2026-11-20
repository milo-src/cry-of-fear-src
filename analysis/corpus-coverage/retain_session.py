"""Retain an already completed inventory session; never opens REA."""
from pathlib import Path
import argparse,hashlib,json,collections
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent

def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
def ref(p):return {'path':p.relative_to(ROOT).as_posix(),'sha256':hashlib.sha256(p.read_bytes()).hexdigest()}
def save(n,d):(OUT/n).write_text(json.dumps(d,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
def main():
 p=argparse.ArgumentParser();p.add_argument('module',choices=['engine','gameui','opengl','vgui2']);p.add_argument('session',type=Path);args=p.parse_args();src=args.session.resolve()
 v=read(src/'verification.json');assert v['input_unchanged']and v['queries_succeeded']and v['rea_exit_code']==0 and not v['target_executed']
 for n in ['close.json','reset.json']:assert not read(src/n).get('isError')
 result=read(src/'000-list_procedures.json');assert not result.get('isError');e=result['structuredContent'];assert e['operation']=='list_procedures'and e['parameters']=={};a=e['normalized_result'];assert isinstance(a,list)and len(a)==len({x['address']for x in a})
 target=read(OUT/'inventory.json')['modules'][args.module]['binary_sha256'];assert target==e['subject']['digest']['sha256'];request=read(src/'request.json');assert request['sha256']==target;assert hashlib.sha256(Path(request['binary']).read_bytes()).hexdigest()==target
 save(args.module+'-discovered-evidence.json',{'source':ref(src/'000-list_procedures.json'),'structuredContent':e})
 save(args.module+'-inventory-session.json',{'target_executed':False,'records':{n:{'source':ref(src/n),'result':read(src/n)}for n in ['request.json','initialize.json','open.json','close.json','reset.json','verification.json','export.json']},'retained_bundle':ref(src/'evidence.json'),'final_bundle':ref(src/'final-evidence.json'),'tool_schemas_source':ref(src/'tool-schemas.json'),'used_list_procedures_schema':next(t for t in read(src/'tool-schemas.json')if t['name']=='list_procedures')})
 print(json.dumps({'module':args.module,'total':len(a),'kinds':dict(collections.Counter('external'if x['procedure']['external']else'thunk'if x['procedure']['thunk']else'local_function'for x in a)),'profile':e['analysis_profile']['digest'],'cleanup_verified':True},ensure_ascii=False))
if __name__=='__main__':main()
