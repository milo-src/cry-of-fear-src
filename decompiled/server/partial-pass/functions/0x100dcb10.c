// rea decompile_all
// name: FUN_100dcb10
// address: 0x100dcb10
// body: available
// range: 0x100dcb10-0x100dce5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dcb10(byte *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  int in_ECX;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  int iVar12;
  bool bVar13;
  undefined *puVar14;
  undefined4 uVar15;
  int local_14;
  int local_8;
  
  pbVar10 = param_1;
  if ((((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) ||
      ((DAT_10222ee4 != (int *)0x0 && (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 != 0))))
     || ((((iVar3 = _strncmp((char *)param_1,"weapon_",7), iVar3 != 0 ||
           (iVar3 = _strncmp((char *)param_2,"weapon_",7), iVar3 != 0)) ||
          (iVar3 = FUN_100e2380(param_1), iVar3 == 0)) ||
         (iVar3 = FUN_100e2380(param_2), iVar3 == 0)))) {
    return;
  }
  local_8 = 0;
  piVar4 = (int *)(in_ECX + 0x2514);
  param_1 = (byte *)0x0;
  local_14 = 6;
  piVar5 = piVar4;
  do {
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      do {
        pbVar6 = (byte *)(**(int **)(iVar3 + 4) + *(int *)(DAT_10223188 + 0x98));
        pbVar9 = pbVar10;
        do {
          bVar1 = *pbVar6;
          bVar13 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_100dcc00:
            uVar7 = -(uint)bVar13 | 1;
            goto LAB_100dcc05;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar13 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_100dcc00;
          pbVar6 = pbVar6 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_100dcc05:
        if (uVar7 == 0) {
          local_8 = *(int *)(iVar3 + 0x168);
        }
        iVar3 = *(int *)(iVar3 + 0x164);
      } while (iVar3 != 0);
    }
    piVar5 = piVar5 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar3 = 6;
  do {
    iVar12 = *piVar4;
    if (iVar12 != 0) {
      do {
        pbVar9 = (byte *)(**(int **)(iVar12 + 4) + *(int *)(DAT_10223188 + 0x98));
        pbVar10 = param_2;
        do {
          bVar1 = *pbVar9;
          bVar13 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_100dcc80:
            uVar7 = -(uint)bVar13 | 1;
            goto LAB_100dcc85;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar13 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_100dcc80;
          pbVar9 = pbVar9 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_100dcc85:
        if (uVar7 == 0) {
          param_1 = *(byte **)(iVar12 + 0x168);
        }
        iVar12 = *(int *)(iVar12 + 0x164);
      } while (iVar12 != 0);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(int *)(in_ECX + 0x252c) != 0) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x252c) + 4);
    pcVar11 = "weapon_dualweapon";
    iVar12 = *(int *)(iVar3 + 0x20c);
    pbVar10 = (byte *)(*(int *)(-(uint)(iVar12 != 0) & iVar12 + 0x80U) +
                      *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar10;
      bVar13 = bVar1 < (byte)*pcVar11;
      if (bVar1 != *pcVar11) {
LAB_100dcd00:
        uVar7 = -(uint)bVar13 | 1;
        goto LAB_100dcd05;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar10[1];
      bVar13 = bVar1 < (byte)pcVar11[1];
      if (bVar1 != pcVar11[1]) goto LAB_100dcd00;
      pbVar10 = pbVar10 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_100dcd05:
    if (((uVar7 == 0) && (iVar3 = FUN_1002f180(iVar3), iVar3 != 0)) &&
       ((*(int *)(iVar3 + 0x204) == local_8 && ((byte *)*(int *)(iVar3 + 0x200) == param_1)))) {
      return;
    }
  }
  cVar2 = FUN_100e4bf0(local_8);
  if ((cVar2 != '\0') && (cVar2 = FUN_100e4bf0(param_1), cVar2 != '\0')) {
    FUN_100ddc40();
    FUN_10119810(in_ECX,&DAT_101dc8fc,2,0);
    return;
  }
  cVar2 = FUN_100dc020(local_8);
  if ((cVar2 == '\0') && (cVar2 = FUN_100dc020(param_1), cVar2 == '\0')) {
    FUN_100ddc40();
    uVar8 = *(undefined4 *)(&DAT_1021b850 + (int)param_1 * 4);
    uVar15 = *(undefined4 *)(&DAT_1021b850 + local_8 * 4);
    puVar14 = &DAT_101dc92c;
  }
  else {
    cVar2 = FUN_100dc020(local_8);
    if (((cVar2 != '\0') || (cVar2 = FUN_100dc020(param_1), cVar2 == '\0')) &&
       ((cVar2 = FUN_100dc020(local_8), cVar2 == '\0' ||
        (cVar2 = FUN_100dc020(param_1), cVar2 != '\0')))) {
      if (local_8 < 1) {
        return;
      }
      if ((int)param_1 < 1) {
        return;
      }
      if ((byte *)local_8 == param_1) {
        return;
      }
      FUN_100e08b0(local_8,param_1);
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,"inventory/inventory_click.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      return;
    }
    FUN_100ddc40();
    uVar8 = *(undefined4 *)(&DAT_1021b850 + (int)param_1 * 4);
    uVar15 = *(undefined4 *)(&DAT_1021b850 + local_8 * 4);
    puVar14 = &DAT_101dc954;
  }
  uVar8 = FUN_1011a8a0(puVar14,uVar15,uVar8,2,0);
  FUN_10119810(in_ECX,uVar8);
  return;
}

