// rea decompile_all
// name: FUN_100c0750
// address: 0x100c0750
// body: available
// range: 0x100c0750-0x100c0e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c0750(float param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *in_ECX;
  byte *pbVar8;
  uint uVar9;
  char *pcVar10;
  int *piVar11;
  float unaff_ESI;
  float unaff_EDI;
  bool bVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auStack_4c [4];
  undefined4 uStack_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined8 local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_14 [16];
  
  if (*(char *)((int)in_ECX + 9) != '\0') {
    return;
  }
  piVar11 = (int *)in_ECX[1];
  pbVar3 = (byte *)(*piVar11 + (int)DAT_10223188[0x26]);
  pcVar10 = "monster_slowerstuck";
  pbVar8 = pbVar3;
  do {
    bVar1 = *pbVar8;
    bVar12 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_100c07a2:
      uVar9 = -(uint)bVar12 | 1;
      goto LAB_100c07a7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar8[1];
    bVar12 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_100c07a2;
    pbVar8 = pbVar8 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar9 = 0;
LAB_100c07a7:
  if (uVar9 == 0) {
    return;
  }
  pcVar10 = "monster_spitter";
  do {
    bVar1 = *pbVar3;
    bVar12 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_100c07d4:
      uVar9 = -(uint)bVar12 | 1;
      goto LAB_100c07d9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar12 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_100c07d4;
    pbVar3 = pbVar3 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar9 = 0;
LAB_100c07d9:
  if (uVar9 == 0) {
    return;
  }
  iVar4 = FUN_1000aaf0(piVar11,"monster_roofboss");
  if (iVar4 != 0) {
    return;
  }
  iVar4 = FUN_1000aaf0(piVar11,"monster_booksimon");
  if ((iVar4 != 0) && ((float)piVar11[0x5a] != 0.0)) {
    return;
  }
  iVar4 = FUN_100bdf30();
  if ((iVar4 != 0) && ((in_ECX[0xae] == 0 || (iVar4 = FUN_100bddb0(), iVar4 == 0)))) {
    (*DAT_1022303c)(2,"Tried to move with no route!\n");
LAB_100c0850:
    in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
    return;
  }
  if (*DAT_10223188 <= (float)in_ECX[0x84] && (float)in_ECX[0x84] != *DAT_10223188) {
    return;
  }
  iVar4 = in_ECX[0xaf];
  iVar2 = in_ECX[1];
  local_40 = (float)(iVar4 * 0x10);
  local_2c = (float)in_ECX[iVar4 * 4 + 0x8e] - *(float *)(iVar2 + 8);
  local_28 = (float)in_ECX[iVar4 * 4 + 0x8f] - *(float *)(iVar2 + 0xc);
  local_24 = (float)in_ECX[iVar4 * 4 + 0x90] - *(float *)(iVar2 + 0x10);
  puVar5 = (undefined8 *)FUN_10017e70(local_14);
  local_38 = *puVar5;
  local_30 = *(float *)(puVar5 + 1);
  local_3c = *(float *)((int)local_40 + 0x238 + (int)in_ECX);
  fVar16 = local_3c - *(float *)(iVar2 + 8);
  fVar13 = *(float *)((int)local_40 + 0x23c + (int)in_ECX) - *(float *)(iVar2 + 0xc);
  auVar15._0_8_ = (double)(fVar16 * fVar16 + fVar13 * fVar13);
  auVar15._8_8_ = 0;
  if (auVar15._0_8_ < 0.0) {
    __libm_sse2_sqrt_precise();
    dVar14 = auVar15._0_8_;
  }
  else {
    dVar14 = SQRT(auVar15._0_8_);
  }
  local_44 = (float)dVar14;
  if (*(int *)(iVar2 + 0x130) == 0) {
    FUN_100c00f0(local_3c,*(undefined4 *)((int)local_40 + 0x23c + (int)in_ECX),
                 *(undefined4 *)((int)local_40 + 0x240 + (int)in_ECX));
    (**(code **)(*in_ECX + 0x130))((int)*(float *)(in_ECX[1] + 0xb0));
    iVar4 = in_ECX[0xaf];
  }
  local_40 = local_44;
  if (200.0 <= local_44) {
    local_40 = 200.0;
  }
  if ((in_ECX[iVar4 * 4 + 0x91] & 0xfffffe7fU) == 2) {
    uVar6 = FUN_10017790();
  }
  else if ((in_ECX[iVar4 * 4 + 0x91] & 0xfffffe7fU) == 1) {
    uVar6 = FUN_10017790();
  }
  else {
    uVar6 = 0;
  }
  iVar4 = in_ECX[1];
  uStack_48 = 0;
  local_2c = *(float *)(iVar4 + 8) + (float)local_38 * local_40;
  local_28 = *(float *)(iVar4 + 0xc) + local_38._4_4_ * local_40;
  local_24 = *(float *)(iVar4 + 0x10) + local_30 * local_40;
  iVar4 = (**(code **)(*in_ECX + 0x158))((float *)(iVar4 + 8),&local_2c,uVar6,&uStack_48);
  if (iVar4 != 2) {
    (**(code **)(*in_ECX + 0x16c))();
    fVar13 = DAT_10223188[0x1d];
    if ((fVar13 == 0.0) && (fVar13 = (float)(*DAT_1022305c)(0), fVar13 == 0.0)) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = *(int **)((int)fVar13 + 0x7c);
      if (((piVar11 != (int *)0x0) &&
          (((FUN_10016a80(*(undefined4 *)(in_ECX[1] + 0x20c),*(undefined4 *)(piVar11[1] + 0x20c)),
            0.0 < (float)in_ECX[0xb0] && (iVar4 = (**(code **)(*piVar11 + 0x9c))(), iVar4 != 0)) &&
           (iVar4 = (**(code **)(*piVar11 + 0xd0))(), iVar4 == 0)))) &&
         (3.0 < *DAT_10223188 - (float)in_ECX[0x84])) {
        if (unaff_EDI < (float)in_ECX[0x3c]) {
          in_ECX[0x84] = (int)(*DAT_10223188 + (float)in_ECX[0xb0]);
          return;
        }
        goto LAB_100c0b05;
      }
    }
    iVar4 = (**(code **)(*in_ECX + 0x1bc))
                      (in_ECX[1] + 8,in_ECX + in_ECX[0xaf] * 4 + 0x8e,unaff_EDI,uVar6,&local_30);
    if (iVar4 == 0) {
      (**(code **)(*in_ECX + 0x16c))();
      if (((float)in_ECX[0xb0] <= 0.0) || ((*(byte *)(in_ECX + 0xbb) & 0x20) != 0)) {
        in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
        (*DAT_1022303c)(2,"%s Failed to move (%d)!\n",(int)DAT_10223188[0x26] + *(int *)in_ECX[1],
                        (uint)in_ECX[0xbb] >> 5 & 1);
        pcVar10 = "monster_sawcrazy";
        pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(in_ECX[1] + 0x20c) != 0) &
                                  *(int *)(in_ECX[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
        do {
          bVar1 = *pbVar8;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_100c0d10:
            uVar9 = -(uint)bVar12 | 1;
            goto LAB_100c0d15;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_100c0d10;
          pbVar8 = pbVar8 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar9 = 0;
LAB_100c0d15:
        if (((uVar9 == 0) &&
            (piVar7 = (int *)(**(code **)(*piVar11 + 0x78))(), piVar7 != (int *)0x0)) &&
           (piVar7 != in_ECX)) {
          pcVar10 = "monster_booksimon";
          pbVar8 = (byte *)(*(int *)(-(uint)(*(int *)(piVar7[1] + 0x20c) != 0) &
                                    *(int *)(piVar7[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
          do {
            bVar1 = *pbVar8;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_100c0d80:
              uVar9 = -(uint)bVar12 | 1;
              goto LAB_100c0d85;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_100c0d80;
            pbVar8 = pbVar8 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_100c0d85:
          if ((((uVar9 != 0) && (iVar4 = (**(code **)(*piVar7 + 0xbc))(), iVar4 != 0)) &&
              (iVar4 = (**(code **)(*piVar7 + 0xd0))(), iVar4 == 0)) && ((char)piVar7[0x7f] == '\0')
             ) {
            (**(code **)(*in_ECX + 0x16c))();
            FUN_100c1a70();
            uVar6 = (**(code **)(*in_ECX + 0x18c))(0x16);
            FUN_1000aa50(uVar6);
            *(undefined4 *)(piVar7[1] + 0x164) = 0;
            (**(code **)(*piVar7 + 0x6c))(piVar7[1],1);
          }
        }
        iVar4 = (**(code **)(*piVar11 + 0xd0))();
        if (iVar4 == 0) {
          return;
        }
        (**(code **)(*in_ECX + 0x23c))(piVar11);
        return;
      }
      FUN_100bddb0();
      iVar4 = FUN_100bdf30();
      if (iVar4 == 0) {
        if (*DAT_10223188 - (float)in_ECX[0x84] < 0.2) {
          in_ECX[0xbb] = in_ECX[0xbb] | 0x20;
        }
        in_ECX[0x84] = (int)(*DAT_10223188 + 0.1);
        return;
      }
      goto LAB_100c0850;
    }
    FUN_100bf8c0(local_30,local_2c,local_28,8);
    FUN_100c1ad0(uVar6);
  }
LAB_100c0b05:
  iVar4 = (**(code **)(*in_ECX + 0x164))(unaff_ESI);
  if (iVar4 != 0) {
    FUN_100bc290(unaff_EDI);
  }
  if ((float)in_ECX[0x84] < *DAT_10223188 || (float)in_ECX[0x84] == *DAT_10223188) {
    if (unaff_ESI < (float)in_ECX[0x3c] * param_1) {
      param_1 = unaff_ESI / (float)in_ECX[0x3c];
    }
    (**(code **)(*in_ECX + 0x160))(uVar6,auStack_4c,param_1);
    if (in_ECX[0xae] == 0) {
      (**(code **)(*in_ECX + 0x16c))();
      FUN_100c1a70();
    }
    return;
  }
  (**(code **)(*in_ECX + 0x16c))();
  return;
}

