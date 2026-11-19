// rea decompile_all
// name: FUN_100884f0
// address: 0x100884f0
// body: available
// range: 0x100884f0-0x10088c80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100884f0(uint param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                 ,float param_7,float param_8,float param_9,float param_10,float param_11,
                 int param_12,int *param_13,int param_14,int param_15)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int *in_ECX;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  float10 fVar12;
  float fVar13;
  undefined1 local_84 [16];
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_54;
  float local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  int *local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int *local_14;
  float local_10;
  float local_c;
  float local_8;
  
  local_24 = *(float *)(DAT_10223188 + 0x40);
  piVar9 = (int *)0x0;
  local_28 = *(float *)(DAT_10223188 + 0x44);
  local_2c = *(float *)(DAT_10223188 + 0x48);
  local_18 = *(float *)(DAT_10223188 + 0x34);
  local_1c = *(float *)(DAT_10223188 + 0x38);
  local_20 = *(float *)(DAT_10223188 + 0x3c);
  local_14 = (int *)0x0;
  local_34 = in_ECX;
  iVar2 = (**(code **)(*in_ECX + 0xd0))();
  if ((iVar2 != 0) &&
     (piVar9 = (int *)FUN_100125e0(in_ECX[1]), local_14 = piVar9, piVar9 != (int *)0x0)) {
    if ((piVar9[0x94b] != 0) && (*(char *)(piVar9[0x94b] + 0x178) != '\0')) {
      param_8 = param_8 * 0.5;
      param_9 = param_9 * 0.5;
      param_10 = param_10 * 0.5;
    }
    if (param_12 != 0x32) {
      piVar9[399] = piVar9[399] + 1;
    }
  }
  if (param_15 == 0) {
    param_15 = in_ECX[1];
  }
  iVar2 = param_15;
  FUN_1011c070();
  DAT_10231f3c = 0x1002;
  if (param_12 == 6) {
    DAT_10231f3c = 0x2001000;
  }
  if (param_1 != 0) {
    uVar10 = 1;
    do {
      do {
        fVar12 = (float10)(*DAT_102230b4)(0xbf000000,0x3f000000);
        local_10 = (float)fVar12;
        fVar12 = (float10)(*DAT_102230b4)(0xbf000000,0x3f000000);
        local_c = (float)(fVar12 + (float10)local_10);
        fVar12 = (float10)(*DAT_102230b4)(0xbf000000,0x3f000000);
        local_10 = (float)fVar12;
        fVar12 = (float10)(*DAT_102230b4)(0xbf000000,0x3f000000);
        local_10 = (float)(fVar12 + (float10)local_10);
      } while (1.0 < local_10 * local_10 + local_c * local_c);
      local_10 = local_10 * param_9;
      fVar13 = local_c * param_8;
      local_c = param_6 + local_28 * fVar13 + local_1c * local_10;
      local_8 = param_5 + local_24 * fVar13 + local_18 * local_10;
      local_10 = local_20 * local_10 + param_7 + local_2c * fVar13;
      local_4c = param_2 + local_8 * param_11;
      local_48 = param_3 + local_c * param_11;
      local_44 = param_4 + local_10 * param_11;
      FUN_1011a800(&param_2,&local_4c,0,*(undefined4 *)(in_ECX[1] + 0x20c),local_84);
      if ((param_13 != (int *)0x0) &&
         (iVar4 = DAT_10222e50 + 1, iVar6 = DAT_10222e50 % (int)param_13, DAT_10222e50 = iVar4,
         iVar6 == 0)) {
        iVar4 = (**(code **)(*in_ECX + 0xd0))();
        if (iVar4 == 0) {
          local_40 = CONCAT44(param_3,param_2);
          local_38 = param_4;
        }
        else {
          local_30 = *(float *)(DAT_10223188 + 0x30) * 16.0;
          local_38 = (param_4 - 4.0) +
                     *(float *)(DAT_10223188 + 0x48) + *(float *)(DAT_10223188 + 0x48) + local_30;
          local_40 = CONCAT44(param_3 + 0.0 +
                              *(float *)(DAT_10223188 + 0x44) + *(float *)(DAT_10223188 + 0x44) +
                              *(float *)(DAT_10223188 + 0x2c) * 16.0,
                              param_2 + 0.0 +
                              *(float *)(DAT_10223188 + 0x40) + *(float *)(DAT_10223188 + 0x40) +
                              *(float *)(DAT_10223188 + 0x28) * 16.0);
        }
        (*DAT_10223000)(5,0x17,&local_40,0);
        (*DAT_10223008)(6);
        (*DAT_1022301c)((undefined4)local_40);
        (*DAT_1022301c)(local_40._4_4_);
        (*DAT_1022301c)(local_38);
        (*DAT_1022301c)(local_70);
        (*DAT_1022301c)(local_6c);
        (*DAT_1022301c)(local_68);
        (*DAT_10223004)();
      }
      if (local_74 != 1.0) {
        iVar4 = local_54;
        if ((local_54 == 0) && (iVar4 = (*DAT_1022305c)(0), iVar4 == 0)) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = *(int **)(iVar4 + 0x7c);
        }
        iVar4 = *piVar9;
        if (param_14 == 0) {
          (**(code **)(iVar4 + 0x60))(iVar2,0x42480000,local_8,local_c,local_10,local_84,0x80);
          if ((local_54 != 0) && (iVar4 = (*DAT_10223060)(local_54), iVar4 != 0)) {
            iVar4 = local_54;
            if (local_54 != 0) {
              iVar4 = local_54 + 0x80;
            }
            if (*(int *)(iVar4 + 0x14c) != 0) {
              iVar4 = (*DAT_102230b0)(0,2);
              FUN_101180b0(local_84,iVar4 + 0x19);
            }
          }
        }
        else if (param_12 == 6) {
          (**(code **)(iVar4 + 0x60))
                    (iVar2,(float)param_14,local_8,local_c,local_10,local_84,0x2001000);
        }
        else {
          (**(code **)(iVar4 + 0x60))
                    (iVar2,(float)param_14,local_8,local_c,local_10,local_84,0x1002);
        }
      }
      FUN_10117b40(param_2,param_3,param_4,local_70,local_6c,local_68,
                   (int)(local_74 * param_11 * 0.015625));
      uVar10 = uVar10 + 1;
      piVar9 = local_14;
    } while (uVar10 <= param_1);
  }
  if ((local_54 != 0) || (local_54 = (*DAT_1022305c)(0), local_54 != 0)) {
    piVar8 = *(int **)(local_54 + 0x7c);
    param_13 = piVar8;
    if ((piVar8 == (int *)0x0) || (iVar2 = (**(code **)(*piVar8 + 0xc0))(), iVar2 != 0))
    goto LAB_10088a73;
    if ((piVar9 == (int *)0x0) || (param_12 == 0x32)) goto LAB_10088c67;
    iVar2 = (**(code **)(*piVar9 + 0x138))(piVar8);
    if (iVar2 < 1) goto switchD_10088bdc_default;
    goto LAB_10088b23;
  }
  piVar8 = (int *)0x0;
  param_13 = (int *)0x0;
LAB_10088a73:
  iVar2 = (**(code **)(*piVar8 + 0xc0))();
  if (piVar9 == (int *)0x0) goto LAB_10088c67;
  if (iVar2 == 0) {
    if (param_12 == 0x32) goto LAB_10088c67;
    goto switchD_10088bdc_default;
  }
  if (param_12 == 0x32) goto LAB_10088c67;
  pcVar7 = "func_breakable";
  pbVar3 = (byte *)(*(int *)(DAT_10223188 + 0x98) +
                   *(int *)(-(uint)(*(int *)(piVar8[1] + 0x20c) != 0) &
                           *(int *)(piVar8[1] + 0x20c) + 0x80U));
  pbVar5 = pbVar3;
  do {
    bVar1 = *pbVar5;
    bVar11 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10088b2e:
      uVar10 = -(uint)bVar11 | 1;
      goto LAB_10088b33;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar11 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10088b2e;
    pbVar5 = pbVar5 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar10 = 0;
LAB_10088b33:
  if (uVar10 != 0) {
    pcVar7 = "cof_doctorshoot";
    pbVar5 = pbVar3;
    do {
      bVar1 = *pbVar5;
      bVar11 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10088b60:
        uVar10 = -(uint)bVar11 | 1;
        goto LAB_10088b65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar11 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10088b60;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar10 = 0;
LAB_10088b65:
    if (uVar10 != 0) goto switchD_10088bdc_default;
  }
  pcVar7 = "cof_doctorshoot";
  do {
    bVar1 = *pbVar3;
    bVar11 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10088b92:
      uVar10 = -(uint)bVar11 | 1;
      goto LAB_10088b97;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar11 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10088b92;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar10 = 0;
LAB_10088b97:
  if (uVar10 != 0) goto LAB_10088b23;
  iVar2 = FUN_10118460(0,"monster_doctorboss");
  if ((iVar2 != 0) && (iVar2 = FUN_1002c950(*(undefined4 *)(iVar2 + 4)), iVar2 != 0)) {
    switch(*(undefined4 *)(param_13[1] + 0x248)) {
    case 1:
      iVar2 = FUN_1002d690();
      if (iVar2 == 1) {
LAB_10088b23:
        piVar9[400] = piVar9[400] + 1;
        goto LAB_10088c67;
      }
      iVar2 = FUN_1002d690();
      bVar11 = iVar2 == 5;
      break;
    case 2:
      iVar2 = FUN_1002d690();
      if (iVar2 == 2) goto LAB_10088b23;
      iVar2 = FUN_1002d690();
      bVar11 = iVar2 == 6;
      break;
    case 3:
      iVar2 = FUN_1002d690();
      if (iVar2 == 3) goto LAB_10088b23;
      iVar2 = FUN_1002d690();
      bVar11 = iVar2 == 7;
      break;
    case 4:
      iVar2 = FUN_1002d690();
      if (iVar2 == 4) goto LAB_10088b23;
      iVar2 = FUN_1002d690();
      bVar11 = iVar2 == 8;
      break;
    default:
      goto switchD_10088bdc_default;
    }
    if (bVar11) {
      piVar9[400] = piVar9[400] + 1;
      goto LAB_10088c67;
    }
  }
switchD_10088bdc_default:
  piVar9[0x192] = piVar9[0x192] + 1;
LAB_10088c67:
  FUN_1011b8f0(local_34[1],param_15);
  return;
}

