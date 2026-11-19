// rea decompile_all
// name: FUN_10070c30
// address: 0x10070c30
// body: available
// range: 0x10070c30-0x10070eea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10070c30(int param_1,undefined4 param_2,float param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  double dVar5;
  float fVar6;
  float local_2c;
  float local_28;
  float local_20;
  
  iVar3 = *(int *)(in_ECX + 4);
  if (((*(byte *)(iVar3 + 0x118) & 0x80) == 0) &&
     ((*(float *)(iVar3 + 0x168) == 0.0 || (*(int *)(in_ECX + 0x380) != 3)))) {
    local_28 = 1.0;
    if (param_4 == 2) {
      local_20 = *(float *)(iVar3 + 8) -
                 (*(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0xc4)) * 0.5;
      local_2c = *(float *)(iVar3 + 0xc) -
                 (*(float *)(param_1 + 0xd4) + *(float *)(param_1 + 200)) * 0.5;
      fVar6 = *(float *)(iVar3 + 0x10) -
              (*(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xcc)) * 0.5;
      dVar5 = (double)(local_2c * local_2c + local_20 * local_20 + fVar6 * fVar6);
      if (dVar5 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      if ((float)dVar5 == 0.0) {
        local_20 = 0.0;
        local_2c = 0.0;
      }
      else {
        local_28 = 1.0 / (float)dVar5;
        local_20 = local_20 * local_28;
        local_2c = local_2c * local_28;
        local_28 = fVar6 * local_28;
      }
      fVar4 = (float10)FUN_10087da0(param_3);
      iVar3 = *(int *)(in_ECX + 4);
      fVar6 = (float)fVar4;
      param_3 = param_3 * 0.3;
      *(ulonglong *)(iVar3 + 0x20) =
           CONCAT44(local_2c * fVar6 + *(float *)(iVar3 + 0x24),
                    local_20 * fVar6 + *(float *)(iVar3 + 0x20));
      *(float *)(iVar3 + 0x28) = local_28 * fVar6 + *(float *)(iVar3 + 0x28);
      iVar3 = *(int *)(in_ECX + 4);
    }
    fVar6 = param_3;
    if (*(float *)(iVar3 + 0x168) != 0.0) {
      if (*(int *)(in_ECX + 0x36c) <= *(int *)(in_ECX + 0x368)) {
        return 0;
      }
      piVar1 = (int *)FUN_10118590(0,*(int *)(iVar3 + 0x1d8) + *(int *)(DAT_10223188 + 0x98));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 100))(param_1,param_2,param_3,param_4);
      }
      fVar6 = 0.0;
      iVar3 = (int)((float)*(int *)(in_ECX + 0x368) + param_3);
      *(int *)(in_ECX + 0x368) = iVar3;
      *(float *)(*(int *)(in_ECX + 4) + 0x164) = (float)(*(int *)(in_ECX + 0x36c) - iVar3);
      if (*(float *)(*(int *)(in_ECX + 4) + 0x164) <= 0.0) {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x164) = 0x3f800000;
      }
    }
    uVar2 = FUN_1008bc50(param_1,param_2,fVar6,param_4);
    return uVar2;
  }
  return 0;
}

