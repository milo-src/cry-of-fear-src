// rea decompile_all
// name: FUN_100de170
// address: 0x100de170
// body: available
// range: 0x100de170-0x100de983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100de170(byte *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  CSyringe *this;
  int *piVar8;
  int *in_ECX;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  bool bVar12;
  
  bVar4 = false;
  pbVar9 = param_1;
  do {
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar1 != 0);
  pbVar11 = (byte *)0x0;
  if (pbVar9 != param_1 + 1) {
    pbVar11 = param_1;
  }
  piVar8 = in_ECX + 0x945;
  param_1 = (byte *)0x0;
  do {
    for (piVar2 = (int *)*piVar8; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x59]) {
      if (pbVar11 == (byte *)0x0) {
        if (piVar2 == (int *)in_ECX[0x94b]) {
LAB_100de1f8:
          bVar4 = true;
          goto LAB_100de1fc;
        }
      }
      else {
        pbVar5 = (byte *)(*(int *)piVar2[1] + DAT_10223188[0x26]);
        pbVar9 = pbVar11;
        do {
          bVar1 = *pbVar9;
          bVar12 = bVar1 < *pbVar5;
          if (bVar1 != *pbVar5) {
LAB_100de1e7:
            uVar6 = -(uint)bVar12 | 1;
            goto LAB_100de1ec;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar12 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_100de1e7;
          pbVar9 = pbVar9 + 2;
          pbVar5 = pbVar5 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_100de1ec:
        if (uVar6 == 0) {
          if (piVar2 == (int *)in_ECX[0x94b]) goto LAB_100de1f8;
LAB_100de1fc:
          if (piVar2 != (int *)0x0) {
            if ((char)piVar2[0x5e] != '\0') {
              (**(code **)(*piVar2 + 0x130))();
            }
            piVar8 = (int *)piVar2[1];
            piVar2[0x1e] = 0;
            if (piVar8[0x94] != 0) {
              if (bVar4) {
                (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                (*DAT_10223008)(0);
                (*DAT_10223008)(0);
                (*DAT_10223008)(0);
                (*DAT_10223004)();
              }
              *(uint *)(in_ECX[1] + 0x16c) =
                   *(uint *)(in_ECX[1] + 0x16c) & ~(1 << (piVar2[0x5a] & 0x1fU));
              FUN_100e2240(DAT_10223188[0x26] + piVar2[0x44],1);
              (**(code **)(*in_ECX + 0x90))(piVar2);
              return;
            }
            if (*piVar8 == 0) {
              return;
            }
            if ((*(int *)(&DAT_102318a4 + piVar2[0x5a] * 0x2c) != -1) ||
               ((&DAT_10231890)[piVar2[0x5a] * 0xb] == 0)) {
              if (piVar2[0x58] != 0) {
                FUN_10119320(in_ECX[1] + 0x74);
                *(uint *)(in_ECX[1] + 0x16c) =
                     *(uint *)(in_ECX[1] + 0x16c) & ~(1 << (piVar2[0x5a] & 0x1fU));
                iVar7 = (**(code **)(*(int *)piVar2[0x58] + 0x90))(piVar2);
                if (iVar7 == 0) goto LAB_100de3d2;
                piVar8 = (int *)piVar2[1];
              }
              piVar8[0x69] = piVar8[0x69] | 0x40000000;
              *(undefined4 *)(piVar2[1] + 0x108) = 0;
              *(undefined4 *)(piVar2[1] + 0x10c) = 0;
              *(undefined4 *)(piVar2[1] + 0x118) = 0x80;
              *(undefined4 *)(piVar2[1] + 0xb4) = 0;
              *(undefined4 *)(piVar2[1] + 0xb8) = 0;
              *(undefined4 *)(piVar2[1] + 0x19c) = *(undefined4 *)(in_ECX[1] + 0x20c);
              piVar2[0x45] = 0;
              piVar2[0x58] = 0;
              piVar2[0x1f] = 0;
              piVar2[0x1e] = 0;
            }
LAB_100de3d2:
            if (*(float *)(piVar2[1] + 0x1b4) == 2.0) {
              FUN_10119900(piVar2);
            }
            if ((*(int *)(&DAT_102318a4 + piVar2[0x5a] * 0x2c) != -1) ||
               ((&DAT_10231890)[piVar2[0x5a] * 0xb] == 0)) {
              iVar7 = in_ECX[1];
              iVar3 = piVar2[1];
              *(undefined8 *)(iVar3 + 8) = *(undefined8 *)(iVar7 + 8);
              *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar7 + 0x10);
              *(undefined4 *)(piVar2[1] + 0x108) = 0;
              *(undefined4 *)(piVar2[1] + 0x10c) = 1;
              *(undefined4 *)(piVar2[1] + 0x198) = 0;
              *(uint *)(piVar2[1] + 0x118) = *(uint *)(piVar2[1] + 0x118) & 0xffffff7f;
              *(undefined4 *)(piVar2[1] + 0x19c) = 0;
              (**(code **)(*piVar2 + 0x2c))();
              (*DAT_10222fb0)(*(undefined4 *)(piVar2[1] + 0x20c));
              if (param_2 != 0) {
                FUN_100dd990(param_2,0);
              }
              if (bVar4) {
                (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                (*DAT_10223008)(0);
                (*DAT_10223008)(0);
                (*DAT_10223008)(0);
                (*DAT_10223004)();
              }
              *(undefined4 *)(piVar2[1] + 0x1c0) = 0x44268000;
              return;
            }
            pcVar10 = "weapon_syringe";
            pbVar9 = (byte *)(*(int *)(-(uint)(*(int *)(piVar2[1] + 0x20c) != 0) &
                                      *(int *)(piVar2[1] + 0x20c) + 0x80U) + DAT_10223188[0x26]);
            goto LAB_100de440;
          }
          break;
        }
      }
    }
    param_1 = (byte *)((int)param_1 + 1);
    piVar8 = piVar8 + 1;
    if (5 < (int)param_1) {
      return;
    }
  } while( true );
  while( true ) {
    bVar1 = pbVar9[1];
    bVar12 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_100de460;
    pbVar9 = pbVar9 + 2;
    pcVar10 = pcVar10 + 2;
    if (bVar1 == 0) break;
LAB_100de440:
    bVar1 = *pbVar9;
    bVar12 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_100de460:
      uVar6 = -(uint)bVar12 | 1;
      goto LAB_100de465;
    }
    if (bVar1 == 0) break;
  }
  uVar6 = 0;
LAB_100de465:
  if (uVar6 == 0) {
    iVar7 = FUN_1007a4e0(piVar2[1]);
    in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] = in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] + -1;
    iVar7 = FUN_1007a4e0(piVar2[1]);
    if (in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] < 0) {
      iVar7 = FUN_1007a4e0(piVar2[1]);
      in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] = 0;
    }
    if (DAT_102265b8 != 0) {
      (*DAT_10223000)(1,DAT_102265b8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(piVar2[0x5a]);
      (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + piVar2[0x5a] * 0x2c));
      iVar7 = FUN_1007a4e0(piVar2[1]);
      (*DAT_10223010)(in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950]);
      (*DAT_10223004)();
      iVar7 = FUN_10018440(piVar2[1]);
      piVar2[0x48] = in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950];
    }
    iVar7 = FUN_1007a4e0(piVar2[1]);
    if (in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] < 1) {
      this = (CSyringe *)FUN_1007a4e0(piVar2[1]);
      CSyringe::DestroyItem(this);
      if (param_2 != 0) {
        FUN_100dd990(param_2,0);
      }
      iVar7 = FUN_1007a4e0(piVar2[1]);
      *(undefined1 *)(iVar7 + 0x1fc) = 1;
      if (bVar4) {
        (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(0);
        (*DAT_10223008)(0);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
      }
    }
    iVar7 = in_ECX[1];
    iVar7 = FUN_10017950("weapon_syringe",iVar7 + 8,iVar7 + 0x50,*(undefined4 *)(iVar7 + 0x20c));
    if (iVar7 != 0) {
      (*DAT_10222fb0)(*(undefined4 *)(*(int *)(iVar7 + 4) + 0x20c));
      *(undefined4 *)(*(int *)(iVar7 + 4) + 0x1c0) = 0x44268000;
    }
  }
  pcVar10 = "weapon_flare";
  pbVar9 = (byte *)(*(int *)(-(uint)(*(int *)(piVar2[1] + 0x20c) != 0) &
                            *(int *)(piVar2[1] + 0x20c) + 0x80U) + DAT_10223188[0x26]);
  do {
    bVar1 = *pbVar9;
    bVar12 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_100de652:
      uVar6 = -(uint)bVar12 | 1;
      goto LAB_100de657;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar9[1];
    bVar12 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_100de652;
    pbVar9 = pbVar9 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar6 = 0;
LAB_100de657:
  if (uVar6 == 0) {
    iVar7 = FUN_100186e0(piVar2[1]);
    in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] = in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] + -1;
    iVar7 = FUN_100186e0(piVar2[1]);
    if (in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] < 0) {
      iVar7 = FUN_100186e0(piVar2[1]);
      in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] = 0;
    }
    if (DAT_102265b8 != 0) {
      (*DAT_10223000)(1,DAT_102265b8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(piVar2[0x5a]);
      (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + piVar2[0x5a] * 0x2c));
      iVar7 = FUN_100186e0(piVar2[1]);
      (*DAT_10223010)(in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950]);
      (*DAT_10223004)();
      iVar7 = FUN_10018440(piVar2[1]);
      piVar2[0x48] = in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950];
    }
    iVar7 = FUN_100186e0(piVar2[1]);
    if (in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] < 1) {
      *(uint *)(in_ECX[1] + 0x16c) = *(uint *)(in_ECX[1] + 0x16c) & ~(1 << (piVar2[0x5a] & 0x1fU));
      FUN_100e2240(DAT_10223188[0x26] + piVar2[0x44],1);
      (**(code **)(*in_ECX + 0x90))(piVar2);
      if (bVar4) {
        (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(0);
        (*DAT_10223008)(0);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
      }
      (**(code **)(*piVar2 + 0x160))();
      if (param_2 != 0) {
        FUN_100dd990(param_2,0);
      }
    }
    iVar7 = in_ECX[1];
    piVar8 = (int *)FUN_10017950("weapon_flare",iVar7 + 8,iVar7 + 0x50,
                                 *(undefined4 *)(iVar7 + 0x20c));
    if (piVar8 != (int *)0x0) {
      (*DAT_10222fb0)(*(undefined4 *)(piVar8[1] + 0x20c));
      *(undefined4 *)(piVar8[1] + 0x1c0) = 0x44268000;
      iVar7 = FUN_100186e0(piVar2[1]);
      if ((in_ECX[*(int *)(iVar7 + 0x1dc) + 0x950] < 1) && (0 < *(int *)(piVar2[1] + 0x248))) {
        *(int *)(piVar8[1] + 0x248) = *(int *)(piVar2[1] + 0x248);
        *(uint *)(piVar8[1] + 0x114) = (uint)(*(int *)(piVar8[1] + 0x248) == 1);
        *(undefined4 *)(piVar8[1] + 0x1b8) = *DAT_10223188;
        *(undefined4 *)(piVar8[1] + 0x19c) = 0;
        (**(code **)(*piVar8 + 0x2c))();
        *(undefined4 *)(piVar8[1] + 0x208) = *(undefined4 *)(piVar2[1] + 0x208);
        return;
      }
    }
  }
  return;
}

