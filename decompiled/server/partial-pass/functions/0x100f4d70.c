// rea decompile_all
// name: FUN_100f4d70
// address: 0x100f4d70
// body: available
// range: 0x100f4d70-0x100f58d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f4d70(void)

{
  float *pfVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  char *pcVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [40];
  
  pbVar3 = (byte *)((int)DAT_10223188[3] + (int)DAT_10223188[0x26]);
  pcVar9 = "c_server_settings";
  pbVar6 = pbVar3;
  do {
    bVar2 = *pbVar6;
    bVar10 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_100f4db5:
      uVar7 = -(uint)bVar10 | 1;
      goto LAB_100f4dba;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar10 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_100f4db5;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  uVar7 = 0;
LAB_100f4dba:
  if (uVar7 == 0) {
    return;
  }
  pcVar9 = "c_difficulty_settings";
  pbVar6 = pbVar3;
  do {
    bVar2 = *pbVar6;
    bVar10 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_100f4df0:
      uVar7 = -(uint)bVar10 | 1;
      goto LAB_100f4df5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar10 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_100f4df0;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  uVar7 = 0;
LAB_100f4df5:
  if (uVar7 == 0) {
    return;
  }
  pcVar9 = "c_loadgame";
  pbVar6 = pbVar3;
  do {
    bVar2 = *pbVar6;
    bVar10 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_100f4e24:
      uVar7 = -(uint)bVar10 | 1;
      goto LAB_100f4e29;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar10 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_100f4e24;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  uVar7 = 0;
LAB_100f4e29:
  if (uVar7 == 0) {
    return;
  }
  pcVar9 = "c_video_stress_test";
  do {
    bVar2 = *pbVar3;
    bVar10 = bVar2 < (byte)*pcVar9;
    if (bVar2 != *pcVar9) {
LAB_100f4e56:
      uVar7 = -(uint)bVar10 | 1;
      goto LAB_100f4e5b;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar3[1];
    bVar10 = bVar2 < (byte)pcVar9[1];
    if (bVar2 != pcVar9[1]) goto LAB_100f4e56;
    pbVar3 = pbVar3 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar2 != 0);
  uVar7 = 0;
LAB_100f4e5b:
  if (uVar7 == 0) {
    return;
  }
  iVar5 = *(int *)(in_ECX + 4);
  dVar13 = (double)(*(float *)(iVar5 + 0x20) * *(float *)(iVar5 + 0x20) +
                   *(float *)(iVar5 + 0x24) * *(float *)(iVar5 + 0x24));
  if (dVar13 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar13 = SQRT(dVar13);
  }
  iVar4 = FUN_100e4ed0();
  if ((iVar4 != 0) && ((*(uint *)(iVar5 + 0x1a8) & 0x40000) != 0)) {
    *(uint *)(iVar5 + 0x1a8) = *(uint *)(iVar5 + 0x1a8) & 0xfffbffff;
    fVar12 = DAT_102268b4;
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x80000) == 0) {
      fVar12 = DAT_102268b0;
    }
    if (*(char *)(in_ECX + 0x1ec8) != '\0') {
      fVar12 = DAT_102268bc;
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x214) = fVar12;
  }
  if ((*(int *)(in_ECX + 0x252c) != 0) && (*(char *)(*(int *)(in_ECX + 0x252c) + 0x104) != '\0')) {
    uVar7 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a8);
    if ((uVar7 & 0x40000) != 0) {
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) = uVar7 & 0xfffbffff;
      fVar12 = DAT_102268b4;
      if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x80000) == 0) {
        fVar12 = DAT_102268b0;
      }
      if (*(char *)(in_ECX + 0x1ec8) != '\0') {
        fVar12 = DAT_102268bc;
      }
      *(float *)(*(int *)(in_ECX + 4) + 0x214) = fVar12;
    }
  }
  if ((*(int *)(in_ECX + 0x252c) != 0) && (*(char *)(*(int *)(in_ECX + 0x252c) + 0x106) != '\0')) {
    uVar7 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a8);
    if ((uVar7 & 0x40000) != 0) {
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) = uVar7 & 0xfffbffff;
      fVar12 = DAT_102268b4;
      if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x80000) == 0) {
        fVar12 = DAT_102268b0;
      }
      if (*(char *)(in_ECX + 0x1ec8) != '\0') {
        fVar12 = DAT_102268bc;
      }
      *(float *)(*(int *)(in_ECX + 4) + 0x214) = fVar12;
    }
  }
  iVar5 = *(int *)(in_ECX + 4);
  if (((*(byte *)(iVar5 + 0x184) & 0x10) != 0) && ((*(uint *)(iVar5 + 0x1a8) & 0x40000) != 0)) {
    *(uint *)(iVar5 + 0x1a8) = *(uint *)(iVar5 + 0x1a8) & 0xfffbffff;
    fVar12 = DAT_102268b4;
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x80000) == 0) {
      fVar12 = DAT_102268b0;
    }
    if (*(char *)(in_ECX + 0x1ec8) != '\0') {
      fVar12 = DAT_102268bc;
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x214) = fVar12;
  }
  iVar5 = *(int *)(in_ECX + 4);
  if ((((*(uint *)(iVar5 + 0x1a8) & 0x200) != 0) && (*(char *)(in_ECX + 0x1ec8) != '\0')) &&
     ((*(uint *)(iVar5 + 0x1a8) & 0x41000) == 0x40000)) {
    FUN_100f6aa0();
    iVar5 = *(int *)(in_ECX + 4);
  }
  if ((*(uint *)(iVar5 + 0x1a8) & 0x44000) == 0x44000) {
    *(uint *)(iVar5 + 0x1a8) = *(uint *)(iVar5 + 0x1a8) & 0xfffbffff;
    fVar12 = DAT_102268b4;
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x80000) == 0) {
      fVar12 = DAT_102268b0;
    }
    if (*(char *)(in_ECX + 0x1ec8) != '\0') {
      fVar12 = DAT_102268bc;
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x214) = fVar12;
  }
  if ((*(int *)(in_ECX + 0x252c) != 0) && (*(int *)(*(int *)(in_ECX + 0x252c) + 0x140) != 0)) {
    uVar7 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a8);
    if ((uVar7 & 0x40000) != 0) {
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) = uVar7 & 0xfffbffff;
      fVar12 = DAT_102268b4;
      if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x80000) == 0) {
        fVar12 = DAT_102268b0;
      }
      if (*(char *)(in_ECX + 0x1ec8) != '\0') {
        fVar12 = DAT_102268bc;
      }
      *(float *)(*(int *)(in_ECX + 4) + 0x214) = fVar12;
    }
  }
  iVar5 = *(int *)(in_ECX + 4);
  if ((*(uint *)(iVar5 + 0x1a8) & 0x80000) == 0) {
    fVar12 = DAT_102268bc;
    if (*(char *)(in_ECX + 0x1ec8) == '\0') {
      if (((*(uint *)(iVar5 + 0x1a8) & 0x40000) != 0) && (*(float *)(iVar5 + 0x214) != DAT_102268b8)
         ) {
        *(float *)(iVar5 + 0x214) = DAT_102268b8;
        iVar5 = *(int *)(in_ECX + 4);
      }
      fVar12 = DAT_102268b0;
      if ((*(uint *)(iVar5 + 0x1a8) & 0x40000) != 0) goto LAB_100f51f5;
    }
    if (*(float *)(iVar5 + 0x214) != fVar12) {
      *(float *)(iVar5 + 0x214) = fVar12;
    }
  }
  else {
    fVar12 = DAT_102268bc;
    if (*(char *)(in_ECX + 0x1ec8) == '\0') {
      fVar12 = DAT_102268b4;
    }
    if (*(float *)(iVar5 + 0x214) != fVar12) {
      *(float *)(iVar5 + 0x214) = fVar12;
    }
  }
LAB_100f51f5:
  uVar7 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a8);
  if ((((((uVar7 & 0x40000) == 0) && (*(char *)(in_ECX + 0x1ec8) == '\0')) &&
       ((iVar5 = *(int *)(in_ECX + 0x252c), iVar5 == 0 || (*(int *)(iVar5 + 0x140) == 0)))) &&
      (((((*(uint *)(*(int *)(in_ECX + 4) + 0x184) & 0x1010) == 0x1000 &&
         (1.0 <= *(float *)(in_ECX + 0x21f0))) && (iVar4 = FUN_100e4ed0(), iVar4 == 0)) &&
       (((float)dVar13 != 0.0 && ((uVar7 & 0x4000) == 0)))))) &&
     (((iVar5 == 0 ||
       (((*(char *)(iVar5 + 0x104) == '\0' && (*(char *)(iVar5 + 0x106) == '\0')) &&
        (*(char *)(iVar5 + 0x178) == '\0')))) && (*(int *)(*(int *)(in_ECX + 4) + 0x1c4) != 2)))) {
    *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) = uVar7 | 0x40000;
    *(float *)(*(int *)(in_ECX + 4) + 0x214) = DAT_102268b8;
    if (*(char *)(in_ECX + 0x21e8) == '\0') {
      *(float *)(in_ECX + 0x21f0) = *(float *)(in_ECX + 0x21f0) - 5.0;
    }
  }
  iVar5 = *(int *)(in_ECX + 4);
  uVar7 = *(uint *)(iVar5 + 0x1a8);
  if (((uVar7 & 0x40000) != 0) &&
     (((((*(uint *)(iVar5 + 0x184) & 0x1000) == 0 ||
        (((iVar4 = *(int *)(in_ECX + 0x252c), iVar4 != 0 && (*(char *)(iVar4 + 0x178) != '\0')) ||
         ((*(uint *)(iVar5 + 0x184) & 0x10) != 0)))) ||
       ((*(float *)(in_ECX + 0x21f0) == 0.0 || ((uVar7 & 0x80000) != 0)))) ||
      ((iVar4 != 0 && (*(int *)(iVar4 + 0x140) != 0)))))) {
    *(uint *)(iVar5 + 0x1a8) = uVar7 & 0xfffbffff;
    fVar12 = DAT_102268bc;
    if (*(char *)(in_ECX + 0x1ec8) == '\0') {
      fVar12 = DAT_102268b0;
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x214) = fVar12;
  }
  fVar12 = *(float *)(in_ECX + 0x21f4);
  if ((fVar12 < *DAT_10223188) && (fVar11 = *(float *)(in_ECX + 0x21f0), 0.0 < fVar11)) {
    uVar7 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a8);
    if ((((uVar7 & 0x40000) == 0) || ((float)dVar13 == 0.0)) && (*(char *)(in_ECX + 0x3bc) == '\0'))
    {
      if ((uVar7 & 0x4000) == 0) {
        fVar12 = 1.0;
      }
      else {
        fVar12 = 2.0;
      }
      *(float *)(in_ECX + 0x21f0) = fVar11 + fVar12;
      if (*(char *)(in_ECX + 0x1ee0) == '\0') {
        fVar12 = *DAT_10223188 + 0.25;
      }
      else {
        fVar12 = *DAT_10223188 + 0.75;
      }
    }
    else {
      if (*(char *)(in_ECX + 0x21e8) == '\0') {
        if (*(char *)(in_ECX + 0x3bc) == '\0') {
          fVar11 = fVar11 - 2.0;
        }
        else {
          fVar11 = fVar11 - 1.0;
        }
        *(float *)(in_ECX + 0x21f0) = fVar11;
      }
      if (*(char *)(in_ECX + 0x1ee0) == '\0') {
        fVar12 = *DAT_10223188 + 0.1;
      }
      else {
        fVar12 = *DAT_10223188 + 0.05;
      }
    }
    *(float *)(in_ECX + 0x21f4) = fVar12;
  }
  if ((*DAT_10223188 <= fVar12) || (*(float *)(in_ECX + 0x21f0) != 0.0)) goto LAB_100f55f4;
  *(undefined4 *)(in_ECX + 0x21f0) = 0x3dcccccd;
  iVar5 = *(int *)(in_ECX + 4);
  *(float *)(in_ECX + 0x3c0) = *DAT_10223188 + 4.0;
  if ((*(int *)(iVar5 + 0x1c4) < 3) &&
     (*(float *)(in_ECX + 0x1e94) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x1e94)))
  {
    if (DAT_10222ee4 == (int *)0x0) {
LAB_100f5542:
      pcVar9 = "player/doctor/player_out_of_breath.wav";
      uVar8 = *(undefined4 *)(iVar5 + 0x20c);
      if (*(float *)(iVar5 + 0x268) == 0.0) {
        pcVar9 = "player/player_out_of_breath.wav";
      }
    }
    else {
      iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))();
      if (iVar5 == 0) {
        iVar5 = *(int *)(in_ECX + 4);
        goto LAB_100f5542;
      }
      iVar5 = (*DAT_102230b0)(0,1);
      pcVar9 = "player/police/player_out_of_breath1.wav";
      if (iVar5 != 1) {
        pcVar9 = "player/police/player_out_of_breath2.wav";
      }
      uVar8 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
    }
    FUN_100fc9f0(uVar8,2,pcVar9,0x3f800000,0x3f4ccccd,0,100);
    iVar5 = *(int *)(in_ECX + 4);
    *(float *)(in_ECX + 0x1e94) = *DAT_10223188 + 30.0;
  }
  if (*(char *)(in_ECX + 0x1ee0) == '\0') {
    fVar12 = *DAT_10223188 + 5.0;
  }
  else {
    fVar12 = *DAT_10223188 + 10.0;
  }
  *(float *)(in_ECX + 0x21f4) = fVar12;
  *(uint *)(iVar5 + 0x1a8) = *(uint *)(iVar5 + 0x1a8) | 0x80000;
  *(float *)(in_ECX + 0x1eec) = *DAT_10223188 + 5.0;
LAB_100f55f4:
  iVar5 = *(int *)(in_ECX + 4);
  if (((*(uint *)(iVar5 + 0x1a8) & 0x80000) != 0) && (1.0 <= *(float *)(in_ECX + 0x21f0))) {
    *(uint *)(iVar5 + 0x1a8) = *(uint *)(iVar5 + 0x1a8) & 0xfff7ffff;
    iVar5 = *(int *)(in_ECX + 4);
  }
  fVar12 = *(float *)(in_ECX + 0x21f0);
  if (fVar12 < 0.0) {
    *(undefined4 *)(in_ECX + 0x21f0) = 0;
    fVar12 = 0.0;
  }
  if (100.0 < fVar12) {
    *(undefined4 *)(in_ECX + 0x21f0) = 0x42c80000;
    fVar12 = 100.0;
  }
  if (*(float *)(in_ECX + 0x21ec) != fVar12) {
    (*DAT_10223000)(8,DAT_1022657c,0,*(undefined4 *)(iVar5 + 0x20c));
    (*DAT_10223008)((int)*(float *)(in_ECX + 0x21f0));
    fVar12 = *(float *)(in_ECX + 0x430);
    if (fVar12 == 0.0) {
      fVar12 = 0.0;
    }
    (*DAT_1022301c)(fVar12);
    (*DAT_10223004)();
    if (*(float *)(in_ECX + 0x430) != 0.0) {
      *(undefined4 *)(in_ECX + 0x430) = 0;
    }
    iVar5 = *(int *)(in_ECX + 4);
    *(undefined4 *)(in_ECX + 0x21ec) = *(undefined4 *)(in_ECX + 0x21f0);
  }
  if (((*(uint *)(iVar5 + 0x1a8) & 0x40000) == 0) || (2 < *(int *)(iVar5 + 0x1c4))) {
    if (*(float *)(iVar5 + 0x274) == 95.0) {
      (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(iVar5 + 0x20c));
      (*DAT_1022301c)(0x42480000);
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x274) = 0x42b40000;
    }
  }
  else if (*(float *)(iVar5 + 0x274) == 90.0) {
    (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(iVar5 + 0x20c));
    (*DAT_1022301c)(0x42480000);
    (*DAT_10223008)(0);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x274) = 0x42be0000;
  }
  iVar5 = *(int *)(in_ECX + 4);
  if (0 < *(int *)(iVar5 + 0x1c4)) {
    fStack_48 = *(float *)(iVar5 + 0xc) - 0.0;
    fStack_44 = *(float *)(iVar5 + 0x10) - 13.0;
    fStack_4c = *(float *)(iVar5 + 8) - 0.0;
    FUN_1011a800((float *)(iVar5 + 8),&fStack_4c,1,*(undefined4 *)(iVar5 + 0x20c),auStack_40);
    iVar5 = FUN_10119780(auStack_2c);
    if (iVar5 == -3) {
      if (30.0 < *(float *)(*(int *)(in_ECX + 4) + 0x214)) {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x214) = 0x41f00000;
      }
      if (*(char *)(in_ECX + 0x5c8) == '\0') {
        *(undefined1 *)(in_ECX + 0x5c8) = 1;
      }
    }
    else if (*(char *)(in_ECX + 0x5c8) != '\0') {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"player/exit_water.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      *(undefined1 *)(in_ECX + 0x5c8) = 0;
    }
  }
  pfVar1 = (float *)(*(int *)(in_ECX + 4) + 0x214);
  if (*pfVar1 <= 30.0 && *pfVar1 != 30.0) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x214) = 0x41f00000;
  }
  return;
}

