// rea decompile_all
// name: FUN_100de990
// address: 0x100de990
// body: available
// range: 0x100de990-0x100deeb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100de990(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int in_ECX;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined4 *local_120;
  int local_11c;
  int local_114;
  int local_110;
  byte local_108 [128];
  byte local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  bVar4 = false;
  iVar8 = *(int *)(in_ECX + 0x21fc + param_1 * 4);
  local_114 = 0;
  local_110 = 0;
  iVar6 = FUN_100e4ee0(iVar8);
  if ((iVar6 == 0) &&
     (iVar6 = FUN_100e4ee0(*(undefined4 *)(in_ECX + 0x21fc + param_2 * 4)), iVar6 == 0)) {
    if (((5 < param_1 - 1U) || (5 < param_2 - 1U)) || (param_1 == param_2)) {
      pcVar12 = "DUAL WIELD ERROR: Wrong slots: %i %i\n";
      goto LAB_100dee63;
    }
    uVar7 = FUN_100dff70("classname",*(int *)(DAT_10223188 + 0x98) + iVar8);
    FUN_1001f160(local_88,&DAT_101a124c,uVar7);
    uVar7 = FUN_100dff70("classname",
                         *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x21fc + param_2 * 4));
    FUN_1001f160(local_108,&DAT_101a124c,uVar7);
    piVar2 = *(int **)(in_ECX + 0x252c);
    if ((piVar2 != (int *)0x0) && ((char)piVar2[0x5e] != '\0')) {
      (**(code **)(*piVar2 + 0x130))();
    }
    iVar8 = FUN_1013f5f0(local_88,"weapon_");
    if ((iVar8 == 0) || (iVar8 = FUN_1013f5f0(local_108,"weapon_"), iVar8 == 0)) {
      iVar8 = *(int *)(in_ECX + 4);
      goto LAB_100dee77;
    }
    local_120 = (undefined4 *)(in_ECX + 0x2514);
    local_11c = 6;
    puVar13 = local_120;
    do {
      for (piVar2 = (int *)*puVar13; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x59]) {
        iVar8 = (**(code **)(*piVar2 + 0x174))();
        if (iVar8 != 0) {
          pbVar11 = local_88;
          pbVar10 = (byte *)(**(int **)(iVar8 + 4) + *(int *)(DAT_10223188 + 0x98));
          do {
            bVar1 = *pbVar10;
            bVar14 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_100deb50:
              uVar9 = -(uint)bVar14 | 1;
              goto LAB_100deb55;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar14 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_100deb50;
            pbVar10 = pbVar10 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_100deb55:
          if (uVar9 == 0) {
            local_114 = *(int *)(iVar8 + 0x168);
            bVar3 = true;
          }
        }
      }
      puVar13 = puVar13 + 1;
      local_11c = local_11c + -1;
    } while (local_11c != 0);
    local_11c = 6;
    do {
      for (piVar2 = (int *)*local_120; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x59]) {
        iVar8 = (**(code **)(*piVar2 + 0x174))();
        if (iVar8 != 0) {
          pbVar11 = local_108;
          pbVar10 = (byte *)(**(int **)(iVar8 + 4) + *(int *)(DAT_10223188 + 0x98));
          do {
            bVar1 = *pbVar10;
            bVar14 = bVar1 < *pbVar11;
            if (bVar1 != *pbVar11) {
LAB_100debf0:
              uVar9 = -(uint)bVar14 | 1;
              goto LAB_100debf5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar10[1];
            bVar14 = bVar1 < pbVar11[1];
            if (bVar1 != pbVar11[1]) goto LAB_100debf0;
            pbVar10 = pbVar10 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_100debf5:
          if (uVar9 == 0) {
            local_110 = *(int *)(iVar8 + 0x168);
            bVar4 = true;
          }
        }
      }
      local_120 = local_120 + 1;
      local_11c = local_11c + -1;
    } while (local_11c != 0);
    if (*(int *)(in_ECX + 0x252c) != 0) {
      iVar8 = *(int *)(*(int *)(in_ECX + 0x252c) + 4);
      pcVar12 = "weapon_dualweapon";
      iVar6 = *(int *)(iVar8 + 0x20c);
      pbVar11 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) +
                        *(int *)(DAT_10223188 + 0x98));
      do {
        bVar1 = *pbVar11;
        bVar14 = bVar1 < (byte)*pcVar12;
        if (bVar1 != *pcVar12) {
LAB_100dec96:
          uVar9 = -(uint)bVar14 | 1;
          goto LAB_100dec9b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar11[1];
        bVar14 = bVar1 < (byte)pcVar12[1];
        if (bVar1 != pcVar12[1]) goto LAB_100dec96;
        pbVar11 = pbVar11 + 2;
        pcVar12 = pcVar12 + 2;
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_100dec9b:
      if ((((uVar9 == 0) && (iVar8 = FUN_1002f180(iVar8), iVar8 != 0)) &&
          (*(int *)(iVar8 + 0x204) == local_114)) && (*(int *)(iVar8 + 0x200) == local_110))
      goto LAB_100deea2;
    }
    cVar5 = FUN_100e4bf0(local_114);
    if ((cVar5 != '\0') && (cVar5 = FUN_100e4bf0(local_110), cVar5 != '\0')) {
      FUN_100ddc40();
      FUN_10119810(in_ECX,&DAT_101dc8fc,2,0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    cVar5 = FUN_100dc020(local_114);
    if ((cVar5 == '\0') && (cVar5 = FUN_100dc020(local_110), cVar5 == '\0')) {
      FUN_100ddc40();
      uVar7 = *(undefined4 *)(&DAT_1021b850 + local_110 * 4);
      uVar16 = *(undefined4 *)(&DAT_1021b850 + local_114 * 4);
      puVar15 = &DAT_101dc92c;
LAB_100ded54:
      uVar7 = FUN_1011a8a0(puVar15,uVar16,uVar7,2,0);
      FUN_10119810(in_ECX,uVar7);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    cVar5 = FUN_100dc020(local_114);
    if (((cVar5 == '\0') && (cVar5 = FUN_100dc020(local_110), cVar5 != '\0')) ||
       ((cVar5 = FUN_100dc020(local_114), cVar5 != '\0' &&
        (cVar5 = FUN_100dc020(local_110), cVar5 == '\0')))) {
      FUN_100ddc40();
      uVar7 = *(undefined4 *)(&DAT_1021b850 + local_110 * 4);
      uVar16 = *(undefined4 *)(&DAT_1021b850 + local_114 * 4);
      puVar15 = &DAT_101dc954;
      goto LAB_100ded54;
    }
    if ((bVar3) && (bVar4)) {
      FUN_100e08b0(local_114,local_110);
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,"inventory/inventory_click.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      FUN_100ddc40();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar8 = *(int *)(in_ECX + 4);
    uVar7 = 0;
  }
  else {
    pcVar12 = "DUAL WIELD ERROR: There\'s nothing in one or both slots: %i %i\n";
LAB_100dee63:
    (*DAT_1022303c)(1,pcVar12,param_1,param_2);
    iVar8 = *(int *)(in_ECX + 4);
LAB_100dee77:
    uVar7 = 3;
  }
  FUN_100fc9f0(*(undefined4 *)(iVar8 + 0x20c),uVar7,"inventory/inventory_no.wav",0x3f800000,
               0x3f4ccccd,0,100);
LAB_100deea2:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

