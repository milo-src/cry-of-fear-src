"""Build an opt-in Vulkan readback test layer with Waf; never install globally."""
from pathlib import Path
import json,os,shutil,subprocess,sys
ROOT=Path(__file__).resolve().parents[1]
def main():
    source=ROOT/'build/readback-source';out=ROOT/'build/readback'
    shutil.copytree(ROOT/'src/cof/render/readback',source,dirs_exist_ok=True)
    shutil.copy2(ROOT/'external/xash-rt/waf',source/'waf')
    env=dict(os.environ,COF_REPO_ROOT=str(ROOT),PYTHONUTF8='1')
    for args in (['configure','-o',str(out),'--msvc_targets=x64'],['build']):
        subprocess.run([sys.executable,'waf',*args],cwd=source,env=env,check=True)
    (out/'cof_readback.json').write_text(json.dumps(dict(file_format_version='1.0.0',layer=dict(
        name='VK_LAYER_COF_readback',type='GLOBAL',library_path=str(out/'cof_readback.dll'),
        api_version='1.3.0',implementation_version='1',description='CoF isolated renderer readback')),indent=2))
if __name__=='__main__':main()
