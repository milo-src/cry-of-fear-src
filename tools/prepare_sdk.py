"""Validate vendored SDK sources; building needs no Git history or submodules."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]


def main():
    required = (
        'hlsdk-portable/waf', 'hlsdk-portable/wscript',
        'hlsdk-portable/dlls/player.cpp',
        'xash3d-fwgs/waf', 'xash3d-fwgs/wscript',
        'xash3d-fwgs/3rdparty/mainui/wscript',
    )
    missing = [name for name in required if not (ROOT / 'external' / name).is_file()]
    if missing:
        raise RuntimeError('Incomplete external source trees: ' + ', '.join(missing))
    print('Vendored HLSDK and Xash3D sources ready')


if __name__ == '__main__':
    main()
