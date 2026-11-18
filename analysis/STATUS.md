# Recovery ledger — 2026-11-18

Update: the source-built map exploration runtime now launches via Waf-built
Xash3D/HLSDK, with no original game DLLs. See `RUNTIME.md` for observed startup,
movement, module audit and the distinction between SDK prototype behavior and
recovered original code. This does not complete the reconstruction below.

## Target identity

Local installation: `D:/Steam/steamapps/common/Cry of Fear`.
Steam manifest declares app 223710, build 5821301; `cryoffear/liblist.gam`
declares version 1.6, server `cl_dlls/hl.dll`, start map `intro`, train map `coft_1`.
These are local declarations, not proof of an unmodified or latest installation.
SHA-256 identities are recorded in `modules.json` and REA Evidence.
No PDB files were found in the installed game file inventory. Embedded PDB paths
are build-path hints only; they do not mean the symbol files are available.

## Completed observations

| Scope | Evidence | Result |
|---|---|---|
| Server export directory | `ev_d4edd1dd254aef37e75f3bdfb0bc60500eefa5ad1fbfdde88f14ec4baf91ead0` | 846 exports, complete directory coverage |
| Client export directory | `ev_32aa6f0a8ab1f5251bafc0a8f15b1c9cf3e96ed5b06e38665f112f58ff030eeb` | 593 exports, complete directory coverage |
| GameUI export directory | `ev_b2095171f77bb56899b1c58a5a46699dbcd8ebf66962bb6fecd7f5a195738aa0` | One export |
| Server imports | `ev_f1851a8224ef9c6a52db647afea4d68bdb3364166081c3a9371e62da4e8cb37e` | Imported functions and IAT RVAs retained |
| Client imports | `ev_f18deff6e6225fc8da3e1b4d37f0e4e6e9b5aea9b1987fe6065bbf143ff10012` | Imported functions and IAT RVAs retained |
| GameUI imports | `ev_be4c7803c94acfb47331c7e99ed2c97367d307a25ad3c2ae0ee085649e0b0388` | Imported functions and IAT RVAs retained |

Export names include CoF-specific entries such as `monster_sawrunner`,
`monster_booksimon`, `CSewmo::ActivateSewmo`, and `CGlock::AttachTaclight`.
Names identify useful seeds; they do not establish behavior or complete class layouts.
All three modules are PE32 i386 with preferred image base `0x10000000`.
Module-relative coordinates and hashes must be used when comparing builds.

## First recovered behavior

Address-scoped objdump fallback evidence is in `abi/capture.json`, with raw
instruction bytes, tool version, commands, and before/after target hash checks.
These observations are separate from REA's export records.

| Export / preferred VA | Observed instruction behavior |
|---|---|
| GetEntityAPI / 0x100183d0 | Reject null output or version other than 140; otherwise copy 50 DWORDs from 0x102119f8 and return 1 |
| GetEntityAPI2 / 0x10018400 | Same copy; failure writes 140 through the version pointer and returns 0; no version-pointer null check |
| GiveFnptrsToDll / 0x100b4aa0 | Copy 144 DWORDs to 0x10222f48; store second argument at 0x10223188; callee pops 8 argument bytes |

The C++ file is an analyst semantic model. Calling conventions come from stack
cleanup; names of storage, structure definitions, and C++ representation are
inferences/design choices. The callback array is captured but its 50 slots are
not yet typed or implemented. No runtime equivalence or playable build is claimed.

## Tool limitations

REA MCP 6.9.0 is connected. Ghidra, IDA and Kuna are unconfigured. A bounded
search of likely installation locations found Java 26.0.1 but no native
decompiler. This does not prove none exists elsewhere. A configured Ghidra
12.x >=12.1 (or another supported provider) is needed for sustained decompilation.
No tools were installed and no MCP configuration was changed.

REA whole-module objdump hit its provider timeout and its error exceeded the
transport limit. The complete retained error was exported locally in
`evidence/with-objdump-attempt.json`. A symbol-scoped request for
GiveFnptrsToDll completed but produced no function body
(`ev_b0f4be7bc8e10cfb020656bdd719ecdaed1197a15c1ee6801af85119840d782c`).
This is why a bounded address-scoped objdump fallback was used.

## Remaining recovery order

1. Configure an available native decompiler and persist its analysis database.
2. Type and name the server callback table, engine functions, globals and entity
   structures; recover client Initialize/HUD boundaries; verify x86 ABI.
3. Inventory BSP entity classnames/keyvalues and message registrations, then
   correlate those facts with server factories and client handlers.
4. Recover player movement, stamina, inventory, save/restore, weapons and damage.
5. Recover NPC AI, scripted sequences, puzzles, triggers and campaign transitions.
6. Recover client rendering, HUD/menu, audio, input, co-op and engine extensions.
7. Introduce a real build once enough dependencies are recovered; compare each
   subsystem with controlled runs of the original and test campaign coverage.

The initial inventory, three small ABI semantic reconstructions and an open-SDK
map-exploration launch milestone are complete. The rest of the game's behavior, engine modifications, external
library boundaries, all campaign paths and runtime compatibility remain open.
