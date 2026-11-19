// rea decompile_all
// name: FUN_100b5370
// address: 0x100b5370
// body: available
// range: 0x100b5370-0x100b5515 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5370(int param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  float fVar5;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(param_1 + 4);
  if (((*(int *)(iVar1 + 0x174) == 0) && (*(float *)(iVar1 + 0x1c0) < 100.0)) &&
     (*(int *)(iVar1 + 0x16c) < 0)) {
    fVar5 = *(float *)(*(int *)(in_ECX + 4) + 0x1c0);
    fVar2 = _DAT_10226874;
    if (fVar5 != 0.0) {
      fVar2 = fVar5;
    }
    *(float *)(iVar1 + 0x1c0) = *(float *)(iVar1 + 0x1c0) + fVar2;
    fVar5 = *(float *)(*(int *)(param_1 + 4) + 0x1c0);
    if (100.0 <= fVar5) {
      fVar5 = 100.0;
    }
    *(float *)(*(int *)(param_1 + 4) + 0x1c0) = fVar5;
    iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1ec);
    if (iVar1 == 0) {
      pcVar3 = "items/gunpickup2.wav";
    }
    else {
      pcVar3 = (char *)(*(int *)(DAT_10223188 + 0x98) + iVar1);
    }
    FUN_100fc9f0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),3,pcVar3,0x3f800000,0x3f4ccccd,0,100
                );
    (*DAT_10223000)(1,DAT_1022650c,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + **(int **)(in_ECX + 4));
    (*DAT_10223004)();
    iVar1 = (int)(*(float *)(*(int *)(param_1 + 4) + 0x1c0) * 100.0 * 0.01 + 0.5) / 5;
    iVar4 = iVar1 + -1;
    if (iVar1 < 1) {
      iVar4 = iVar1;
    }
    FUN_1001f160(local_48,"!HEV_%1dP",iVar4);
    FUN_100f3a40(local_48,0,0x1e);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

