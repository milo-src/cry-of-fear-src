// rea decompile_all
// name: FUN_100adbf0
// address: 0x100adbf0
// body: available
// range: 0x100adbf0-0x100ade5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100adbf0(int param_1,int param_2,float param_3,uint param_4)

{
  int iVar1;
  CBreakable *in_ECX;
  double dVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float local_c;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (param_2 == param_1) {
    local_20 = *(float *)(param_1 + 8) - (*(float *)(iVar1 + 0xf4) * 0.5 + *(float *)(iVar1 + 0xc4))
    ;
    local_1c = *(float *)(param_1 + 0xc) -
               (*(float *)(iVar1 + 0xf8) * 0.5 + *(float *)(iVar1 + 200));
    local_18 = *(float *)(param_1 + 0x10) -
               (*(float *)(iVar1 + 0xfc) * 0.5 + *(float *)(iVar1 + 0xcc));
    if ((((*(byte *)(param_2 + 0x1a8) & 8) != 0) && ((*(uint *)(iVar1 + 0x1a4) & 0x100) != 0)) &&
       ((char)param_4 < '\0')) {
      param_3 = *(float *)(iVar1 + 0x164);
    }
  }
  else {
    local_1c = *(float *)(param_1 + 0xc) -
               (*(float *)(iVar1 + 0xf8) * 0.5 + *(float *)(iVar1 + 200));
    local_18 = *(float *)(param_1 + 0x10) -
               (*(float *)(iVar1 + 0xfc) * 0.5 + *(float *)(iVar1 + 0xcc));
    local_20 = *(float *)(param_1 + 8) - (*(float *)(iVar1 + 0xf4) * 0.5 + *(float *)(iVar1 + 0xc4))
    ;
  }
  iVar1 = FUN_100acb80();
  if (iVar1 != 0) {
    if ((char)param_4 < '\0') {
      param_3 = param_3 + param_3;
    }
    local_24 = param_3;
    if ((param_4 & 0x20000) != 0) {
      local_24 = param_3 * 0.1;
    }
    dVar2 = (double)(local_1c * local_1c + local_20 * local_20 + local_18 * local_18);
    if (dVar2 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar2 = SQRT(dVar2);
    }
    if ((float)dVar2 == 0.0) {
      local_14 = 0.0;
      fStack_10 = 0.0;
      local_c = 1.0;
    }
    else {
      local_c = 1.0 / (float)dVar2;
      local_14 = local_c * local_20;
      fStack_10 = local_1c * local_c;
      local_c = local_18 * local_c;
    }
    _DAT_10222f28 = CONCAT44(fStack_10,local_14);
    DAT_10222f30 = local_c;
    *(float *)(*(int *)(in_ECX + 4) + 0x164) = *(float *)(*(int *)(in_ECX + 4) + 0x164) - local_24;
    if (0.0 < *(float *)(*(int *)(in_ECX + 4) + 0x164)) {
      FUN_100ac290();
      return 1;
    }
    CBreakable::Die(in_ECX);
  }
  return 0;
}

