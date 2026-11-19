// rea decompile_all
// name: FUN_1002d800
// address: 0x1002d800
// body: available
// range: 0x1002d800-0x1002e76b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d800(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float *pfVar4;
  int *piVar5;
  CDoctorBoss *in_ECX;
  float10 fVar6;
  float fVar7;
  char *pcVar8;
  undefined1 local_104 [48];
  int local_d4;
  undefined1 local_cc [12];
  undefined1 local_c0 [48];
  int local_90;
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [12];
  undefined1 local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (in_ECX[0x36c] != (CDoctorBoss)0x0) {
    return;
  }
  if (*(int *)(in_ECX + 0x39c) == 0) {
    iVar1 = FUN_10118460(0,"player");
    if (iVar1 != 0) {
      iVar1 = FUN_100125e0(*(undefined4 *)(iVar1 + 4));
      iVar1 = *(int *)(iVar1 + 0x5b0);
      if (0 < iVar1) {
        *(int *)(in_ECX + 0x39c) = iVar1;
        if (iVar1 == 1) {
          *(undefined4 *)(*(int *)(in_ECX + 4) + 0x114) = 0;
          iVar1 = *(int *)(in_ECX + 0x39c);
          *(undefined4 *)(in_ECX + 0x398) = 8;
        }
        if (iVar1 == 2) {
          *(undefined4 *)(*(int *)(in_ECX + 4) + 0x114) = 1;
          *(undefined4 *)(in_ECX + 0x398) = 6;
        }
      }
    }
    goto LAB_1002e757;
  }
  FUN_1000eda0(0);
  CDoctorBoss::DecideWhatToDo(in_ECX);
  if (*(int *)(in_ECX + 0x368) != 0) {
    iVar1 = FUN_10017780();
    if ((iVar1 == 0) || (iVar1 = FUN_10017790(), iVar1 != *(int *)(in_ECX + 0x368))) {
      FUN_10017740(*(undefined4 *)(in_ECX + 0x368));
    }
    iVar1 = FUN_10017780();
    if ((iVar1 == 0) || (iVar1 = FUN_10017790(), iVar1 != *(int *)(in_ECX + 0x368))) {
      FUN_10017740(*(undefined4 *)(in_ECX + 0x368));
    }
  }
  if ((in_ECX[900] != (CDoctorBoss)0x0) &&
     (*(float *)(in_ECX + 0x378) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x378))) {
    iVar1 = *(int *)(in_ECX + 0x214);
    iVar2 = FUN_1002cf50(&DAT_101acea8);
    if ((((iVar1 == iVar2) ||
         (((iVar2 = FUN_1002cf50(&DAT_101acee8), iVar1 == iVar2 ||
           (iVar2 = FUN_1002cf50(&DAT_101acf38), iVar1 == iVar2)) ||
          (iVar2 = FUN_1002cf50(&DAT_101acf88), iVar1 == iVar2)))) ||
        (((iVar2 = FUN_1002cf50("box1getback"), iVar1 == iVar2 ||
          (iVar2 = FUN_1002cf50("box2getback"), iVar1 == iVar2)) ||
         (iVar2 = FUN_1002cf50("box3getback"), iVar1 == iVar2)))) ||
       (iVar2 = FUN_1002cf50("box4getback"), iVar1 == iVar2)) {
      FUN_1000e850(9,&local_28,local_58);
      if (*(int *)(in_ECX + 0x39c) == 1) {
        fVar7 = *DAT_10223188;
        in_ECX[900] = (CDoctorBoss)0x0;
        *(float *)(in_ECX + 0x388) = fVar7 + 3.0;
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
        iVar1 = (*DAT_102230b0)(0xfffffff6,10);
        FUN_101182b0(uVar3,&local_28,"doc_ai/p345_reload.wav",0x3f800000,0,0,iVar1 + 100);
        *(undefined4 *)(in_ECX + 0x398) = 8;
      }
      else if (*(int *)(in_ECX + 0x39c) == 2) {
        fVar7 = *DAT_10223188;
        in_ECX[900] = (CDoctorBoss)0x0;
        *(float *)(in_ECX + 0x388) = fVar7 + 5.0;
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
        iVar1 = (*DAT_102230b0)(0xfffffff6,10);
        FUN_101182b0(uVar3,&local_28,"doc_ai/revolver_reload.wav",0x3f800000,0,0,iVar1 + 100);
        *(undefined4 *)(in_ECX + 0x398) = 6;
      }
    }
  }
  if (*(int *)(in_ECX + 0x3a0) == 1) {
    iVar1 = *(int *)(in_ECX + 0x214);
    iVar2 = FUN_1002cf50("box1shoot");
    if ((((iVar1 == iVar2) || (iVar2 = FUN_1002cf50("box2shoot"), iVar1 == iVar2)) ||
        ((iVar2 = FUN_1002cf50("box3shoot"), iVar1 == iVar2 ||
         (iVar2 = FUN_1002cf50("box4shoot"), iVar1 == iVar2)))) &&
       ((*(float *)(in_ECX + 0x380) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x380)
        && (*(int *)(in_ECX + 0x368) != 0)))) {
      FUN_1000e850(9,&local_1c,local_cc);
      if (*(int *)(in_ECX + 0x39c) == 1) {
        uVar3 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x100))
                          (local_70,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_104);
        FUN_1011a800(&local_1c,uVar3);
        if (((local_d4 != 0) && (*(int **)(local_d4 + 0x7c) != (int *)0x0)) &&
           (iVar1 = (**(code **)(**(int **)(local_d4 + 0x7c) + 0xd0))(), iVar1 != 0)) {
          if (*(int *)(in_ECX + 0x398) < 1) {
            iVar1 = *(int *)(in_ECX + 0x39c);
            if (iVar1 == 1) {
              uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
              iVar1 = (*DAT_102230b0)(0xfffffff6,10);
              FUN_101182b0(uVar3,&local_1c,"weapons/weapon_fire_empty.wav",0x3f800000,0,0,
                           iVar1 + 100);
              iVar1 = *(int *)(in_ECX + 0x39c);
            }
            if (iVar1 == 2) {
              uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
              iVar1 = (*DAT_102230b0)(0xfffffff6,10);
              FUN_101182b0(uVar3,&local_1c,"weapons/weapon_fire_empty_noclick.wav",0x3f800000,0,0,
                           iVar1 + 100);
            }
            in_ECX[900] = (CDoctorBoss)0x1;
            switch(*(undefined4 *)(in_ECX + 0x370)) {
            case 1:
switchD_1002dee5_caseD_1:
              pcVar8 = "box1getback";
              break;
            case 2:
switchD_1002dee5_caseD_2:
              pcVar8 = "box2getback";
              break;
            case 3:
switchD_1002dee5_caseD_3:
              pcVar8 = "box3getback";
              break;
            case 4:
switchD_1002dee5_caseD_4:
              pcVar8 = "box4getback";
              break;
            default:
              goto switchD_1002dee5_default;
            }
            FUN_1002e8c0(pcVar8);
            *(undefined4 *)(in_ECX + 0x3a0) = 0;
            fVar6 = (float10)(*DAT_102230b4)(0x3f800000,0x40200000);
            *(float *)(in_ECX + 0x37c) = (float)(fVar6 + (float10)*DAT_10223188);
          }
          else {
            fVar6 = (float10)(*DAT_102230b4)(0x3f000000,0x3fc00000);
            fVar7 = *DAT_10223188;
            *(int *)(in_ECX + 0x398) = *(int *)(in_ECX + 0x398) + -1;
            iVar1 = *(int *)(in_ECX + 0x39c);
            *(float *)(in_ECX + 0x380) = (float)(fVar6 + (float10)fVar7);
            if (iVar1 == 1) {
              FUN_10119320(*(int *)(in_ECX + 4) + 0x50);
              (**(code **)(*(int *)in_ECX + 0x228))(local_58);
              (**(code **)(*(int *)in_ECX + 0x224))(local_70,local_58);
              FUN_1000e7c0(1,local_4c,local_88);
              fVar6 = (float10)(*DAT_102230b4)(0xc2200000,0x42200000);
              local_40 = (float)fVar6;
              local_3c = DAT_10223188[10];
              local_34 = DAT_10223188[0xb];
              local_2c = DAT_10223188[0xc];
              fVar6 = (float10)(*DAT_102230b4)(0x42960000,0x43480000);
              local_8 = (float)fVar6;
              local_10 = DAT_10223188[0xd];
              local_38 = DAT_10223188[0xe];
              local_30 = DAT_10223188[0xf];
              fVar6 = (float10)(*DAT_102230b4)(0x42200000,0x42b40000);
              local_c = (float)fVar6;
              local_28 = local_8 * local_10 + local_c * DAT_10223188[0x10] + local_40 * local_3c;
              local_24 = local_8 * local_38 + local_c * DAT_10223188[0x11] + local_34 * local_40;
              local_20 = local_c * DAT_10223188[0x12] + local_8 * local_30 + local_40 * local_2c;
              FUN_1011cf70(local_4c,&local_28,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x54),
                           *(undefined4 *)(in_ECX + 0x38c),1);
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_c = (float)fVar6;
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_8 = (float)fVar6;
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_10 = (float)fVar6;
              pfVar4 = (float *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x100))(local_7c);
              local_60 = pfVar4[1] + local_8;
              local_5c = pfVar4[2] + local_10;
              local_64 = *pfVar4 + local_c;
              uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
              pfVar4 = &local_64;
LAB_1002e1c0:
              FUN_1011a800(local_4c,pfVar4,0,uVar3,local_c0);
              iVar1 = local_90;
              if (((local_90 != 0) || (iVar1 = (*DAT_1022305c)(0), iVar1 != 0)) &&
                 ((*(int **)(iVar1 + 0x7c) != (int *)0x0 &&
                  (iVar1 = (**(code **)(**(int **)(iVar1 + 0x7c) + 0xd0))(), iVar1 != 0)))) {
                (**(code **)(**(int **)(in_ECX + 0x368) + 100))
                          (*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 4),DAT_102267d4,2);
              }
              uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
              iVar1 = (*DAT_102230b0)(0xfffffff6,10);
              FUN_101182b0(uVar3,&local_1c,"weapons/p345/p345_fire.wav",0x3f800000,0,0,iVar1 + 100);
              (*DAT_10223000)(5,DAT_1022655c,*(int *)(in_ECX + 4) + 8,0);
              (*DAT_1022301c)(local_1c);
              (*DAT_1022301c)(local_18);
              (*DAT_1022301c)(local_14);
              (*DAT_10223008)(10);
              (*DAT_10223008)(5);
              (*DAT_10223008)(0x1e);
              (*DAT_10223004)();
              iVar1 = *(int *)(in_ECX + 0x39c);
            }
LAB_1002e2c8:
            if (iVar1 == 2) {
              FUN_10119320(*(int *)(in_ECX + 4) + 0x50);
              (**(code **)(*(int *)in_ECX + 0x228))(local_58);
              (**(code **)(*(int *)in_ECX + 0x224))(local_70,local_58);
              FUN_1000e7c0(1,local_4c,local_88);
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_c = (float)fVar6;
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_8 = (float)fVar6;
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_10 = (float)fVar6;
              pfVar4 = (float *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x100))(local_7c);
              local_28 = *pfVar4 + local_c;
              local_24 = pfVar4[1] + local_8;
              local_20 = pfVar4[2] + local_10;
              FUN_1011a800(local_4c,&local_28,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                           local_c0);
              if ((((local_90 != 0) || (local_90 = (*DAT_1022305c)(0), local_90 != 0)) &&
                  (*(int **)(local_90 + 0x7c) != (int *)0x0)) &&
                 (iVar1 = (**(code **)(**(int **)(local_90 + 0x7c) + 0xd0))(), iVar1 != 0)) {
                (**(code **)(**(int **)(in_ECX + 0x368) + 100))
                          (*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 4),DAT_102267d8,2);
              }
              uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
              iVar1 = (*DAT_102230b0)(0xfffffff6,10);
              FUN_101182b0(uVar3,&local_1c,"weapons/revolver/revolver_fire.wav",0x3f800000,0,0,
                           iVar1 + 100);
              (*DAT_10223000)(5,DAT_1022655c,*(int *)(in_ECX + 4) + 8,0);
              (*DAT_1022301c)(local_1c);
              (*DAT_1022301c)(local_18);
              (*DAT_1022301c)(local_14);
              (*DAT_10223008)(10);
              (*DAT_10223008)(5);
              (*DAT_10223008)(0x1e);
              (*DAT_10223004)();
            }
          }
        }
      }
      else if (*(int *)(in_ECX + 0x39c) == 2) {
        uVar3 = (**(code **)(**(int **)(in_ECX + 0x368) + 0x100))
                          (local_58,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_104);
        FUN_1011a800(&local_1c,uVar3);
        if (((local_d4 != 0) && (*(int **)(local_d4 + 0x7c) != (int *)0x0)) &&
           (iVar1 = (**(code **)(**(int **)(local_d4 + 0x7c) + 0xd0))(), iVar1 != 0)) {
          if (0 < *(int *)(in_ECX + 0x398)) {
            fVar6 = (float10)(*DAT_102230b4)(0x3f000000,0x3fc00000);
            fVar7 = *DAT_10223188;
            *(int *)(in_ECX + 0x398) = *(int *)(in_ECX + 0x398) + -1;
            iVar1 = *(int *)(in_ECX + 0x39c);
            *(float *)(in_ECX + 0x380) = (float)(fVar6 + (float10)fVar7);
            if (iVar1 == 1) {
              FUN_10119320(*(int *)(in_ECX + 4) + 0x50);
              (**(code **)(*(int *)in_ECX + 0x228))(local_58);
              (**(code **)(*(int *)in_ECX + 0x224))(local_7c,local_58);
              FUN_1000e7c0(1,local_4c,local_88);
              fVar6 = (float10)(*DAT_102230b4)(0xc2200000,0x42200000);
              local_38 = (float)fVar6;
              local_3c = DAT_10223188[10];
              local_c = DAT_10223188[0xb];
              local_8 = DAT_10223188[0xc];
              fVar6 = (float10)(*DAT_102230b4)(0x42960000,0x43480000);
              local_2c = (float)fVar6;
              local_30 = DAT_10223188[0xd];
              local_40 = DAT_10223188[0xe];
              local_10 = DAT_10223188[0xf];
              fVar6 = (float10)(*DAT_102230b4)(0x42200000,0x42b40000);
              local_34 = (float)fVar6;
              local_64 = local_2c * local_30 + local_34 * DAT_10223188[0x10] + local_38 * local_3c;
              local_60 = local_34 * DAT_10223188[0x11] + local_2c * local_40 + local_38 * local_c;
              local_5c = local_10 * local_2c + local_34 * DAT_10223188[0x12] + local_38 * local_8;
              FUN_1011cf70(local_4c,&local_64,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x54),
                           *(undefined4 *)(in_ECX + 0x38c),1);
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_c = (float)fVar6;
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_8 = (float)fVar6;
              fVar6 = (float10)(*DAT_102230b4)(0x40000000,0x41200000);
              local_10 = (float)fVar6;
              pfVar4 = (float *)(**(code **)(**(int **)(in_ECX + 0x368) + 0x100))(local_70);
              local_28 = local_c + *pfVar4;
              local_24 = pfVar4[1] + local_8;
              local_20 = pfVar4[2] + local_10;
              uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
              pfVar4 = &local_28;
              goto LAB_1002e1c0;
            }
            goto LAB_1002e2c8;
          }
          iVar1 = *(int *)(in_ECX + 0x39c);
          if (iVar1 == 1) {
            uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
            iVar1 = (*DAT_102230b0)(0xfffffff6,10);
            FUN_101182b0(uVar3,&local_1c,"weapons/weapon_fire_empty.wav",0x3f800000,0,0,iVar1 + 100)
            ;
            iVar1 = *(int *)(in_ECX + 0x39c);
          }
          if (iVar1 == 2) {
            uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
            iVar1 = (*DAT_102230b0)(0xfffffff6,10);
            FUN_101182b0(uVar3,&local_1c,"weapons/weapon_fire_empty_noclick.wav",0x3f800000,0,0,
                         iVar1 + 100);
          }
          in_ECX[900] = (CDoctorBoss)0x1;
          switch(*(undefined4 *)(in_ECX + 0x370)) {
          case 1:
            goto switchD_1002dee5_caseD_1;
          case 2:
            goto switchD_1002dee5_caseD_2;
          case 3:
            goto switchD_1002dee5_caseD_3;
          case 4:
            goto switchD_1002dee5_caseD_4;
          }
        }
      }
    }
switchD_1002dee5_default:
    if (*(float *)(in_ECX + 0x378) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x378))
    {
      switch(*(undefined4 *)(in_ECX + 0x370)) {
      case 1:
        iVar1 = FUN_1002cf50("box1shoot");
        if (*(int *)(in_ECX + 0x214) != iVar1) {
          pcVar8 = "box1shoot";
LAB_1002e642:
          FUN_1002e8c0(pcVar8);
        }
        break;
      case 2:
        iVar1 = FUN_1002cf50("box2shoot");
        if (*(int *)(in_ECX + 0x214) != iVar1) {
          pcVar8 = "box2shoot";
          goto LAB_1002e642;
        }
        break;
      case 3:
        iVar1 = FUN_1002cf50("box3shoot");
        if (*(int *)(in_ECX + 0x214) != iVar1) {
          pcVar8 = "box3shoot";
          goto LAB_1002e642;
        }
        break;
      case 4:
        iVar1 = FUN_1002cf50("box4shoot");
        if (*(int *)(in_ECX + 0x214) != iVar1) {
          pcVar8 = "box4shoot";
          goto LAB_1002e642;
        }
      }
    }
  }
  if (*(int *)(in_ECX + 0x368) == 0) {
    piVar5 = (int *)FUN_10118460(0,"player");
    if (((piVar5 != (int *)0x0) && (iVar1 = (**(code **)(*piVar5 + 0xd0))(), iVar1 != 0)) &&
       (iVar1 = FUN_100125e0(piVar5[1]), iVar1 != 0)) {
      *(int *)(in_ECX + 0x368) = iVar1;
    }
    if (*(int *)(in_ECX + 0x368) == 0) goto LAB_1002e757;
  }
  if (DAT_10226477 == '\0') {
    FUN_10119320(*(int *)(in_ECX + 4) + 0x50);
    iVar1 = *(int *)(in_ECX + 4);
    iVar2 = *(int *)(*(int *)(in_ECX + 0x368) + 4);
    fVar6 = (float10)FUN_100c2760(*(float *)(iVar2 + 8) - *(float *)(iVar1 + 8),
                                  *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc),
                                  *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10));
    local_8 = (float)fVar6;
    fVar7 = local_8 - *(float *)(*(int *)(in_ECX + 4) + 0x54);
    if (180.0 < fVar7) {
      fVar7 = fVar7 - 360.0;
    }
    if (fVar7 < -180.0) {
      fVar7 = fVar7 + 360.0;
    }
    FUN_1000eb70(0,fVar7);
    if (DAT_10226477 == '\0') goto LAB_1002e757;
  }
  FUN_1000eb70(0,0);
LAB_1002e757:
  (**(code **)(*(int *)in_ECX + 8))(0x3d4ccccd);
  return;
}

