# Entity save dispatch and map key parsing

Seven new saved-C entries; original server SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Static C/ASM/PE evidence only, no DLL execution. `capture.py` retains
`evidence.json`, ten bounded assembly ranges, source hashes, native strings,
KeyValue switch tables and all 50 EntityAPI slots.

Related contracts: [serializer](../server-serializer/contract.md),
[server dispatch](../server-dispatch/contract.md),
[parent tree](../server-parent-tree/contract.md),
[global restore](../server-queue-a/contract-global.md).

## DispatchSave10016ab0: gates and record metadata

EntityAPI slot7 binds this cdecl `(edict, saveData)` callback. NULL edict,
NULL private object at edict+7c, or NULL saveData returns immediately.
The entity table pointer is data+28; current index is data+1c; each record
is 18 hex bytes. The code checks `record.edict(+4) == edict`. Mismatch prints
severity4 diagnostic but **continues**. No local table/index bounds check.

Private virtual+40 (capabilities) returning a signed-negative value cancels
save. Otherwise, when classname is nonzero and the search helper1013f5f0
returns non-NULL for `(classname, "monster_")`, an additional gate applies.
The helper has substring-search behavior in saved scalar C, not a prefix-only
test; its entire optimized CRT implementation is still a separate pending
entry. The gate is bypassed for exact, case-sensitive `monster_generic`.
For other matches, virtual+bc must return nonzero and private BYTE+9 must be
zero. BASE native descriptors call +9 `b_Frozen`; this particular consumer
reads **one byte**, independently of serializer type12's DWORD size.

The exact comparison fetches classname again through pev.containingEntity+20c
and edict+80. Missing containingEntity has no safe fallback in this branch.
Virtual+bc is left as an unresolved per-class predicate; its original method
name is not established by this call alone.

For movetype7, the live object is changed before serialization:

```text
delta = globalTime - pev.ltime(+100)
pev.ltime = oldLtime + delta
pev.nextthink(+104) += delta
private.cachedNextThink(+5c) = pev.nextthink
private.desiredNextThink(+58) += delta
```

These are native scalar floating-point operations; `old+(time-old)` is not
replaced by direct assignment when reasoning about exceptional floats or
rounding. There is no rollback after Save or restoration of the old times.

Then record+8 becomes data.used(+8), record+14 becomes classname string_t,
and a local one-DWORD writer binds saveData via10116020. Object virtual+38
receives its address. The returned EAX is ignored. Record+c is assigned
`data.used - record+8` after the call, regardless of reported save success.
No record saved-ID assignment occurs here. Finally10116080 is called for
the local writer; SEH scaffolding does not establish transactional behavior.

## Engine field wrappers and empty cleanup

| Entry | EntityAPI slot | Contract |
|---|---:|---|
| 10017030 | 10 | SaveWriteFields(data, blockName, base, descriptors, count) |
| 100170a0 | 11 | SaveReadFields(data, blockName, base, descriptors, count) |
| 10116080 | — | literal `RET 0`; no memory writes or release |

The writer wrapper binds its local context, then calls1011adc0 with
`("SWF", blockName, base, descriptors, count)`. SWF is the owner diagnostic
label, not a block or field name. The reader wrapper creates a three-DWORD
context: data, overlayFlag=0, precacheFlag=1, then calls10117010 with
`(blockName, base, descriptors, count)`. This means ordinary field restore
clears destination fields normally and permits model/sound precache.

The wrappers are void callbacks in the verified table ABI. Ordinary generated
instructions leave the core result in EAX through no-op cleanup; that incidental
register preservation is not a separate validated error-reporting API.
There is no allocation or ownership transfer in BindData/10116080. Cleanup
does not clear reader flags, saveData or its buffers. Engine container
allocation, destruction and save-ID production remain separate questions.

## EntvarsKeyValue10116570

Signature cdecl `(entvars, KeyValueData)`. The previous dispatch10016940
calls this before object KeyValue. Native table1021aae0 has102 descriptors
of16 bytes; all names/types/offsets were decoded in the serializer package.
Comparison uses1017bcbb (`__stricmp` label), hence case-insensitive names.
On no match, destination and `kv.handled+0c` are unchanged. First matching
descriptor wins. Descriptor count/flags are not consulted by this parser.

| Native type | Action on first match |
|---|---|
| 0,15 | conversion1016f5ec, x87 result narrowed to float, write at offset |
| 1,16,17 | engine AllocString10223054(value), store string_t |
| 7,8 | StringToVector1011a6c0(destination, value) |
| 10 | atoi1016b55e(value), store DWORD |
| other, including12 | severity4 `Bad field in entity!!`, no value store |

All matched branches, including unsupported type, set handled=1. Thus an
unsupported matched key is consumed and does not fall through to object
KeyValue. String/model/sound types here only allocate a string; no precache.
Type15 parses the literal value without save-time adjustment; type8 has no
landmark transform. Do not reuse serializer rules merely because type IDs
are shared. The two raw switch tables verify all18 mappings.

## Vector and duplicate-key parsers

**1011a6c0(destination, source)** first copies the entire NUL-terminated byte
string to a128-byte stack region without a length guard. It calls narrow
numeric conversion1016f5ec, storing one float at a time, at most three.
Ghidra's wchar_t types do not describe the native byte loads/increments.

Its scanner advances exactly to the byte after the **first ASCII space**, not
after a whitespace run or after the numeric conversion's end pointer. Repeated
spaces and leading spaces can consequently repeat a value in successive
components; tabs alone do not separate components for this scanner. When
NUL is reached, the remaining components are written as raw zero DWORDs.
For ordinary decimal conversion, `"1  2"` follows `(1,2,2)`, and
`"1\t2"` follows `(1,0,0)`; these are deductions from the scanner, not observed
game tests. Full CRT locale/invalid-number behavior is not established here.
Stack-cookie validation is after the work and is not a capacity check.

**1011a760(source, destination)** copies bytes until the first `#` or NUL and
always appends NUL. Empty input produces an empty string. Neither pointer nor
capacity is checked. This is the suffix-removal helper used for repeated map
keys by group/multi_alias; it does not allocate, case-fold, parse a suffix or
copy the hash itself. Generic overlapping-buffer safety is not guaranteed.

## Still open

Save-container ownership and header/token dictionary serialization; entity
table IDs and upstream bounds; all virtual+bc implementations; complete CRT
numeric/search paths and locale state; actual map/runtime reachability of
abnormal inputs. These boundaries are not cleared by adding these seven
local contracts to the reference.
