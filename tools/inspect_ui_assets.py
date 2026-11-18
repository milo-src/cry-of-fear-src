"""Inventory shipped CoF UI art and create inspection contact sheets; never run binaries."""
import argparse
import hashlib
import json
import math
from pathlib import Path
import struct

from PIL import Image, ImageDraw
from inspect_key_assets import descriptors

ROOT = Path(__file__).resolve().parents[1]


def sprite(data):
    """Decode the first single frame of a GoldSrc IDSP v2 paletted sprite."""
    ident, version, kind, texture, radius, width, height, frames, beam, sync = struct.unpack_from('<4siiifiiifi', data)
    if ident != b'IDSP' or version != 2:
        raise ValueError('Not an IDSP v2 sprite')
    count, = struct.unpack_from('<H', data, 40)
    palette = data[42:42 + 3 * count]
    offset = 42 + 3 * count
    frame_type, ox, oy, fw, fh = struct.unpack_from('<5i', data, offset)
    if frame_type != 0:
        raise ValueError('Grouped frame requires separate decoder')
    pixels = data[offset + 20:offset + 20 + fw * fh]
    if len(pixels) != fw * fh:
        raise ValueError('Truncated frame')
    image = Image.frombytes('P', (fw, fh), pixels)
    image.putpalette(palette)
    image = image.convert('RGBA')
    if texture == 3:
        image.putalpha(Image.frombytes('L', (fw, fh), bytes(0 if i == 255 else 255 for i in pixels)))
    elif texture == 1:  # SPR_ADDITIVE: preview intensity against black, not alpha.
        pass
    elif texture == 2:
        image = Image.new('RGBA', (fw, fh), tuple(palette[-3:]) + (255,))
        image.putalpha(Image.frombytes('L', (fw, fh), pixels))
    return image, {'version': version, 'type': kind, 'texture_format': texture,
                   'declared_size': [width, height], 'frames': frames,
                   'first_frame_origin': [ox, oy], 'first_frame_size': [fw, fh]}


def contact(images, destination, cell=(380, 300), columns=3):
    sheet = Image.new('RGB', (cell[0] * columns, cell[1] * math.ceil(len(images) / columns)), (28, 28, 28))
    draw = ImageDraw.Draw(sheet)
    for i, (name, source) in enumerate(images):
        left, top = i % columns * cell[0], i // columns * cell[1]
        picture = source.copy()
        picture.thumbnail((cell[0] - 12, cell[1] - 42))
        x, y = left + (cell[0] - picture.width) // 2, top + 8
        sheet.paste(picture, (x, y), picture.getchannel('A'))
        draw.text((left + 6, top + cell[1] - 30), name, fill='white')
        draw.text((left + 6, top + cell[1] - 16), str(source.size), fill=(180, 180, 180))
    sheet.save(destination)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear'))
    parser.add_argument('--output', type=Path, default=ROOT / 'analysis/ui/assets.json')
    parser.add_argument('--previews', type=Path, default=ROOT / 'analysis/local/ui-assets')
    args = parser.parse_args()
    game = args.game.resolve()
    args.previews.mkdir(parents=True, exist_ok=True)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    groups = {name: [] for name in ('panels', 'bars', 'sprites', 'items', 'fonts')}
    rows, descriptor_rows, field_names, candidates = [], [], set(), set()
    for path in sorted((game / 'inventoryitems').rglob('*.txt')):
        data = path.read_bytes()
        parsed = descriptors(data)
        fields = {row['name']: row.get('cp1251_interpretation', row['value']) for row in parsed}
        field_names.update(fields)
        descriptor_rows.append({'path': path.relative_to(game).as_posix(), 'sha256': hashlib.sha256(data).hexdigest(), 'fields': fields})
        for field in ('inventory_picture', 'quick_picture', 'check_picture'):
            if fields.get(field):
                candidates.add(game / fields[field])
    candidates.update((game / 'gfx/vgui').glob('*.tga'))
    candidates.update((game / 'gfx/vgui').glob('*.TGA'))
    candidates.update((game / 'gfx/vgui/fonts').glob('*inventory*'))
    candidates.update(game.glob('*_textscheme.txt'))
    candidates.update((game / 'sound/inventory').glob('*.wav'))
    candidates.update((game / 'sprites').glob('cof_*.spr'))
    candidates.update([game / 'sprites/hud.txt', game / 'gfx/vgui/fonts/charmap.txt', game / 'gfx/vgui/fonts/font info.txt'])
    for path in sorted(candidates):
        rel = path.relative_to(game).as_posix()
        if not path.is_file():
            rows.append({'path': rel, 'missing': True})
            continue
        data = path.read_bytes()
        row = {'path': rel, 'bytes': len(data), 'sha256': hashlib.sha256(data).hexdigest()}
        image = None
        if path.suffix.lower() == '.tga':
            with Image.open(path) as source:
                row.update(size=list(source.size), mode=source.mode)
                image = source.convert('RGBA')
                row['alpha_range'] = list(image.getchannel('A').getextrema())
                row['alpha_bounds'] = image.getchannel('A').getbbox()
        elif path.suffix.lower() == '.spr':
            try:
                image, row['sprite'] = sprite(data)
            except ValueError as exc:
                row['preview_error'] = str(exc)
        elif path.suffix.lower() == '.chw':
            row['triplets'] = [list(data[i:i+3]) for i in range(0, len(data), 3)]
        rows.append(row)
        if image is None:
            continue
        name = path.name.lower()
        if '/fonts/' in rel:
            if name == '640_inventory.tga':
                # The shipped font has zero alpha. Expose RGB solely for inspection.
                preview = image.convert('RGB').convert('RGBA')
                groups['fonts'].append((path.name + ' (RGB only)', preview))
                preview.save(args.previews / 'font-640-inventory.png')
        elif 'inventory' in name or name in ('640_hint_bar.tga', '640_cancelbutton.tga', 'mouse.tga'):
            groups['panels'].append((path.name, image))
            if name.startswith('640_inventory'):
                image.save(args.previews / (path.stem + '.png'))
        elif 'healthbar' in name or 'staminabar' in name:
            groups['bars'].append((path.name, image))
        elif path.suffix.lower() == '.spr' and any(term in name for term in ('health', 'scare', 'ammo', 'glock', 'syringe', 'crosshair')):
            groups['sprites'].append((path.name, image))
        elif any(term in rel for term in ('/sewerkey/', '/glock/', '/mobile/', '/syringe/')):
            groups['items'].append((path.name, image))
    for name, images in groups.items():
        if images:
            contact(images, args.previews / (name + '.png'))
    result = {'schema': 1, 'target': str(game), 'method': 'Static loose-asset inspection; no original code executed. CP1251 text is a display interpretation.',
              'assets': rows, 'descriptor_field_names': sorted(field_names), 'descriptors': descriptor_rows,
              'contact_sheets': {name: str(args.previews / (name + '.png')) for name, images in groups.items() if images}}
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(f'Inspected {len(rows)} assets, {len(descriptor_rows)} descriptors; wrote {args.output}')


if __name__ == '__main__':
    main()
