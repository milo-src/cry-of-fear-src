# Static native analysis toolchain

The local Windows analysis lane uses REA 6.9.0 and Ghidra 12.1.4. It imports an
immutable copy of the selected DLL; neither the original DLL nor its entry point
is executed. The game build and runtime do not depend on these tools.

## Installation and provenance

`python tools/rea_install_ghidra.py` downloads the official
[NSA Ghidra 12.1.4 release](https://github.com/NationalSecurityAgency/ghidra/releases/tag/Ghidra_12.1.4_build)
into ignored `deps/rea-tools`, verifies the published asset SHA256, then extracts
it. It leaves an existing installation in place and never changes Codex settings.

- Archive: `ghidra_12.1.4_PUBLIC_20260921.zip`.
- SHA256: `ddac49f903da9d5bac833e5cc79395098b9c33cfd3279be5f31bd00387d2d4db`.
- Digest source: official GitHub release asset API for `Ghidra_12.1.4_build`.
- Existing REA: `%LOCALAPPDATA%/REA/packages/node_modules/rea-agents`, version 6.9.0.
- Existing Node: `%LOCALAPPDATA%/REA/node-v24.22.3-win-x64/node.exe`.
- Existing JDK: `C:/Program Files/Java/jdk-26.0.1`, 64-bit full JDK.
- Ghidra declares Java >=21 without a maximum; REA's verified Java is 21.
  This local run completed with Java 26.0.1; that does not imply general JDK parity.

The installer does not install Java, Node or REA. Explicit paths can be selected
with the analysis helper's `--java-home`, `--node`, `--rea` and `--ghidra` options.

## Batch queries

From the repository root:

```powershell
python tools/rea_ghidra.py 'D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll' ram:0x100e4410 ram:0x100dad40 --output analysis/local/ghidra-keys-new
```

Use a new output directory for every capture; existing evidence is never replaced.
The helper creates a **private REA MCP subprocess**, sets provider paths in that
process environment only, inventories the required tool schemas, opens the DLL,
and queries each selector against the same Ghidra import. It exports a canonical
`evidence.json`, closes the owned session, and verifies the original file hash.
The live Codex REA server is unaffected. First analysis took about one minute for
this `hl.dll`; subsequent queries in the same session took under 100 ms in the
initial verification. Those timings are individual observations.

Other supported read-only queries can be supplied with `--requests path.json`:

```json
[
  {"name": "procedure_pseudo_code", "arguments": {"procedure": "ram:0x100e4410", "detail": "complete"}},
  {"name": "procedure_info", "arguments": {"procedure": "ram:0x100e4410"}}
]
```

Use the actual tool schemas saved by the helper for optional arguments. An
address inside a function resolves to that containing procedure. Prefer explicit
`ram:0x...` coordinates to avoid file-offset fallback. Decompiled `FUN_...` names,
types and calling conventions remain inferred, and engine API arguments can be
missing; corroborate them with the captured assembly and SDK ABI.

## Persistence boundary

[REA's Windows provider](https://github.com/morluto/rea/blob/main/docs/providers/windows-ghidra-p0.md)
supports read-only native PE analysis. It **does not support existing Ghidra
projects or checkpoint directories on Windows**. Therefore this helper retains
full Evidence, query inputs, pseudocode, tool schemas, hashes and cleanup results,
not a reusable Ghidra program database. One invocation amortizes import across its
batch; a later invocation analyzes the binary afresh. Do not set
`REA_GHIDRA_PROJECT_PATH` or claim that saved Evidence is a persistent Ghidra DB.

## Verification

On 2026-11-18, `analysis/local/ghidra-key-batch` completed six pseudocode queries,
including GetEntityAPI, UseItem, AddItem, descriptor parsing and key spawn. Both
interior addresses `0x100e468f` and `0x100e4b52` resolved to `FUN_100e4410`.
The private process exited 0, close succeeded, and the original server DLL hash
remained `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Evidence and installed tools remain ignored; helpers and this provenance document
are repository source. No original DLL is copied into the runtime.
