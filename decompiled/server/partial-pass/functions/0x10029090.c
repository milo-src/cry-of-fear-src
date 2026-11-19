// rea decompile_all
// name: FUN_10029090
// address: 0x10029090
// body: available
// range: 0x10029090-0x10029ff5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10029090(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  byte *pbVar8;
  char *in_ECX;
  char *pcVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  int local_c;
  
  if (param_1 == 0) {
    return 0;
  }
  pcVar9 = in_ECX + 0x8bbc;
  iVar12 = 1;
LAB_100290ba:
  if (((*in_ECX != '\0') && (*pcVar9 != '\0')) &&
     (*(int *)(pcVar9 + 8) ==
      *(int *)(*(int *)(param_1 + 4) + 0x1d4) + *(int *)(DAT_10223188 + 0x98))) {
    iVar12 = iVar12 * 0x41c;
    *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(in_ECX + iVar12 + 0x8978);
    *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(in_ECX + iVar12 + 0x897c);
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(in_ECX + iVar12 + 0x8980);
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(in_ECX + iVar12 + 0x8984);
    *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(in_ECX + iVar12 + 0x8988);
    *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(in_ECX + iVar12 + 0x898c);
    *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(in_ECX + iVar12 + 0x8990);
    *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(in_ECX + iVar12 + 0x8994);
    *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(in_ECX + iVar12 + 0x8998);
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(in_ECX + iVar12 + 0x899c);
    *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(in_ECX + iVar12 + 0x89a0);
    *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(in_ECX + iVar12 + 0x89a4);
    *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(in_ECX + iVar12 + 0x89a8);
    *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(in_ECX + iVar12 + 0x89ac);
    *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(in_ECX + iVar12 + 0x89b0);
    *(char *)(param_1 + 0x678) = in_ECX[iVar12 + 0x89b4];
    *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(in_ECX + iVar12 + 0x89b8);
    *(char *)(param_1 + 0x680) = in_ECX[iVar12 + 0x89bc];
    _memset(pcVar9,0,0x41c);
    _memset(in_ECX + iVar12 + 4,0,0x41c);
    return 1;
  }
  if (pcVar9[-0x879c] != '\0') {
    iVar3 = *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    if (*(int *)(pcVar9 + -0x8794) == iVar3) {
      if (pcVar9[-0x85cc] == '\x01') {
        iVar12 = iVar12 * 0x41c;
        *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(in_ECX + iVar12 + 0x1dc);
        *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(in_ECX + iVar12 + 0x1e0);
        *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(in_ECX + iVar12 + 0x1e4);
        *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(in_ECX + iVar12 + 0x1e8);
        *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(in_ECX + iVar12 + 0x1ec);
        *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(in_ECX + iVar12 + 0x1f0);
        *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(in_ECX + iVar12 + 500);
        *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(in_ECX + iVar12 + 0x1f8);
        *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(in_ECX + iVar12 + 0x1fc);
        *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(in_ECX + iVar12 + 0x200);
        *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(in_ECX + iVar12 + 0x204);
        *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(in_ECX + iVar12 + 0x208);
        *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(in_ECX + iVar12 + 0x20c);
        *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(in_ECX + iVar12 + 0x210);
        *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(in_ECX + iVar12 + 0x214);
        *(char *)(param_1 + 0x678) = in_ECX[iVar12 + 0x218];
        *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(in_ECX + iVar12 + 0x21c);
        *(char *)(param_1 + 0x680) = in_ECX[iVar12 + 0x220];
        FUN_100c6570(param_1);
        iVar12 = 0;
        puVar10 = (undefined4 *)(param_1 + 0x2540);
        do {
          (*DAT_10223000)(1,DAT_102264e8,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          (*DAT_10223008)(iVar12);
          (*DAT_10223010)(*puVar10);
          (*DAT_10223004)();
          iVar12 = iVar12 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar12 < 0x20);
        _memset(in_ECX + iVar12 * 0x41c + 4,0,0x41c);
        return 1;
      }
      if ((*(int *)(pcVar9 + -0x8794) == iVar3) && (pcVar9[-0x85cc] == '\0')) {
        iVar12 = iVar12 * 0x41c;
        iVar3 = 1;
        pcVar9 = in_ECX + iVar12 + 0x3fd;
        *(float *)(*(int *)(param_1 + 4) + 0x164) = (float)*(int *)(in_ECX + iVar12 + 0x4c);
        *(float *)(param_1 + 0x21f0) = (float)*(int *)(in_ECX + iVar12 + 0x50);
        *(undefined4 *)(param_1 + 0x3b4) = *(undefined4 *)(in_ECX + iVar12 + 8);
        *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(in_ECX + iVar12 + 0x228);
        *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(in_ECX + iVar12 + 0x22c);
        *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(in_ECX + iVar12 + 0x230);
        *(undefined4 *)(param_1 + 0x63c) = *(undefined4 *)(in_ECX + iVar12 + 0x1dc);
        *(undefined4 *)(param_1 + 0x640) = *(undefined4 *)(in_ECX + iVar12 + 0x1e0);
        *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(in_ECX + iVar12 + 0x1e4);
        *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(in_ECX + iVar12 + 0x1e8);
        *(undefined4 *)(param_1 + 0x64c) = *(undefined4 *)(in_ECX + iVar12 + 0x1ec);
        *(undefined4 *)(param_1 + 0x650) = *(undefined4 *)(in_ECX + iVar12 + 0x1f0);
        *(undefined4 *)(param_1 + 0x654) = *(undefined4 *)(in_ECX + iVar12 + 500);
        *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(in_ECX + iVar12 + 0x1f8);
        *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(in_ECX + iVar12 + 0x1fc);
        *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(in_ECX + iVar12 + 0x200);
        *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(in_ECX + iVar12 + 0x204);
        *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(in_ECX + iVar12 + 0x208);
        *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(in_ECX + iVar12 + 0x20c);
        *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(in_ECX + iVar12 + 0x210);
        *(undefined4 *)(param_1 + 0x674) = *(undefined4 *)(in_ECX + iVar12 + 0x214);
        *(char *)(param_1 + 0x678) = in_ECX[iVar12 + 0x218];
        *(undefined4 *)(param_1 + 0x67c) = *(undefined4 *)(in_ECX + iVar12 + 0x21c);
        *(char *)(param_1 + 0x680) = in_ECX[iVar12 + 0x220];
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          *(char *)(param_1 + 0x3f4 + iVar3) = cVar1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x21);
        pcVar9 = in_ECX + iVar12 + 0x27c;
        iVar3 = param_1 - (int)pcVar9;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar9[iVar3 + 0x204b] = cVar1;
        } while (cVar1 != '\0');
        pcVar9 = in_ECX + iVar12 + 0x2fc;
        iVar3 = param_1 - (int)pcVar9;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar9[iVar3 + 0x20cb] = cVar1;
        } while (cVar1 != '\0');
        pcVar9 = in_ECX + iVar12 + 0x37c;
        iVar3 = param_1 - (int)pcVar9;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar9[iVar3 + 0x214b] = cVar1;
        } while (cVar1 != '\0');
        if (*(int *)(in_ECX + iVar12 + 0x234) != 0) {
          FUN_100e0a80(*(int *)(in_ECX + iVar12 + 0x234),0,in_ECX[iVar12 + 0x18]);
          pbVar4 = *(byte **)(in_ECX + iVar12 + 0x234);
          pcVar9 = "weapon_syringe";
          do {
            bVar2 = *pbVar4;
            bVar13 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_10029660:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_10029665;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar13 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_10029660;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_10029665:
          if (uVar5 == 0) {
            (*DAT_10223000)(2,DAT_102266dc,0,0);
            uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
            (*DAT_10223008)(uVar6);
            (*DAT_10223008)(1);
            (*DAT_10223004)();
          }
          puVar11 = (uint *)(param_1 + 0x2514);
          local_c = 6;
          do {
            uVar5 = *puVar11;
            if (uVar5 != 0) {
              pcVar9 = "weapon_action";
              pbVar4 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
              do {
                bVar2 = *pbVar4;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_100296f1:
                  uVar7 = -(uint)bVar13 | 1;
                  goto joined_r0x100296f8;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar4[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_100296f1;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              uVar7 = 0;
joined_r0x100296f8:
              while (uVar7 != 0) {
                pbVar4 = *(byte **)(in_ECX + iVar12 + 0x234);
                pbVar8 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
                do {
                  bVar2 = *pbVar8;
                  bVar13 = bVar2 < *pbVar4;
                  if (bVar2 != *pbVar4) {
LAB_10029738:
                    uVar7 = -(uint)bVar13 | 1;
                    goto LAB_1002973d;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar13 = bVar2 < pbVar4[1];
                  if (bVar2 != pbVar4[1]) goto LAB_10029738;
                  pbVar8 = pbVar8 + 2;
                  pbVar4 = pbVar4 + 2;
                } while (bVar2 != 0);
                uVar7 = 0;
LAB_1002973d:
                if (uVar7 == 0) {
                  *(undefined4 *)(uVar5 + 0x1e4) = *(undefined4 *)(in_ECX + iVar12 + 0x238);
                  *(undefined4 *)(param_1 + 0x2540 + *(int *)(uVar5 + 0x1dc) * 4) =
                       *(undefined4 *)(in_ECX + iVar12 + 0x23c);
                }
                uVar5 = *(uint *)(uVar5 + 0x164);
                uVar7 = uVar5;
              }
            }
            puVar11 = puVar11 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (*(int *)(in_ECX + iVar12 + 0x240) != 0) {
          FUN_100e0a80(*(int *)(in_ECX + iVar12 + 0x240),0,in_ECX[iVar12 + 0x18]);
          pbVar4 = *(byte **)(in_ECX + iVar12 + 0x240);
          pcVar9 = "weapon_syringe";
          do {
            bVar2 = *pbVar4;
            bVar13 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_100297d5:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_100297da;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar13 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_100297d5;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_100297da:
          if (uVar5 == 0) {
            (*DAT_10223000)(2,DAT_102266dc,0,0);
            uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
            (*DAT_10223008)(uVar6);
            (*DAT_10223008)(1);
            (*DAT_10223004)();
          }
          puVar11 = (uint *)(param_1 + 0x2514);
          local_c = 6;
          do {
            uVar5 = *puVar11;
            if (uVar5 != 0) {
              pcVar9 = "weapon_action";
              pbVar4 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
              do {
                bVar2 = *pbVar4;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_10029866:
                  uVar7 = -(uint)bVar13 | 1;
                  goto joined_r0x1002986d;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar4[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_10029866;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              uVar7 = 0;
joined_r0x1002986d:
              while (uVar7 != 0) {
                pbVar4 = *(byte **)(in_ECX + iVar12 + 0x240);
                pbVar8 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
                do {
                  bVar2 = *pbVar8;
                  bVar13 = bVar2 < *pbVar4;
                  if (bVar2 != *pbVar4) {
LAB_100298a8:
                    uVar7 = -(uint)bVar13 | 1;
                    goto LAB_100298ad;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar13 = bVar2 < pbVar4[1];
                  if (bVar2 != pbVar4[1]) goto LAB_100298a8;
                  pbVar8 = pbVar8 + 2;
                  pbVar4 = pbVar4 + 2;
                } while (bVar2 != 0);
                uVar7 = 0;
LAB_100298ad:
                if (uVar7 == 0) {
                  *(undefined4 *)(uVar5 + 0x1e4) = *(undefined4 *)(in_ECX + iVar12 + 0x244);
                  *(undefined4 *)(param_1 + 0x2540 + *(int *)(uVar5 + 0x1dc) * 4) =
                       *(undefined4 *)(in_ECX + iVar12 + 0x248);
                }
                uVar5 = *(uint *)(uVar5 + 0x164);
                uVar7 = uVar5;
              }
            }
            puVar11 = puVar11 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (*(int *)(in_ECX + iVar12 + 0x24c) != 0) {
          FUN_100e0a80(*(int *)(in_ECX + iVar12 + 0x24c),0,in_ECX[iVar12 + 0x18]);
          pbVar4 = *(byte **)(in_ECX + iVar12 + 0x24c);
          pcVar9 = "weapon_syringe";
          do {
            bVar2 = *pbVar4;
            bVar13 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_10029945:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_1002994a;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar13 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_10029945;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_1002994a:
          if (uVar5 == 0) {
            (*DAT_10223000)(2,DAT_102266dc,0,0);
            uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
            (*DAT_10223008)(uVar6);
            (*DAT_10223008)(1);
            (*DAT_10223004)();
          }
          puVar11 = (uint *)(param_1 + 0x2514);
          local_c = 6;
          do {
            uVar5 = *puVar11;
            if (uVar5 != 0) {
              pcVar9 = "weapon_action";
              pbVar4 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
              do {
                bVar2 = *pbVar4;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_100299d6:
                  uVar7 = -(uint)bVar13 | 1;
                  goto joined_r0x100299dd;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar4[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_100299d6;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              uVar7 = 0;
joined_r0x100299dd:
              while (uVar7 != 0) {
                pbVar4 = *(byte **)(in_ECX + iVar12 + 0x24c);
                pbVar8 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
                do {
                  bVar2 = *pbVar8;
                  bVar13 = bVar2 < *pbVar4;
                  if (bVar2 != *pbVar4) {
LAB_10029a28:
                    uVar7 = -(uint)bVar13 | 1;
                    goto LAB_10029a2d;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar13 = bVar2 < pbVar4[1];
                  if (bVar2 != pbVar4[1]) goto LAB_10029a28;
                  pbVar8 = pbVar8 + 2;
                  pbVar4 = pbVar4 + 2;
                } while (bVar2 != 0);
                uVar7 = 0;
LAB_10029a2d:
                if (uVar7 == 0) {
                  *(undefined4 *)(uVar5 + 0x1e4) = *(undefined4 *)(in_ECX + iVar12 + 0x250);
                  *(undefined4 *)(param_1 + 0x2540 + *(int *)(uVar5 + 0x1dc) * 4) =
                       *(undefined4 *)(in_ECX + iVar12 + 0x254);
                }
                uVar5 = *(uint *)(uVar5 + 0x164);
                uVar7 = uVar5;
              }
            }
            puVar11 = puVar11 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (*(int *)(in_ECX + iVar12 + 600) != 0) {
          FUN_100e0a80(*(int *)(in_ECX + iVar12 + 600),0,in_ECX[iVar12 + 0x18]);
          pbVar4 = *(byte **)(in_ECX + iVar12 + 600);
          pcVar9 = "weapon_syringe";
          do {
            bVar2 = *pbVar4;
            bVar13 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_10029ac5:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_10029aca;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar13 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_10029ac5;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_10029aca:
          if (uVar5 == 0) {
            (*DAT_10223000)(2,DAT_102266dc,0,0);
            uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
            (*DAT_10223008)(uVar6);
            (*DAT_10223008)(1);
            (*DAT_10223004)();
          }
          puVar11 = (uint *)(param_1 + 0x2514);
          local_c = 6;
          do {
            uVar5 = *puVar11;
            if (uVar5 != 0) {
              pcVar9 = "weapon_action";
              pbVar4 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
              do {
                bVar2 = *pbVar4;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_10029b56:
                  uVar7 = -(uint)bVar13 | 1;
                  goto joined_r0x10029b5d;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar4[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_10029b56;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              uVar7 = 0;
joined_r0x10029b5d:
              while (uVar7 != 0) {
                pbVar4 = *(byte **)(in_ECX + iVar12 + 600);
                pbVar8 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
                do {
                  bVar2 = *pbVar8;
                  bVar13 = bVar2 < *pbVar4;
                  if (bVar2 != *pbVar4) {
LAB_10029ba8:
                    uVar7 = -(uint)bVar13 | 1;
                    goto LAB_10029bad;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar13 = bVar2 < pbVar4[1];
                  if (bVar2 != pbVar4[1]) goto LAB_10029ba8;
                  pbVar8 = pbVar8 + 2;
                  pbVar4 = pbVar4 + 2;
                } while (bVar2 != 0);
                uVar7 = 0;
LAB_10029bad:
                if (uVar7 == 0) {
                  *(undefined4 *)(uVar5 + 0x1e4) = *(undefined4 *)(in_ECX + iVar12 + 0x25c);
                  *(undefined4 *)(param_1 + 0x2540 + *(int *)(uVar5 + 0x1dc) * 4) =
                       *(undefined4 *)(in_ECX + iVar12 + 0x260);
                }
                uVar5 = *(uint *)(uVar5 + 0x164);
                uVar7 = uVar5;
              }
            }
            puVar11 = puVar11 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (*(int *)(in_ECX + iVar12 + 0x264) != 0) {
          FUN_100e0a80(*(int *)(in_ECX + iVar12 + 0x264),0,in_ECX[iVar12 + 0x18]);
          pbVar4 = *(byte **)(in_ECX + iVar12 + 0x264);
          pcVar9 = "weapon_syringe";
          do {
            bVar2 = *pbVar4;
            bVar13 = bVar2 < (byte)*pcVar9;
            if (bVar2 != *pcVar9) {
LAB_10029c45:
              uVar5 = -(uint)bVar13 | 1;
              goto LAB_10029c4a;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar13 = bVar2 < (byte)pcVar9[1];
            if (bVar2 != pcVar9[1]) goto LAB_10029c45;
            pbVar4 = pbVar4 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_10029c4a:
          if (uVar5 == 0) {
            (*DAT_10223000)(2,DAT_102266dc,0,0);
            uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
            (*DAT_10223008)(uVar6);
            (*DAT_10223008)(1);
            (*DAT_10223004)();
          }
          puVar11 = (uint *)(param_1 + 0x2514);
          local_c = 6;
          do {
            uVar5 = *puVar11;
            if (uVar5 != 0) {
              pcVar9 = "weapon_action";
              pbVar4 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
              do {
                bVar2 = *pbVar4;
                bVar13 = bVar2 < (byte)*pcVar9;
                if (bVar2 != *pcVar9) {
LAB_10029cd6:
                  uVar7 = -(uint)bVar13 | 1;
                  goto joined_r0x10029cdd;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar4[1];
                bVar13 = bVar2 < (byte)pcVar9[1];
                if (bVar2 != pcVar9[1]) goto LAB_10029cd6;
                pbVar4 = pbVar4 + 2;
                pcVar9 = pcVar9 + 2;
              } while (bVar2 != 0);
              uVar7 = 0;
joined_r0x10029cdd:
              while (uVar7 != 0) {
                pbVar4 = *(byte **)(in_ECX + iVar12 + 0x264);
                pbVar8 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
                do {
                  bVar2 = *pbVar8;
                  bVar13 = bVar2 < *pbVar4;
                  if (bVar2 != *pbVar4) {
LAB_10029d28:
                    uVar7 = -(uint)bVar13 | 1;
                    goto LAB_10029d2d;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar8[1];
                  bVar13 = bVar2 < pbVar4[1];
                  if (bVar2 != pbVar4[1]) goto LAB_10029d28;
                  pbVar8 = pbVar8 + 2;
                  pbVar4 = pbVar4 + 2;
                } while (bVar2 != 0);
                uVar7 = 0;
LAB_10029d2d:
                if (uVar7 == 0) {
                  *(undefined4 *)(uVar5 + 0x1e4) = *(undefined4 *)(in_ECX + iVar12 + 0x268);
                  *(undefined4 *)(param_1 + 0x2540 + *(int *)(uVar5 + 0x1dc) * 4) =
                       *(undefined4 *)(in_ECX + iVar12 + 0x26c);
                }
                uVar5 = *(uint *)(uVar5 + 0x164);
                uVar7 = uVar5;
              }
            }
            puVar11 = puVar11 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (*(int *)(in_ECX + iVar12 + 0x270) == 0) goto LAB_10029f19;
        FUN_100e0a80(*(int *)(in_ECX + iVar12 + 0x270),0,in_ECX[iVar12 + 0x18]);
        pbVar4 = *(byte **)(in_ECX + iVar12 + 0x270);
        pcVar9 = "weapon_syringe";
        do {
          bVar2 = *pbVar4;
          bVar13 = bVar2 < (byte)*pcVar9;
          if (bVar2 != *pcVar9) {
LAB_10029dc5:
            uVar5 = -(uint)bVar13 | 1;
            goto LAB_10029dca;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar4[1];
          bVar13 = bVar2 < (byte)pcVar9[1];
          if (bVar2 != pcVar9[1]) goto LAB_10029dc5;
          pbVar4 = pbVar4 + 2;
          pcVar9 = pcVar9 + 2;
        } while (bVar2 != 0);
        uVar5 = 0;
LAB_10029dca:
        if (uVar5 == 0) {
          (*DAT_10223000)(2,DAT_102266dc,0,0);
          uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          (*DAT_10223008)(uVar6);
          (*DAT_10223008)(1);
          (*DAT_10223004)();
        }
        puVar11 = (uint *)(param_1 + 0x2514);
        local_c = 6;
        do {
          uVar5 = *puVar11;
          if (uVar5 != 0) {
            pcVar9 = "weapon_action";
            pbVar4 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
            do {
              bVar2 = *pbVar4;
              bVar13 = bVar2 < (byte)*pcVar9;
              if (bVar2 != *pcVar9) {
LAB_10029e56:
                uVar7 = -(uint)bVar13 | 1;
                goto joined_r0x10029e5d;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar4[1];
              bVar13 = bVar2 < (byte)pcVar9[1];
              if (bVar2 != pcVar9[1]) goto LAB_10029e56;
              pbVar4 = pbVar4 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar2 != 0);
            uVar7 = 0;
joined_r0x10029e5d:
            while (uVar7 != 0) {
              pbVar4 = *(byte **)(in_ECX + iVar12 + 0x270);
              pbVar8 = (byte *)(**(int **)(uVar5 + 4) + *(int *)(DAT_10223188 + 0x98));
              do {
                bVar2 = *pbVar8;
                bVar13 = bVar2 < *pbVar4;
                if (bVar2 != *pbVar4) {
LAB_10029ea8:
                  uVar7 = -(uint)bVar13 | 1;
                  goto LAB_10029ead;
                }
                if (bVar2 == 0) break;
                bVar2 = pbVar8[1];
                bVar13 = bVar2 < pbVar4[1];
                if (bVar2 != pbVar4[1]) goto LAB_10029ea8;
                pbVar8 = pbVar8 + 2;
                pbVar4 = pbVar4 + 2;
              } while (bVar2 != 0);
              uVar7 = 0;
LAB_10029ead:
              if (uVar7 == 0) {
                *(undefined4 *)(uVar5 + 0x1e4) = *(undefined4 *)(in_ECX + iVar12 + 0x274);
                *(undefined4 *)(param_1 + 0x2540 + *(int *)(uVar5 + 0x1dc) * 4) =
                     *(undefined4 *)(in_ECX + iVar12 + 0x278);
              }
              uVar5 = *(uint *)(uVar5 + 0x164);
              uVar7 = uVar5;
            }
          }
          puVar11 = puVar11 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        if ((*(int *)(in_ECX + iVar12 + 0x10) != 0) &&
           (iVar3 = FUN_100e2380(*(int *)(in_ECX + iVar12 + 0x10)), iVar3 != 0)) {
          FUN_100f1a50(*(undefined4 *)(in_ECX + iVar12 + 0x10));
        }
LAB_10029f19:
        if (*(int *)(param_1 + 0x3dc) != 0) {
          (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          (*DAT_10223008)(1);
          (*DAT_10223008)(*(undefined4 *)(param_1 + 0x3dc));
          (*DAT_10223004)();
        }
        if (*(int *)(param_1 + 0x3e0) != 0) {
          (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          (*DAT_10223008)(2);
          (*DAT_10223008)(*(undefined4 *)(param_1 + 0x3e0));
          (*DAT_10223004)();
        }
        if (*(int *)(param_1 + 0x3e4) != 0) {
          (*DAT_10223000)(1,DAT_10226690,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          (*DAT_10223008)(3);
          (*DAT_10223008)(*(undefined4 *)(param_1 + 0x3e4));
          (*DAT_10223004)();
        }
        _memset(in_ECX + iVar12 + 4,0,0x41c);
        return 1;
      }
    }
  }
  iVar12 = iVar12 + 1;
  pcVar9 = pcVar9 + 0x41c;
  if (0x20 < iVar12) {
    fVar14 = (float10)(*DAT_1022302c)("sv_coop_nosave");
    if ((float)fVar14 != 0.0) {
      return 0;
    }
    FUN_100c6570(param_1);
    puVar10 = (undefined4 *)(param_1 + 0x2540);
    iVar12 = 0;
    do {
      (*DAT_10223000)(1,DAT_102264e8,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
      (*DAT_10223008)(iVar12);
      (*DAT_10223010)(*puVar10);
      (*DAT_10223004)();
      iVar12 = iVar12 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar12 < 0x20);
    return 0;
  }
  goto LAB_100290ba;
}

