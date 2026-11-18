"""Copy known SDK geometry under a coop name, without its opening cinematic."""
from pathlib import Path
import struct

root = Path(__file__).resolve().parents[1]
maps = root / 'out/runtime/cryoffear/maps'
output = maps / 'cof_chat_fixture.bsp'
if output.exists():
    raise FileExistsError(output)
data = bytearray((maps / 'c_sdkmap1.bsp').read_bytes())
offset, size = struct.unpack_from('<ii', data, 4)
entities = bytes(data[offset:offset + size])
anchor = b'"target" "multiintro"'
if entities.count(anchor) != 1:
    raise ValueError('Unexpected SDK map intro trigger')
entities = entities.replace(anchor, b'"target" "chat_fixture_no_intro"')
struct.pack_into('<ii', data, 4, len(data), len(entities))
data.extend(entities)
output.write_bytes(data)
