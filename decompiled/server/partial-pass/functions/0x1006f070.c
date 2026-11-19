// rea decompile_all
// name: FUN_1006f070
// address: 0x1006f070
// body: available
// range: 0x1006f070-0x1006ffe9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006f070(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *in_ECX;
  float unaff_EBX;
  float unaff_ESI;
  float10 fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  char *pcVar12;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [12];
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [48];
  int iStack_10;
  
  if ((*(byte *)(in_ECX[1] + 0x118) & 0x80) != 0) goto LAB_1006ffdc;
  if (*(float *)(in_ECX[1] + 0x168) == 0.0) {
    iVar2 = FUN_1000e800(2);
    if (iVar2 != 0) {
      FUN_1000eb40(2,0);
    }
    if (((float)in_ECX[0xde] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xde]) &&
       (iVar2 = 1, 0 < (int)DAT_10223188[0x24])) {
      do {
        piVar3 = (int *)FUN_10119680(iVar2);
        if ((piVar3 != (int *)0x0) &&
           (((iVar4 = (**(code **)(*piVar3 + 0xbc))(), iVar4 != 0 &&
             (iVar4 = (**(code **)(*in_ECX + 0x154))(piVar3), iVar4 != 0)) &&
            (iVar4 = (**(code **)(*in_ECX + 0x114))(piVar3), iVar4 != 0)))) {
          iVar4 = piVar3[1];
          iVar1 = in_ECX[1];
          fVar11 = *(float *)(iVar4 + 0xc) - *(float *)(iVar1 + 0xc);
          fVar10 = *(float *)(iVar4 + 8) - *(float *)(iVar1 + 8);
          fVar8 = *(float *)(iVar4 + 0x10) - *(float *)(iVar1 + 0x10);
          dVar9 = (double)(fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8);
          if (dVar9 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar9 = SQRT(dVar9);
          }
          if ((float)dVar9 <= 1024.0) {
            FUN_10119320(in_ECX[1] + 0x50);
            iVar2 = in_ECX[1];
            iVar4 = piVar3[1];
            fStack_ac = *(float *)(iVar2 + 8) + 0.0;
            fStack_a8 = *(float *)(iVar2 + 0xc) + 0.0;
            fStack_a4 = *(float *)(iVar2 + 0x10) + 35.0;
            pfVar5 = (float *)(**(code **)(*piVar3 + 0x108))(auStack_58,&fStack_ac);
            iVar2 = piVar3[1];
            fStack_a8 = (*(float *)(iVar2 + 8) + (*pfVar5 - *(float *)(iVar4 + 8))) - unaff_ESI;
            fStack_a4 = (*(float *)(iVar2 + 0xc) + (pfVar5[1] - *(float *)(iVar4 + 0xc))) -
                        unaff_EBX;
            uStack_a0 = (double)CONCAT44(uStack_a0._4_4_,
                                         (*(float *)(iVar2 + 0x10) +
                                         (pfVar5[2] - *(float *)(iVar4 + 0x10))) - fStack_ac);
            FUN_10017e70(&uStack_88);
            FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"weapons/shotgun/shoot.wav",0x3f800000
                         ,0x3f4ccccd,0,100);
            FUN_100884f0(5,unaff_ESI,unaff_EBX,fStack_ac,uStack_88,uStack_84,uStack_80,0x3d32aae3,
                         0x3d32aae3,0x3d32aae3,0x44800000,9,10,1,0);
            fVar7 = (float10)(*DAT_102230b4)(0,0x3f000000);
            fStack_98 = *DAT_10223188 + 1.0;
            in_ECX[0xde] = (int)(float)(fVar7 + (float10)fStack_98);
            FUN_1000eb40(2,1);
            FUN_1000e7c0(2,&uStack_94,auStack_6c);
            (*DAT_10223000)(5,DAT_1022655c,in_ECX[1] + 8,0);
            (*DAT_1022301c)(uStack_94);
            (*DAT_1022301c)(fStack_90);
            (*DAT_1022301c)(uStack_8c);
            (*DAT_10223008)(10);
            (*DAT_10223008)(5);
            (*DAT_10223008)(0x1e);
            (*DAT_10223004)();
            piVar3 = (int *)FUN_1009f400("sprites/muzzleflash.spr",&uStack_94,0);
            FUN_10070580(5,0xff,0xff,0xff,0x80,0);
            *(undefined4 *)(piVar3[1] + 0x148) = 0x3e800000;
            (**(code **)(*piVar3 + 8))(0x3dcccccd);
            piVar3[0x1e] = (int)CBaseEntity::SUB_Remove;
            iVar2 = *(int *)(in_ECX[1] + 0x20c);
            if (iVar2 != 0) {
              uVar6 = (*DAT_10223064)(iVar2);
              *(undefined4 *)(piVar3[1] + 0x110) = uVar6;
              *(undefined4 *)(piVar3[1] + 0x114) = 2;
              *(int *)(piVar3[1] + 0x198) = iVar2;
              *(undefined4 *)(piVar3[1] + 0x108) = 0xc;
            }
            break;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= (int)DAT_10223188[0x24]);
    }
  }
  if (*(float *)(in_ECX[1] + 0x168) == 0.0) goto LAB_1006f61d;
  iVar2 = FUN_1000e800(2);
  if (iVar2 != 0) {
    FUN_1000eb40(2,0);
  }
  if (((char)in_ECX[0xdc] == '\0') && (*(char *)((int)in_ECX + 0x371) != '\0')) {
    *(undefined1 *)((int)in_ECX + 0x371) = 0;
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"weapons/tmp/tmp_shoot_end.wav",0x3f800000,
                 0x3f4ccccd,0,100);
  }
  iVar2 = 0;
  if ((in_ECX[0xe3] != 0) && (iVar4 = FUN_10017780(), iVar4 != 0)) {
    iVar2 = in_ECX[1];
    iVar4 = FUN_100177a0();
    fVar8 = *(float *)(*(int *)(iVar4 + 4) + 0xc) - *(float *)(iVar2 + 0xc);
    fVar10 = *(float *)(*(int *)(iVar4 + 4) + 8) - *(float *)(iVar2 + 8);
    dVar9 = (double)(fVar8 * fVar8 + fVar10 * fVar10);
    if (dVar9 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    iVar2 = (int)dVar9;
  }
  if ((in_ECX[0xdf] < 1) && (in_ECX[0xe0] == 1)) {
LAB_1006f5a9:
    iVar2 = in_ECX[0xe1];
    in_ECX[0xe0] = 3;
    if (iVar2 == 0) {
      pcVar12 = "shotgun_disappear";
LAB_1006f5d7:
      FUN_100c20c0(pcVar12);
    }
    else {
      if (iVar2 == 1) {
        pcVar12 = "glock_disappear";
        goto LAB_1006f5d7;
      }
      if (iVar2 == 2) {
        pcVar12 = "tmp_disappear";
        goto LAB_1006f5d7;
      }
    }
    uVar6 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),*(undefined4 *)(in_ECX[1] + 300));
    fVar7 = (float10)FUN_1000f390(uVar6);
    fStack_90 = (float)fVar7;
    in_ECX[0xdd] = (int)(fStack_90 + *DAT_10223188);
  }
  else if (in_ECX[0xda] < in_ECX[0xdb]) {
    if (((in_ECX[0xe0] == 1) && (0 < iVar2)) && (iVar2 <= *(int *)(in_ECX[1] + 0x24c)))
    goto LAB_1006f5a9;
  }
  else if (in_ECX[0xe0] == 1) goto LAB_1006f5a9;
LAB_1006f61d:
  if (*(float *)(in_ECX[1] + 0x168) != 0.0) {
    if (in_ECX[0xe0] == 3) {
      if ((float)in_ECX[0xdd] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdd]) {
        FUN_10119900();
        return;
      }
    }
    else if ((in_ECX[0xe0] == 2) && (in_ECX[0xda] < in_ECX[0xdb])) {
      iVar2 = in_ECX[0xe1];
      if (iVar2 == 0) {
        iVar2 = FUN_1000e9b0("shotgun_appear");
        if ((*(int *)(in_ECX[1] + 300) == iVar2) &&
           ((float)in_ECX[0xdd] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdd])) {
          pcVar12 = "shotgun_idle";
          goto LAB_1006f72c;
        }
      }
      else if (iVar2 == 1) {
        iVar2 = FUN_1000e9b0("glock_appear");
        if ((*(int *)(in_ECX[1] + 300) == iVar2) &&
           ((float)in_ECX[0xdd] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdd])) {
          pcVar12 = "glock_idle";
          goto LAB_1006f72c;
        }
      }
      else if (((iVar2 == 2) &&
               (iVar2 = FUN_1000e9b0("tmp_appear"), *(int *)(in_ECX[1] + 300) == iVar2)) &&
              ((float)in_ECX[0xdd] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdd])) {
        pcVar12 = "tmp_idle";
LAB_1006f72c:
        in_ECX[0xe0] = 1;
        FUN_100c20c0(pcVar12);
      }
    }
  }
  *(undefined1 *)(in_ECX + 0xdc) = 0;
  if ((*(float *)(in_ECX[1] + 0x168) != 0.0) && (in_ECX[0xe0] == 1)) {
    if (in_ECX[0xe3] == 0) {
      piVar3 = (int *)FUN_10118460(0,"player");
      if (((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0xd0))(), iVar2 != 0)) &&
         (iVar2 = FUN_100125e0(piVar3[1]), iVar2 != 0)) {
        in_ECX[0xe3] = iVar2;
      }
    }
    else {
      iVar2 = FUN_10017780();
      if (iVar2 != 0) {
        FUN_1000e7c0(0,auStack_58,auStack_4c);
        iVar2 = FUN_100177a0();
        iVar2 = *(int *)(iVar2 + 4);
        uStack_80 = *(undefined4 *)(iVar2 + 8);
        fStack_7c = *(float *)(iVar2 + 0xc);
        fStack_78 = *(float *)(iVar2 + 0x10) + 36.0;
        FUN_1011a800(auStack_58,&uStack_80,0,*(undefined4 *)(in_ECX[1] + 0x20c),auStack_40);
        if (((iStack_10 != 0) && (iVar2 = *(int *)(iStack_10 + 0x7c), iVar2 != 0)) &&
           (iVar4 = FUN_10017790(), iVar2 == iVar4)) {
          if ((char)in_ECX[0xdc] == '\0') {
            *(undefined1 *)(in_ECX + 0xdc) = 1;
          }
          if (((float)in_ECX[0xde] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xde]) &&
             (0 < in_ECX[0xdf])) {
            FUN_10119320(in_ECX[1] + 0x50);
            iVar2 = in_ECX[1];
            fStack_ac = *(float *)(iVar2 + 8) + 0.0;
            fStack_a8 = *(float *)(iVar2 + 0xc) + 0.0;
            fStack_a4 = *(float *)(iVar2 + 0x10) + 35.0;
            piVar3 = (int *)FUN_100177a0();
            iVar2 = FUN_100177a0();
            iVar2 = *(int *)(iVar2 + 4);
            pfVar5 = (float *)(**(code **)(*piVar3 + 0x108))(&fStack_70,&fStack_ac);
            fStack_98 = *pfVar5 - *(float *)(iVar2 + 8);
            fStack_7c = pfVar5[1] - *(float *)(iVar2 + 0xc);
            fStack_a8 = pfVar5[2] - *(float *)(iVar2 + 0x10);
            iVar2 = FUN_100177a0();
            iVar2 = *(int *)(iVar2 + 4);
            fStack_78 = (fStack_98 + *(float *)(iVar2 + 8)) - unaff_ESI;
            fStack_74 = (*(float *)(iVar2 + 0xc) + fStack_7c) - unaff_EBX;
            fStack_70 = (*(float *)(iVar2 + 0x10) + fStack_a8) - fStack_ac;
            FUN_10017e70(&fStack_a8);
            (*DAT_10223000)(1,DAT_10226608,0,*(undefined4 *)(*(int *)(in_ECX[0xe3] + 4) + 0x20c));
            uVar6 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
            (*DAT_10223010)(uVar6);
            (*DAT_10223008)(1);
            (*DAT_10223004)();
            iVar2 = in_ECX[0xe1];
            if (iVar2 == 0) {
              FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"weapons/shotgun/shoot.wav",
                           0x3f800000,0x3f4ccccd,0,100);
              FUN_100884f0(5,fStack_ac,fStack_a8,fStack_a4,(undefined4)uStack_a0,uStack_a0._4_4_,
                           fStack_98,0x3d32aae3,0x3d32aae3,0x3d32aae3,0x44800000,9,10,2,0);
              fVar7 = (float10)(*DAT_102230b4)(0,0x3f000000);
              fVar8 = *DAT_10223188;
              in_ECX[0xdf] = in_ECX[0xdf] + -1;
              uStack_a0 = (double)CONCAT44(uStack_a0._4_4_,fVar8 + 1.0);
              in_ECX[0xde] = (int)(float)(fVar7 + (float10)(fVar8 + 1.0));
              FUN_1000e7c0(2,&uStack_8c,auStack_64);
              piVar3 = (int *)FUN_1009f400("sprites/muzzleflash.spr",&uStack_8c,0);
              FUN_10070580(5,0xff,0xff,0xff,0x80,0);
              *(undefined4 *)(piVar3[1] + 0x148) = 0x3e800000;
              (**(code **)(*piVar3 + 8))(0x3dcccccd);
              piVar3[0x1e] = (int)CBaseEntity::SUB_Remove;
              iVar2 = *(int *)(in_ECX[1] + 0x20c);
              if (iVar2 != 0) {
                uVar6 = (*DAT_10223064)(iVar2);
                *(undefined4 *)(piVar3[1] + 0x110) = uVar6;
                *(undefined4 *)(piVar3[1] + 0x114) = 2;
LAB_1006fecf:
                *(int *)(piVar3[1] + 0x198) = iVar2;
                *(undefined4 *)(piVar3[1] + 0x108) = 0xc;
              }
            }
            else if (iVar2 == 1) {
              FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"weapons/glock/glock_fire.wav",
                           0x3f800000,0x3f4ccccd,0,100);
              FUN_100884f0(5,fStack_ac,fStack_a8,fStack_a4,(undefined4)uStack_a0,uStack_a0._4_4_,
                           fStack_98,0x3d0ef34d,0x3d0ef34d,0x3d0ef34d,0x44800000,9,4,1,0);
              fVar7 = (float10)(*DAT_102230b4)(0,0x3f000000);
              uStack_a0 = (double)fVar7;
              fVar8 = *DAT_10223188;
              in_ECX[0xdf] = in_ECX[0xdf] + -1;
              in_ECX[0xde] = (int)(float)((double)fVar8 + 0.6 + uStack_a0);
              FUN_1000e7c0(1,&uStack_8c,auStack_64);
              piVar3 = (int *)FUN_1009f400("sprites/muzzleflash.spr",&uStack_8c,0);
              FUN_10070580(5,0xff,0xff,0xff,0x80,0);
              *(undefined4 *)(piVar3[1] + 0x148) = 0x3dcccccd;
              (**(code **)(*piVar3 + 8))(0x3dcccccd);
              piVar3[0x1e] = (int)CBaseEntity::SUB_Remove;
              iVar2 = *(int *)(in_ECX[1] + 0x20c);
              if (iVar2 != 0) {
                uVar6 = (*DAT_10223064)(iVar2);
                *(undefined4 *)(piVar3[1] + 0x110) = uVar6;
                *(undefined4 *)(piVar3[1] + 0x114) = 1;
                goto LAB_1006fecf;
              }
            }
            else if (iVar2 == 2) {
              if (*(char *)((int)in_ECX + 0x371) == '\0') {
                *(undefined1 *)((int)in_ECX + 0x371) = 1;
                FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"weapons/tmp/tmp_shoot_loop.wav",
                             0x3f800000,0x3f4ccccd,0,100);
              }
              in_ECX[0xdf] = in_ECX[0xdf] + -1;
              FUN_1000e7c0(3,&uStack_8c,auStack_64);
              piVar3 = (int *)FUN_1009f400("sprites/muzzleflash.spr",&uStack_8c,0);
              FUN_10070580(5,0xff,0xff,0xff,0x80,0);
              *(undefined4 *)(piVar3[1] + 0x148) = 0x3e800000;
              (**(code **)(*piVar3 + 8))(0x3dcccccd);
              piVar3[0x1e] = (int)CBaseEntity::SUB_Remove;
              iVar2 = *(int *)(in_ECX[1] + 0x20c);
              if (iVar2 != 0) {
                uVar6 = (*DAT_10223064)(iVar2);
                *(undefined4 *)(piVar3[1] + 0x110) = uVar6;
                *(undefined4 *)(piVar3[1] + 0x114) = 3;
                *(int *)(piVar3[1] + 0x198) = iVar2;
                *(undefined4 *)(piVar3[1] + 0x108) = 0xc;
              }
              FUN_100884f0(1,fStack_ac,fStack_a8,fStack_a4,(undefined4)uStack_a0,uStack_a0._4_4_,
                           fStack_98,0x3db280f1,0x3db280f1,0x3db280f1,0x44800000,9,1,1,0);
              in_ECX[0xde] = (int)(*DAT_10223188 + 0.09);
            }
          }
        }
      }
    }
  }
  if (((*(float *)(in_ECX[1] + 0x168) != 0.0) && (in_ECX[0xe3] != 0)) &&
     (iVar2 = FUN_10017780(), iVar2 != 0)) {
    FUN_10119320(in_ECX[1] + 0x50);
    FUN_100177a0();
    iVar2 = in_ECX[1];
    iVar4 = FUN_100177a0();
    iVar4 = *(int *)(iVar4 + 4);
    fVar7 = (float10)FUN_100c2760(*(float *)(iVar4 + 8) - *(float *)(iVar2 + 8),
                                  *(float *)(iVar4 + 0xc) - *(float *)(iVar2 + 0xc),
                                  *(float *)(iVar4 + 0x10) - *(float *)(iVar2 + 0x10));
    uStack_a0 = (double)CONCAT44(uStack_a0._4_4_,(float)fVar7);
    fVar8 = (float)fVar7 - *(float *)(in_ECX[1] + 0x54);
    if (180.0 < fVar8) {
      fVar8 = fVar8 - 360.0;
    }
    if (fVar8 < -180.0) {
      fVar8 = fVar8 + 360.0;
    }
    FUN_1000eb70(2,fVar8);
  }
LAB_1006ffdc:
  FUN_100c0430();
  return;
}

