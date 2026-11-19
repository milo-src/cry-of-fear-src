// rea decompile_all
// name: FUN_100167d0
// address: 0x100167d0
// body: available
// range: 0x100167d0-0x10016931 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100167d0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(param_1 + 0x7c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar4 = piVar2[1];
  *(ulonglong *)(iVar4 + 0xc4) = CONCAT44(*(float *)(iVar4 + 0xc) - 1.0,*(float *)(iVar4 + 8) - 1.0)
  ;
  *(float *)(iVar4 + 0xcc) = *(float *)(iVar4 + 0x10) - 1.0;
  iVar4 = piVar2[1];
  *(ulonglong *)(iVar4 + 0xd0) = CONCAT44(*(float *)(iVar4 + 0xc) + 1.0,*(float *)(iVar4 + 8) + 1.0)
  ;
  *(float *)(iVar4 + 0xd8) = *(float *)(iVar4 + 0x10) + 1.0;
  (**(code **)(*piVar2 + 0x2c))();
  iVar4 = *(int *)(param_1 + 0x7c);
  if (iVar4 == 0) {
    return 0;
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar3 = (**(code **)(*DAT_10222ee4 + 8))(iVar4), iVar3 == 0))
  {
    return 0xffffffff;
  }
  if ((*(uint *)(*(int *)(iVar4 + 4) + 0x1a8) & 0x40000000) != 0) {
    return 0xffffffff;
  }
  if (DAT_10222efc == 1) {
    bVar1 = *(byte *)(iVar4 + 0x60);
LAB_100168a6:
    bVar1 = bVar1 & (byte)DAT_10222efc;
  }
  else {
    if (DAT_10222efc == 2) {
      bVar1 = *(byte *)(iVar4 + 0x60);
      goto LAB_100168a6;
    }
    if (DAT_10222efc != 3) goto LAB_100168c6;
    bVar1 = *(byte *)(iVar4 + 0x60) & 4;
  }
  if (bVar1 != 0) {
    return 0xffffffff;
  }
LAB_100168c6:
  iVar3 = *(int *)(*(int *)(iVar4 + 4) + 4);
  if (iVar3 != 0) {
    iVar3 = FUN_101206e0(iVar3);
    if (iVar3 == 0) {
      FUN_10120670(*(undefined4 *)(*(int *)(iVar4 + 4) + 4),*(undefined4 *)(DAT_10223188 + 0xc),1);
      return 0;
    }
    if (*(int *)(iVar3 + 0x60) == 2) {
      return 0xffffffff;
    }
    iVar4 = FUN_1000aba0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),iVar3 + 0x40);
    if (iVar4 == 0) {
      FUN_10017e20();
    }
  }
  return 0;
}

