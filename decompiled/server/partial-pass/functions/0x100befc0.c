// rea decompile_all
// name: FUN_100befc0
// address: 0x100befc0
// body: available
// range: 0x100befc0-0x100bf2d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100befc0(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  char *pcVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if ((DAT_10222f14 != 0) && (DAT_10222f20 == 0)) {
    local_c = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x54);
    local_8 = 0;
    local_10 = 0;
    iVar2 = (*DAT_102230b0)(1,6);
    if (iVar2 == 1) {
      iVar5 = *(int *)(in_ECX + 4);
      pcVar8 = "weapon_syringe";
    }
    else {
      iVar2 = (*DAT_102230b0)(1,100);
      if (iVar2 < 6) {
        iVar2 = (*DAT_102230b0)(0,1);
        pcVar8 = "ammo_rifle";
        iVar5 = *(int *)(in_ECX + 4);
        if (iVar2 != 1) {
          pcVar8 = "ammo_g43";
        }
      }
      else {
        iVar5 = *(int *)(in_ECX + 4);
        if (iVar2 < 0xb) {
          pcVar8 = "ammo_revolver";
        }
        else if (iVar2 < 0x15) {
          pcVar8 = "ammo_m16";
        }
        else if (iVar2 < 0x29) {
          pcVar8 = "ammo_shells";
        }
        else if (iVar2 < 0x33) {
          pcVar8 = "ammo_p345";
        }
        else {
          pcVar8 = "ammo_vp70";
          if (0x46 < iVar2) {
            pcVar8 = "ammo_glock";
          }
        }
      }
    }
    FUN_10017950(pcVar8,iVar5 + 8,&local_10,0);
    iVar2 = *(int *)(*(int *)(in_ECX + 4) + 0x20c);
    pcVar8 = "monster_nerd";
    pbVar10 = (byte *)(*(int *)(-(uint)(iVar2 != 0) & iVar2 + 0x80U) + *(int *)(DAT_10223188 + 0x98)
                      );
    pbVar3 = pbVar10;
    do {
      bVar1 = *pbVar3;
      bVar12 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100bf0f1:
        uVar11 = -(uint)bVar12 | 1;
        goto LAB_100bf0f6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar12 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100bf0f1;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar11 = 0;
LAB_100bf0f6:
    pcVar8 = "monster_taller";
    pbVar3 = pbVar10;
    do {
      bVar1 = *pbVar3;
      bVar12 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100bf120:
        uVar4 = -(uint)bVar12 | 1;
        goto LAB_100bf125;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar12 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100bf120;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100bf125:
    iVar2 = 0x1e;
    if (uVar11 != 0) {
      iVar2 = 0x14;
    }
    if (uVar4 == 0) {
      iVar2 = 0x32;
    }
    pcVar8 = "monster_sawcrazy";
    pbVar3 = pbVar10;
    do {
      bVar1 = *pbVar3;
      bVar12 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100bf166:
        uVar11 = -(uint)bVar12 | 1;
        goto LAB_100bf16b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar12 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100bf166;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar11 = 0;
LAB_100bf16b:
    pcVar8 = "monster_booksimon";
    if (uVar11 == 0) {
      iVar2 = 0x3c;
    }
    do {
      bVar1 = *pbVar10;
      bVar12 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100bf1a0:
        uVar11 = -(uint)bVar12 | 1;
        goto LAB_100bf1a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar10[1];
      bVar12 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100bf1a0;
      pbVar10 = pbVar10 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar11 = 0;
LAB_100bf1a5:
    if (uVar11 == 0) {
      iVar2 = 0x78;
    }
    param_2[0x18e] = param_2[0x18e] + iVar2;
    iVar5 = (**(code **)(*param_2 + 0xd0))();
    if (iVar5 != 0) {
      iVar5 = FUN_10118460(0,"cof_survivalmode");
      if ((((iVar5 != 0) && (iVar5 = FUN_10090400(*(undefined4 *)(iVar5 + 4)), iVar5 != 0)) &&
          (*(int *)(*(int *)(iVar5 + 4) + 0x24c) != 0)) && (*(char *)(iVar5 + 0xdd) == '\x01')) {
        *(int *)(iVar5 + 0xec) = *(int *)(iVar5 + 0xec) + iVar2;
        iVar9 = *(int *)(iVar5 + 0xf4) + iVar2;
        *(int *)(iVar5 + 0xf4) = iVar9;
        if (0x3a < iVar9) {
          iVar6 = iVar9 + -0x3c;
          if (iVar9 < 0x3c) {
            iVar6 = 0;
          }
          *(int *)(iVar5 + 0xf4) = iVar6;
          *(int *)(iVar5 + 0xf8) = *(int *)(iVar5 + 0xf8) + 1;
        }
      }
      iVar5 = 1;
      if (0 < *(int *)(DAT_10223188 + 0x90)) {
        do {
          piVar7 = (int *)FUN_10119680(iVar5);
          if (piVar7 != (int *)0x0) {
            if (piVar7 != param_2) {
              (*DAT_10223000)(1,DAT_102266a8,0,*(undefined4 *)(piVar7[1] + 0x20c));
              (*DAT_10223008)(iVar2);
            }
            else {
              (*DAT_10223000)(1,DAT_102266a8,0,*(undefined4 *)(param_2[1] + 0x20c));
              (*DAT_10223008)(iVar2);
            }
            (*DAT_10223008)(piVar7 == param_2);
            (*DAT_10223008)(0);
            (*DAT_10223004)();
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 <= *(int *)(DAT_10223188 + 0x90));
      }
    }
  }
  return;
}

