"""Validated next-launch settings, shared by both native menu builds."""
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]
SETTINGS = ROOT / 'out/runtime/cof_renderer.cfg'

def read_preferences(path=SETTINGS):
    try:
        text = path.read_text(encoding='ascii')
    except (OSError, UnicodeError):
        return (0, 1, -1, 3)
    match = re.fullmatch(r'COF_RENDERER_V2\s+([01])\s+([012])\s+(-1|[012])\s+([1-5])\s*', text)
    if match:
        return tuple(map(int, match.groups()))
    match = re.fullmatch(r'COF_RENDERER_V1\s+([01])\s+([012])\s*', text)
    if match:
        enabled, profile = map(int, match.groups())
        return (enabled, profile, -1, 4-profile)
    return (0, 1, -1, 3)


def read_settings(path=SETTINGS):
    return read_preferences(path)[:2]

def rtx_available(runtime):
    from build_rtx import DLLS
    required = ['xash3d.exe', 'xash.dll', 'ref_gl.dll', 'menu.dll', 'filesystem_stdio.dll',
                'SDL2.dll', 'cryoffear/cl_dlls/client_amd64.dll', 'cryoffear/dlls/hl_amd64.dll',
                'rtx-build-manifest.json', 'rt/BlueNoise_LDR_RGBA_128.ktx2', *DLLS]
    return all((runtime/name).is_file() for name in required) and any((runtime/'rt/shaders').glob('*.spv'))
