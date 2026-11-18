"""Read shipped inventory descriptors and BSP item_key data without executing game code.

Every byte span is half-open. Descriptor text is retained reversibly in Latin-1;
CP1251 is an additional display interpretation, not an encoding declaration.
"""
import argparse
from collections import Counter, defaultdict
import hashlib
import json
from pathlib import Path
import re
import struct

from inspect_door_maps import parse_entities

ROOT = Path(__file__).resolve().parents[1]
TOKEN = re.compile(rb'\s+|//[^\r\n]*|"[^"]*"|[{}]|[^\s{}"]+')
ASSET_FIELDS = {'3dmdl', 'inventory_picture', 'quick_picture', 'check_picture',
                'pickup_sound', 'combined_sound'}


def digest(data):
    return hashlib.sha256(data).hexdigest()


def scalar(token):
    raw = token.group()
    return raw[1:-1] if raw.startswith(b'"') else raw


def descriptors(data):
    """Accept the observed section { data value } grammar, fail on all residual bytes."""
    matches = list(TOKEN.finditer(data))
    end = 0
    for match in matches:
        if match.start() != end:
            raise ValueError(f'Unparsed bytes at {end}')
        end = match.end()
    if end != len(data):
        raise ValueError(f'Unparsed suffix at {end}')
    tokens = [m for m in matches if not m.group().isspace() and not m.group().startswith(b'//')]
    if len(tokens) % 5:
        raise ValueError('Unexpected descriptor token count')
    sections = []
    for i in range(0, len(tokens), 5):
        name, opening, field, value, closing = tokens[i:i + 5]
        if opening.group() != b'{' or closing.group() != b'}' or scalar(field) != b'data':
            raise ValueError(f'Unsupported section structure at {name.start()}')
        if scalar(name) in (b'{', b'}') or scalar(value) in (b'{', b'}'):
            raise ValueError('Unexpected structural token used as name/value')
        raw = scalar(value)
        section = {'name': scalar(name).decode('ascii'), 'value': raw.decode('latin1'),
                   'byte_span': [name.start(), closing.end()],
                   'value_token_byte_span': [value.start(), value.end()]}
        if not raw.isascii():
            section['value_bytes_hex'] = raw.hex()
            try:
                section['cp1251_interpretation'] = raw.decode('cp1251')
            except UnicodeDecodeError:
                section['cp1251_interpretation'] = None
        sections.append(section)
    return sections


def local_asset(game, relative):
    relative = relative.replace('\\', '/')
    path = (game / relative).resolve()
    if not path.is_relative_to(game):
        return {'path': relative, 'status': 'outside_game_directory'}
    if not path.is_file():
        return {'path': relative, 'status': 'missing_loose_file'}
    data = path.read_bytes()
    result = {'path': relative, 'status': 'present', 'bytes': len(data), 'sha256': digest(data)}
    if path.suffix.lower() == '.mdl' and len(data) >= 148:
        result['studio_header'] = {
            'magic': data[:4].decode('ascii', errors='replace'),
            'version': struct.unpack_from('<i', data, 4)[0],
            'declared_bytes': struct.unpack_from('<i', data, 72)[0],
            'hull_min': list(struct.unpack_from('<3f', data, 88)),
            'hull_max': list(struct.unpack_from('<3f', data, 100)),
            'bounding_box_min': list(struct.unpack_from('<3f', data, 112)),
            'bounding_box_max': list(struct.unpack_from('<3f', data, 124)),
        }
    return result


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear'))
    parser.add_argument('--output', type=Path, default=ROOT / 'analysis/inventory/assets.json')
    args = parser.parse_args()
    game = args.game.resolve()
    paths = sorted((game / 'inventoryitems').rglob('*.txt'), key=lambda p: str(p).lower())
    if not paths:
        raise ValueError('No loose inventory descriptors found')
    items, field_counts, class_counts = [], Counter(), Counter()
    value_profiles = defaultdict(Counter)
    assets = {}
    for path in paths:
        data = path.read_bytes()
        sections = descriptors(data)
        values = {s['name']: s['value'] for s in sections}
        field_counts.update(s['name'] for s in sections)
        class_counts.update([values.get('classname', '<absent>')])
        for section in sections:
            value_profiles[section['name']][section['value']] += 1
        try:
            data.decode('utf8')
            valid_utf8 = True
        except UnicodeDecodeError:
            valid_utf8 = False
        relative = path.relative_to(game).as_posix()
        references = []
        for key in sorted(ASSET_FIELDS):
            if not values.get(key):
                continue
            ref = ('sound/' if key.endswith('sound') else '') + values[key]
            if ref not in assets:
                assets[ref] = local_asset(game, ref)
            references.append({'field': key, 'asset': ref})
        items.append({'path': relative, 'bytes': len(data), 'sha256': digest(data),
                      'ascii_only': data.isascii(), 'valid_utf8': valid_utf8,
                      'sections': sections, 'fields': values, 'asset_references': references})
    by_path = {item['path'].lower(): item for item in items}
    maps, profile = [], defaultdict(Counter)
    for path in sorted((game / 'maps').glob('*.bsp'), key=lambda p: p.name.lower()):
        data = path.read_bytes()
        if len(data) < 124:
            raise ValueError(f'Short BSP: {path}')
        version, offset, length = struct.unpack_from('<iii', data)
        if version != 30 or offset < 124 or length < 0 or offset + length > len(data):
            raise ValueError(f'Invalid/unsupported BSP: {path}')
        lump = data[offset:offset + length]
        entities = parse_entities(lump)
        selected = []
        locks = []
        for entity in entities:
            kv = entity['keyvalues']
            if kv.get('lockedby'):
                locks.append({'ordinal': entity['ordinal'], 'lump_byte_span': entity['lump_byte_span'],
                              'keyvalues': kv})
            if kv.get('classname') != 'item_key':
                continue
            for key, value in entity['pairs']:
                profile[key][value] += 1
            message = kv.get('message', '').replace('\\', '/').lower()
            descriptor = by_path.get(message)
            selected.append({**entity, 'file_byte_span': [offset + x for x in entity['lump_byte_span']],
                             'descriptor': descriptor['path'] if descriptor else None,
                             'descriptor_map_name': descriptor['fields'].get('map_name') if descriptor else None})
            model = kv.get('model')
            if model and model not in assets:
                assets[model] = local_asset(game, model)
        maps.append({'map': path.stem, 'bytes': len(data), 'sha256': digest(data),
                     'entity_lump': {'offset': offset, 'length': length, 'sha256': digest(lump)},
                     'entity_count': len(entities), 'item_key_entities': selected,
                     'lockedby_entities': locks})
    report = {
        'schema': 1, 'source_directory': str(game),
        'method': 'Read-only loose descriptor and BSP-v30 entity-lump inspection; no original code executed.',
        'reproduce': 'python tools/inspect_key_assets.py --game <installed-cryoffear>',
        'boundaries': [
            'All spans are half-open offsets in raw bytes, before decoding.',
            'Latin-1 fields preserve bytes; CP1251 is a separate plausible Russian display interpretation.',
            'Descriptor parser validates only grammar observed in this installation, not complete original DLL parser semantics.',
            'Asset hashes cover complete loose files. Archive members, .ent overlays and other installations are not searched.',
            'Model hull/bounding-box fields are stored header values, not evidence of item runtime collision bounds.',
            'Matching map_name and lockedby strings establish data relationships, not item consumption or unlocking behavior.',
            'No defaults, spawnflag meanings, skill meanings, capacities, save format or inventory protocol inferred from asset values.',
        ],
        'observations': {
            'descriptor_count': len(items), 'map_count': len(maps),
            'item_key_count': sum(len(m['item_key_entities']) for m in maps),
            'descriptor_class_counts': dict(sorted(class_counts.items())),
            'descriptor_field_counts': dict(sorted(field_counts.items())),
            'descriptor_ascii_count': sum(i['ascii_only'] for i in items),
            'descriptor_invalid_utf8_count': sum(not i['valid_utf8'] for i in items),
            'descriptor_field_values': {k: dict(sorted(v.items())) for k, v in sorted(value_profiles.items())},
            'item_key_field_values': {k: dict(sorted(v.items())) for k, v in sorted(profile.items())},
        },
        'descriptors': items, 'assets': [assets[k] for k in sorted(assets)], 'maps': maps,
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2, ensure_ascii=True) + '\n', encoding='utf8')
    print(json.dumps({'output': str(args.output), **{k: v for k, v in report['observations'].items()
                                                   if k.endswith('_count') or k.endswith('_counts')}}, ensure_ascii=True))


if __name__ == '__main__':
    main()
