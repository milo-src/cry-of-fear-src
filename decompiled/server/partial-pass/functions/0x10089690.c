// rea decompile_all
// name: FUN_10089690
// address: 0x10089690
// body: available
// range: 0x10089690-0x10089c75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10089690(void)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined8 *puVar8;
  int *in_ECX;
  undefined4 uVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_5c [16];
  float local_4c;
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  float local_10;
  int *local_c;
  int *local_8;
  
  if (*(int *)(in_ECX[1] + 0x174) != 0) {
    return in_ECX[0x86];
  }
  if (*(char *)((int)in_ECX + 10) != '\0') {
    *(undefined1 *)((int)in_ECX + 10) = 0;
    iVar12 = 1;
    local_c = in_ECX;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        piVar2 = (int *)FUN_10119680(iVar12);
        if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0xd0))(), iVar3 != 0)) &&
           (iVar3 = FUN_100125e0(piVar2[1]), iVar3 != 0)) {
          pbVar10 = (byte *)(*(int *)(iVar3 + 0x608) + *(int *)(DAT_10223188 + 0x98));
          pbVar4 = (byte *)(*(int *)(in_ECX[1] + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
          do {
            bVar1 = *pbVar4;
            bVar13 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_10089760:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_10089765;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar13 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_10089760;
            pbVar4 = pbVar4 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_10089765:
          if (uVar5 == 0) {
            iVar6 = (int)*(float *)(in_ECX[1] + 0x164);
            *(undefined4 *)(iVar3 + 0x608) = 0;
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            *(int *)(iVar3 + 0x604) = iVar6;
            (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
            (*DAT_10223008)(2);
            (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x5f8));
            (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x5fc));
            (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x604));
            (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x600));
            (*DAT_10223004)();
            *(undefined1 *)((int)in_ECX + 10) = 0;
            *(undefined1 *)(iVar3 + 0x5f4) = 0;
            *(undefined4 *)(iVar3 + 0x5f8) = 0;
            *(undefined4 *)(iVar3 + 0x5fc) = 0;
            *(undefined4 *)(iVar3 + 0x600) = 0;
            *(undefined4 *)(iVar3 + 0x604) = 0;
            *(undefined4 *)(iVar3 + 0x608) = 0;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 <= *(int *)(DAT_10223188 + 0x90));
    }
    if ((((DAT_10222ee4 != (int *)0x0) &&
         (iVar12 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar12 != 0)) &&
        ((piVar2 = (int *)FUN_10118460(0,"monster_booksimon"), local_8 = piVar2,
         piVar2 != (int *)0x0 &&
         ((iVar12 = (**(code **)(*piVar2 + 0xbc))(), iVar12 != 0 &&
          (*(char *)((int)piVar2 + 10) != '\0')))))) &&
       (iVar12 = 1, 0 < *(int *)(DAT_10223188 + 0x90))) {
      do {
        piVar7 = (int *)FUN_10119680(iVar12);
        if (((piVar7 != (int *)0x0) && (iVar3 = (**(code **)(*piVar7 + 0xd0))(), iVar3 != 0)) &&
           (iVar3 = FUN_100125e0(piVar7[1]), iVar3 != 0)) {
          *(undefined1 *)(iVar3 + 0x5f4) = 1;
          *(int *)(iVar3 + 0x5f8) =
               (int)"gfx/vgui/boss/simon_health_empty.tga" - *(int *)(DAT_10223188 + 0x98);
          *(int *)(iVar3 + 0x5fc) =
               (int)"gfx/vgui/boss/simon_health_full.tga" - *(int *)(DAT_10223188 + 0x98);
          *(int *)(iVar3 + 0x600) = (int)*(float *)(piVar2[1] + 0x1b4);
          *(int *)(iVar3 + 0x604) = (int)*(float *)(piVar2[1] + 0x164);
          *(undefined4 *)(iVar3 + 0x608) = *(undefined4 *)(piVar2[1] + 0x1d0);
          (*DAT_10223000)(1,DAT_10226620,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
          (*DAT_10223008)(1);
          (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x5f8));
          (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x5fc));
          (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x604));
          (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x600));
          (*DAT_10223004)();
        }
        iVar12 = iVar12 + 1;
        in_ECX = local_c;
      } while (iVar12 <= *(int *)(DAT_10223188 + 0x90));
    }
  }
  puVar8 = (undefined8 *)(**(code **)(*in_ECX + 0xfc))(&local_24);
  bVar13 = false;
  local_18 = *puVar8;
  iVar12 = 0x24;
  local_10 = *(float *)(puVar8 + 1);
  FUN_10119320(in_ECX[1] + 0x50);
  iVar3 = in_ECX[0x87];
  local_c = (int *)((DAT_10222f28 * -1.0 * *(float *)(DAT_10223188 + 0x28) -
                    DAT_10222f2c * 1.0 * *(float *)(DAT_10223188 + 0x2c)) -
                   DAT_10222f30 * 1.0 * *(float *)(DAT_10223188 + 0x30));
  if (iVar3 == 0) {
    bVar13 = true;
    if ((float)local_c <= 0.3) {
      if ((float)local_c <= -0.3) {
        iVar12 = 0x25;
      }
    }
    else {
      iVar12 = 0x26;
    }
  }
  else if (iVar3 == 1) {
    iVar12 = 0x42;
  }
  else if (iVar3 == 3) {
    iVar12 = 0x44;
  }
  else {
    bVar13 = true;
    if ((float)local_c <= 0.3) {
      if ((float)local_c <= -0.3) {
        iVar12 = 0x25;
        bVar13 = true;
      }
    }
    else {
      iVar12 = 0x26;
    }
  }
  iVar3 = FUN_1000e950(iVar12);
  if (iVar3 == -1) {
    if (bVar13) {
      iVar12 = 0x24;
    }
    else if ((float)local_c <= 0.3) {
      if ((float)local_c <= -0.3) {
        iVar12 = 0x25;
      }
    }
    else {
      iVar12 = 0x26;
    }
  }
  iVar3 = FUN_1000e950(iVar12);
  if (iVar3 != -1) {
    if (iVar12 == 0x26) {
      uVar9 = *(undefined4 *)(in_ECX[1] + 0x20c);
      local_24 = *(float *)(DAT_10223188 + 0x28) * 64.0 + (float)local_18;
      local_20 = *(float *)(DAT_10223188 + 0x2c) * 64.0 + local_18._4_4_;
      local_1c = *(float *)(DAT_10223188 + 0x30) * 64.0 + local_10;
    }
    else {
      if (iVar12 != 0x25) goto LAB_10089c0e;
      uVar9 = *(undefined4 *)(in_ECX[1] + 0x20c);
      local_24 = (float)local_18 - *(float *)(DAT_10223188 + 0x28) * 64.0;
      local_20 = local_18._4_4_ - *(float *)(DAT_10223188 + 0x2c) * 64.0;
      local_1c = local_10 - *(float *)(DAT_10223188 + 0x30) * 64.0;
    }
    FUN_1011a7e0(&local_18,&local_24,0,3,uVar9,local_5c);
    if (local_4c == 1.0) goto LAB_10089c0e;
  }
  iVar12 = 0x24;
LAB_10089c0e:
  pcVar11 = "monster_baby";
  iVar3 = *(int *)(in_ECX[1] + 0x20c);
  pbVar4 = (byte *)(*(int *)(-(uint)(iVar3 != 0) & iVar3 + 0x80U) + *(int *)(DAT_10223188 + 0x98));
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_10089c55:
      uVar5 = -(uint)bVar13 | 1;
      goto LAB_10089c5a;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_10089c55;
    pbVar4 = pbVar4 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_10089c5a:
  if ((uVar5 == 0) && (*(int *)(in_ECX[1] + 0x114) != 0)) {
    iVar12 = 0x15;
  }
  return iVar12;
}

