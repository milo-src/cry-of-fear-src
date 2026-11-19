// rea decompile_all
// name: FUN_100f6ca0
// address: 0x100f6ca0
// body: available
// range: 0x100f6ca0-0x100f7588 inclusive
// range: 0x100f7590-0x100f8628 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f6ca0(void)

{
  uint *puVar1;
  float fVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  byte *pbVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  undefined8 *puVar16;
  uint in_ECX;
  char *pcVar17;
  byte *pbVar18;
  uint uVar19;
  undefined4 *puVar20;
  bool bVar21;
  float fVar22;
  undefined1 local_2c [12];
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  local_c = in_ECX;
  if (*(int *)(in_ECX + 0x24cc) == 0) goto LAB_100f787c;
  *(undefined4 *)(in_ECX + 0x24cc) = 0;
  DAT_10217fe4 = 0;
  iVar8 = FUN_10118460(0,"cof_survivalmode");
  if ((((iVar8 != 0) && (iVar8 = FUN_10090400(*(undefined4 *)(iVar8 + 4)), iVar8 != 0)) &&
      (0 < *(int *)(*(int *)(iVar8 + 4) + 0x24c))) && (*(char *)(iVar8 + 0xdd) == '\x01')) {
    if (DAT_10222f14 != 0) {
      *(undefined4 *)(in_ECX + 0x3f4) = 0x1010101;
      *(undefined4 *)(in_ECX + 0x3f8) = 0x1010101;
      *(undefined4 *)(in_ECX + 0x3fc) = 0x1010101;
      *(undefined4 *)(in_ECX + 0x400) = 0x1010101;
      *(undefined4 *)(in_ECX + 0x404) = 0x1010101;
      *(undefined4 *)(in_ECX + 0x408) = 0x1010101;
      *(undefined4 *)(in_ECX + 0x40c) = 0x1010101;
      *(undefined4 *)(in_ECX + 0x410) = 0x1010101;
    }
    uVar11 = *(undefined4 *)(iVar8 + 0xf4);
    uVar5 = *(undefined4 *)(iVar8 + 0xf8);
    uVar6 = *(undefined4 *)(iVar8 + 0xfc);
    local_14 = *(undefined4 *)(iVar8 + 0xe8);
    (*DAT_10223000)(1,DAT_102266a4,0,*(undefined4 *)(*(int *)(local_c + 4) + 0x20c));
    (*DAT_10223008)(1);
    (*DAT_10223008)(uVar11);
    (*DAT_10223008)(uVar5);
    (*DAT_10223008)(uVar6);
    (*DAT_10223010)(local_14);
    (*DAT_10223004)();
    in_ECX = local_c;
    if (DAT_10222f20 != 0) {
      (*DAT_10223000)(2,DAT_102266a8,0,0);
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223008)(3);
      (*DAT_10223004)();
      in_ECX = local_c;
    }
  }
  (*DAT_10223000)(1,DAT_102266b4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  (*DAT_10223004)();
  if (((DAT_10222ee4 != (int *)0x0) && (iVar8 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar8 != 0))
     && (iVar8 = 1, 0 < (int)DAT_10223188[0x24])) {
    do {
      iVar9 = FUN_10119680(iVar8);
      if (iVar9 != 0) {
        iVar10 = FUN_100e4c30();
        if (iVar10 == 0) {
          iVar10 = FUN_100e4d60();
          if (iVar10 == 0) {
            *(undefined4 *)(*(int *)(iVar9 + 4) + 0x26c) = 0;
          }
          else {
            *(undefined4 *)(*(int *)(iVar9 + 4) + 0x26c) = 0x40000000;
          }
        }
        else {
          *(undefined4 *)(*(int *)(iVar9 + 4) + 0x26c) = 0x3f800000;
        }
        (*DAT_10223000)(2,DAT_102266c8,0,0);
        uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar9 + 4) + 0x20c));
        (*DAT_10223008)(uVar11);
        (*DAT_10223008)((int)*(float *)(*(int *)(iVar9 + 4) + 0x26c));
        (*DAT_10223004)();
        iVar10 = FUN_100e2380("weapon_syringe");
        if (iVar10 == 0) {
          (*DAT_10223000)(2,DAT_102266dc,0,0);
          uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar9 + 4) + 0x20c));
          (*DAT_10223008)(uVar11);
        }
        else {
          (*DAT_10223000)();
          uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar9 + 4) + 0x20c));
          (*DAT_10223008)(uVar11);
        }
        (*DAT_10223008)(iVar10 != 0);
        (*DAT_10223004)();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= (int)DAT_10223188[0x24]);
  }
  (*DAT_10223000)(1,DAT_102264a8,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  (*DAT_10223008)(0);
  (*DAT_10223004)();
  (*DAT_10223000)(1,DAT_10226574,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x1ebc));
  (*DAT_10223004)();
  (*DAT_10223000)(1,DAT_1022661c,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x60c));
  (*DAT_10223004)();
  pbVar18 = &DAT_101dbbe0;
  pbVar12 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  do {
    bVar4 = *pbVar12;
    bVar21 = bVar4 < *pbVar18;
    if (bVar4 != *pbVar18) {
LAB_100f6ff3:
      uVar13 = -(uint)bVar21 | 1;
      goto LAB_100f6ff8;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar12[1];
    bVar21 = bVar4 < pbVar18[1];
    if (bVar4 != pbVar18[1]) goto LAB_100f6ff3;
    pbVar12 = pbVar12 + 2;
    pbVar18 = pbVar18 + 2;
  } while (bVar4 != 0);
  uVar13 = 0;
LAB_100f6ff8:
  if (uVar13 == 0) {
LAB_100f70b6:
    (*DAT_10223000)(1,DAT_10226650,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(1);
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX + 0x3b8) = 1;
    FUN_100deff0(0);
  }
  else {
    pbVar18 = &DAT_101dbbf4;
    pbVar12 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    do {
      bVar4 = *pbVar12;
      bVar21 = bVar4 < *pbVar18;
      if (bVar4 != *pbVar18) {
LAB_100f7037:
        uVar13 = -(uint)bVar21 | 1;
        goto LAB_100f703c;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar12[1];
      bVar21 = bVar4 < pbVar18[1];
      if (bVar4 != pbVar18[1]) goto LAB_100f7037;
      pbVar12 = pbVar12 + 2;
      pbVar18 = pbVar18 + 2;
    } while (bVar4 != 0);
    uVar13 = 0;
LAB_100f703c:
    if (uVar13 == 0) goto LAB_100f70b6;
    pbVar18 = &DAT_101dbc08;
    pbVar12 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    do {
      bVar4 = *pbVar12;
      bVar21 = bVar4 < *pbVar18;
      if (bVar4 != *pbVar18) {
LAB_100f7077:
        uVar13 = -(uint)bVar21 | 1;
        goto LAB_100f707c;
      }
      if (bVar4 == 0) break;
      bVar4 = pbVar12[1];
      bVar21 = bVar4 < pbVar18[1];
      if (bVar4 != pbVar18[1]) goto LAB_100f7077;
      pbVar12 = pbVar12 + 2;
      pbVar18 = pbVar18 + 2;
    } while (bVar4 != 0);
    uVar13 = 0;
LAB_100f707c:
    if (uVar13 == 0) goto LAB_100f70b6;
    *(undefined4 *)(in_ECX + 0x3b8) = 0;
    (*DAT_10223000)(1,DAT_10226650,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(0);
    (*DAT_10223004)();
  }
  iVar8 = FUN_10017780();
  if (iVar8 == 0) {
    (*DAT_10223000)();
    (*DAT_10223010)(0xffffffff);
    (*DAT_10223008)(0);
  }
  else {
    (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    iVar8 = FUN_100177a0();
    uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x20c));
    (*DAT_10223010)(uVar11);
    (*DAT_10223008)(0);
  }
  (*DAT_10223004)();
  iVar8 = FUN_10017780();
  if (iVar8 == 0) {
    (*DAT_10223000)();
    (*DAT_10223010)(0xffffffff);
  }
  else {
    (*DAT_10223000)(1,DAT_10226640,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    iVar8 = FUN_100177a0();
    uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar8 + 4) + 0x20c));
    (*DAT_10223010)(uVar11);
  }
  (*DAT_10223004)();
  iVar9 = 1;
  iVar8 = in_ECX + 0x7f8;
  do {
    (*DAT_10223000)(1,DAT_10226648,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(iVar9);
    (*DAT_10223008)(0);
    (*DAT_10223010)(0);
    (*DAT_10223008)(0);
    (*DAT_10223020)(iVar8 + -0x10);
    (*DAT_10223020)(iVar8);
    (*DAT_10223020)(iVar8 + 0x10);
    (*DAT_10223020)(iVar8 + 0x20);
    (*DAT_10223020)(iVar8 + -0x50);
    (*DAT_10223020)(iVar8 + -0x40);
    (*DAT_10223020)(iVar8 + -0x30);
    (*DAT_10223020)(iVar8 + -0x20);
    (*DAT_10223020)(iVar8 + 0x30);
    (*DAT_10223020)(iVar8 + 0x60);
    (*DAT_10223020)(iVar8 + 0xa0);
    (*DAT_10223004)();
    iVar9 = iVar9 + 1;
    iVar8 = iVar8 + 0x120;
  } while (iVar9 < 0x11);
  if ((DAT_10222ee4 != (int *)0x0) && (iVar8 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar8 != 0)) {
    local_5 = '\0';
    iVar8 = FUN_10017780();
    if ((iVar8 != 0) && (iVar8 = FUN_100177a0(), *(int *)(*(int *)(iVar8 + 4) + 0x248) != 0)) {
      local_5 = '\x01';
      iVar8 = FUN_100177a0();
      FUN_10117180(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                   *(undefined4 *)(*(int *)(iVar8 + 4) + 0x20c));
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a8);
      *puVar1 = *puVar1 | 0x80;
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x170) = 0;
      iVar8 = FUN_100177a0();
      if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 0x10) != 0) {
        *(uint *)(in_ECX + 0x2500) = *(uint *)(in_ECX + 0x2500) | 8;
      }
      iVar8 = FUN_100177a0();
      if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 0x20) != 0) {
        *(undefined4 *)(in_ECX + 0x1eb4) = 1;
      }
      iVar8 = FUN_100177a0();
      if (*(int *)(*(int *)(iVar8 + 4) + 0x24c) != 0) {
        *(uint *)(in_ECX + 0x2500) = *(uint *)(in_ECX + 0x2500) | 0x10;
      }
      iVar8 = FUN_100177a0();
      if ((*(uint *)(*(int *)(iVar8 + 4) + 0x1a4) & 0x100) != 0) {
        (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223008)(1);
        (*DAT_10223008)(1);
        (*DAT_10223020)(&DAT_101a2496);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
      }
    }
    iVar8 = 1;
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        iVar9 = FUN_10119680(iVar8);
        if (((iVar9 != 0) && (iVar10 = FUN_10017780(), iVar10 != 0)) &&
           (iVar10 = FUN_100177a0(), *(int *)(*(int *)(iVar10 + 4) + 0x248) != 0)) {
          *(undefined4 *)(in_ECX + 0x2348) = *(undefined4 *)(iVar9 + 0x2348);
          *(undefined4 *)(in_ECX + 0x234c) = *(undefined4 *)(iVar9 + 0x234c);
          iVar8 = FUN_100177a0();
          FUN_10117180(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                       *(undefined4 *)(*(int *)(iVar8 + 4) + 0x20c));
          puVar1 = (uint *)(*(int *)(iVar9 + 4) + 0x1a8);
          *puVar1 = *puVar1 | 0x80;
          *(undefined4 *)(*(int *)(iVar9 + 4) + 0x170) = 0;
          iVar8 = FUN_100177a0();
          if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 0x10) != 0) {
            *(uint *)(in_ECX + 0x2500) = *(uint *)(in_ECX + 0x2500) | 8;
          }
          iVar8 = FUN_100177a0();
          if ((*(byte *)(*(int *)(iVar8 + 4) + 0x1a4) & 0x20) != 0) {
            *(undefined4 *)(in_ECX + 0x1eb4) = 1;
          }
          iVar8 = FUN_100177a0();
          if (*(int *)(*(int *)(iVar8 + 4) + 0x24c) != 0) {
            *(uint *)(in_ECX + 0x2500) = *(uint *)(in_ECX + 0x2500) | 0x10;
          }
          iVar8 = FUN_100177a0();
          if ((*(uint *)(*(int *)(iVar8 + 4) + 0x1a4) & 0x100) != 0) {
            (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
            (*DAT_10223008)(1);
            (*DAT_10223008)(1);
            (*DAT_10223020)(&DAT_101a2496);
            (*DAT_10223008)(0);
            (*DAT_10223004)();
          }
          goto LAB_100f744c;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= (int)DAT_10223188[0x24]);
    }
    if (local_5 == '\0') {
      uVar11 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
      FUN_10117180(uVar11,uVar11);
    }
  }
LAB_100f744c:
  puVar20 = (undefined4 *)(in_ECX + 0x2200);
  iVar8 = 1;
  if (*(char *)(in_ECX + 0x1e9c) == '\0') {
    do {
      FUN_100e4360(iVar8,*puVar20,0);
      iVar8 = iVar8 + 1;
      puVar20 = puVar20 + 1;
    } while (iVar8 < 7);
  }
  else {
    do {
      FUN_100e4360(iVar8,*puVar20,0);
      iVar8 = iVar8 + 1;
      puVar20 = puVar20 + 1;
    } while (iVar8 < 4);
  }
  iVar8 = 1;
  do {
    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(iVar8);
    (*DAT_10223008)(1);
    (*DAT_10223004)();
    iVar8 = iVar8 + 1;
  } while (iVar8 < 4);
  if (*(int *)(in_ECX + 0x3dc) != 0) {
    (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(1);
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x3dc));
    (*DAT_10223004)();
  }
  if (*(int *)(in_ECX + 0x3e0) != 0) {
    (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(2);
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x3e0));
    (*DAT_10223004)();
  }
  if (*(int *)(in_ECX + 0x3e4) != 0) {
    (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(3);
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x3e4));
    (*DAT_10223004)();
  }
  if (*(int *)(in_ECX + 0x24d0) == 0) {
    (*DAT_10223000)(1,DAT_102264ac,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223004)();
    (**(code **)(*DAT_10222ee4 + 0x38))(in_ECX);
    *(undefined4 *)(in_ECX + 0x24d0) = 1;
    if ((DAT_10222ee4 != (int *)0x0) && (iVar8 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar8 != 0))
    {
      FUN_10101ff0("game_playerjoin",in_ECX,in_ECX,3,0);
    }
  }
  bVar21 = *(char *)(in_ECX + 0x5f4) == '\0';
  if (bVar21) {
    (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  }
  else {
    (*DAT_10223000)();
  }
  (*DAT_10223008)(!bVar21);
  (*DAT_10223020)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x5f8));
  (*DAT_10223020)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x5fc));
  (*DAT_10223010)(*(undefined4 *)(in_ECX + 0x604));
  (*DAT_10223010)(*(undefined4 *)(in_ECX + 0x600));
  (*DAT_10223004)();
  FUN_10101ff0("game_playerspawn",in_ECX,in_ECX,3,0);
  FUN_100e2f60();
  if (*(int *)(in_ECX + 0x1ef0) != 0) {
    (*DAT_10223000)(1,DAT_102265dc,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x1ef0));
    (*DAT_10223004)();
  }
  pcVar17 = "c_video_stress_test";
  pbVar12 = (byte *)((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
  do {
    bVar4 = *pbVar12;
    bVar21 = bVar4 < (byte)*pcVar17;
    if (bVar4 != *pcVar17) {
LAB_100f7821:
      uVar13 = -(uint)bVar21 | 1;
      goto LAB_100f7826;
    }
    if (bVar4 == 0) break;
    bVar4 = pbVar12[1];
    bVar21 = bVar4 < (byte)pcVar17[1];
    if (bVar4 != pcVar17[1]) goto LAB_100f7821;
    pbVar12 = pbVar12 + 2;
    pcVar17 = pcVar17 + 2;
  } while (bVar4 != 0);
  uVar13 = 0;
LAB_100f7826:
  if (uVar13 == 0) {
    piVar14 = (int *)FUN_10118460(0,"cof_stresstest");
    piVar15 = (int *)FUN_10118460(0,"trigger_camera");
    if (piVar14 != (int *)0x0) {
      (**(code **)(*piVar14 + 0xe8))(in_ECX,in_ECX,3,0);
    }
    if (piVar15 != (int *)0x0) {
      (**(code **)(*piVar15 + 0xe8))(in_ECX,in_ECX,3,0);
    }
  }
LAB_100f787c:
  if (*(int *)(in_ECX + 0x2500) != *(int *)(in_ECX + 0x2504)) {
    (*DAT_10223000)(1,DAT_10226510,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x2500));
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX + 0x2504) = *(undefined4 *)(in_ECX + 0x2500);
  }
  if (*(int *)(in_ECX + 0x2508) != *(int *)(in_ECX + 0x250c)) {
    (*DAT_10223000)(1,DAT_10226520,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x2508));
    (*DAT_10223004)();
  }
  if (DAT_10222f00 != 0) {
    (*DAT_10223000)(1,DAT_102264c8,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    DAT_10222f00 = 0;
  }
  if (*(int *)(in_ECX + 0x1f18) != *(int *)(in_ECX + 0x1f14)) {
    *(int *)(in_ECX + 0x1f18) = *(int *)(in_ECX + 0x1f14);
    (*DAT_10223000)(1,DAT_10226604,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x1f14));
    (*DAT_10223004)();
  }
  iVar8 = *(int *)(in_ECX + 0x624);
  if (iVar8 != *(int *)(in_ECX + 0x628)) {
    *(int *)(in_ECX + 0x628) = iVar8;
    if (iVar8 == 0) {
      (*DAT_10223000)();
      (*DAT_10223020)("models/null.mdl");
      (*DAT_10223008)(0);
      (*DAT_10223008)(0xffffffff);
      (*DAT_10223008)(0xffffffff);
      (*DAT_10223010)(0xffffffff);
    }
    else {
      (*DAT_10223000)(1,DAT_1022660c,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223020)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x624));
      (*DAT_10223008)(DAT_102119a0);
      (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x1e70));
      (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x1e74));
    }
    (*DAT_10223004)();
  }
  iVar8 = *(int *)(in_ECX + 4);
  fVar22 = *(float *)(iVar8 + 0x164);
  if (fVar22 != (float)*(int *)(in_ECX + 0x24f8)) {
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    iVar9 = 1;
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        iVar8 = FUN_10119680(iVar9);
        if (iVar8 != 0) {
          (*DAT_10223000)(1,DAT_102264d0,0,*(undefined4 *)(*(int *)(iVar8 + 4) + 0x20c));
          (*DAT_10223008)((int)fVar22);
          uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
          (*DAT_10223008)(uVar11);
          iVar8 = (**(code **)(*DAT_10222ee4 + 0x20))();
          (*DAT_10223008)(iVar8 != 0);
          (*DAT_10223004)();
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 <= (int)DAT_10223188[0x24]);
      iVar8 = *(int *)(in_ECX + 4);
    }
    *(int *)(in_ECX + 0x24f8) = (int)*(float *)(iVar8 + 0x164);
  }
  if (*(int *)(in_ECX + 0x5e4) != *(int *)(in_ECX + 0x5dc)) {
    (*DAT_10223000)(1,DAT_10226624,0,*(undefined4 *)(iVar8 + 0x20c));
    (*DAT_10223014)(*(undefined4 *)(in_ECX + 0x5dc));
    (*DAT_10223014)(*(undefined4 *)(in_ECX + 0x5e0));
    (*DAT_10223004)();
    iVar8 = *(int *)(in_ECX + 4);
    *(undefined4 *)(in_ECX + 0x5e4) = *(undefined4 *)(in_ECX + 0x5dc);
  }
  if (*(int *)(in_ECX + 0x5e8) != *(int *)(in_ECX + 0x5e0)) {
    (*DAT_10223000)(1,DAT_10226624,0,*(undefined4 *)(iVar8 + 0x20c));
    (*DAT_10223014)(*(undefined4 *)(in_ECX + 0x5dc));
    (*DAT_10223014)(*(undefined4 *)(in_ECX + 0x5e0));
    (*DAT_10223004)();
    iVar8 = *(int *)(in_ECX + 4);
    *(undefined4 *)(in_ECX + 0x5e8) = *(undefined4 *)(in_ECX + 0x5e0);
  }
  if (*(float *)(iVar8 + 0x1c0) != (float)*(int *)(in_ECX + 0x24fc)) {
    *(int *)(in_ECX + 0x24fc) = (int)*(float *)(iVar8 + 0x1c0);
    (*DAT_10223000)(1,DAT_102264d8,0,*(undefined4 *)(iVar8 + 0x20c));
    (*DAT_10223010)((int)*(float *)(*(int *)(in_ECX + 4) + 0x1c0));
    (*DAT_10223004)();
    iVar8 = *(int *)(in_ECX + 4);
  }
  if (((*(float *)(iVar8 + 0x1dc) != 0.0) || (*(float *)(iVar8 + 0x1e0) != 0.0)) ||
     (*(int *)(in_ECX + 0x24c8) != *(int *)(in_ECX + 0x30c))) {
    local_c = *(uint *)(iVar8 + 8);
    local_10 = *(undefined4 *)(iVar8 + 0xc);
    local_14 = *(undefined4 *)(iVar8 + 0x10);
    if ((*(int *)(iVar8 + 400) != 0) &&
       (piVar14 = *(int **)(*(int *)(iVar8 + 400) + 0x7c), piVar14 != (int *)0x0)) {
      puVar16 = (undefined8 *)(**(code **)(*piVar14 + 0xfc))(local_2c);
      iVar8 = *(int *)(in_ECX + 4);
      uVar3 = *puVar16;
      local_18 = *(undefined4 *)(puVar16 + 1);
      local_20._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_10 = local_20._4_4_;
      local_20._0_4_ = (uint)uVar3;
      local_c = (uint)local_20;
      local_20 = uVar3;
      local_14 = local_18;
    }
    uVar13 = *(uint *)(in_ECX + 0x30c);
    (*DAT_10223000)(1,DAT_102264d4,0,*(undefined4 *)(iVar8 + 0x20c));
    (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x1e0));
    (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 0x1dc));
    (*DAT_10223014)(uVar13 & 0x774118);
    (*DAT_1022301c)(local_c);
    (*DAT_1022301c)(local_10);
    (*DAT_1022301c)(local_14);
    (*DAT_10223008)((*(byte *)(in_ECX + 0x30c) & 0x20) == 0);
    (*DAT_10223004)();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1dc) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1e0) = 0;
    *(uint *)(in_ECX + 0x24c8) = *(uint *)(in_ECX + 0x30c);
    *(uint *)(in_ECX + 0x30c) = *(uint *)(in_ECX + 0x30c) & 0xffffc000;
  }
  if ((*(int *)(in_ECX + 0x428) != *(int *)(in_ECX + 0x424)) && (DAT_10226698 != 0)) {
    cVar7 = FUN_100dd000(0x80,0,0);
    uVar19 = (uint)(cVar7 != '\0');
    cVar7 = FUN_100dd000(0x100,0,0);
    uVar13 = uVar19;
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 2;
    }
    cVar7 = FUN_100dd000(0x200,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 4;
    }
    cVar7 = FUN_100dd000(0x400,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 8;
    }
    cVar7 = FUN_100dd000(0x800,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x10;
    }
    cVar7 = FUN_100dd000(0x1000,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x20;
    }
    cVar7 = FUN_100dd000(0x2000,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x40;
    }
    cVar7 = FUN_100dd000(0x4000,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x80;
    }
    cVar7 = FUN_100dd000(0x8000,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x100;
    }
    cVar7 = FUN_100dd000(0x10000,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x200;
    }
    cVar7 = FUN_100dd000(0x20000,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x400;
    }
    cVar7 = FUN_100dd000(0x40000,0,0);
    if (cVar7 != '\0') {
      uVar13 = 1;
      uVar19 = uVar19 | 0x800;
    }
    (*DAT_10223000)(1,DAT_10226698,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223014)(uVar19);
    (*DAT_10223008)(uVar13);
    (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x424));
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX + 0x428) = *(undefined4 *)(in_ECX + 0x424);
  }
  fVar22 = *(float *)(in_ECX + 0x2804);
  if (0.0 < fVar22) {
    fVar2 = *DAT_10223188;
    if (fVar22 <= fVar2) {
      *(undefined4 *)(in_ECX + 0x27e0) = *(undefined4 *)(in_ECX + 0x27f4);
      *(undefined4 *)(in_ECX + 0x27e4) = *(undefined4 *)(in_ECX + 0x27f8);
      *(undefined4 *)(in_ECX + 0x27e8) = *(undefined4 *)(in_ECX + 0x27fc);
      *(undefined4 *)(in_ECX + 0x2808) = 0;
      *(undefined4 *)(in_ECX + 0x2804) = 0;
      *(undefined4 *)(in_ECX + 0x27dc) = *(undefined4 *)(in_ECX + 0x27f0);
      *(undefined4 *)(in_ECX + 0x27ec) = *(undefined4 *)(in_ECX + 0x2800);
      *(undefined4 *)(in_ECX + 0x280c) = 1;
      (*DAT_1022303c)(2,"Rain fading finished at %i drips\n",*(undefined4 *)(in_ECX + 0x27f0));
    }
    else if (*(float *)(in_ECX + 0x2808) <= fVar2) {
      iVar8 = (int)((fVar22 - fVar2) + 1.0);
      fVar22 = (float)iVar8;
      iVar8 = *(int *)(in_ECX + 0x27dc) +
              (*(int *)(in_ECX + 0x27f0) - *(int *)(in_ECX + 0x27dc)) / iVar8;
      *(int *)(in_ECX + 0x27dc) = iVar8;
      *(float *)(in_ECX + 0x27e0) =
           (*(float *)(in_ECX + 0x27f4) - *(float *)(in_ECX + 0x27e0)) / fVar22 +
           *(float *)(in_ECX + 0x27e0);
      *(float *)(in_ECX + 0x27e4) =
           (*(float *)(in_ECX + 0x27f8) - *(float *)(in_ECX + 0x27e4)) / fVar22 +
           *(float *)(in_ECX + 0x27e4);
      *(float *)(in_ECX + 0x27e8) =
           (*(float *)(in_ECX + 0x27fc) - *(float *)(in_ECX + 0x27e8)) / fVar22 +
           *(float *)(in_ECX + 0x27e8);
      *(float *)(in_ECX + 0x27ec) =
           (*(float *)(in_ECX + 0x2800) - *(float *)(in_ECX + 0x27ec)) / fVar22 +
           *(float *)(in_ECX + 0x27ec);
      fVar22 = *DAT_10223188;
      *(undefined4 *)(in_ECX + 0x280c) = 1;
      *(float *)(in_ECX + 0x2808) = fVar22 + 1.0;
      (*DAT_1022303c)(2,"Rain fading: curdrips: %i, idealdrips %i\n",iVar8,*(int *)(in_ECX + 0x27f0)
                     );
    }
  }
  if (*(int *)(in_ECX + 0x280c) != 0) {
    iVar8 = (*DAT_10222f80)(0,"classname","rain_settings");
    if ((iVar8 == 0) || (iVar9 = (*DAT_10223060)(iVar8), iVar9 == 0)) {
      *(undefined4 *)(in_ECX + 0x27dc) = 0;
      *(undefined4 *)(in_ECX + 0x27e0) = 0;
      *(undefined4 *)(in_ECX + 0x27e4) = 0;
      *(undefined4 *)(in_ECX + 0x27e8) = 0;
      *(undefined4 *)(in_ECX + 0x27ec) = 0;
      *(undefined4 *)(in_ECX + 0x27f0) = 0;
      *(undefined4 *)(in_ECX + 0x27f4) = 0;
      *(undefined4 *)(in_ECX + 0x27f8) = 0;
      *(undefined4 *)(in_ECX + 0x27fc) = 0;
      *(undefined4 *)(in_ECX + 0x2800) = 0;
      *(undefined4 *)(in_ECX + 0x2804) = 0;
      *(undefined4 *)(in_ECX + 0x2808) = 0;
      pcVar17 = "Clearing rain data\n";
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x7c);
      iVar9 = 0;
      local_14 = *(undefined4 *)(iVar8 + 0xdc);
      uVar11 = *(undefined4 *)(iVar8 + 0xe0);
      local_10 = *(undefined4 *)(*(int *)(iVar8 + 4) + 0x10);
      do {
        iVar9 = (*DAT_10222f80)(iVar9,"classname","rain_modify");
        if ((iVar9 == 0) || (iVar8 = (*DAT_10223060)(iVar9), iVar8 == 0)) goto LAB_100f81cc;
      } while ((*(byte *)(iVar9 + 0x224) & 1) == 0);
      iVar8 = *(int *)(iVar9 + 0x7c);
      *(undefined4 *)(in_ECX + 0x27dc) = *(undefined4 *)(iVar8 + 0xdc);
      *(undefined4 *)(in_ECX + 0x27e0) = *(undefined4 *)(iVar8 + 0xe0);
      *(undefined4 *)(in_ECX + 0x27e4) = *(undefined4 *)(iVar8 + 0xe4);
      *(undefined4 *)(in_ECX + 0x27e8) = *(undefined4 *)(iVar8 + 0xe8);
      *(undefined4 *)(in_ECX + 0x27ec) = *(undefined4 *)(iVar8 + 0xec);
      *(undefined4 *)(in_ECX + 0x2804) = 0;
LAB_100f81cc:
      (*DAT_10223000)(1,DAT_10226548,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(*(undefined4 *)(in_ECX + 0x27dc));
      (*DAT_1022301c)(local_14);
      (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0x27e0));
      (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0x27e4));
      (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0x27e8));
      (*DAT_1022301c)(*(undefined4 *)(in_ECX + 0x27ec));
      (*DAT_10223010)(uVar11);
      (*DAT_1022301c)(local_10);
      (*DAT_10223004)();
      if (*(int *)(in_ECX + 0x27dc) == 0) {
        pcVar17 = "Sending disabling rain message\n";
      }
      else {
        pcVar17 = "Sending enabling rain message\n";
      }
    }
    (*DAT_1022303c)(2,pcVar17);
    *(undefined4 *)(in_ECX + 0x280c) = 0;
  }
  if (*(int *)(in_ECX + 0x2330) != 0) {
    if (*(int *)(in_ECX + 0x2324) == 0) {
      (*DAT_10223000)();
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      (*DAT_1022303c)(2,"Player goal window cleared\n");
    }
    else {
      uVar13 = (uint)(*(int *)(in_ECX + 0x232c) != 0) * 2 + 1;
      uVar19 = uVar13 | 4;
      if (*(int *)(in_ECX + 9000) == 0) {
        uVar19 = uVar13;
      }
      local_c = uVar19 | 8;
      if (*(int *)(in_ECX + 0x2330) == 2) {
        local_c = uVar19;
      }
      (*DAT_10223000)(1,DAT_10226554,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223008)(local_c);
      (*DAT_10223020)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x2324));
      if ((local_c & 2) != 0) {
        (*DAT_10223020)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x232c));
      }
      if ((local_c & 4) != 0) {
        (*DAT_10223020)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 9000));
      }
      (*DAT_10223004)();
      (*DAT_1022303c)(2,"Player goal description set\n");
    }
    *(undefined4 *)(in_ECX + 0x2330) = 0;
  }
  if (*(int *)(in_ECX + 0x2810) == 0) {
    FUN_100f1f30();
    *(undefined4 *)(in_ECX + 0x2810) = 1;
  }
  if ((*(byte *)(in_ECX + 0x24d4) & 0xc0) != 0) {
    (*DAT_10223000)(1,DAT_102264dc,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(*(uint *)(in_ECX + 0x24d4) & 0xf);
    (*DAT_10223004)();
    *(uint *)(in_ECX + 0x24d4) = *(uint *)(in_ECX + 0x24d4) & 0xffffff3f;
  }
  if (*(int *)(in_ECX + 0x22dc) == 0) {
    *(undefined4 *)(in_ECX + 0x22dc) = 1;
    puVar20 = &DAT_10231890;
    do {
      if (puVar20[6] != 0) {
        pcVar17 = "Empty";
        if ((char *)puVar20[4] != (char *)0x0) {
          pcVar17 = (char *)puVar20[4];
        }
        (*DAT_10223000)(1,DAT_102264e4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223020)(pcVar17);
        uVar11 = FUN_100dfe60(*puVar20);
        (*DAT_10223008)(uVar11);
        (*DAT_10223008)(puVar20[1]);
        uVar11 = FUN_100dfe60(puVar20[2]);
        (*DAT_10223008)(uVar11);
        (*DAT_10223008)(puVar20[3]);
        (*DAT_10223008)(puVar20[-2]);
        (*DAT_10223008)(puVar20[-1]);
        (*DAT_10223008)(puVar20[6]);
        (*DAT_10223008)(puVar20[7]);
        (*DAT_10223004)();
      }
      puVar20 = puVar20 + 0xb;
    } while ((int)puVar20 < 0x10231e10);
  }
  FUN_100f1ec0();
  if (*(int **)(in_ECX + 0x230c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x230c) + 0xe8))(in_ECX,in_ECX,2,0x40400000);
  }
  piVar14 = (int *)(in_ECX + 0x2514);
  iVar8 = 6;
  do {
    if ((int *)*piVar14 != (int *)0x0) {
      (**(code **)(*(int *)*piVar14 + 0x170))(in_ECX);
    }
    piVar14 = piVar14 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (*(int *)(in_ECX + 0x24d8) == 0) {
    (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223008)(0);
    (*DAT_10223008)(0);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX + 0x24d8) = 1;
  }
  *(undefined4 *)(in_ECX + 0x2530) = *(undefined4 *)(in_ECX + 0x252c);
  *(undefined4 *)(in_ECX + 0x250c) = *(undefined4 *)(in_ECX + 0x2508);
  fVar22 = *DAT_10223188;
  if (*(float *)(in_ECX + 0x26d0) <= fVar22 && fVar22 != *(float *)(in_ECX + 0x26d0)) {
    *(float *)(in_ECX + 0x26d0) = fVar22 + 0.2;
  }
  return;
}

