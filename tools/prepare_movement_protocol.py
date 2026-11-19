"""Generate the reconstruction's entity delta protocol in a staged runtime only.

Original CoF's delta.lst has no ordinary entity iuser1 or animated-camera vectors.
The reconstructed server/client agree on these additional fields. This adapter is
project-owned protocol glue, not a claim that the original game sent these fields.
"""
from pathlib import Path
import hashlib
import json
import re

ROOT = Path(__file__).resolve().parents[1]
DEFAULT_SOURCE = Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear')
FIELDS = {
    'iuser1': ('DT_INTEGER', 32, '1.0'),
    'iuser4': ('DT_INTEGER', 24, '1.0'),
    **{f'vuser1[{i}]': ('DT_SIGNED | DT_FLOAT', 24, '8.0') for i in range(3)},
    **{f'vuser2[{i}]': ('DT_ANGLE', 16, '1.0') for i in range(3)},
}
SPRING_FIELDS = {f'vuser3[{i}]': ('DT_SIGNED | DT_FLOAT', 24, '128.0') for i in range(3)}
CLIENT_FIELDS = {**SPRING_FIELDS, 'fuser4': ('DT_SIGNED | DT_FLOAT', 16, '1.0')}


def adapt(text):
    match = re.search(r'(?m)^entity_state_t\s+gamedll\s+Entity_Encode\s*\{', text)
    if not match:
        raise ValueError('Missing original entity_state_t delta table')
    end = text.find('}', match.end())
    if end < 0:
        raise ValueError('Unterminated entity_state_t delta table')
    body = text[match.end():end]
    existing = set(re.findall(r'DEFINE_DELTA\(\s*([^,]+),', body))
    conflict = existing.intersection(FIELDS)
    if conflict:
        raise ValueError(f'Expected unmodified source delta table; existing adapter fields: {sorted(conflict)}')
    additions = '\n\t// CoF source reconstruction: ladder prediction gate and animated eye.\n'
    additions += ''.join(f'\tDEFINE_DELTA( {field}, {kind}, {bits}, {scale} ),\n'
                         for field, (kind, bits, scale) in FIELDS.items())
    text = text[:end] + additions + text[end:]
    match = re.search(r'(?m)^clientdata_t\s+none\s*\{', text)
    if not match:
        raise ValueError('Missing clientdata_t delta table')
    end = text.index('}', match.end())
    body = text[match.end():end]
    # Original 10-bit whole-number values clip the native 600/670 spring
    # impulses in this SDK protocol. Keep signed velocity and fractional decay.
    # fuser4 carries the optional SDK secondary-ammo type formerly colliding
    # with vuser3.z. This is our protocol adapter, not an original CoF field.
    for field, (kind, bits, scale) in CLIENT_FIELDS.items():
        pattern = r'DEFINE_DELTA\(\s*' + re.escape(field) + r'\s*,[^\n]*?\)'
        body, count = re.subn(pattern, f'DEFINE_DELTA( {field}, {kind}, {bits}, {scale} )', body)
        if count != 1:
            raise ValueError(f'Expected one client spring field: {field}')
    return text[:match.end()] + body + text[end:]


def stage(runtime, source_game=None):
    """stage(out/runtime[-rtx], installed_game_dir) -> manifest; originals read-only."""
    runtime = Path(runtime).resolve()
    if not runtime.is_relative_to((ROOT / 'out').resolve()):
        raise ValueError('Movement protocol destination must be a project out/ runtime')
    source = (Path(source_game) if source_game else DEFAULT_SOURCE).resolve() / 'delta.lst'
    target = runtime / 'cryoffear/delta.lst'
    if target.resolve() == source.resolve():
        raise ValueError('Refusing to overwrite original delta.lst')
    data = source.read_bytes()
    original_hash = hashlib.sha256(data).hexdigest()
    generated = adapt(data.decode('latin1')).encode('latin1')
    target.parent.mkdir(parents=True, exist_ok=True)
    # replace breaks any staged hard link rather than mutating its original inode.
    temporary = target.with_name('.cof-movement-delta.tmp')
    temporary.write_bytes(generated)
    temporary.replace(target)
    if hashlib.sha256(source.read_bytes()).hexdigest() != original_hash:
        raise RuntimeError('Original delta.lst changed during protocol staging')
    manifest = dict(source=str(source), source_sha256=original_hash,
                    generated_sha256=hashlib.sha256(generated).hexdigest(),
                    fields=FIELDS, table='entity_state_t', client_fields=CLIENT_FIELDS,
                    purpose='Project-owned ladder prediction, animated camera and PM spring protocol adapter')
    (runtime / 'movement-protocol.json').write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf8')
    return manifest


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('runtime', type=Path)
    parser.add_argument('--game', type=Path, default=DEFAULT_SOURCE)
    args = parser.parse_args()
    print(json.dumps(stage(args.runtime, args.game), indent=2))
