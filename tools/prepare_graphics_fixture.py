"""Copy real CoF water geometry into an isolated runtime graphics fixture."""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct

ROOT = Path(__file__).resolve().parents[1]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--source', type=Path, default=Path(
        'D:/Steam/steamapps/common/Cry of Fear/cryoffear/maps/c_apartment3.bsp'))
    parser.add_argument('--runtime', type=Path, default=ROOT / 'out/runtime')
    args = parser.parse_args()
    source = args.source.resolve()
    runtime = args.runtime.resolve()
    if not runtime.is_relative_to((ROOT / 'out').resolve()):
        raise ValueError('Fixture destination must be under repository out/')
    data = source.read_bytes()
    if struct.unpack_from('<i', data)[0] != 30:
        raise ValueError('Expected original BSP30')
    lumps = [struct.unpack_from('<ii', data, 4 + i * 8) for i in range(15)]
    offset, size = lumps[0]
    entities = [dict(re.findall(r'"([^"\n]*)"\s*"([^"\n]*)"', block))
                for block in re.findall(r'\{([^{}]*)\}', data[offset:offset+size].decode('latin1'))]
    water = [e for e in entities if e.get('classname') == 'func_water' and e.get('skin') == '-3']
    if not any(e.get('model') == '*153' for e in water):
        raise ValueError('Expected c_apartment3 water *153; inspect a different source explicitly')
    model = struct.unpack_from('<9f7i', data, lumps[14][0] + 153 * 64)
    if tuple(model[:6]) != (404, 90, -40, 726, 332, -31):
        raise ValueError('Water bounds changed; fixture pose needs review')
    pose = (565, 210, 50)
    node = struct.unpack_from('<i', data, lumps[14][0] + 40)[0]  # world hull 1
    while node >= 0:
        plane, front, back = struct.unpack_from('<ihh', data, lumps[9][0] + node * 8)
        normal = struct.unpack_from('<4f', data, lumps[1][0] + plane * 20)
        node = front if sum(pose[i] * normal[i] for i in range(3)) >= normal[3] else back
    if node != -1:
        raise ValueError(f'Fixture player hull is not empty: {node}')
    # Keep the shipped BSP world, baked lighting, water brushes and static brush detail.
    # Remove original triggers, actors and changing level logic in this fixture only.
    kept = [e for e in entities if e.get('classname') in
            ('worldspawn', 'func_wall', 'func_illusionary', 'func_water', 'light', 'light_spot', 'light_environment')]
    for e in kept:
        if e.get('classname') == 'func_water':
            e['targetname'] = 'cof_graphics_water_' + e['model'][1:]
    kept += [
        {'classname': 'info_player_start', 'origin': '565 210 50', 'angles': '55 90 0'},
        {'classname': 'env_fog', 'targetname': 'cof_graphics_fog', 'origin': '565 210 50',
         'startdist': '8', 'enddist': '180', 'rendercolor': '80 120 160', 'fadein': '0', 'fadeout': '0'},
        {'classname': 'cof_blackandwhite', 'targetname': 'cof_graphics_bw', 'origin': '565 210 50', 'iuser1': '190'},
        {'classname': 'env_dynlight', 'targetname': 'cof_graphics_light', 'origin': '565 210 30',
         'renderamt': '384', 'rendercolor': '255 96 32', 'rendermode': '0', 'spawnflags': '1'},
    ]
    directory = runtime / 'cryoffear/maps'
    directory.mkdir(parents=True, exist_ok=True)
    bsp = directory / 'cof_graphics_test.bsp'
    if bsp.resolve() == source:
        raise ValueError('Refusing to replace original BSP')
    shutil.copyfile(source, bsp)
    ent = bsp.with_suffix('.ent')
    ent.write_text('\n'.join('{\n' + '\n'.join(f'"{k}" "{v}"' for k, v in e.items()) + '\n}'
                             for e in kept) + '\n', encoding='latin1')
    manifest = {'source': str(source), 'source_sha256': hashlib.sha256(data).hexdigest(),
                'fixture_bsp': str(bsp), 'bsp_identical': bsp.read_bytes() == data,
                'fixture_entity_sha256': hashlib.sha256(ent.read_bytes()).hexdigest(),
                'water_models': [e['model'] for e in water], 'water_153_bounds': list(model[:6]),
                'player_origin': [565, 210, 50], 'view_angles': [55, 90, 0],
                'world_hull1_spawn_contents': node, 'entity_count': len(kept),
                'original_entities_modified': False}
    (runtime / 'cof_graphics_fixture.json').write_text(json.dumps(manifest, indent=2) + '\n')
    print(json.dumps(manifest, indent=2))


if __name__ == '__main__':
    main()
