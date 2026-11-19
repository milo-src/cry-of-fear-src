// rea decompile_all
// name: FUN_100018f0
// address: 0x100018f0
// body: available
// range: 0x100018f0-0x10002418 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100018f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_fc;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [4];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
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
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  iVar5 = DAT_10220c50;
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((param_1 < *(int *)(DAT_10220c50 + 0x24c)) && (0 < param_1)) {
    param_1 = param_1 * 0xe0;
    iVar4 = *(int *)(param_1 + 0x280 + DAT_10220c50);
    if (iVar4 != 0) {
      fVar1 = *(float *)(param_1 + 0x274 + DAT_10220c50);
      fVar2 = *(float *)(param_1 + 0x278 + DAT_10220c50);
      fVar3 = *(float *)(param_1 + 0x27c + DAT_10220c50);
      (**(code **)(DAT_10220c50 + 0x4f598))(iVar4,&local_98,&local_a4);
      pfVar7 = local_80 + 1;
      uVar6 = 0;
      do {
        if ((uVar6 & 1) == 0) {
          fVar10 = local_a4 + 0.0;
        }
        else {
          fVar10 = local_98 - 0.0;
        }
        if ((uVar6 & 2) == 0) {
          fVar11 = local_a0 + 0.0;
        }
        else {
          fVar11 = local_94 - 0.0;
        }
        if ((uVar6 & 4) == 0) {
          fVar9 = local_9c + 0.0;
        }
        else {
          fVar9 = local_90 - 0.0;
        }
        pfVar7[-1] = fVar10;
        uVar6 = uVar6 + 1;
        *pfVar7 = fVar11;
        pfVar7[1] = fVar9;
        pfVar7 = pfVar7 + 3;
      } while ((int)uVar6 < 8);
      pfVar7 = (float *)(iVar5 + 0x2a4 + param_1);
      if (((*pfVar7 == 0.0) && (*(float *)(param_1 + 0x2a8 + iVar5) == 0.0)) &&
         (*(float *)(param_1 + 0x2ac + iVar5) == 0.0)) {
        local_fc = local_38;
        local_ec = local_3c;
        local_bc = local_40;
        local_e8 = local_44;
        local_e4 = local_48;
        local_b8 = local_4c;
        local_e0 = local_50;
        local_dc = local_54;
        local_b4 = local_58;
        local_d8 = local_5c;
        local_d4 = local_60;
        local_b0 = local_64;
        local_d0 = local_68;
        local_cc = local_6c;
        local_ac = local_70;
        local_c8 = local_80[3];
        local_c4 = local_80[2];
        fVar10 = local_80[0];
        fVar11 = local_80[1];
        fVar9 = local_2c;
        fVar12 = local_34;
      }
      else {
        FUN_10002ca0(pfVar7,&local_14,&local_20,&local_8c);
        fVar10 = local_10 * local_80[1] + local_14 * local_80[0] + local_80[2] * local_c;
        fVar11 = local_1c * local_80[1] + local_20 * local_80[0] + local_80[2] * local_18;
        local_c4 = local_88 * local_80[1] + local_8c * local_80[0] + local_80[2] * local_84;
        local_c8 = local_10 * local_70 + local_14 * local_80[3] + local_6c * local_c;
        local_ac = local_1c * local_70 + local_20 * local_80[3] + local_6c * local_18;
        local_cc = local_88 * local_70 + local_8c * local_80[3] + local_6c * local_84;
        local_d0 = local_10 * local_64 + local_14 * local_68 + local_60 * local_c;
        local_b0 = local_1c * local_64 + local_20 * local_68 + local_60 * local_18;
        local_d4 = local_88 * local_64 + local_8c * local_68 + local_60 * local_84;
        local_d8 = local_10 * local_58 + local_14 * local_5c + local_54 * local_c;
        local_b4 = local_1c * local_58 + local_20 * local_5c + local_54 * local_18;
        local_dc = local_88 * local_58 + local_8c * local_5c + local_54 * local_84;
        local_e0 = local_10 * local_4c + local_14 * local_50 + local_48 * local_c;
        local_b8 = local_1c * local_4c + local_20 * local_50 + local_48 * local_18;
        local_e4 = local_88 * local_4c + local_8c * local_50 + local_48 * local_84;
        local_e8 = local_14 * local_44 + local_10 * local_40 + local_3c * local_c;
        local_bc = local_20 * local_44 + local_1c * local_40 + local_3c * local_18;
        local_ec = local_88 * local_40 + local_8c * local_44 + local_3c * local_84;
        local_fc = local_10 * local_34 + local_14 * local_38 + local_30 * local_c;
        fVar12 = local_1c * local_34 + local_20 * local_38 + local_30 * local_18;
        local_30 = local_88 * local_34 + local_8c * local_38 + local_30 * local_84;
        fVar9 = local_10 * local_28 + local_2c * local_14 + local_24 * local_c;
        local_88 = local_28 * local_88;
        local_28 = local_1c * local_28 + local_20 * local_2c + local_24 * local_18;
        local_24 = local_88 + local_8c * local_2c + local_24 * local_84;
      }
      local_80[0] = fVar10 + fVar1;
      local_80[1] = fVar11 + fVar2;
      local_34 = fVar12 + fVar2;
      local_2c = fVar9 + fVar1;
      local_80[2] = local_c4 + fVar3;
      local_30 = local_30 + fVar3;
      local_80[3] = local_c8 + fVar1;
      local_70 = local_ac + fVar2;
      local_6c = local_cc + fVar3;
      local_68 = local_d0 + fVar1;
      local_64 = local_b0 + fVar2;
      local_60 = local_d4 + fVar3;
      local_5c = local_d8 + fVar1;
      local_58 = local_b4 + fVar2;
      local_54 = local_dc + fVar3;
      local_50 = local_e0 + fVar1;
      local_4c = local_b8 + fVar2;
      local_48 = local_e4 + fVar3;
      local_44 = local_e8 + fVar1;
      local_40 = local_bc + fVar2;
      local_3c = local_ec + fVar3;
      local_38 = local_fc + fVar1;
      local_28 = local_28 + fVar2;
      local_24 = local_24 + fVar3;
      piVar8 = &DAT_10211030;
      do {
        FUN_10002420(local_80 + piVar8[-1] * 3,local_80 + piVar8[-2] * 3,local_80 + *piVar8 * 3,
                     local_80 + piVar8[1] * 3,param_2,param_3);
        piVar8 = piVar8 + 4;
      } while ((int)piVar8 < 0x10211090);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    fVar1 = *(float *)(param_1 + 0x274 + DAT_10220c50);
    pfVar7 = local_80 + 1;
    fVar2 = *(float *)(param_1 + 0x278 + DAT_10220c50);
    uVar6 = 0;
    fVar3 = *(float *)(param_1 + 0x27c + DAT_10220c50);
    do {
      if ((uVar6 & 1) == 0) {
        fVar10 = *(float *)(param_1 + 0x294 + DAT_10220c50);
      }
      else {
        fVar10 = *(float *)(param_1 + 0x288 + DAT_10220c50);
      }
      if ((uVar6 & 2) == 0) {
        fVar11 = *(float *)(param_1 + 0x298 + DAT_10220c50);
      }
      else {
        fVar11 = *(float *)(param_1 + 0x28c + DAT_10220c50);
      }
      if ((uVar6 & 4) == 0) {
        fVar9 = *(float *)(param_1 + 0x29c + DAT_10220c50);
      }
      else {
        fVar9 = *(float *)(param_1 + 0x290 + DAT_10220c50);
      }
      uVar6 = uVar6 + 1;
      pfVar7[-1] = fVar1 + fVar10;
      *pfVar7 = fVar2 + fVar11;
      pfVar7[1] = fVar3 + fVar9;
      pfVar7 = pfVar7 + 3;
    } while ((int)uVar6 < 8);
    piVar8 = &DAT_10211030;
    do {
      FUN_10002420(local_80 + piVar8[-1] * 3,local_80 + piVar8[-2] * 3,local_80 + *piVar8 * 3,
                   local_80 + piVar8[1] * 3,param_2,param_3);
      piVar8 = piVar8 + 4;
    } while ((int)piVar8 < 0x10211090);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

