// rea decompile_all
// name: FUN_100e9230
// address: 0x100e9230
// body: available
// range: 0x100e9230-0x100e9aa1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e9230(void)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  char *pcVar11;
  int *in_ECX;
  int iVar12;
  float10 fVar13;
  int local_10;
  int local_c;
  
  FUN_100f9140(0,0);
  fVar1 = *(float *)(in_ECX[1] + 0x54);
  in_ECX[0xe9] = (int)fVar1;
  if ((int)fVar1 == 0) {
    in_ECX[0xe9] = 1;
  }
  in_ECX[0x1e] = (int)CBasePlayer::MultiplayerPlayerDeathThink;
  (**(code **)(*in_ECX + 8))(0x3dcccccd);
  in_ECX[0xf5] = (int)(*DAT_10223188 + 60.0);
  in_ECX[0xf4] = (int)(*DAT_10223188 + 60.0);
  fVar13 = (float10)(*DAT_1022302c)("sv_auto_respawn_time");
  in_ECX[0x7cb] = (int)(float)(fVar13 + (float10)*DAT_10223188);
  FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"common/null.wav",0x3f800000,0x3f4ccccd,0,100);
  FUN_10017740(0);
  FUN_10017740(0);
  in_ECX[0x9ab] = (int)*DAT_10223188;
  if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x1000) != 0) {
    FUN_100deff0(1);
  }
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  local_10 = FUN_10118460(0,"cof_survivalmode");
  if (local_10 != 0) {
    bVar4 = true;
    do {
      local_10 = FUN_10118460(local_10,"cof_survivalmode");
    } while (local_10 != 0);
    local_10 = 0;
  }
  local_c = 1;
  if (0 < (int)DAT_10223188[0x24]) {
    do {
      piVar5 = (int *)FUN_10119680(local_c);
      if (piVar5 != (int *)0x0) {
        iVar6 = FUN_1000e9b0("crouch_revived");
        iVar8 = piVar5[1];
        iVar12 = *(int *)(iVar8 + 300);
        iVar7 = FUN_1000e9b0("revived");
        iVar9 = *(int *)(iVar8 + 300);
        bVar2 = bVar3;
        if ((*(float *)(iVar8 + 0x264) == 0.0) &&
           ((iVar8 = (**(code **)(*piVar5 + 0xbc))(), iVar8 != 0 ||
            (iVar9 == iVar7 || iVar12 == iVar6)))) {
          bVar3 = true;
          bVar2 = true;
        }
      }
      local_c = local_c + 1;
    } while (local_c <= (int)DAT_10223188[0x24]);
    if (bVar2) goto LAB_100e967a;
  }
  if (bVar4) {
    iVar8 = FUN_10118460(local_10,"cof_survivalmode");
    iVar12 = 1;
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        iVar9 = FUN_10119680(iVar12);
        if (iVar9 != 0) {
          (*DAT_10223000)(1,DAT_102266a4,0,*(undefined4 *)(*(int *)(iVar9 + 4) + 0x20c));
          (*DAT_10223008)(0);
          (*DAT_10223008)(0);
          (*DAT_10223008)(0);
          (*DAT_10223008)(0);
          (*DAT_10223010)(0);
          (*DAT_10223004)();
          FUN_100ea600(0x3f800000);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 <= (int)DAT_10223188[0x24]);
    }
    if (((iVar8 != 0) && (iVar12 = *(int *)(iVar8 + 4), *(int *)(iVar12 + 0x250) == 0)) &&
       (*(int *)(iVar12 + 0x1cc) != 0)) {
      iVar12 = FUN_10090400(iVar12);
      *(undefined1 *)(iVar12 + 0xdd) = 0;
      *(undefined4 *)(*(int *)(iVar8 + 4) + 0x250) = 1;
      FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(*(int *)(iVar8 + 4) + 0x1cc),iVar8,iVar8,3,0);
    }
  }
  else {
    iVar8 = 1;
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        iVar12 = FUN_10119680(iVar8);
        if (iVar12 != 0) {
          fVar1 = *DAT_10223188;
          *(undefined1 *)(iVar12 + 0x1f28) = 0;
          *(undefined1 *)(iVar12 + 0x4e8) = 1;
          *(float *)(iVar12 + 0x1f24) = fVar1 + 10.0;
          *(float *)(iVar12 + 0x4ec) = *DAT_10223188;
          *(undefined4 *)(iVar12 + 0x4f0) = 10;
          (*DAT_10223000)(1,DAT_1022667c,0,*(undefined4 *)(*(int *)(iVar12 + 4) + 0x20c));
          (*DAT_10223008)(0);
          (*DAT_10223008)(2);
          (*DAT_10223004)();
          (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(iVar12 + 4) + 0x20c));
          (*DAT_10223020)(&DAT_101ca428);
          (*DAT_10223020)(0);
          (*DAT_10223004)();
          (*DAT_10223000)(1,DAT_10226544,0,*(undefined4 *)(*(int *)(iVar12 + 4) + 0x20c));
          (*DAT_10223008)(1);
          (*DAT_10223008)(1);
          (*DAT_1022301c)(0);
          (*DAT_10223020)("game_over.mp3");
          (*DAT_10223004)();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= (int)DAT_10223188[0x24]);
    }
  }
LAB_100e967a:
  FUN_100f68a0();
  if (in_ECX[0x94b] != 0) {
    FUN_10017ad0();
    *(undefined4 *)(in_ECX[0x94b] + 0x78) = 0;
  }
  FUN_100f91b0(0x40a00000,0x41200000,0x42a00000);
  if (2 < *(int *)(in_ECX[1] + 0x1c4)) {
    in_ECX[0x16d] = in_ECX[0x16d] | 0x27;
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar8 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar8 != 0)) {
    in_ECX[0x16d] = in_ECX[0x16d] | 6;
  }
  *(undefined1 *)(in_ECX + 0x7a9) = 0;
  in_ECX[0x174] = 0;
  if (*(float *)(in_ECX[1] + 0x274) != 90.0) {
    (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_1022301c)(0x43160000);
    (*DAT_10223008)(0);
    (*DAT_10223008)(1);
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX[1] + 0x274) = 0x42b40000;
  }
  if ((int *)in_ECX[0x94b] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x94b] + 0x14c))();
  }
  (**(code **)(*DAT_10222ee4 + 0x74))();
  iVar8 = FUN_10017780();
  if (iVar8 != 0) {
    piVar5 = (int *)FUN_100177a0();
    (**(code **)(*piVar5 + 0xe8))();
    FUN_10017740(0);
  }
  if ((int *)in_ECX[0x8c3] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x8c3] + 0xe8))();
    in_ECX[0x8c3] = 0;
  }
  uVar10 = FUN_101005c0(*(undefined4 *)(in_ECX[1] + 0x20c));
  iVar8 = FUN_10100910(uVar10);
  if (iVar8 != 0) {
    FUN_101008e0();
  }
  if ((char)in_ECX[0xea] == '\0') {
    pcVar11 = "crouch_death";
    if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x4000) == 0) {
      pcVar11 = "death";
    }
  }
  else {
    pcVar11 = "taller_lie";
  }
  iVar8 = FUN_1000e9b0(pcVar11);
  if (iVar8 == -1) {
    iVar8 = 0;
  }
  *(undefined4 *)(in_ECX[1] + 0x134) = 0;
  *(undefined4 *)(in_ECX[1] + 0x130) = 0;
  uVar10 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),iVar8);
  fVar13 = (float10)FUN_1000f390(uVar10);
  in_ECX[0x13d] = (int)(float)(fVar13 + (float10)*DAT_10223188);
  *(int *)(in_ECX[1] + 300) = iVar8;
  *(undefined4 *)(in_ECX[1] + 0x134) = 0;
  FUN_1000e9e0();
  iVar8 = in_ECX[1];
  *(ulonglong *)(iVar8 + 0x20) = CONCAT44(DAT_10222f34._4_4_,(undefined4)DAT_10222f34);
  *(undefined4 *)(iVar8 + 0x28) = DAT_10222f3c;
  *(undefined4 *)(in_ECX[1] + 0xb4) = DAT_10222ef8;
  *(undefined4 *)(in_ECX[1] + 0x174) = 1;
  *(undefined4 *)(in_ECX[1] + 0x20) = (undefined4)DAT_10222f34;
  *(undefined4 *)(in_ECX[1] + 0x24) = DAT_10222f34._4_4_;
  *(undefined4 *)(in_ECX[1] + 0x108) = 6;
  FUN_100f3a40(0,0,0);
  FUN_100f2e10(0);
  in_ECX[0x177] = -2;
  iVar8 = 1;
  in_ECX[0x178] = -2;
  in_ECX[0x93e] = 0;
  in_ECX[0x10a] = 0;
  if (0 < (int)DAT_10223188[0x24]) {
    do {
      iVar12 = FUN_10119680(iVar8);
      if (iVar12 != 0) {
        (*DAT_10223000)(1,DAT_102264d0,0,*(undefined4 *)(*(int *)(iVar12 + 4) + 0x20c));
        (*DAT_10223008)(in_ECX[0x93e]);
        uVar10 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(uVar10);
        iVar12 = (**(code **)(*DAT_10222ee4 + 0x20))();
        (*DAT_10223008)(iVar12 != 0);
        (*DAT_10223004)();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= (int)DAT_10223188[0x24]);
  }
  (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
  (*DAT_10223008)(0);
  (*DAT_10223008)(0xff);
  (*DAT_10223008)(0xff);
  (*DAT_10223004)();
  in_ECX[0x943] = 0;
  in_ECX[0x942] = 0;
  *(undefined4 *)(in_ECX[1] + 0x218) = 0;
  (*DAT_10223000)(1,DAT_10226520,0,*(undefined4 *)(in_ECX[1] + 0x20c));
  (*DAT_10223008)(0);
  (*DAT_10223004)();
  if ((*(char *)((int)in_ECX + 0x1f29) == '\0') && ((*(byte *)(in_ECX + 0x16d) & 1) == 0)) {
    (**(code **)(*in_ECX + 0x22c))();
  }
  *(undefined4 *)(in_ECX[1] + 0x50) = 0;
  *(undefined4 *)(in_ECX[1] + 0x58) = 0;
  *(undefined1 *)(in_ECX + 0x143) = 0;
  *(undefined1 *)(in_ECX + 0x140) = 0;
  return;
}

