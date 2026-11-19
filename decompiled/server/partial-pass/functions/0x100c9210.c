// rea decompile_all
// name: FUN_100c9210
// address: 0x100c9210
// body: available
// range: 0x100c9210-0x100c95e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c9210(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (*DAT_10222fec)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),"donatorcheck\n");
  bVar9 = false;
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 0x16c);
  *puVar1 = *puVar1 | 0x80000000;
  iVar3 = FUN_10118460(0,"cof_survivalmode");
  if (iVar3 != 0) {
    bVar9 = true;
    do {
      iVar3 = FUN_10118460(iVar3,"cof_survivalmode");
    } while (iVar3 != 0);
  }
  if ((DAT_102231a1 == '\0') && (DAT_10222f24 == '\0')) {
    DAT_102231a1 = '\x01';
    if (bVar9) {
      uVar11 = 0xb4;
      uVar10 = 0x3c;
    }
    else {
      iVar3 = (*DAT_102230b0)(1,5);
      if (iVar3 != 1) goto LAB_100c92cd;
      uVar11 = 0xf0;
      uVar10 = 0x14;
    }
    DAT_102231a2 = 1;
    iVar3 = (*DAT_102230b0)(uVar10,uVar11);
    _DAT_102231a4 = (float)iVar3 + *DAT_10223188;
  }
LAB_100c92cd:
  if ((DAT_10222f14 != 0) && (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 != 0)) {
    bVar9 = DAT_10222f20 == 0;
    if (bVar9) {
      (*DAT_10223000)(1,DAT_102266d8,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    }
    else {
      (*DAT_10223000)();
    }
    (*DAT_10223008)(!bVar9);
    (*DAT_10223004)();
  }
  if (DAT_10222f20 == 0) {
    pcVar4 = (char *)(*DAT_10223030)("sv_coop_music");
    if (pcVar4 != (char *)0x0) {
      pcVar8 = pcVar4;
      do {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      if (1 < (uint)((int)pcVar8 - (int)(pcVar4 + 1))) {
        FUN_100ea5c0((int)pcVar4 - (int)DAT_10223188[0x26],DAT_10222f18,DAT_10222f1c);
      }
    }
  }
  else {
    FUN_100ea5c0((int)"fucked.mp3" - (int)DAT_10223188[0x26],1,0x3f800000);
    (*DAT_10223000)(1,DAT_1022667c,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    (*DAT_10223008)(0);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
  }
  if ((DAT_10222e10 == 0) || (cVar2 = FUN_10029090(param_1), cVar2 == '\0')) {
    for (piVar5 = (int *)FUN_10118460(0,"game_player_equip"); piVar5 != (int *)0x0;
        piVar5 = (int *)FUN_10118460(piVar5,"game_player_equip")) {
      (**(code **)(*piVar5 + 0xe4))(param_1);
    }
  }
  iVar3 = 1;
  bVar9 = false;
  if (0 < (int)DAT_10223188[0x24]) {
    do {
      iVar6 = FUN_10119680(iVar3);
      if (iVar6 != 0) {
        if (*(char *)(iVar6 + 0x4e8) != '\0') {
          bVar9 = true;
          *(undefined4 *)(param_1 + 0x1f24) = *(undefined4 *)(iVar6 + 0x1f24);
          *(undefined1 *)(param_1 + 0x1f28) = *(undefined1 *)(iVar6 + 0x1f28);
          *(undefined1 *)(param_1 + 0x4e8) = *(undefined1 *)(iVar6 + 0x4e8);
          *(undefined4 *)(param_1 + 0x4ec) = *(undefined4 *)(iVar6 + 0x4ec);
          *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(iVar6 + 0x4f0);
        }
        if ((*(int *)(iVar6 + 0x5ac) != 0) &&
           (*(int *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x254) != 1)) {
          *(undefined1 *)(param_1 + 0x3c8) = 1;
          *(float *)(param_1 + 0x3cc) = *DAT_10223188 + 1.0;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)DAT_10223188[0x24]);
    if (bVar9) {
      uVar7 = *(uint *)(param_1 + 0x2500);
      if ((uVar7 & 8) == 0) {
        uVar7 = uVar7 | 8;
        *(uint *)(param_1 + 0x2500) = uVar7;
      }
      if ((uVar7 & 1) == 0) {
        *(uint *)(param_1 + 0x2500) = uVar7 | 1;
      }
      uVar7 = *(uint *)(*(int *)(param_1 + 4) + 0x1a8);
      if (-1 < (char)uVar7) {
        *(uint *)(*(int *)(param_1 + 4) + 0x1a8) = uVar7 | 0x80;
      }
      FUN_100deff0(0);
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      FUN_10119c00(param_1,&local_10,0,0x3f800000,0xff,5);
      (*DAT_10223000)(1,DAT_10226658,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
      (*DAT_10223020)(&DAT_101ca428);
      (*DAT_10223020)(0);
      (*DAT_10223004)();
      (*DAT_10223000)(1,DAT_10226544,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
      (*DAT_10223008)(1);
      (*DAT_10223008)(1);
      (*DAT_1022301c)(0);
      (*DAT_10223020)("game_over.mp3");
      (*DAT_10223004)();
    }
  }
  return;
}

