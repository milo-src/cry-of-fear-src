// rea decompile_all
// name: FUN_100c6570
// address: 0x100c6570
// body: available
// range: 0x100c6570-0x100c6dd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c6dd2 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c6570(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte ****ppppbVar10;
  byte ****ppppbVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  undefined1 auVar15 [4];
  char *pcVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined1 local_5e8 [184];
  uint *local_530;
  byte ***local_52c [4];
  uint local_51c;
  undefined1 local_518 [4];
  char local_514 [4];
  undefined1 local_510 [1020];
  byte local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019ddab;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 != 0) {
    (*DAT_102230d4)(local_514,local_14);
    puVar17 = (undefined4 *)(local_518 + 3);
    do {
      puVar8 = puVar17;
      puVar17 = (undefined4 *)((int)puVar8 + 1);
    } while (*(char *)((int)puVar8 + 1) != '\0');
    *(undefined4 *)((int)puVar8 + 1) = 0x70616d2f;
    *(undefined2 *)((int)puVar8 + 5) = 0x2f73;
    *(undefined1 *)((int)puVar8 + 7) = 0;
    pcVar12 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc));
    pcVar13 = pcVar12;
    do {
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    pcVar16 = local_518 + 3;
    do {
      pcVar14 = pcVar16 + 1;
      pcVar16 = pcVar16 + 1;
    } while (*pcVar14 != '\0');
    pcVar14 = pcVar12;
    for (uVar7 = (uint)((int)pcVar13 - (int)pcVar12) >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar14;
      pcVar14 = pcVar14 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar7 = (int)pcVar13 - (int)pcVar12 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar16 = *pcVar14;
      pcVar14 = pcVar14 + 1;
      pcVar16 = pcVar16 + 1;
    }
    puVar17 = (undefined4 *)(local_518 + 3);
    do {
      puVar8 = puVar17;
      puVar17 = (undefined4 *)((int)puVar8 + 1);
    } while (*(char *)((int)puVar8 + 1) != '\0');
    *(undefined4 *)((int)puVar8 + 1) = 0x6766632e;
    *(undefined1 *)((int)puVar8 + 5) = 0;
    FUN_1002f8d0(local_514,1,0x40,1);
    local_51c = 0;
    local_518 = (undefined1  [4])0xf;
    local_52c[0] = (byte ***)((uint)local_52c[0] & 0xffffff00);
    local_8 = 1;
    piVar3 = (int *)FUN_1002f550(local_5e8,local_52c);
    bVar2 = *(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3);
    while ((bVar2 & 6) == 0) {
      ppppbVar10 = local_52c;
      if (0xf < (uint)local_518) {
        ppppbVar10 = (byte ****)local_52c[0];
      }
      iVar4 = FUN_1013f5f0(ppppbVar10,"health ");
      if (iVar4 != 0) {
        uVar7 = 7;
        if (local_51c < 7) {
          uVar7 = local_51c;
        }
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        local_51c = local_51c - uVar7;
        FUN_101406b0(ppppbVar10,(byte *)((int)ppppbVar10 + uVar7),local_51c + 1);
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        ppppbVar11 = ppppbVar10;
        do {
          bVar2 = *(byte *)ppppbVar11;
          ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
          *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) = bVar2;
        } while (bVar2 != 0);
        if (0xff < local_51c) goto LAB_100c6dd2;
        local_114[local_51c] = 0;
        iVar4 = _atoi((char *)local_114);
        *(float *)(*(int *)(param_1 + 4) + 0x164) = (float)iVar4;
      }
      ppppbVar10 = local_52c;
      if (0xf < (uint)local_518) {
        ppppbVar10 = (byte ****)local_52c[0];
      }
      iVar4 = FUN_1013f5f0(ppppbVar10,"stamina ");
      if (iVar4 != 0) {
        uVar7 = 8;
        if (local_51c < 8) {
          uVar7 = local_51c;
        }
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        local_51c = local_51c - uVar7;
        FUN_101406b0(ppppbVar10,(byte *)((int)ppppbVar10 + uVar7),local_51c + 1);
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        ppppbVar11 = ppppbVar10;
        do {
          bVar2 = *(byte *)ppppbVar11;
          ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
          *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) = bVar2;
        } while (bVar2 != 0);
        if (0xff < local_51c) goto LAB_100c6dd2;
        local_114[local_51c] = 0;
        iVar4 = _atoi((char *)local_114);
        *(float *)(param_1 + 0x21f0) = (float)iVar4;
      }
      ppppbVar10 = local_52c;
      if (0xf < (uint)local_518) {
        ppppbVar10 = (byte ****)local_52c[0];
      }
      iVar4 = FUN_1013f5f0(ppppbVar10,"quicksel1 ");
      auVar15 = local_518;
      if (iVar4 != 0) {
        uVar7 = 10;
        if (local_51c < 10) {
          uVar7 = local_51c;
        }
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        local_51c = local_51c - uVar7;
        FUN_101406b0(ppppbVar10,(byte *)((int)ppppbVar10 + uVar7),local_51c + 1);
        auVar15 = local_518;
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        ppppbVar11 = ppppbVar10;
        do {
          bVar2 = *(byte *)ppppbVar11;
          ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
          *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) = bVar2;
        } while (bVar2 != 0);
        if (0xff < local_51c) goto LAB_100c6dd2;
        local_114[local_51c] = 0;
        pcVar13 = (char *)(param_1 + 0x204c);
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar13[(int)(local_510 + (0x3fb - (param_1 + 0x204c)))] = cVar1;
        } while (cVar1 != '\0');
      }
      ppppbVar10 = local_52c;
      if (0xf < (uint)auVar15) {
        ppppbVar10 = (byte ****)local_52c[0];
      }
      iVar4 = FUN_1013f5f0(ppppbVar10,"quicksel2 ");
      auVar15 = local_518;
      if (iVar4 != 0) {
        uVar7 = 10;
        if (local_51c < 10) {
          uVar7 = local_51c;
        }
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        local_51c = local_51c - uVar7;
        FUN_101406b0(ppppbVar10,(byte *)((int)ppppbVar10 + uVar7),local_51c + 1);
        auVar15 = local_518;
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        ppppbVar11 = ppppbVar10;
        do {
          bVar2 = *(byte *)ppppbVar11;
          ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
          *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) = bVar2;
        } while (bVar2 != 0);
        if (0xff < local_51c) goto LAB_100c6dd2;
        local_114[local_51c] = 0;
        pcVar13 = (char *)(param_1 + 0x20cc);
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar13[(int)(local_510 + (0x3fb - (param_1 + 0x20cc)))] = cVar1;
        } while (cVar1 != '\0');
      }
      ppppbVar10 = local_52c;
      if (0xf < (uint)auVar15) {
        ppppbVar10 = (byte ****)local_52c[0];
      }
      iVar4 = FUN_1013f5f0(ppppbVar10,"quicksel3 ");
      auVar15 = local_518;
      if (iVar4 != 0) {
        uVar7 = 10;
        if (local_51c < 10) {
          uVar7 = local_51c;
        }
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        local_51c = local_51c - uVar7;
        FUN_101406b0(ppppbVar10,(byte *)((int)ppppbVar10 + uVar7),local_51c + 1);
        auVar15 = local_518;
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        ppppbVar11 = ppppbVar10;
        do {
          bVar2 = *(byte *)ppppbVar11;
          ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
          *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) = bVar2;
        } while (bVar2 != 0);
        if (0xff < local_51c) goto LAB_100c6dd2;
        local_114[local_51c] = 0;
        pcVar13 = (char *)(param_1 + 0x214c);
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
          pcVar13[(int)(local_510 + (0x3fb - (param_1 + 0x214c)))] = cVar1;
        } while (cVar1 != '\0');
      }
      ppppbVar10 = local_52c;
      if (0xf < (uint)auVar15) {
        ppppbVar10 = (byte ****)local_52c[0];
      }
      iVar4 = FUN_1013f5f0(ppppbVar10,"weapon_");
      auVar15 = local_518;
      if (iVar4 != 0) {
        ppppbVar10 = local_52c;
        if (0xf < (uint)local_518) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        ppppbVar11 = ppppbVar10;
        do {
          bVar2 = *(byte *)ppppbVar11;
          ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
          *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) = bVar2;
        } while (bVar2 != 0);
        if (0xff < local_51c) {
LAB_100c6dd2:
                    /* WARNING: Subroutine does not return */
          ___report_rangecheckfailure();
        }
        local_114[local_51c] = 0;
        DAT_10226488 = 1;
        ppppbVar10 = local_52c;
        if (0xf < (uint)auVar15) {
          ppppbVar10 = (byte ****)local_52c[0];
        }
        FUN_100e0a80(ppppbVar10,0,0);
        local_530 = (uint *)(param_1 + 0x2514);
        DAT_10226488 = 0;
        iVar4 = 0;
        do {
          uVar7 = *local_530;
          if (uVar7 != 0) {
            pcVar13 = "weapon_action";
            pbVar9 = (byte *)(**(int **)(uVar7 + 4) + *(int *)(DAT_10223188 + 0x98));
            do {
              bVar2 = *pbVar9;
              bVar18 = bVar2 < (byte)*pcVar13;
              if (bVar2 != *pcVar13) {
LAB_100c6b90:
                uVar5 = -(uint)bVar18 | 1;
                goto joined_r0x100c6b97;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar9[1];
              bVar18 = bVar2 < (byte)pcVar13[1];
              if (bVar2 != pcVar13[1]) goto LAB_100c6b90;
              pbVar9 = pbVar9 + 2;
              pcVar13 = pcVar13 + 2;
            } while (bVar2 != 0);
            uVar5 = 0;
joined_r0x100c6b97:
            do {
              if (uVar5 == 0) break;
              if ((&DAT_10231890)[*(int *)(uVar7 + 0x168) * 0xb] != 0) {
                ppppbVar10 = local_52c;
                if (0xf < (uint)local_518) {
                  ppppbVar10 = (byte ****)local_52c[0];
                }
                pbVar9 = (byte *)(**(int **)(uVar7 + 4) + *(int *)(DAT_10223188 + 0x98));
                do {
                  bVar2 = *pbVar9;
                  bVar18 = bVar2 < *(byte *)ppppbVar10;
                  if (bVar2 != *(byte *)ppppbVar10) {
LAB_100c6bf8:
                    uVar5 = -(uint)bVar18 | 1;
                    goto LAB_100c6bfd;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar9[1];
                  bVar18 = bVar2 < *(byte *)((int)ppppbVar10 + 1);
                  if (bVar2 != *(byte *)((int)ppppbVar10 + 1)) goto LAB_100c6bf8;
                  pbVar9 = pbVar9 + 2;
                  ppppbVar10 = (byte ****)((int)ppppbVar10 + 2);
                } while (bVar2 != 0);
                uVar5 = 0;
LAB_100c6bfd:
                if (uVar5 == 0) {
                  piVar3 = (int *)FUN_1002f550(local_5e8,local_52c);
                  if ((*(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3) & 6) == 0) {
                    ppppbVar10 = local_52c;
                    if (0xf < (uint)local_518) {
                      ppppbVar10 = (byte ****)local_52c[0];
                    }
                    ppppbVar11 = ppppbVar10;
                    do {
                      bVar2 = *(byte *)ppppbVar11;
                      ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
                      *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) =
                           bVar2;
                    } while (bVar2 != 0);
                    if (0xff < local_51c) goto LAB_100c6dd2;
                    local_114[local_51c] = 0;
                    iVar6 = _atoi((char *)local_114);
                    *(int *)(uVar7 + 0x1e4) = iVar6;
                  }
                  piVar3 = (int *)FUN_1002f550(local_5e8,local_52c);
                  if ((*(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3) & 6) == 0) {
                    ppppbVar10 = local_52c;
                    if (0xf < (uint)local_518) {
                      ppppbVar10 = (byte ****)local_52c[0];
                    }
                    ppppbVar11 = ppppbVar10;
                    do {
                      bVar2 = *(byte *)ppppbVar11;
                      ppppbVar11 = (byte ****)((int)ppppbVar11 + 1);
                      *(byte *)((int)ppppbVar11 + (int)(local_510 + (0x3fb - (int)ppppbVar10))) =
                           bVar2;
                    } while (bVar2 != 0);
                    if (0xff < local_51c) goto LAB_100c6dd2;
                    local_114[local_51c] = 0;
                    iVar6 = _atoi((char *)local_114);
                    *(int *)(param_1 + 0x2540 + *(int *)(uVar7 + 0x1dc) * 4) = iVar6;
                  }
                }
              }
              uVar7 = *(uint *)(uVar7 + 0x164);
              uVar5 = uVar7;
            } while( true );
          }
          iVar4 = iVar4 + 1;
          local_530 = local_530 + 1;
        } while (iVar4 < 6);
      }
      piVar3 = (int *)FUN_1002f550(local_5e8,local_52c);
      bVar2 = *(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3);
    }
    iVar4 = 1;
    puVar17 = (undefined4 *)(param_1 + 0x2200);
    do {
      FUN_100e4360(iVar4,*puVar17,0);
      iVar4 = iVar4 + 1;
      puVar17 = puVar17 + 1;
    } while (iVar4 < 7);
    if (0xf < (uint)local_518) {
      std::_Deallocate<8,0>(local_52c[0],(int)local_518 + 1);
    }
    local_51c = 0;
    local_518 = (undefined1  [4])0xf;
    local_52c[0] = (byte ***)((uint)local_52c[0] & 0xffffff00);
    FUN_100308f0();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

