// rea decompile_all
// name: FUN_10040f50
// address: 0x10040f50
// body: available
// range: 0x10040f50-0x10041096 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040f50(void)

{
  float fVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_10119240(*(int *)(in_ECX + 4) + 0x50);
  fVar2 = *(float *)(in_ECX + 0x3b0);
  fVar4 = *(float *)(in_ECX + 0x3ac);
  fVar1 = *(float *)(in_ECX + 0x3b4);
  fVar5 = *(float *)(DAT_10223188 + 0x2c) * fVar2 + *(float *)(DAT_10223188 + 0x28) * fVar4 +
          *(float *)(DAT_10223188 + 0x30) * fVar1;
  fVar3 = ABS(fVar5);
  fVar6 = *(float *)(DAT_10223188 + 0x44) * fVar2 + fVar4 * *(float *)(DAT_10223188 + 0x40) +
          *(float *)(DAT_10223188 + 0x48) * fVar1;
  fVar4 = *(float *)(DAT_10223188 + 0x38) * fVar2 + fVar4 * *(float *)(DAT_10223188 + 0x34) +
          *(float *)(DAT_10223188 + 0x3c) * fVar1;
  fVar2 = ABS(fVar6);
  if ((fVar2 < fVar3) && (ABS(fVar4) < fVar3)) {
    if (0.0 < fVar5) {
      FUN_1000e9b0("forward");
      return;
    }
    FUN_1000e9b0("backward");
    return;
  }
  if (ABS(fVar4) < fVar2) {
    if (0.0 < fVar6) {
      FUN_1000e9b0("right");
      return;
    }
    FUN_1000e9b0(&DAT_101afe54);
    return;
  }
  if (0.0 < fVar4) {
    FUN_1000e9b0(&DAT_101afe5c);
    return;
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x174) != 0) {
    FUN_1000e9b0(&DAT_101afe60);
    return;
  }
  FUN_1000e9b0(&DAT_101afe68);
  return;
}

