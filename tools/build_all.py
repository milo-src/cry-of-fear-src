"""Build the prototype with Waf and stage only game assets from the local install."""
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
commands = [
    [sys.executable, 'tools/build_engine.py'],
    [sys.executable, 'waf', 'configure'],
    [sys.executable, 'waf', 'build', '-j8'],
    [sys.executable, 'waf', 'install'],
    [sys.executable, 'tools/stage_assets.py', *sys.argv[1:]],
    [sys.executable, 'tools/audit_runtime.py'],
]
for command in commands:
    subprocess.run(command, cwd=ROOT, check=True)
print('Build ready. Run launch.bat to explore c_sdkmap1.')
