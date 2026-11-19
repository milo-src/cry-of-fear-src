// rea decompile_all
// name: FUN_100bdf80
// address: 0x100bdf80
// body: available
// range: 0x100bdf80-0x100be597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_100bdf80(float *param_1,float *param_2,float param_3,undefined4 param_4,undefined8 *param_5)

{
  float fVar1;
  int iVar2;
  int *in_ECX;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
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
  undefined8 local_14;
  int local_c;
  
  local_58 = 24.0;
  iVar2 = in_ECX[1];
  fVar1 = *(float *)(iVar2 + 0xf4);
  if ((24.0 <= fVar1) && (local_58 = 48.0, fVar1 <= 48.0)) {
    local_58 = fVar1;
  }
  fVar1 = *(float *)(iVar2 + 0xfc);
  fVar3 = param_2[1] - param_1[1];
  local_4c = *param_2 - *param_1;
  fVar7 = param_2[2] - param_1[2];
  dVar5 = (double)(fVar3 * fVar3 + local_4c * local_4c + fVar7 * fVar7);
  if (dVar5 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  local_48 = 0.0;
  fVar6 = 1.0;
  local_54 = 1.0;
  if ((float)dVar5 == 0.0) {
    local_50 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar6 = 1.0 / (float)dVar5;
    local_50 = fVar6 * local_4c;
    fVar3 = fVar6 * fVar3;
    fVar6 = fVar6 * fVar7;
  }
  fVar8 = fVar3 - fVar6 * 0.0;
  fVar4 = fVar6 * 0.0 - local_50;
  fVar9 = local_50 * 0.0 - fVar3 * 0.0;
  fVar7 = local_58 + param_3;
  local_3c = local_58 * 3.0;
  local_44 = local_3c * fVar8;
  local_40 = local_3c * fVar4;
  local_38 = (local_50 * fVar7 + *(float *)(iVar2 + 8)) - local_44;
  local_34 = (*(float *)(iVar2 + 0xc) + fVar3 * fVar7) - local_40;
  local_3c = local_3c * fVar9;
  local_30 = (*(float *)(iVar2 + 0x10) + fVar6 * fVar7) - local_3c;
  local_40 = fVar3 * fVar7 + *(float *)(iVar2 + 0xc) + local_40;
  local_44 = local_50 * fVar7 + *(float *)(iVar2 + 8) + local_44;
  local_3c = fVar6 * fVar7 + *(float *)(iVar2 + 0x10) + local_3c;
  if (*(int *)(iVar2 + 0x108) == 5) {
    local_1c = fVar1 * 0.0 * 3.0;
    local_2c = local_50 * param_3 + *(float *)(iVar2 + 8) + local_1c;
    local_28 = fVar3 * param_3 + *(float *)(iVar2 + 0xc) + local_1c;
    local_24 = *(float *)(iVar2 + 0x10) + fVar6 * param_3 + fVar1 * 3.0;
    local_20 = (local_50 * param_3 + *(float *)(iVar2 + 8)) - local_1c;
    local_1c = (*(float *)(iVar2 + 0xc) + fVar3 * param_3) - local_1c;
    local_18 = (fVar6 * param_3 + *(float *)(iVar2 + 0x10)) - fVar1 * 3.0;
  }
  fVar8 = fVar8 * local_58;
  local_14 = *(undefined8 *)(in_ECX + in_ECX[0xaf] * 4 + 0x8e);
  fVar8 = fVar8 + fVar8;
  local_c = in_ECX[in_ECX[0xaf] * 4 + 0x90];
  fVar4 = fVar4 * local_58;
  fVar9 = fVar9 * local_58;
  fVar4 = fVar4 + fVar4;
  fVar9 = fVar9 + fVar9;
  if (*(int *)(iVar2 + 0x108) == 5) {
    local_48 = fVar1 * 0.0 + fVar1 * 0.0;
    local_54 = fVar1 + fVar1;
  }
  local_4c = 0.0;
  do {
    iVar2 = (**(code **)(*in_ECX + 0x158))(iVar2 + 8,&local_44,param_4,0);
    if ((iVar2 == 2) &&
       (iVar2 = (**(code **)(*in_ECX + 0x158))(&local_54,&local_24,param_4,0), iVar2 == 2)) {
      if (param_5 == (undefined8 *)0x0) {
        return 1;
      }
      *param_5 = CONCAT44(local_50,local_54);
      *(float *)(param_5 + 1) = local_4c;
      return 1;
    }
    iVar2 = (**(code **)(*in_ECX + 0x158))(in_ECX[1] + 8,&local_48,param_4,0);
    if ((iVar2 == 2) &&
       (iVar2 = (**(code **)(*in_ECX + 0x158))(&local_38,&local_14,param_4,0), iVar2 == 2)) {
      if (param_5 == (undefined8 *)0x0) {
        return 1;
      }
      *param_5 = CONCAT44(local_34,local_38);
      *(float *)(param_5 + 1) = local_30;
      return 1;
    }
    if (*(int *)(in_ECX[1] + 0x108) == 5) {
      iVar2 = (**(code **)(*in_ECX + 0x158))(in_ECX[1] + 8,&local_2c,param_4,0);
      if ((iVar2 == 2) &&
         (iVar2 = (**(code **)(*in_ECX + 0x158))(&local_3c,&local_24,param_4,0), iVar2 == 2)) {
        if (param_5 == (undefined8 *)0x0) {
          return 1;
        }
        *param_5 = CONCAT44(local_38,local_3c);
        *(float *)(param_5 + 1) = local_34;
        return 1;
      }
      iVar2 = (**(code **)(*in_ECX + 0x158))(in_ECX[1] + 8,&local_30,param_4,0);
      if ((iVar2 == 2) &&
         (iVar2 = (**(code **)(*in_ECX + 0x158))(&local_20,&local_14,param_4,0), iVar2 == 2)) {
        if (param_5 == (undefined8 *)0x0) {
          return 1;
        }
        *param_5 = CONCAT44(local_1c,local_20);
        *(float *)(param_5 + 1) = local_18;
        return 1;
      }
    }
    local_44 = fVar8 + local_44;
    iVar2 = in_ECX[1];
    local_40 = fVar4 + local_40;
    local_3c = fVar9 + local_3c;
    local_38 = local_38 - fVar8;
    local_34 = local_34 - fVar4;
    local_30 = local_30 - fVar9;
    if (*(int *)(iVar2 + 0x108) == 5) {
      local_2c = local_48 + local_2c;
      local_28 = local_28 + local_48;
      local_24 = local_24 + local_54;
      local_20 = local_20 - local_48;
      local_1c = local_1c - local_48;
      local_18 = local_18 - local_54;
    }
    local_4c = (float)((int)local_4c + 1);
    if (7 < (int)local_4c) {
      return 0;
    }
  } while( true );
}

