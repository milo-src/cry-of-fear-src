// rea decompile_all
// name: FUN_10088ca0
// address: 0x10088ca0
// body: available
// range: 0x10088ca0-0x10089670 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10088ca0(float *param_1,int param_2,float param_3,float param_4,float param_5,
                 undefined8 param_6,float param_7,float param_8,float param_9,float param_10,
                 float param_11,float param_12,undefined4 param_13,int param_14,int param_15,
                 int param_16)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int *in_ECX;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_80 [12];
  int local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  int local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  float local_34;
  undefined8 local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar9 = (int *)0x0;
  local_10 = in_ECX;
  iVar2 = (**(code **)(*in_ECX + 0xd0))();
  if (iVar2 != 0) {
    piVar9 = (int *)FUN_100125e0(in_ECX[1]);
  }
  local_48 = *(undefined8 *)(DAT_10223188 + 0x40);
  local_40 = *(float *)(DAT_10223188 + 0x48);
  local_3c = *(undefined8 *)(DAT_10223188 + 0x34);
  local_34 = *(float *)(DAT_10223188 + 0x3c);
  iVar2 = (**(code **)(*in_ECX + 0xd0))();
  uVar7 = (uint)param_12;
  if ((iVar2 != 0) && (piVar9 != (int *)0x0)) {
    if ((piVar9[0x94b] != 0) && (*(char *)(piVar9[0x94b] + 0x178) != '\0')) {
      param_8 = param_8 * 0.5;
      param_9 = param_9 * 0.5;
      param_10 = param_10 * 0.5;
    }
    if (param_12 != 7.00649e-44) {
      piVar9[399] = piVar9[399] + 1;
    }
  }
  if (param_15 == 0) {
    param_15 = in_ECX[1];
  }
  FUN_1011c070();
  if (uVar7 == 6) {
    DAT_10231f3c = (undefined1 *)0x2001000;
  }
  else {
    DAT_10231f3c = (undefined1 *)0x1002;
    if (uVar7 == 0x32) {
      DAT_10231f3c = (undefined1 *)0x1008;
    }
    else if (uVar7 == 0x33) {
      DAT_10231f3c = &LAB_10001000;
    }
  }
  param_12 = (float)((uint)param_12 & 0xffffff);
  local_8 = 0;
  if (param_2 != 0) {
    param_16 = param_16 + 4;
    do {
      fVar11 = (float10)FUN_1011a050(param_16 + -2,0xbf000000,0x3f000000);
      param_12 = (float)fVar11;
      fVar11 = (float10)FUN_1011a050(param_16 + -3,0xbf000000,0x3f000000);
      local_20 = (float)(fVar11 + (float10)param_12);
      fVar11 = (float10)FUN_1011a050(param_16,0xbf000000,0x3f000000);
      param_12 = (float)fVar11;
      fVar11 = (float10)FUN_1011a050(param_16 + -1,0xbf000000,0x3f000000);
      local_24 = (float)(fVar11 + (float10)param_12);
      if ((((piVar9 != (int *)0x0) && (iVar2 = FUN_10017780(), iVar2 != 0)) && (piVar9[0x94b] != 0))
         && (local_8 = FUN_10018440(*(undefined4 *)(piVar9[0x94b] + 4)), local_8 != 0)) {
        pcVar3 = (char *)(*DAT_10223094)(1);
        _atoi(pcVar3);
        pcVar3 = (char *)(*DAT_10223094)(2);
        _atoi(pcVar3);
        pcVar3 = (char *)(*DAT_10223094)(3);
        _atoi(pcVar3);
        param_11 = 0.0;
        iVar2 = FUN_10018500(*(undefined4 *)(piVar9[0x94b] + 4));
        param_6 = *(undefined8 *)(iVar2 + 0x20c);
        param_7 = *(float *)(iVar2 + 0x214);
      }
      fVar12 = local_24 * param_9;
      fVar13 = local_20 * param_8;
      local_14 = (float)param_6 + (float)local_48 * fVar13 + (float)local_3c * fVar12;
      local_18 = param_6._4_4_ + local_48._4_4_ * fVar13 + local_3c._4_4_ * fVar12;
      local_1c = local_34 * fVar12 + param_7 + local_40 * fVar13;
      local_28 = param_5 + local_1c * param_11;
      local_30 = CONCAT44(param_4 + local_18 * param_11,param_3 + local_14 * param_11);
      if (((local_8 != 0) && (piVar9 != (int *)0x0)) && (iVar2 = FUN_10017780(), iVar2 != 0)) {
        iVar2 = FUN_10018500(*(undefined4 *)(piVar9[0x94b] + 4));
        local_30 = *(undefined8 *)(iVar2 + 0x20c);
        local_28 = *(float *)(iVar2 + 0x214);
      }
      FUN_1011a800(&param_3,&local_30,0,*(undefined4 *)(in_ECX[1] + 0x20c),local_80);
      iVar2 = (**(code **)(*in_ECX + 0xd0))();
      if (((iVar2 != 0) || (uVar7 == 0x17)) && (local_70 != 1.0)) {
        iVar2 = local_50;
        if (((local_50 != 0) || (iVar2 = (*DAT_1022305c)(0), iVar2 != 0)) &&
           (piVar8 = *(int **)(iVar2 + 0x7c), piVar8 != (int *)0x0)) {
          iVar2 = (**(code **)(*piVar8 + 0xd0))();
          if (iVar2 == 0) {
            if (uVar7 == 0x17) {
LAB_1008906b:
              iVar2 = (**(code **)(*piVar8 + 0xd0))();
              if ((iVar2 != 0) || (iVar2 = (**(code **)(*piVar8 + 0x78))(), iVar2 != 0))
              goto LAB_10089084;
            }
          }
          else {
            if (uVar7 == 0x17) goto LAB_1008906b;
LAB_10089084:
            FUN_1011a800(&local_6c,&local_30,0,*(undefined4 *)(piVar8[1] + 0x20c),local_80);
            iVar2 = (**(code **)(*piVar8 + 0x78))();
            if (iVar2 != 0) {
              (**(code **)(*piVar8 + 100))(local_10[1],param_15,(float)param_14,DAT_10231f3c);
            }
          }
        }
        if (local_70 != 1.0) {
          iVar2 = local_50;
          if (((local_50 != 0) || (iVar2 = (*DAT_1022305c)(0), iVar2 != 0)) &&
             ((piVar8 = *(int **)(iVar2 + 0x7c), piVar8 != (int *)0x0 &&
              (iVar2 = (**(code **)(*piVar8 + 0xd0))(), iVar2 != 0)))) {
            FUN_1011a800(&local_6c,&local_30,0,*(undefined4 *)(piVar8[1] + 0x20c),local_80);
          }
          if ((local_70 != 1.0) &&
             ((((iVar2 = local_50, local_50 != 0 || (iVar2 = (*DAT_1022305c)(0), iVar2 != 0)) &&
               (piVar8 = *(int **)(iVar2 + 0x7c), piVar8 != (int *)0x0)) &&
              (iVar2 = (**(code **)(*piVar8 + 0xd0))(), iVar2 != 0)))) {
            FUN_1011a800(&local_6c,&local_30,0,*(undefined4 *)(piVar8[1] + 0x20c),local_80);
          }
        }
      }
      param_12 = (float)((uint)param_12 & 0xffffff);
      if (local_70 == 1.0) {
LAB_10089446:
        if ((uVar7 != 0x32) && (uVar7 != 0x33)) {
LAB_10089450:
          FUN_10117b40(param_3,param_4,param_5,local_6c,local_68,local_64,
                       (int)(local_70 * param_11 * 0.015625));
        }
      }
      else {
        iVar2 = local_50;
        if ((local_50 == 0) && (iVar2 = (*DAT_1022305c)(0), iVar2 == 0)) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = *(int **)(iVar2 + 0x7c);
          if (piVar8 != (int *)0x0) {
            pbVar6 = (byte *)(*(int *)(-(uint)(*(int *)(piVar8[1] + 0x20c) != 0) &
                                      *(int *)(piVar8[1] + 0x20c) + 0x80U) +
                             *(int *)(DAT_10223188 + 0x98));
            pcVar3 = "cof_doctorshoot";
            do {
              bVar1 = *pbVar6;
              bVar10 = bVar1 < (byte)*pcVar3;
              if (bVar1 != *pcVar3) {
LAB_10089230:
                uVar4 = -(uint)bVar10 | 1;
                goto LAB_10089235;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar10 = bVar1 < (byte)pcVar3[1];
              if (bVar1 != pcVar3[1]) goto LAB_10089230;
              pbVar6 = pbVar6 + 2;
              pcVar3 = pcVar3 + 2;
            } while (bVar1 != 0);
            uVar4 = 0;
LAB_10089235:
            if (((uVar4 == 0) && (iVar2 = FUN_10118460(0,"monster_doctorboss"), iVar2 != 0)) &&
               (local_c = FUN_1002c950(*(undefined4 *)(iVar2 + 4)), local_c != 0)) {
              switch(*(undefined4 *)(piVar8[1] + 0x248)) {
              case 1:
                iVar2 = FUN_1002d690();
                if (iVar2 != 1) {
                  iVar2 = FUN_1002d690();
                  bVar10 = iVar2 == 5;
LAB_100892e1:
                  if (!bVar10) goto switchD_10089278_default;
                }
                break;
              case 2:
                iVar2 = FUN_1002d690();
                if (iVar2 != 2) {
                  iVar2 = FUN_1002d690();
                  bVar10 = iVar2 == 6;
                  goto LAB_100892e1;
                }
                break;
              case 3:
                iVar2 = FUN_1002d690();
                if (iVar2 != 3) {
                  iVar2 = FUN_1002d690();
                  bVar10 = iVar2 == 7;
                  goto LAB_100892e1;
                }
                break;
              case 4:
                iVar2 = FUN_1002d690();
                if (iVar2 != 4) {
                  iVar2 = FUN_1002d690();
                  bVar10 = iVar2 == 8;
                  goto LAB_100892e1;
                }
                break;
              default:
                goto switchD_10089278_default;
              }
              param_12 = (float)CONCAT13(1,param_12._0_3_);
            }
          }
        }
switchD_10089278_default:
        if (param_14 == 0) {
          if (((uVar7 == 0) &&
              ((**(code **)(*piVar8 + 0x60))
                         (param_15,0x42480000,local_14,local_18,local_1c,local_80,0x80),
              local_50 != 0)) && (iVar2 = (*DAT_10223060)(local_50), iVar2 != 0)) {
            if (local_50 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = local_50 + 0x80;
            }
            if (*(int *)(iVar2 + 0x14c) != 0) {
              iVar2 = (*DAT_102230b0)(0,2);
              FUN_101180b0(local_80,iVar2 + 0x19);
            }
          }
        }
        else if (uVar7 == 6) {
          (**(code **)(*piVar8 + 0x60))
                    (param_15,(float)param_14,local_14,local_18,local_1c,local_80,0x2001000);
        }
        else {
          (**(code **)(*piVar8 + 0x60))
                    (param_15,(float)param_14,local_14,local_18,local_1c,local_80,0x1002);
        }
        if (local_50 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = local_50 + 0x80;
        }
        if ((*(int *)(iVar2 + 0x10c) != 4) || (local_74 != 0)) goto LAB_10089446;
        if ((uVar7 != 0x32) && (uVar7 != 0x33)) {
          FUN_10117fe0(local_80,&DAT_101bef34,0);
          goto LAB_10089450;
        }
      }
      param_16 = param_16 + 1;
      param_2 = param_2 + -1;
      in_ECX = local_10;
    } while (param_2 != 0);
  }
  FUN_1011b8f0(in_ECX[1],param_15);
  if ((local_50 == 0) && (local_50 = (*DAT_1022305c)(0), local_50 == 0)) {
    piVar8 = (int *)0x0;
LAB_100894f3:
    iVar2 = (**(code **)(*piVar8 + 0xc0))();
    if (piVar9 == (int *)0x0) goto LAB_10089641;
    if (iVar2 == 0) {
      if (uVar7 == 0x32) goto LAB_10089641;
    }
    else {
      if (uVar7 == 0x32) goto LAB_10089641;
      pcVar3 = "func_breakable";
      pbVar5 = (byte *)(*(int *)(DAT_10223188 + 0x98) +
                       *(int *)(-(uint)(*(int *)(piVar8[1] + 0x20c) != 0) &
                               *(int *)(piVar8[1] + 0x20c) + 0x80U));
      pbVar6 = pbVar5;
      do {
        bVar1 = *pbVar6;
        bVar10 = bVar1 < (byte)*pcVar3;
        if (bVar1 != *pcVar3) {
LAB_100895bc:
          uVar7 = -(uint)bVar10 | 1;
          goto LAB_100895c1;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar10 = bVar1 < (byte)pcVar3[1];
        if (bVar1 != pcVar3[1]) goto LAB_100895bc;
        pbVar6 = pbVar6 + 2;
        pcVar3 = pcVar3 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_100895c1:
      if (uVar7 != 0) {
        pcVar3 = "cof_doctorshoot";
        pbVar6 = pbVar5;
        do {
          bVar1 = *pbVar6;
          bVar10 = bVar1 < (byte)*pcVar3;
          if (bVar1 != *pcVar3) {
LAB_100895f0:
            uVar7 = -(uint)bVar10 | 1;
            goto LAB_100895f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar10 = bVar1 < (byte)pcVar3[1];
          if (bVar1 != pcVar3[1]) goto LAB_100895f0;
          pbVar6 = pbVar6 + 2;
          pcVar3 = pcVar3 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_100895f5:
        if (uVar7 != 0) goto LAB_1008963b;
      }
      pcVar3 = "cof_doctorshoot";
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar3;
        if (bVar1 != *pcVar3) {
LAB_10089620:
          uVar7 = -(uint)bVar10 | 1;
          goto LAB_10089625;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < (byte)pcVar3[1];
        if (bVar1 != pcVar3[1]) goto LAB_10089620;
        pbVar5 = pbVar5 + 2;
        pcVar3 = pcVar3 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_10089625:
      if (uVar7 != 0) goto LAB_100895b1;
      if (param_12._3_1_ != '\0') {
        piVar9[400] = piVar9[400] + 1;
        goto LAB_10089641;
      }
    }
LAB_1008963b:
    piVar9[0x192] = piVar9[0x192] + 1;
  }
  else {
    piVar8 = *(int **)(local_50 + 0x7c);
    if ((piVar8 == (int *)0x0) ||
       (((iVar2 = (**(code **)(*piVar8 + 0xc0))(), iVar2 != 0 && (uVar7 != 0x32)) && (uVar7 != 0x33)
        ))) goto LAB_100894f3;
    if (((piVar9 == (int *)0x0) || (uVar7 == 0x32)) || (uVar7 == 0x33)) goto LAB_10089641;
    iVar2 = (**(code **)(*piVar9 + 0x138))(piVar8);
    if (iVar2 < 1) goto LAB_1008963b;
LAB_100895b1:
    piVar9[400] = piVar9[400] + 1;
  }
LAB_10089641:
  *param_1 = local_20 * param_8;
  param_1[2] = 0.0;
  param_1[1] = local_24 * param_9;
  return;
}

