"""Inventory CoF's shipped shader/resources without loading original game code.

The shader files are plaintext evidence. Texture names establish candidates,
not their live material bindings. Run this after installing Pillow.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re

from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parents[1]


def record(path, game):
    data = path.read_bytes()
    result = dict(path=path.relative_to(game).as_posix(), bytes=len(data),
                  sha256=hashlib.sha256(data).hexdigest())
    if path.suffix.lower() == '.tga':
        with Image.open(path) as image:
            result.update(width=image.width, height=image.height, mode=image.mode,
                          channel_extrema=image.getextrema())
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path,
                        default=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear'))
    parser.add_argument('--output', type=Path, default=ROOT/'analysis/graphics')
    args = parser.parse_args()
    game = args.game.resolve()
    shaders = []
    for path in sorted((game/'cgshaders').glob('*.cg')):
        item = record(path, game)
        source = path.read_text(encoding='ascii')
        item['uniforms'] = re.findall(r'uniform\s+(\w+)\s+(\w+)(?:\s*:\s*(\w+))?', source)
        item['texture_lookups'] = re.findall(r'\b(tex2D|offsettex2D)\s*\(\s*(\w+)', source)
        item['lines'] = len(source.splitlines())
        shaders.append(item)
    textures = sorted(set((game/'textures').glob('*.tga')) |
                      set((game/'gfx').glob('flashlight*.tga')) |
                      set((game/'gfx').glob('spotlight*.tga')) |
                      set((game/'gfx/bumpmaps').glob('*.tga')))
    configs = []
    for name in ('config.cfg', 'autoexec.cfg', 'default.cfg'):
        path = game/name
        if not path.exists():
            continue
        item = record(path, game)
        item['graphics_settings'] = [line.strip() for line in path.read_text(
            encoding='utf8', errors='replace').splitlines() if re.match(
                r'^(?:cg_|gl_|r_|gamma\b|brightness\b|cl_waterspeed|cl_lowflashlight)', line)]
        configs.append(item)
    args.output.mkdir(parents=True, exist_ok=True)
    report = dict(schema=1, source=str(game), target_executed=False,
                  scope='all six cgshaders; textures/*.tga, gfx flashlight/spotlight and bumpmap TGA; three root configs',
                  shaders=shaders, textures=[record(p, game) for p in textures], configs=configs)
    (args.output/'assets.json').write_text(json.dumps(report, indent=2)+'\n', encoding='utf8')
    preview_paths = [p for p in textures if p.parent.name != 'bumpmaps']
    preview = Image.new('RGB', (640, ((len(preview_paths)+3)//4)*180), '#202020')
    draw = ImageDraw.Draw(preview)
    for index, path in enumerate(preview_paths):
        with Image.open(path) as original:
            thumb = original.convert('RGB')
            thumb.thumbnail((152, 152))
            x, y = (index%4)*160, (index//4)*180
            preview.paste(thumb, (x, y))
            draw.text((x+2, y+154), path.name, fill='white')
    local = ROOT/'analysis/local/graphics-assets'
    local.mkdir(parents=True, exist_ok=True)
    preview.save(local/'light-textures.png')
    print(f'Inventoried {len(shaders)} shaders and {len(textures)} texture candidates')
    print(local/'light-textures.png')


if __name__ == '__main__':
    main()
