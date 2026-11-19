// rea decompile_all
// name: FUN_1000bc60
// address: 0x1000bc60
// body: available
// range: 0x1000bc60-0x1000d098 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bc60(float *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *in_ECX;
  uint uVar10;
  char cVar11;
  bool bVar12;
  float10 fVar13;
  float fVar14;
  undefined4 *puVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  char *pcVar22;
  undefined4 *local_24 [2];
  undefined4 *local_1c;
  float fStack_18;
  undefined8 local_14;
  float local_c;
  
  local_1c = (undefined4 *)*param_1;
  switch(local_1c) {
  case (undefined4 *)0x1:
  case (undefined4 *)0x2:
    in_ECX[0x83] = (int)(param_1[1] + *DAT_10223188);
    return;
  case (undefined4 *)0x3:
  case (undefined4 *)0x56:
    goto switchD_1000bc83_caseD_3;
  case (undefined4 *)0x4:
    in_ECX[0x8a] = (int)param_1[1];
    break;
  case (undefined4 *)0x5:
  case (undefined4 *)0x6:
    if (in_ECX[3] != 0) {
      iVar8 = *(int *)(in_ECX[3] + 4);
      iVar9 = in_ECX[1];
      fVar18 = *(float *)(iVar8 + 0xc) - *(float *)(iVar9 + 0xc);
      fVar17 = *(float *)(iVar8 + 8) - *(float *)(iVar9 + 8);
      fVar14 = *(float *)(iVar8 + 0x10) - *(float *)(iVar9 + 0x10);
      dVar16 = (double)(fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14);
      if (dVar16 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      if (1.0 <= (float)dVar16) {
        cVar11 = (local_1c != (undefined4 *)0x5) + '\x03';
        iVar8 = FUN_1000e950(cVar11);
        if (iVar8 != -1) {
          if (in_ECX[3] == 0) {
            in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
            iVar8 = (int)DAT_10223188[0x26] + *(int *)in_ECX[1];
            pcVar22 = "%s: MoveTarget is missing!?!\n";
          }
          else {
            iVar8 = *(int *)(in_ECX[3] + 4);
            local_14 = *(undefined8 *)(iVar8 + 8);
            local_c = *(float *)(iVar8 + 0x10);
            iVar8 = FUN_100c1080(cVar11,0x40000000,&local_14);
            if (iVar8 != 0) break;
            in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
            iVar8 = (int)DAT_10223188[0x26] + *(int *)in_ECX[1];
            pcVar22 = "%s Failed to reach script!!!\n";
          }
          (*DAT_1022303c)(2,pcVar22,iVar8);
          FUN_100c1a70();
          break;
        }
      }
    }
    if ((in_ECX[0x60] & 0x40000000U) != 0) {
      return;
    }
    in_ECX[0x8b] = 4;
    break;
  case (undefined4 *)0x7:
    iVar8 = in_ECX[1];
    iVar9 = FUN_100177a0();
    iVar9 = *(int *)(iVar9 + 4);
    fVar18 = *(float *)(iVar9 + 0xc) - *(float *)(iVar8 + 0xc);
    fVar17 = *(float *)(iVar9 + 8) - *(float *)(iVar8 + 8);
    fVar14 = *(float *)(iVar9 + 0x10) - *(float *)(iVar8 + 0x10);
    dVar16 = (double)(fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14);
    if (dVar16 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar16 = SQRT(dVar16);
    }
    if (1.0 <= (float)dVar16) {
      iVar8 = FUN_100177a0();
      iVar8 = *(int *)(iVar8 + 4);
      *(undefined8 *)(in_ECX + 0xb1) = *(undefined8 *)(iVar8 + 8);
      in_ECX[0xb3] = *(int *)(iVar8 + 0x10);
      iVar8 = FUN_100c1120(3,0x3f000000);
      if (iVar8 != 0) {
        return;
      }
      goto LAB_1000c31e;
    }
    break;
  case (undefined4 *)0x8:
    iVar8 = in_ECX[1];
    iVar9 = FUN_100177a0();
    fVar14 = *(float *)(*(int *)(iVar9 + 4) + 0xc) - *(float *)(iVar8 + 0xc);
    fVar17 = *(float *)(*(int *)(iVar9 + 4) + 8) - *(float *)(iVar8 + 8);
    dVar16 = (double)(fVar14 * fVar14 + fVar17 * fVar17);
    if (dVar16 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar16 = SQRT(dVar16);
    }
    if ((float)dVar16 < (float)in_ECX[0xd8]) {
      if ((in_ECX[0x60] & 0x40000000U) == 0) {
        in_ECX[0x8b] = 4;
      }
      iVar8 = FUN_10118590(0,(int)DAT_10223188[0x26] + in_ECX[0xd6]);
      in_ECX[0xd6] = 0;
      FUN_10017740(0);
      if (iVar8 != 0) {
        FUN_1010f330(in_ECX);
        return;
      }
      (*DAT_1022303c)(1,"ERROR: reached target, but no rush entity!\n");
      return;
    }
    iVar8 = FUN_100177a0();
    iVar8 = *(int *)(iVar8 + 4);
    iVar9 = 4 - (uint)(in_ECX[0xd7] != 0);
    *(undefined8 *)(in_ECX + 0xb1) = *(undefined8 *)(iVar8 + 8);
    in_ECX[0xb3] = *(int *)(iVar8 + 0x10);
    iVar8 = FUN_1000e950(iVar9);
    if (iVar8 == -1) {
      iVar9 = (in_ECX[0xd7] != 0) + 3;
      (*DAT_1022303c)(2,"Rush target: monster %s doesnt support this movement activity\n",
                      (int)DAT_10223188[0x26] + *(int *)in_ECX[1]);
    }
    iVar8 = FUN_100c1120(iVar9,0x3f000000);
    if (iVar8 != 0) {
      return;
    }
    fVar14 = *DAT_10223188;
    in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
    in_ECX[0xd9] = (int)(fVar14 + 3.0);
    return;
  case (undefined4 *)0x9:
    iVar8 = FUN_10017790();
    if (iVar8 == 0) goto LAB_1000c31e;
    iVar9 = FUN_100bcbc0(*(int *)(iVar8 + 4) + 8,2,iVar8);
    if (iVar9 == 0) {
      iVar9 = *(int *)(iVar8 + 4);
      iVar1 = in_ECX[1];
      fVar18 = *(float *)(iVar9 + 0xc) - *(float *)(iVar1 + 0xc);
      fVar17 = *(float *)(iVar9 + 8) - *(float *)(iVar1 + 8);
      fVar14 = *(float *)(iVar9 + 0x10) - *(float *)(iVar1 + 0x10);
      dVar16 = (double)(fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14);
      if (dVar16 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      iVar8 = *(int *)(iVar8 + 4);
      iVar8 = (**(code **)(*in_ECX + 0x1c4))
                        (*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),
                         *(undefined4 *)(iVar8 + 0x10),*(undefined4 *)(iVar9 + 0x178),
                         *(undefined4 *)(iVar9 + 0x17c),*(undefined4 *)(iVar9 + 0x180),0,
                         (float)dVar16);
      if (iVar8 == 0) {
        pcVar22 = "GetPathToEnemy failed!!\n";
        goto LAB_1000c761;
      }
    }
    break;
  case (undefined4 *)0xa:
    pfVar6 = (float *)(in_ECX + 0xbd);
    iVar8 = FUN_100bcbc0(pfVar6,0x40,0);
    if (iVar8 == 0) {
      iVar8 = in_ECX[1];
      fVar18 = (float)in_ECX[0xbe] - *(float *)(iVar8 + 0xc);
      fVar17 = *pfVar6 - *(float *)(iVar8 + 8);
      fVar14 = (float)in_ECX[0xbf] - *(float *)(iVar8 + 0x10);
      dVar16 = (double)(fVar18 * fVar18 + fVar17 * fVar17 + fVar14 * fVar14);
      if (dVar16 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar16 = SQRT(dVar16);
      }
      iVar8 = (**(code **)(*in_ECX + 0x1c4))
                        (*pfVar6,in_ECX[0xbe],in_ECX[0xbf],*(undefined4 *)(iVar8 + 0x178),
                         *(undefined4 *)(iVar8 + 0x17c),*(undefined4 *)(iVar8 + 0x180),0,
                         (float)dVar16);
      if (iVar8 == 0) {
        pcVar22 = "GetPathToEnemyLKP failed!!\n";
        goto LAB_1000c761;
      }
    }
    break;
  case (undefined4 *)0xb:
    FUN_10119320(in_ECX[1] + 0x50);
    local_14 = CONCAT44((float)in_ECX[0xbe] - DAT_10223188[0xb] * 64.0,
                        (float)in_ECX[0xbd] - DAT_10223188[10] * 64.0);
    local_c = (float)in_ECX[0xbf] - DAT_10223188[0xc] * 64.0;
    iVar8 = FUN_100bcbc0(&local_14,0x40,0);
    if (iVar8 == 0) {
      pcVar22 = "GetPathToEnemyCorpse failed!!\n";
      goto LAB_1000c761;
    }
    break;
  default:
    (*DAT_1022303c)(2,"No StartTask entry for %d\n",local_1c);
    return;
  case (undefined4 *)0xd:
    uVar5 = FUN_10118460(0,"player");
    iVar8 = FUN_100bcbc0(in_ECX + 0xb1,0x40,uVar5);
    if (iVar8 == 0) goto LAB_1000c919;
    break;
  case (undefined4 *)0xe:
    FUN_100c1a70();
    iVar8 = FUN_10017780();
    if (iVar8 != 0) {
      iVar8 = FUN_100c1120(in_ECX[0xb4],0x3f800000);
joined_r0x1000c986:
      if (iVar8 != 0) break;
    }
    goto LAB_1000c919;
  case (undefined4 *)0xf:
    FUN_100c1a70();
    if (in_ECX[0xd3] != 0) {
      iVar8 = FUN_100c1080(in_ECX[0xb4],0x3f800000,*(int *)(in_ECX[0xd3] + 4) + 8);
      goto joined_r0x1000c986;
    }
LAB_1000c919:
    pcVar22 = "GetPathToSpot failed!!\n";
LAB_1000c761:
    (*DAT_1022303c)(2,pcVar22);
    in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
    return;
  case (undefined4 *)0x10:
    iVar8 = FUN_100c1080(in_ECX[0xb4],0x40000000,in_ECX[0xba] * 0x58 + DAT_102238bc);
    if (iVar8 == 0) {
      pcVar22 = "GetPathToHintNode failed!!\n";
      goto LAB_1000c761;
    }
    break;
  case (undefined4 *)0x11:
    *(undefined8 *)(in_ECX + 0xb1) = *(undefined8 *)(in_ECX + 0xb7);
    in_ECX[0xb3] = in_ECX[0xb9];
    iVar8 = FUN_100c1080(in_ECX[0xb4],0x40000000,in_ECX + 0xb1);
    if (iVar8 == 0) {
      pcVar22 = "GetPathToLastPosition failed!!\n";
      goto LAB_1000c761;
    }
    break;
  case (undefined4 *)0x12:
    iVar8 = (**(code **)(*in_ECX + 0x1ec))();
    if ((iVar8 == 0) || (iVar8 = FUN_100c1080(in_ECX[0xb4],0x40000000,iVar8), iVar8 == 0)) {
      pcVar22 = "GetPathToBestSound failed!!\n";
      goto LAB_1000c761;
    }
    break;
  case (undefined4 *)0x13:
    iVar8 = (**(code **)(*in_ECX + 0x1f0))();
    if ((iVar8 == 0) || (iVar8 = FUN_100c1080(in_ECX[0xb4],0x40000000,iVar8), iVar8 == 0)) {
      pcVar22 = "GetPathToBestScent failed!!\n";
      goto LAB_1000c761;
    }
    break;
  case (undefined4 *)0x14:
    iVar8 = FUN_1000e950(4);
    in_ECX[0xb4] = (iVar8 != -1) + 3;
    break;
  case (undefined4 *)0x15:
    if (*(int *)(in_ECX[1] + 0x108) == 5) {
      in_ECX[0xb4] = 5;
    }
    iVar8 = FUN_1000e950(3);
    in_ECX[0xb4] = 4 - (uint)(iVar8 != -1);
    break;
  case (undefined4 *)0x16:
    FUN_10119320(in_ECX[1] + 0x50);
    local_1c = (undefined4 *)((float)in_ECX[0x8e] - *(float *)(in_ECX[1] + 8));
    fStack_18 = (float)in_ECX[0x8f] - *(float *)(in_ECX[1] + 0xc);
    pfVar6 = (float *)FUN_1000b260(local_24);
    local_1c = (undefined4 *)DAT_10223188[0x10];
    fStack_18 = DAT_10223188[0x11];
    pfVar7 = (float *)FUN_1000b260(&local_14);
    in_ECX[0xb4] = (0.0 < pfVar7[1] * pfVar6[1] + *pfVar7 * *pfVar6) + 0xb;
    break;
  case (undefined4 *)0x17:
    in_ECX[0x84] = (int)*DAT_10223188;
    break;
  case (undefined4 *)0x18:
    *(undefined8 *)(in_ECX + 0xb7) = *(undefined8 *)(in_ECX[1] + 8);
    in_ECX[0xb9] = *(int *)(in_ECX[1] + 0x10);
    break;
  case (undefined4 *)0x19:
    *(ulonglong *)(in_ECX + 0xb7) = CONCAT44(DAT_10222f34._4_4_,(undefined4)DAT_10222f34);
    in_ECX[0xb9] = DAT_10222f3c;
    break;
  case (undefined4 *)0x1a:
    in_ECX[0x86] = (int)*(short *)(in_ECX[0xba] * 0x58 + 0x52 + DAT_102238bc);
    return;
  case (undefined4 *)0x1b:
    iVar8 = FUN_100be8e0();
    uVar10 = in_ECX[0x60];
    in_ECX[0xba] = iVar8;
    if (iVar8 == -1) goto LAB_1000bd53;
    bVar12 = (uVar10 & 0x40000000) == 0;
    goto LAB_1000bd0b;
  case (undefined4 *)0x1c:
    in_ECX[0xba] = -1;
    break;
  case (undefined4 *)0x1d:
    iVar8 = in_ECX[1];
    iVar9 = FUN_1000aaf0(iVar8,"monster_bosschainsaw");
    if ((iVar9 != 0) && (*(int *)(iVar8 + 0x110) == 1)) {
      return;
    }
    iVar9 = FUN_1000aaf0(iVar8,"monster_booksimon");
    if (iVar9 != 0) {
      return;
    }
    iVar9 = FUN_1000aaf0(iVar8,"monster_doctorboss");
    if (iVar9 != 0) {
      return;
    }
    iVar9 = FUN_1000aaf0(iVar8,"monster_sewerboss");
    if ((iVar9 != 0) && (*(int *)(iVar8 + 0x110) == 1)) {
      return;
    }
    iVar8 = FUN_10089c80();
    if (iVar8 != 0x3b) {
      iVar8 = FUN_10089c80();
      in_ECX[0x86] = iVar8;
      return;
    }
    break;
  case (undefined4 *)0x1e:
    goto switchD_1000bc83_caseD_1e;
  case (undefined4 *)0x1f:
    iVar8 = FUN_100bdf30();
    if (iVar8 == 0) {
      iVar8 = in_ECX[0xaf];
      FUN_100c00f0(in_ECX[iVar8 * 4 + 0x8e],in_ECX[iVar8 * 4 + 0x8f],in_ECX[iVar8 * 4 + 0x90]);
      FUN_1000bbf0();
      return;
    }
    pcVar22 = "No route to face!\n";
    goto LAB_1000c761;
  case (undefined4 *)0x20:
    FUN_100c00f0(in_ECX[0xbd],in_ECX[0xbe],in_ECX[0xbf]);
    FUN_1000bbf0();
    return;
  case (undefined4 *)0x21:
    *(undefined4 *)(in_ECX[1] + 0xac) = *(undefined4 *)(in_ECX[0xba] * 0x58 + 0x54 + DAT_102238bc);
    FUN_1000bbf0();
    return;
  case (undefined4 *)0x22:
    iVar8 = FUN_10017780();
    if (iVar8 != 0) {
      iVar8 = FUN_100177a0();
      iVar8 = *(int *)(iVar8 + 4);
      FUN_100c00f0(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),
                   *(undefined4 *)(iVar8 + 0x10));
      FUN_1000bbf0();
      return;
    }
    goto LAB_1000c31e;
  case (undefined4 *)0x23:
    FUN_100c00f0(in_ECX[0xb7],in_ECX[0xb8],in_ECX[0xb9]);
    FUN_1000bbf0();
    return;
  case (undefined4 *)0x24:
  case (undefined4 *)0x29:
    in_ECX[0x86] = 0x1c;
    return;
  case (undefined4 *)0x25:
  case (undefined4 *)0x2a:
    in_ECX[0x86] = 0x1d;
    return;
  case (undefined4 *)0x26:
  case (undefined4 *)0x2b:
    in_ECX[0x86] = 0x1e;
    return;
  case (undefined4 *)0x27:
  case (undefined4 *)0x2c:
    in_ECX[0x86] = 0x1f;
    return;
  case (undefined4 *)0x28:
  case (undefined4 *)0x2d:
    in_ECX[0x86] = 0x20;
    return;
  case (undefined4 *)0x2e:
    in_ECX[0x86] = 0x3c;
    return;
  case (undefined4 *)0x2f:
    in_ECX[0x86] = 0x3d;
    return;
  case (undefined4 *)0x39:
    break;
  case (undefined4 *)0x3a:
  case (undefined4 *)0x45:
    *(undefined1 *)(in_ECX + 0x7f) = 1;
    (**(code **)(*in_ECX + 0x22c))();
    break;
  case (undefined4 *)0x3b:
    in_ECX[0x86] = (int)param_1[1];
    break;
  case (undefined4 *)0x3c:
    iVar8 = (**(code **)(*in_ECX + 0x18c))((int)param_1[1]);
    if (iVar8 != 0) {
      FUN_1000aa50(iVar8);
      return;
    }
    goto LAB_1000c31e;
  case (undefined4 *)0x3d:
    in_ECX[200] = (int)param_1[1];
    break;
  case (undefined4 *)0x3e:
    in_ECX[200] = 0;
    break;
  case (undefined4 *)0x3f:
  case (undefined4 *)0x40:
  case (undefined4 *)0x41:
    in_ECX[0x86] = (int)param_1[1];
    return;
  case (undefined4 *)0x42:
    (**(code **)(*in_ECX + 0x234))();
    break;
  case (undefined4 *)0x43:
    (**(code **)(*in_ECX + 0x230))();
    break;
  case (undefined4 *)0x44:
    if ((char)in_ECX[0x7f] != '\0') {
      return;
    }
    (**(code **)(*in_ECX + 0x238))();
    break;
  case (undefined4 *)0x46:
    puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x1ec))();
    if (puVar4 == (undefined4 *)0x0) goto LAB_1000c31e;
    fVar13 = (float10)(**(code **)(*in_ECX + 0x1d0))();
    puVar15 = (undefined4 *)(float)fVar13;
    fVar14 = (float)(int)puVar4[4];
    uVar5 = *puVar4;
    uVar19 = puVar4[1];
    uVar3 = puVar4[2];
    uVar20 = (undefined4)DAT_10222f34;
    uVar21 = DAT_10222f34._4_4_;
    iVar8 = DAT_10222f3c;
    local_1c = puVar15;
    goto LAB_1000bfd2;
  case (undefined4 *)0x47:
    iVar8 = FUN_10017780();
    if (iVar8 == 0) {
      iVar8 = in_ECX[1];
    }
    else {
      iVar8 = FUN_100177a0();
      iVar8 = *(int *)(iVar8 + 4);
    }
    local_1c = (undefined4 *)(iVar8 + 8);
    iVar9 = FUN_100bea60(local_1c,(undefined4 *)(iVar8 + 0x178));
    if (iVar9 == 0) {
      fVar13 = (float10)(**(code **)(*in_ECX + 0x1d0))();
      puVar15 = (undefined4 *)(float)fVar13;
      uVar5 = *local_1c;
      fVar14 = 0.0;
      uVar19 = local_1c[1];
      uVar3 = local_1c[2];
      uVar20 = *(undefined4 *)(iVar8 + 0x178);
      uVar21 = *(undefined4 *)(iVar8 + 0x17c);
      iVar8 = *(int *)(iVar8 + 0x180);
      local_24[0] = puVar15;
      goto LAB_1000bfd2;
    }
    goto LAB_1000bfe7;
  case (undefined4 *)0x49:
    iVar8 = FUN_10017780();
    if (iVar8 == 0) goto LAB_1000c31e;
    fVar13 = (float10)(**(code **)(*in_ECX + 0x1d0))();
    puVar15 = (undefined4 *)(float)fVar13;
    local_24[0] = puVar15;
    goto LAB_1000be54;
  case (undefined4 *)0x4a:
    iVar8 = FUN_10017780();
    if (iVar8 == 0) goto LAB_1000c31e;
    puVar15 = (undefined4 *)param_1[1];
LAB_1000be54:
    fVar14 = 0.0;
LAB_1000be64:
    iVar8 = FUN_100177a0(fVar14,puVar15);
    iVar8 = *(int *)(iVar8 + 4);
    iVar8 = FUN_100177a0(*(undefined4 *)(iVar8 + 0x178),*(undefined4 *)(iVar8 + 0x17c),
                         *(undefined4 *)(iVar8 + 0x180));
    iVar8 = *(int *)(iVar8 + 4);
    iVar8 = (**(code **)(*in_ECX + 0x1c8))
                      (*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),
                       *(undefined4 *)(iVar8 + 0x10));
    uVar10 = in_ECX[0x60];
    if (iVar8 == 0) {
LAB_1000bd53:
      in_ECX[0x60] = uVar10 | 0x40000000;
      return;
    }
    bVar12 = (uVar10 & 0x40000000) == 0;
    goto LAB_1000bd0b;
  case (undefined4 *)0x4b:
    iVar8 = FUN_10017780();
    if (iVar8 == 0) goto LAB_1000c31e;
    fVar13 = (float10)(**(code **)(*in_ECX + 0x1d0))();
    puVar15 = (undefined4 *)(float)fVar13;
    fVar14 = param_1[1];
    local_24[0] = puVar15;
    goto LAB_1000be64;
  case (undefined4 *)0x4c:
    fVar13 = (float10)(**(code **)(*in_ECX + 0x1d0))();
    iVar8 = in_ECX[1];
    puVar15 = (undefined4 *)(float)fVar13;
    iVar9 = in_ECX[1];
    fVar14 = 0.0;
    uVar5 = *(undefined4 *)(iVar9 + 8);
    uVar19 = *(undefined4 *)(iVar9 + 0xc);
    uVar3 = *(undefined4 *)(iVar9 + 0x10);
    uVar20 = *(undefined4 *)(iVar8 + 0x178);
    uVar21 = *(undefined4 *)(iVar8 + 0x17c);
    iVar8 = *(int *)(iVar8 + 0x180);
    local_1c = puVar15;
LAB_1000bfd2:
    iVar8 = (**(code **)(*in_ECX + 0x1c8))(uVar5,uVar19,uVar3,uVar20,uVar21,iVar8,fVar14,puVar15);
    if (iVar8 == 0) {
LAB_1000c31e:
      in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
      return;
    }
LAB_1000bfe7:
    in_ECX[0x84] = (int)(param_1[1] + *DAT_10223188);
    break;
  case (undefined4 *)0x4d:
    FUN_100bd9f0(param_1[1]);
    break;
  case (undefined4 *)0x4e:
    *(undefined1 *)((int)in_ECX + 9) = 0;
    FUN_100c1a70();
    iVar8 = (**(code **)(*in_ECX + 0x20c))();
    in_ECX[0x86] = iVar8;
    *(undefined4 *)(in_ECX[1] + 0x174) = 1;
    return;
  case (undefined4 *)0x4f:
    piVar2 = (int *)in_ECX[0xd3];
    if ((0 < piVar2[0xea]) || (*DAT_10223188 < (float)piVar2[0xeb])) {
      iVar8 = FUN_1000b020();
      if ((iVar8 == 0) && (piVar2[0xdb] != 0)) {
        (**(code **)(*piVar2 + 0x248))();
        iVar8 = FUN_1000aba0(*(int *)(in_ECX[0xd3] + 0x36c) + (int)DAT_10223188[0x26],
                             *(int *)(in_ECX[0xd3] + 0x370) + (int)DAT_10223188[0x26]);
        if (iVar8 == 0) {
          return;
        }
        *(undefined4 *)(in_ECX[1] + 0x13c) = 0;
        return;
      }
      in_ECX[0x86] = 1;
      return;
    }
    break;
  case (undefined4 *)0x50:
    piVar2 = (int *)in_ECX[0xd3];
    iVar8 = FUN_1000b020();
    if (iVar8 != 0) {
      switch(piVar2[0xe3]) {
      case 0:
        in_ECX[0x86] = 0x1c;
        break;
      case 1:
        in_ECX[0x86] = 0x1d;
        break;
      case 2:
        in_ECX[0x86] = 0x1e;
        break;
      case 3:
        in_ECX[0x86] = 0x1f;
        break;
      case 4:
        in_ECX[0x86] = 0x3c;
        break;
      case 5:
        in_ECX[0x86] = 0x3d;
        break;
      case 6:
        in_ECX[0x86] = 0x20;
        break;
      case 7:
        in_ECX[0x86] = 7;
      }
      *(undefined4 *)(in_ECX[1] + 0x13c) = 0x3f800000;
      *(undefined4 *)(in_ECX[1] + 0x108) = 5;
      *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) & 0xfffffdff;
      in_ECX[0xd2] = 0;
      return;
    }
    (**(code **)(*piVar2 + 0x248))();
    if (in_ECX[0x3e] != 0) {
      FUN_1000aad0();
    }
    *(undefined4 *)(in_ECX[1] + 0x13c) = 0x3f800000;
    in_ECX[0xd2] = 0;
    return;
  case (undefined4 *)0x51:
    FUN_100fa990(0);
    break;
  case (undefined4 *)0x52:
    iVar8 = in_ECX[0xd3];
    if (iVar8 != 0) {
      if ((*(int *)(iVar8 + 900) == 4) || (*(int *)(iVar8 + 900) == 6)) {
        if (*(int *)(iVar8 + 0x388) == 0) {
          iVar8 = FUN_100177a0();
          *(undefined4 *)(in_ECX[1] + 0x54) = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x54);
        }
        else if (*(int *)(iVar8 + 0x388) == 1) {
          iVar8 = in_ECX[1];
          iVar9 = FUN_100177a0();
          iVar9 = *(int *)(iVar9 + 4);
          local_c = *(float *)(iVar9 + 0x10) - *(float *)(iVar8 + 0x10);
          local_14 = CONCAT44(*(float *)(iVar9 + 0xc) - *(float *)(iVar8 + 0xc),
                              *(float *)(iVar9 + 8) - *(float *)(iVar8 + 8));
          fVar13 = (float10)FUN_1011a930(&local_14);
          *(float *)(in_ECX[1] + 0x54) = (float)fVar13;
        }
        *(undefined4 *)(in_ECX[1] + 0xac) = *(undefined4 *)(in_ECX[1] + 0x54);
        iVar8 = in_ECX[1];
        *(undefined8 *)(iVar8 + 0x5c) = 0;
        *(undefined4 *)(iVar8 + 100) = 0;
        iVar8 = in_ECX[1];
        *(undefined8 *)(iVar8 + 0x20) = 0;
        *(undefined4 *)(iVar8 + 0x28) = 0;
        *(uint *)(in_ECX[1] + 0x118) = *(uint *)(in_ECX[1] + 0x118) | 0x20;
        iVar8 = in_ECX[0xd3];
      }
      if (*(int *)(iVar8 + 900) != 6) {
        iVar8 = in_ECX[1];
        iVar9 = *(int *)(in_ECX[3] + 4);
        *(undefined8 *)(iVar8 + 8) = *(undefined8 *)(iVar9 + 8);
        *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar9 + 0x10);
      }
    }
    break;
  case (undefined4 *)0x53:
    iVar8 = in_ECX[0xd3];
    if ((iVar8 != 0) && (*(int *)(iVar8 + 900) != 0)) {
      if (*(int *)(iVar8 + 0x388) == 0) {
        fVar13 = (float10)FUN_10117420(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x54));
        local_1c = (undefined4 *)(float)fVar13;
        *(undefined4 **)(in_ECX[1] + 0xac) = local_1c;
      }
      else if (*(int *)(iVar8 + 0x388) == 1) {
        iVar8 = FUN_10017780();
        if (iVar8 == 0) {
          iVar8 = in_ECX[0xd3];
        }
        else {
          iVar8 = FUN_100177a0();
        }
        iVar8 = *(int *)(iVar8 + 4);
        FUN_100c00f0(*(undefined4 *)(iVar8 + 8),*(undefined4 *)(iVar8 + 0xc),
                     *(undefined4 *)(iVar8 + 0x10));
      }
    }
    if ((in_ECX[0x60] & 0x40000000U) == 0) {
      in_ECX[0x8b] = 4;
    }
    in_ECX[0x86] = 1;
    FUN_100c1a70();
    return;
  case (undefined4 *)0x54:
    FUN_100fbb20(in_ECX);
    break;
  case (undefined4 *)0x55:
    fVar13 = (float10)(*DAT_102230b4)(0x3dcccccd,param_1[1]);
    in_ECX[0x83] = (int)(float)(fVar13 + (float10)*DAT_10223188);
    return;
  case (undefined4 *)0x57:
    if (in_ECX[0x86] == in_ECX[0xb4]) {
      iVar8 = (**(code **)(*in_ECX + 0x168))();
      in_ECX[0x86] = iVar8;
    }
    FUN_100c1a70();
    break;
  case (undefined4 *)0x58:
    fVar13 = (float10)FUN_10117420(*(undefined4 *)(in_ECX[1] + 0x54));
    local_24[0] = (undefined4 *)(float)fVar13;
    fVar14 = param_1[1] + (float)local_24[0];
    goto LAB_1000bcac;
  case (undefined4 *)0x59:
    fVar13 = (float10)FUN_10117420(*(undefined4 *)(in_ECX[1] + 0x54));
    local_24[0] = (undefined4 *)(float)fVar13;
    fVar14 = (float)local_24[0] - param_1[1];
LAB_1000bcac:
    fVar13 = (float10)FUN_10117420(fVar14);
    *(float *)(in_ECX[1] + 0xac) = (float)fVar13;
switchD_1000bc83_caseD_1e:
    FUN_1000bbf0();
    return;
  case (undefined4 *)0x5a:
    in_ECX[0xbb] = in_ECX[0xbb] | (int)param_1[1];
    break;
  case (undefined4 *)0x5b:
    in_ECX[0xbb] = in_ECX[0xbb] & ~(int)param_1[1];
    break;
  case (undefined4 *)0x5c:
    iVar8 = FUN_100bdf30();
    if (iVar8 == 0) {
      return;
    }
  }
  bVar12 = (in_ECX[0x60] & 0x40000000U) == 0;
LAB_1000bd0b:
  if (bVar12) {
    in_ECX[0x8b] = 4;
    return;
  }
switchD_1000bc83_caseD_3:
  return;
}

