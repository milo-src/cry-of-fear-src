// rea decompile_all
// name: FUN_100c7df0
// address: 0x100c7df0
// body: available
// range: 0x100c7df0-0x100c82bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c7df0(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  undefined4 uVar12;
  bool bVar13;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_2[0x83] == 0) {
    (*DAT_1022305c)(0);
  }
  uVar12 = 0;
  pcVar11 = "world";
  if ((*(byte *)(param_2 + 0x6a) & 8) == 0) {
    pcVar11 = (char *)(*(int *)(DAT_10223188 + 0x98) + *param_3);
  }
  else {
    uVar12 = (*DAT_10223064)(param_2[0x83]);
    if (param_3 != (int *)0x0) {
      if (param_3 == param_2) {
        iVar2 = param_2[0x83];
        if (iVar2 == 0) {
          iVar2 = (*DAT_1022305c)(0);
          iVar3 = 0;
          if (iVar2 != 0) goto LAB_100c7e54;
        }
        else {
LAB_100c7e54:
          iVar3 = *(int *)(iVar2 + 0x7c);
        }
        if (*(int *)(iVar3 + 0x252c) != 0) {
          pcVar11 = (char *)(&DAT_102318a0)[*(int *)(*(int *)(iVar3 + 0x252c) + 0x168) * 0xb];
        }
      }
      else {
        pcVar11 = (char *)(*(int *)(DAT_10223188 + 0x98) + *param_3);
      }
    }
  }
  iVar2 = _strncmp(pcVar11,"weapon_",7);
  if (iVar2 == 0) {
    pcVar11 = pcVar11 + 7;
  }
  else {
    iVar2 = _strncmp(pcVar11,"monster_",8);
    if (iVar2 == 0) {
      pcVar11 = pcVar11 + 8;
    }
    else {
      iVar2 = _strncmp(pcVar11,"func_",5);
      if (iVar2 == 0) {
        pcVar11 = pcVar11 + 5;
      }
    }
  }
  (*DAT_10223000)(2,DAT_102264ec,0,0);
  (*DAT_10223008)(uVar12);
  uVar12 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  (*DAT_10223008)(uVar12);
  (*DAT_10223020)(pcVar11);
  (*DAT_10223004)();
  pbVar8 = &DAT_101d63e4;
  pbVar4 = (byte *)pcVar11;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < *pbVar8;
    if (bVar1 != *pbVar8) {
LAB_100c7f41:
      uVar5 = -(uint)bVar13 | 1;
      goto LAB_100c7f46;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < pbVar8[1];
    if (bVar1 != pbVar8[1]) goto LAB_100c7f41;
    pbVar4 = pbVar4 + 2;
    pbVar8 = pbVar8 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_100c7f46:
  if (uVar5 == 0) {
    pbVar4 = (byte *)"gluon gun";
  }
  else {
    pcVar9 = "gauss";
    pbVar4 = (byte *)pcVar11;
    do {
      bVar1 = *pbVar4;
      bVar13 = bVar1 < (byte)*pcVar9;
      if (bVar1 != *pcVar9) {
LAB_100c7f78:
        uVar5 = -(uint)bVar13 | 1;
        goto LAB_100c7f7d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar13 = bVar1 < (byte)pcVar9[1];
      if (bVar1 != pcVar9[1]) goto LAB_100c7f78;
      pbVar4 = pbVar4 + 2;
      pcVar9 = pcVar9 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_100c7f7d:
    pbVar4 = (byte *)"tau_cannon";
    if (uVar5 != 0) {
      pbVar4 = (byte *)pcVar11;
    }
  }
  iVar2 = (*(int **)(param_1 + 4))[0x83];
  if (*(int **)(param_1 + 4) == param_2) {
    if (DAT_10222ee8 == 0) {
      uVar12 = (*DAT_1022310c)(iVar2);
      uVar6 = (*DAT_10223184)(iVar2);
      uVar7 = (*DAT_1022310c)(iVar2);
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1d4) + *(int *)(DAT_10223188 + 0x98);
      pcVar11 = "\"%s<%i><%s><%i>\" committed suicide with \"%s\"\n";
    }
    else {
      uVar12 = (*DAT_102230f0)(iVar2,"model");
      uVar12 = (*DAT_102230f4)(uVar12);
      uVar6 = (*DAT_10223184)(iVar2);
      uVar7 = (*DAT_1022310c)(iVar2);
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1d4) + *(int *)(DAT_10223188 + 0x98);
      pcVar11 = "\"%s<%i><%s><%s>\" committed suicide with \"%s\"\n";
    }
  }
  else {
    if ((*(byte *)(param_2 + 0x6a) & 8) != 0) {
      if (DAT_10222ee8 == 0) {
        local_c = (*DAT_1022310c)(iVar2);
        local_8 = (*DAT_10223184)(iVar2);
        local_10 = (*DAT_1022310c)(iVar2);
        iVar2 = *(int *)(DAT_10223188 + 0x98);
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
        local_14 = (*DAT_1022310c)(param_2[0x83]);
        local_18 = (*DAT_10223184)(param_2[0x83]);
        uVar12 = (*DAT_1022310c)(param_2[0x83]);
        pcVar11 = "\"%s<%i><%s><%i>\" killed \"%s<%i><%s><%i>\" with \"%s\"\n";
        iVar10 = *(int *)(DAT_10223188 + 0x98);
      }
      else {
        uVar12 = (*DAT_102230f0)(iVar2,"model");
        local_c = (*DAT_102230f4)(uVar12);
        local_8 = (*DAT_10223184)(iVar2);
        local_10 = (*DAT_1022310c)(iVar2);
        iVar2 = *(int *)(DAT_10223188 + 0x98);
        iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
        uVar12 = (*DAT_102230f0)(param_2[0x83],"model");
        local_14 = (*DAT_102230f4)(uVar12);
        local_18 = (*DAT_10223184)(param_2[0x83]);
        uVar12 = (*DAT_1022310c)(param_2[0x83]);
        pcVar11 = "\"%s<%i><%s><%s>\" killed \"%s<%i><%s><%s>\" with \"%s\"\n";
        iVar10 = *(int *)(DAT_10223188 + 0x98);
      }
      FUN_10119200(pcVar11,iVar10 + param_2[0x75],uVar12,local_18,local_14,iVar2 + iVar3,local_10,
                   local_8,local_c,pbVar4);
      goto LAB_100c8247;
    }
    if (DAT_10222ee8 == 0) {
      uVar12 = (*DAT_1022310c)(iVar2,pbVar4);
      uVar6 = (*DAT_10223184)(iVar2,uVar12);
      uVar7 = (*DAT_1022310c)(iVar2,uVar6);
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1d4) + *(int *)(DAT_10223188 + 0x98);
      pcVar11 = "\"%s<%i><%s><%i>\" committed suicide with \"%s\" (world)\n";
    }
    else {
      uVar12 = (*DAT_102230f0)(iVar2,"model");
      uVar12 = (*DAT_102230f4)(uVar12);
      uVar6 = (*DAT_10223184)(iVar2,uVar12);
      uVar7 = (*DAT_1022310c)(iVar2,uVar6);
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x1d4) + *(int *)(DAT_10223188 + 0x98);
      pcVar11 = "\"%s<%i><%s><%s>\" committed suicide with \"%s\" (world)\n";
    }
  }
  FUN_10119200(pcVar11,iVar2,uVar7,uVar6,uVar12,pbVar4);
LAB_100c8247:
  (*DAT_10223000)(9,0x33,0,0);
  (*DAT_10223008)(9);
  (*DAT_10223008)(2);
  uVar12 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  (*DAT_10223010)(uVar12);
  if (param_3 == (int *)0x0) {
    iVar2 = param_2[0x83];
  }
  else {
    iVar2 = param_3[0x83];
  }
  uVar12 = (*DAT_10223064)(iVar2);
  (*DAT_10223010)(uVar12);
  (*DAT_10223014)(0x27);
  (*DAT_10223004)();
  return;
}

