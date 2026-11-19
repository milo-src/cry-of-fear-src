// rea decompile_all
// name: FUN_10100da0
// address: 0x10100da0
// body: available
// range: 0x10100da0-0x10101078 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10100da0(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  undefined1 local_90 [12];
  undefined1 local_84 [72];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  
  local_8 = in_ECX;
  if ((param_1 == 0) && (iVar2 = FUN_10017780(), iVar2 == 0)) {
    return 1;
  }
  FUN_100d2bf0();
  FUN_100d2bf0();
  FUN_100d2bf0();
  iVar2 = FUN_10017780();
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = (int *)FUN_100177a0();
  iVar2 = *(int *)(in_ECX + 4);
  pfVar4 = (float *)(**(code **)(*piVar3 + 0xfc))(local_84);
  local_14 = pfVar4[1] - *(float *)(iVar2 + 0xc);
  local_10 = pfVar4[2] - *(float *)(iVar2 + 0x10);
  local_18 = *pfVar4 - *(float *)(iVar2 + 8);
  uVar5 = FUN_1011a8d0(local_90,&local_18);
  FUN_10119320(uVar5);
  iVar2 = *(int *)(in_ECX + 4);
  pfVar4 = (float *)(DAT_10223188 + 0x40);
  fVar1 = *(float *)(iVar2 + 0xf4) * 1.5;
  local_1c = *(float *)(iVar2 + 0x10) - *(float *)(DAT_10223188 + 0x48) * fVar1;
  local_24 = *(float *)(iVar2 + 8) - *pfVar4 * fVar1;
  local_20 = *(float *)(iVar2 + 0xc) - *(float *)(DAT_10223188 + 0x44) * fVar1;
  fVar1 = *(float *)(iVar2 + 0xf4) * 1.5;
  local_30 = *pfVar4 * fVar1 + *(float *)(iVar2 + 8);
  local_2c = fVar1 * *(float *)(DAT_10223188 + 0x44) + *(float *)(iVar2 + 0xc);
  local_28 = fVar1 * *(float *)(DAT_10223188 + 0x48) + *(float *)(iVar2 + 0x10);
  local_3c = *pfVar4 * -1.0;
  local_38 = *(float *)(DAT_10223188 + 0x44) * -1.0;
  local_34 = *(float *)(DAT_10223188 + 0x48) * -1.0;
  FUN_100d2c00(pfVar4,&local_24);
  FUN_100d2c00(&local_3c,&local_30);
  FUN_100d2c00(DAT_10223188 + 0x28,*(int *)(in_ECX + 4) + 8);
  iVar2 = FUN_10017790();
  local_c = in_ECX;
  if (iVar2 != 0) {
    local_c = iVar2;
  }
  uVar7 = 0;
  while( true ) {
    iVar2 = local_c;
    if (uVar7 < 4) {
      iVar2 = FUN_10017790();
    }
    if ((((iVar2 != 0) && (iVar2 != local_8)) &&
        (iVar6 = FUN_100d2c50(*(int *)(iVar2 + 4) + 8), iVar6 != 0)) &&
       ((iVar6 = FUN_100d2c50(*(int *)(iVar2 + 4) + 8), iVar6 != 0 &&
        (iVar2 = FUN_100d2c50(*(int *)(iVar2 + 4) + 8), iVar2 != 0)))) break;
    uVar7 = uVar7 + 1;
    if (4 < (int)uVar7) {
      if (((param_1 != 0) &&
          (iVar2 = (*DAT_10222f8c)(*(undefined4 *)(*(int *)(local_8 + 4) + 0x20c)), iVar2 != 0)) &&
         (iVar6 = (*DAT_10223060)(iVar2), iVar6 != 0)) {
        iVar2 = iVar2 + 0x88;
        iVar6 = FUN_100d2c50(iVar2);
        if (((iVar6 != 0) && (iVar6 = FUN_100d2c50(iVar2), iVar6 != 0)) &&
           (iVar2 = FUN_100d2c50(iVar2), iVar2 != 0)) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

