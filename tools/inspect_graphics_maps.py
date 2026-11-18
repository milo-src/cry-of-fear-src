"""Inventory graphics entities and directional light styles in local CoF BSPs."""
import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import struct
from inspect_door_maps import parse_entities

ROOT = Path(__file__).resolve().parents[1]
CLASSES = {'cof_blackandwhite', 'env_dynlight', 'env_fog', 'rain_settings',
           'rain_modify', 'envpos_sky', 'envpos_world', 'light_environment'}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear'))
    parser.add_argument('--output', type=Path, default=ROOT/'analysis/graphics/maps.json')
    args = parser.parse_args()
    rows = []
    for path in sorted((args.game/'maps').glob('*.bsp')):
        with path.open('rb') as stream:
            header = stream.read(124)
            if len(header) != 124 or struct.unpack_from('<i', header)[0] != 30:
                continue
            entity_offset, entity_size = struct.unpack_from('<ii', header, 4)
            stream.seek(entity_offset)
            lump = stream.read(entity_size)
            entities = parse_entities(lump)
            selected = [e for e in entities if e['keyvalues'].get('classname') in CLASSES
                        or e['keyvalues'].get('skin') == '-3']
            face_offset, face_size = struct.unpack_from('<ii', header, 4+7*8)
            stream.seek(face_offset)
            faces = stream.read(face_size)
            if len(faces) != face_size or face_size % 20:
                raise ValueError(f'Invalid face lump: {path}')
            styles = Counter(s for i in range(0, face_size, 20) for s in faces[i+12:i+16] if s in (61, 62, 63))
        rows.append(dict(map=path.stem, entity_lump_sha256=hashlib.sha256(lump).hexdigest(),
                         class_counts=dict(Counter(e['keyvalues'].get('classname') for e in selected)),
                         water_volumes=sum(e['keyvalues'].get('skin') == '-3' for e in selected),
                         directional_style_counts=dict(styles), entities=selected))
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(dict(source=str(args.game.resolve()), maps=rows,
        limits='Entity keys and face style bytes only; no execution or proof of rendered behavior.'),
        ensure_ascii=False, indent=2)+'\n', encoding='utf-8')
    print(f'Inspected {len(rows)} BSPs; {sum(bool(r["water_volumes"]) for r in rows)} contain explicit water volumes; '
          f'{sum(bool(r["directional_style_counts"]) for r in rows)} contain directional light styles.')


if __name__ == '__main__':
    main()
