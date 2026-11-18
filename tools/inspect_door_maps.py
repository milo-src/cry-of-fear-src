"""Read-only inventory of shipped BSP door keyvalues and literal name links.

No engine/DLL is executed. Entity ordinals are zero based and byte spans refer
to the entity lump, so every selected record can be checked against its BSP.
"""
import argparse
from collections import Counter, defaultdict
import hashlib
import json
from pathlib import Path
import re
import struct

ROOT = Path(__file__).resolve().parents[1]
CLASSES = {"inter_door", "inter_door_exit", "inter_door_disable"}
REFERENCE_KEYS = {"target", "killtarget", "propertarget", "useunlock", "master", "movewith", "message"}
TOKEN = re.compile(rb'\s+|//[^\r\n]*|"[^"]*"|[{}]|[^\s{}"]+')


def parse_entities(lump):
    """Parse quoted/unquoted GoldSrc tokens; retain duplicate key/value pairs.

    Backslashes remain literal, as in GoldSrc COM_Parse. Latin-1 is a reversible
    byte mapping, not an assertion about the install's localized text encoding.
    """
    data = lump.rstrip(b"\0")
    matches = list(TOKEN.finditer(data))
    previous_end = 0
    for match in matches:
        if match.start() != previous_end:
            raise ValueError(f"Unparsed token bytes at {previous_end}")
        previous_end = match.end()
    if previous_end != len(data):
        raise ValueError(f"Unparsed trailing bytes at {previous_end}")
    tokens = [m for m in matches
              if not m.group().isspace() and not m.group().startswith(b"//")]
    entities = []
    cursor = 0
    while cursor < len(tokens):
        start = tokens[cursor].start()
        if tokens[cursor].group() != b"{":
            raise ValueError(f"Expected entity opening brace at {start}")
        cursor += 1
        pairs = []
        while cursor < len(tokens) and tokens[cursor].group() != b"}":
            if cursor + 1 >= len(tokens):
                raise ValueError("Missing entity value")
            pair = []
            for token in tokens[cursor:cursor + 2]:
                value = token.group()
                if value in (b"{", b"}"):
                    raise ValueError(f"Unexpected brace at {token.start()}")
                pair.append((value[1:-1] if value.startswith(b'"') else value).decode("latin1"))
            pairs.append(pair)
            cursor += 2
        if cursor == len(tokens):
            raise ValueError("Missing entity closing brace")
        entities.append({"ordinal": len(entities), "lump_byte_span": [start, tokens[cursor].end()],
                         "keyvalues": dict(pairs), "pairs": pairs})
        cursor += 1
    return entities


def compact(entity):
    result = {key: value for key, value in entity.items() if key != "pairs"}
    if len(entity["pairs"]) != len(entity["keyvalues"]):
        result["duplicate_preserving_pairs"] = entity["pairs"]
    return result


def inspect(path, profiles, totals):
    data = path.read_bytes()
    if len(data) < 124:
        raise ValueError(f"Short BSP header: {path}")
    version, offset, length = struct.unpack_from("<iii", data)
    if version != 30 or offset < 124 or length < 0 or offset + length > len(data):
        raise ValueError(f"Unsupported BSP header/lump: {path}")
    lump = data[offset:offset + length]
    entities = parse_entities(lump)
    selected = [e for e in entities if e["keyvalues"].get("classname") in CLASSES]
    selected_ids = {e["ordinal"] for e in selected}
    named = defaultdict(list)
    for entity in entities:
        name = entity["keyvalues"].get("targetname")
        if name:
            named[name].append(entity["ordinal"])
    links = []
    linked_ids = set()
    for entity in entities:
        kv = entity["keyvalues"]
        for key, value in entity["pairs"]:
            kind = None
            name = value
            if key in REFERENCE_KEYS:
                kind = "literal_value_equals_targetname"
            elif kv.get("classname") == "multi_manager" and key.split("#")[0] in named:
                kind = "multi_manager_key_equals_targetname"
                name = key.split("#")[0]
            if not kind:
                continue
            destinations = named.get(name, [])
            if entity["ordinal"] in selected_ids or selected_ids.intersection(destinations):
                links.append({"from": entity["ordinal"], "key": key, "value": value,
                              "to": destinations, "evidence_kind": kind})
                linked_ids.update(destinations)
                linked_ids.add(entity["ordinal"])
    inventory_candidates = []
    for door in selected:
        kv = door["keyvalues"]
        classname = kv["classname"]
        totals[classname] += 1
        for key, value in door["pairs"]:
            profiles[classname][key][value] += 1
        lock = kv.get("lockedby")
        if lock:
            candidates = [e["ordinal"] for e in entities
                          if e["keyvalues"].get("classname") == "item_key"
                          and Path(e["keyvalues"].get("message", "").replace("\\", "/")).stem == lock]
            if candidates:
                inventory_candidates.append({"door": door["ordinal"], "lockedby": lock,
                                             "item_key_entities": candidates,
                                             "evidence_kind": "message_path_stem_match_only"})
                linked_ids.update(candidates)
    return {
        "map": path.stem, "file": path.name, "bytes": len(data),
        "sha256": hashlib.sha256(data).hexdigest(), "bsp_version": version,
        "entity_lump": {"offset": offset, "length": length, "sha256": hashlib.sha256(lump).hexdigest()},
        "entity_count": len(entities),
        "class_counts": dict(sorted(Counter(e["keyvalues"]["classname"] for e in selected).items())),
        "door_entities": [compact(e) for e in selected],
        "direct_name_links": links,
        "inventory_key_candidates": inventory_candidates,
        "linked_other_entities": [compact(entities[i]) for i in sorted(linked_ids - selected_ids)],
    }


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--maps", type=Path, default=Path("D:/Steam/steamapps/common/Cry of Fear/cryoffear/maps"))
    parser.add_argument("--output", type=Path, default=ROOT / "analysis/doors/maps.json")
    args = parser.parse_args()
    paths = sorted(args.maps.glob("*.bsp"), key=lambda p: p.name.lower())
    if not paths:
        raise RuntimeError(f"No BSP maps found under {args.maps}")
    totals = Counter()
    profiles = defaultdict(lambda: defaultdict(Counter))
    maps = [inspect(path, profiles, totals) for path in paths]
    profile_summary = {}
    for classname, keys in sorted(profiles.items()):
        profile_summary[classname] = {}
        for key, values in sorted(keys.items()):
            profile_summary[classname][key] = {
                "occurrences": sum(values.values()), "distinct_values": len(values),
                "value_counts": dict(sorted(values.items())) if len(values) <= 32 else None,
                "examples": [value for value, count in values.most_common(8)],
            }
    report = {
        "schema": 1, "source_directory": str(args.maps.resolve()),
        "method": "Static BSP v30 entity lump parsing; SHA-256 of every BSP and entity lump; no runtime execution.",
        "reproduce": "python tools/inspect_door_maps.py --maps <installed-cryoffear/maps>",
        "limitations": [
            "This local installation contains localized entity message bytes. Latin-1 preserves original bytes; it is not the intended display encoding.",
            "Entity keyvalues and exact name matches establish map data only, not DLL behavior, field offsets, default values or timing.",
            "Missing keys are not assumed to be zero or false. No spawnflag meaning is inferred.",
            "Direct links are limited to named reference-key candidates and multi_manager key names. Other custom reference schemes and transitive trigger graphs are not resolved.",
            "Inventory candidate links use item_key message path basename equality only; matching names do not prove inventory or unlocking behavior.",
            "No .ent overlays, external inventory item definitions or archived maps are read. No BSP is modified.",
            "All enumerated BSPs must parse; the tool fails on unsupported versions or malformed entities rather than silently skipping files.",
        ],
        "map_count": len(maps), "maps_with_door_classes": sum(bool(m["door_entities"]) for m in maps),
        "class_counts": dict(sorted(totals.items())), "key_profiles": profile_summary,
        "bounded_recovery_candidates": [
            {"map": "c_sdkmap1", "reason": "Prototype focus: inspect recorded class counts, local destinations, lockedby strings and inventory basename matches before choosing test cases."},
            {"class": "inter_door_disable", "reason": "Use observed frags value distribution to choose tests. Use binary evidence for the disable state operation; map data alone cannot establish its polarity."},
            {"key": "useunlock", "reason": "Preserve observed string values until binary analysis establishes their use; do not assume a numeric boolean."},
        ],
        "maps": maps,
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2, ensure_ascii=True) + "\n", encoding="utf-8")
    print(json.dumps({"output": str(args.output), "maps": len(maps), "class_counts": totals}, ensure_ascii=True))


if __name__ == "__main__":
    main()
