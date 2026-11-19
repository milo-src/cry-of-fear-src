// rea decompile_all
// name: FUN_10035df0
// address: 0x10035df0
// body: available
// range: 0x10035df0-0x10035f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035df0(CDualWeapon param_1)

{
  int iVar1;
  uint uVar2;
  CDualWeapon *in_ECX;
  float fVar3;
  
  in_ECX[0x1fc] = param_1;
  if (*(int *)(in_ECX + 0x128) != 0) {
    return;
  }
  if (DAT_102119d0 != 0) {
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x160);
  uVar2 = *(uint *)(*(int *)(iVar1 + 4) + 0x1a8);
  if ((uVar2 & 0x40000) != 0) {
    return;
  }
  if ((uVar2 & 0x200) == 0) {
    return;
  }
  if (param_1 == (CDualWeapon)0x0) {
    if ((*(uint *)(iVar1 + 0x22b0) & 0x800) == 0) {
      return;
    }
    fVar3 = *DAT_10223188;
    if (fVar3 < *(float *)(in_ECX + 0x1d0)) {
      return;
    }
    if (*(int *)(iVar1 + 0x5e0) < 1) goto LAB_10035ee4;
  }
  else {
    if ((*(uint *)(iVar1 + 0x22b0) & 1) == 0) {
      return;
    }
    fVar3 = *DAT_10223188;
    if (fVar3 < *(float *)(in_ECX + 0x1cc)) {
      return;
    }
    if (*(int *)(iVar1 + 0x5dc) < 1) {
      if (fVar3 <= _DAT_102119ac) {
        return;
      }
      (**(code **)(*(int *)in_ECX + 400))();
      _DAT_102119ac = *DAT_10223188 + 0.25;
      return;
    }
  }
  if (*(int *)(*(int *)(iVar1 + 4) + 0x1c4) != 3) {
    *(undefined4 *)(in_ECX + 0x1f8) = 0;
    CDualWeapon::VP70Shoot(in_ECX);
    return;
  }
LAB_10035ee4:
  if (fVar3 < *(float *)(in_ECX + 0x1b0) || fVar3 == *(float *)(in_ECX + 0x1b0)) {
    return;
  }
  (**(code **)(*(int *)in_ECX + 400))();
  *(float *)(in_ECX + 0x1b0) = *DAT_10223188 + 0.8;
  return;
}

