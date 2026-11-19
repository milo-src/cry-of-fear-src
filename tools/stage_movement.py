"""Stage the native port's gameplay protocol and migrate its old speed default.

Only out/ runtimes are writable here; installed game resources stay untouched.
"""
from pathlib import Path
import re
import shutil

ROOT = Path(__file__).resolve().parents[1]


def stage(runtime, source_game=None):
    runtime = Path(runtime).resolve()
    if not runtime.is_relative_to((ROOT / 'out').resolve()):
        raise ValueError('Gameplay deployment must stay under out/')
    game = runtime / 'cryoffear'
    from prepare_movement_protocol import stage as stage_protocol
    stage_protocol(runtime, source_game)
    shutil.copy2(ROOT / 'runtime/autoexec.cfg', game / 'autoexec.cfg')
    marker = game / '.cof-movement-v2'
    config = game / 'config.cfg'
    if not marker.exists() and config.exists():
        text = config.read_text(encoding='latin1')
        # Only replace the previous reconstruction's stock forward speed.
        # Retain independently changed speeds, key bindings, graphics and audio.
        text = re.sub(r'(?m)^cl_forwardspeed\s+"?(?:200|230)"?\s*$', 'cl_forwardspeed "300"', text)
        temporary = config.with_name('.cof-config.tmp')
        temporary.write_text(text, encoding='latin1')
        temporary.replace(config)
        marker.write_text('CoF shipped config forward speed 300; percent movement\n')
    dodge_marker = game / '.cof-movement-alt-v1'
    if not dodge_marker.exists() and config.exists():
        text = config.read_text(encoding='latin1')
        # Restore the requested original Alt dodge binding in existing runtimes.
        binding = r'(?im)^bind\s+"?ALT"?\s+[^\r\n]*'
        if re.search(binding, text):
            text = re.sub(binding, 'bind "ALT" "+dodge"', text)
        else:
            text = text.rstrip() + '\nbind "ALT" "+dodge"\n'
        temporary = config.with_name('.cof-config.tmp')
        temporary.write_text(text, encoding='latin1')
        temporary.replace(config)
        dodge_marker.write_text('Original Alt +dodge binding restored\n')


if __name__ == '__main__':
    import argparse
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--runtime', type=Path, required=True)
    stage(parser.parse_args().runtime)
