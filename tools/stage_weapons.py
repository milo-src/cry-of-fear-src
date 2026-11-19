"""Install missing arsenal controls only in the reconstructed runtime."""
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]


def stage(runtime):
    runtime = Path(runtime).resolve()
    if not runtime.is_relative_to((ROOT / 'out').resolve()):
        raise ValueError('Weapon deployment must stay under out/')
    game = runtime / 'cryoffear'
    marker = game / '.cof-weapons-controls-v3'
    config = game / 'config.cfg'
    if marker.exists() or not config.exists(): return
    text = config.read_text(encoding='latin1')
    for key, command in [('MOUSE1','+attack'),('MOUSE2','+attack2'),('MOUSE3','+attack3'),('r','+reload'),
                         ('z','weapontoggle'),('1','quicksel 1'),('2','quicksel 2'),('3','quicksel 3')]:
        if not re.search(r'(?im)^bind\s+"?' + key + r'"?\s+', text):
            text = text.rstrip() + f'\nbind "{key}" "{command}"\n'
    for slot in range(1,4):
        # Migrate only our known prototype slot binding; preserve personal bindings.
        text = re.sub(r'(?im)^bind\s+"?'+str(slot)+r'"?\s+"?cof_inv'+str(slot)+r'"?\s*$',
                      f'bind "{slot}" "quicksel {slot}"', text)
    temp = config.with_name('.cof-weapons-config.tmp')
    temp.write_text(text, encoding='latin1')
    temp.replace(config)
    marker.write_text('Missing weapon controls installed; existing bindings preserved\n')
