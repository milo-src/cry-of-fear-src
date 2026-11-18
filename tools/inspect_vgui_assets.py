"""Inventory original VGUI resources without executing original code.

Preserves KeyValues order/duplicates and symbolic strings. Geometry is resource
input, not proof of final native layout or which scheme a control selects.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import subprocess
from PIL import Image, ImageDraw

ROOT = Path(__file__).resolve().parents[1]
LEX = re.compile(r'\s+|\x00|//[^\n]*|/\*[\s\S]*?\*/|"(?:\\.|[^"\\])*"|[{}]|\[[^\]]*\]|[^\s{}"\[\]\x00]+')


def decode(data):
    if data.startswith((b'\xff\xfe', b'\xfe\xff')):
        return data.decode('utf-16'), 'utf-16'
    return data.decode('utf-8-sig'), 'utf-8-sig'


def parse(text):
    text = text.split('\0', 1)[0]
    tokens = []
    end = 0
    for match in LEX.finditer(text):
        if match.start() != end:
            raise ValueError(f'Unparsed resource text at offset {end}')
        end = match.end()
        raw = match.group()
        if raw.isspace() or raw == '\0' or raw.startswith(('//', '/*')):
            continue
        value = re.sub(r'\\(["\\])', r'\1', raw[1:-1]) if raw.startswith('"') else raw
        tokens.append((raw, value, text.count('\n', 0, match.start()) + 1))
    if end != len(text):
        raise ValueError(f'Unparsed resource text at offset {end}')
    index = 0

    def entries(nested=False):
        nonlocal index
        result = []
        while index < len(tokens) and tokens[index][0] != '}':
            raw, key, line = tokens[index]
            index += 1
            if raw in ('{', '}') or index == len(tokens):
                raise ValueError(f'Expected value after {key} at line {line}')
            node = dict(name=key, line=line)
            raw, value, _ = tokens[index]
            index += 1
            if raw == '{':
                node['children'] = entries(True)
            elif raw == '}':
                raise ValueError(f'Expected value after {key} at line {line}')
            else:
                node['value'] = value
            if index < len(tokens) and tokens[index][0].startswith('['):
                node['condition'] = tokens[index][0][1:-1]
                index += 1
            result.append(node)
        if nested:
            if index == len(tokens):
                raise ValueError('Unterminated section')
            index += 1
        elif index != len(tokens):
            raise ValueError('Unexpected closing brace')
        return result

    return entries()


def find(nodes, key):
    return next((n for n in nodes if n['name'].lower() == key.lower()), None)


def body(tree):
    return tree[0]['children'] if len(tree) == 1 and 'children' in tree[0] else tree


def scalar(nodes):
    return {n['name']: n['value'] for n in nodes if 'value' in n}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--install', type=Path, default=Path('D:/Steam/steamapps/common/Cry of Fear'))
    parser.add_argument('--output', type=Path, default=ROOT/'analysis/ui')
    parser.add_argument('--check-parser', type=Path, help='Run source-owned C++ parser corpus test')
    args = parser.parse_args()
    install = args.install.resolve()
    files = sorted(set((install/'cryoffear/resource').glob('*.res')) |
                   set((install/'platform/resource').glob('*.res')) |
                   set((install/'cryoffear/resource').glob('*_english.txt')) |
                   set((install/'platform/resource').glob('*_english.txt')) |
                   set((install/'platform/resource').glob('*_russian.txt')))
    records, schemes, layouts, locales = [], [], [], []
    for path in files:
        data = path.read_bytes()
        text, encoding = decode(data)
        tree = parse(text)
        relative = path.relative_to(install).as_posix()
        record = dict(path=relative, bytes=len(data), sha256=hashlib.sha256(data).hexdigest(), encoding=encoding, tree=tree)
        records.append(record)
        content = body(tree)
        if 'scheme' in path.stem.lower():
            scheme = dict(path=relative)
            for section in ('Colors', 'BaseSettings', 'Fonts', 'Borders'):
                item = find(content, section)
                scheme[section] = item.get('children', []) if item else []
            schemes.append(scheme)
        if path.stem.lower().startswith(('options', 'dialogoptions')) or 'console' in path.stem.lower():
            layouts.append(dict(path=relative, controls=[dict(name=n['name'], line=n['line'], properties=scalar(n.get('children', []))) for n in content]))
        tokens = find(content, 'Tokens')
        if tokens:
            locales.append(dict(path=relative, language=scalar(content).get('Language'), tokens=scalar(tokens.get('children', []))))
    art = []
    art_paths = sorted(set((install/'cryoffear/resource').glob('*.tga')) |
                       set((install/'platform/resource').glob('*.tga')) |
                       set((install/'cryoffear/gfx/vgui/fonts').glob('*.ttf')) |
                       set((install/'cryoffear/gfx/vgui/fonts').glob('*.otf')))
    preview = Image.new('RGB', (800, ((len(art_paths)+4)//5)*165), '#404040')
    draw = ImageDraw.Draw(preview)
    for index, path in enumerate(art_paths):
        if not path.is_file():
            continue
        data = path.read_bytes()
        entry = dict(path=path.relative_to(install).as_posix(), bytes=len(data), sha256=hashlib.sha256(data).hexdigest())
        if path.suffix.lower() == '.tga':
            with Image.open(path) as image:
                entry.update(width=image.width, height=image.height, mode=image.mode)
                thumb = image.convert('RGBA')
                thumb.thumbnail((150, 125))
                x, y = index % 5 * 160, index // 5 * 165
                preview.paste(thumb, (x, y), thumb)
                draw.text((x+2, y+128), path.name[:23], fill='white')
                draw.text((x+2, y+142), f'{image.width}x{image.height}', fill='white')
        art.append(entry)
    local = ROOT/'analysis/local/vgui-assets'
    local.mkdir(parents=True, exist_ok=True)
    preview.save(local/'resources.png')
    report = dict(schema=1, original_executed=False, install=str(install), files=records, art=art,
                  schemes=schemes, layouts=layouts, localization=locales,
                  limitations=['No implicit cross-file scheme inheritance is assumed.',
                               'Resource geometry may be overridden by native layout.',
                               'Conditional entries retained, not evaluated.',
                               'Game English-named localization contains Russian text in this installation.'])
    args.output.mkdir(parents=True, exist_ok=True)
    (args.output/'resources.json').write_text(json.dumps(report, ensure_ascii=False, indent=2)+'\n', encoding='utf8')
    # Compact table of every original option control, including invisible ones.
    labels = {}
    for locale in locales:
        if locale['path'].startswith('cryoffear/'):
            labels.update({key.lower(): value for key, value in locale['tokens'].items()})
    rows = ['# Resource control geometry', '', 'Generated by `tools/inspect_vgui_assets.py`. Coordinates are literal file values; native overrides are separate evidence.', '']
    for layout in layouts:
        rows += ['## '+layout['path'], '', '| Control | Class | x,y,w,h | Visible/enabled | Label token / installed text |', '|---|---|---|---|---|']
        for control in layout['controls']:
            p = {key.lower(): value for key, value in control['properties'].items()}
            token = p.get('labeltext', '')
            label = labels.get(token.lstrip('#').lower(), '')
            caption = (token + (' / '+label if label else '')).replace('|', '\\|').replace('\n', ' ')
            rows.append('| '+control['name']+' | '+p.get('controlname','')+' | '+','.join(p.get(k,'?') for k in ('xpos','ypos','wide','tall'))+' | '+p.get('visible','?')+'/'+p.get('enabled','?')+' | '+caption+' |')
        rows.append('')
    (args.output/'resource-controls.md').write_text('\n'.join(rows)+'\n', encoding='utf8')
    if args.check_parser:
        subprocess.run([str(args.check_parser.resolve()), *(str(path) for path in files)], check=True)
    print(f'Inventoried {len(files)} resources, {len(schemes)} schemes, {len(layouts)} layouts, {len(locales)} localization files')


if __name__ == '__main__':
    main()
