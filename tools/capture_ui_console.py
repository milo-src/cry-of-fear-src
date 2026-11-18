"""Reproduce immutable original CoF console evidence (never executes DLLs)."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
GAME = Path('D:/Steam/steamapps/common/Cry of Fear')
GROUPS = {
    'core': ('cryoffear/cl_dlls/GameUI.dll', [0x100309FD,0x1003159F,0x10049139,0x10049CB3,0x1004A829,0x1004A96B,0x1004B634,0x1004B8FE]),
    'behavior': ('cryoffear/cl_dlls/GameUI.dll', [0x10030698,0x100307AF,0x100494F8,0x10049D70,0x10049EE7,0x10049FFC,0x1004A212,0x1004A8A0,0x1004AA00]),
    'history': ('cryoffear/cl_dlls/GameUI.dll', [0x10049787,0x1004A174,0x1004A34D,0x1004AA60,0x100692CE]),
    'engine': ('hw.dll', [0x1D01245,0x1D4A538,0x1D4A52E,0x1D4A552]),
    'fonts': ('cryoffear/cl_dlls/GameUI.dll', [0x1007D68D,0x100748B8]),
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=GAME)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--rea', action='store_true')
    args = parser.parse_args()
    args.output.mkdir(parents=True, exist_ok=False)
    paths = ['cryoffear/cl_dlls/GameUI.dll','hw.dll','cryoffear/resource/trackerscheme.res']
    hashes = {p: hashlib.sha256((args.game/p).read_bytes()).hexdigest() for p in paths}
    ranges = {'interface':(0x1003064F,0x10030A1C), 'dialog':(0x1004912D,0x100494F8),
              'layout':(0x10049FFC,0x1004A212), 'scheme':(0x1004A212,0x1004A34D),
              'completion-thunk':(0x10045AD0,0x10045AD8)}
    for name, (start,end) in ranges.items():
        result = subprocess.run(['objdump','-d','-M','intel',f'--start-address={start:#x}',
            f'--stop-address={end:#x}',str(args.game/paths[0])],capture_output=True,text=True,check=True)
        (args.output/(name+'.asm')).write_text(result.stdout,encoding='utf8')
    result = subprocess.run(['objdump','-d','-M','intel','--start-address=0x1d0f8e9',
        '--stop-address=0x1d0fa9c',str(args.game/'hw.dll')],capture_output=True,text=True,check=True)
    (args.output/'engine-console-transport.asm').write_text(result.stdout,encoding='utf8')
    if args.rea:
        for name,(binary,procedures) in GROUPS.items():
            subprocess.run([sys.executable,str(ROOT/'tools/rea_ghidra.py'),str(args.game/binary),
                *[f'ram:{a:#x}' for a in procedures], '--output',str(args.output/name)],check=True)
    unchanged = all(hashlib.sha256((args.game/p).read_bytes()).hexdigest()==h for p,h in hashes.items())
    (args.output/'manifest.json').write_text(json.dumps({'artifacts':hashes,'input_unchanged':unchanged,
        'target_executed':False,'groups':{k:[v[0],[hex(a) for a in v[1]]] for k,v in GROUPS.items()}},indent=2)+'\n')
    if not unchanged: raise RuntimeError('Source artifacts changed')
    print(args.output)


if __name__ == '__main__': main()
