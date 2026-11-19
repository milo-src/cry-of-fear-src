// rea decompile_all
// name: FUN_100cbfe0
// address: 0x100cbfe0
// body: available
// range: 0x100cbfe0-0x100cc5ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cbfe0(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  int in_ECX;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  int *piVar18;
  byte *pbVar19;
  bool bVar20;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_24;
  int local_20;
  int local_1c;
  int local_c;
  int local_8;
  
  lVar4 = (ulonglong)(uint)(*(int *)(in_ECX + 0x18) * *(int *)(in_ECX + 0x18)) * 2;
  iVar7 = FUN_1013e5a8(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  lVar4 = (ulonglong)*(uint *)(in_ECX + 0x18) * 4;
  piVar8 = (int *)FUN_1013e5a8(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  lVar4 = (ulonglong)*(uint *)(in_ECX + 0x18) * 2;
  iVar9 = FUN_1013e5a8(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  pbVar10 = (byte *)FUN_1013e5a8(*(int *)(in_ECX + 0x18) * 2);
  if (iVar7 != 0) {
    if (((piVar8 != (int *)0x0) && (iVar9 != 0)) && (pbVar10 != (byte *)0x0)) {
      local_20 = 0;
      local_24 = 0;
      do {
        local_3c = 0;
        do {
          if (local_3c == 0) {
            local_40 = 0;
          }
          else if (local_3c == 1) {
            local_40 = 0x340;
          }
          iVar11 = *(int *)(in_ECX + 0x18);
          iVar16 = 0;
          if (0 < iVar11) {
            do {
              iVar15 = 0;
              if (0 < iVar11) {
                do {
                  iVar11 = *(int *)(in_ECX + 0x18) * iVar16 + iVar15;
                  iVar15 = iVar15 + 1;
                  *(undefined2 *)(iVar7 + iVar11 * 2) = 0xffff;
                  iVar11 = *(int *)(in_ECX + 0x18);
                } while (iVar15 < iVar11);
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar11);
          }
          local_1c = 0;
          if (0 < iVar11) {
            do {
              iVar16 = iVar11 + -1;
              if (-1 < iVar16) {
                do {
                  if (*(short *)(iVar7 + (*(int *)(in_ECX + 0x18) * local_1c + iVar16) * 2) == -1) {
                    iVar11 = FUN_100cd5e0(piVar8,local_1c,iVar16,local_24,local_40);
                    if (iVar11 < 2) {
                      *(short *)(iVar7 + (*(int *)(in_ECX + 0x18) * local_1c + iVar16) * 2) =
                           (short)local_1c;
                      *(short *)(iVar7 + (*(int *)(in_ECX + 0x18) * iVar16 + local_1c) * 2) =
                           (short)iVar16;
                    }
                    else {
                      iVar15 = iVar11 + -1;
                      if (0 < iVar15) {
                        local_38 = 1;
                        piVar18 = piVar8;
                        do {
                          iVar2 = *piVar18;
                          piVar18 = piVar18 + 1;
                          iVar3 = *piVar18;
                          for (uVar12 = local_38; (int)uVar12 < iVar11; uVar12 = uVar12 + 1) {
                            *(short *)(iVar7 + (*(int *)(in_ECX + 0x18) * iVar2 + piVar8[uVar12]) *
                                               2) = (short)iVar3;
                          }
                          local_38 = local_38 + 1;
                          iVar15 = iVar15 + -1;
                        } while (iVar15 != 0);
                      }
                    }
                  }
                  iVar16 = iVar16 + -1;
                } while (-1 < iVar16);
                iVar11 = *(int *)(in_ECX + 0x18);
              }
              local_1c = local_1c + 1;
            } while (local_1c < iVar11);
          }
          local_c = 0;
          if (0 < iVar11) {
            local_1c = (local_3c + (local_24 + 5) * 2) * 4;
            do {
              iVar16 = 0;
              if (0 < iVar11) {
                do {
                  *(undefined2 *)(iVar9 + iVar16 * 2) =
                       *(undefined2 *)(iVar7 + (*(int *)(in_ECX + 0x18) * local_c + iVar16) * 2);
                  iVar16 = iVar16 + 1;
                  iVar11 = *(int *)(in_ECX + 0x18);
                } while (iVar16 < iVar11);
              }
              iVar16 = 0;
              local_8 = 0;
              local_38 = 0;
              iVar15 = 0;
              local_34 = 9999999;
              pbVar19 = pbVar10;
              pbVar17 = pbVar10;
              if (0 < iVar11) {
                do {
                  puVar1 = (ushort *)(iVar9 + local_38 * 2);
                  uVar12 = (uint)*puVar1;
                  if ((uVar12 != local_34) || (bVar20 = true, 0x7e < iVar16)) {
                    bVar20 = false;
                  }
                  if ((uVar12 == local_38) && (iVar15 < 0x80)) {
                    bVar5 = true;
                  }
                  else {
                    bVar5 = false;
                  }
                  if (iVar16 == 0) {
                    if (iVar15 == 0) {
                      if (bVar5) {
                        iVar15 = 1;
                      }
                      else {
LAB_100cc32f:
                        iVar16 = 1;
                      }
                    }
                    else if (bVar5) {
                      iVar15 = iVar15 + 1;
                    }
                    else {
                      if ((iVar15 != 1) || (!bVar20)) {
                        local_8 = local_8 + 1;
                        *pbVar17 = -(char)iVar15;
                        pbVar17 = pbVar17 + 1;
                        iVar15 = 0;
                        goto LAB_100cc32f;
                      }
                      iVar16 = 2;
                      iVar15 = 0;
                    }
                  }
                  else if (bVar20) {
                    iVar16 = iVar16 + 1;
                  }
                  else {
                    local_8 = local_8 + 2;
                    *pbVar17 = (char)iVar16 - 1;
                    pbVar19 = pbVar17 + 1;
                    iVar11 = (*(int *)(in_ECX + 0x18) - local_c) + local_34;
                    iVar16 = (local_34 - *(int *)(in_ECX + 0x18)) - local_c;
                    if ((local_34 - local_c) + 0x80 < 0x100) {
                      *pbVar19 = (byte)(local_34 - local_c);
                      pbVar19 = pbVar17 + 2;
                    }
                    else if (iVar11 + 0x80U < 0x100) {
                      *pbVar19 = (byte)iVar11;
                      pbVar19 = pbVar17 + 2;
                    }
                    else if (iVar16 + 0x80U < 0x100) {
                      *pbVar19 = (byte)iVar16;
                      pbVar19 = pbVar17 + 2;
                    }
                    else {
                      (*DAT_1022303c)(2,"Nodes need sorting (%d,%d)!\n",local_34,local_c);
                    }
                    iVar16 = 0;
                    pbVar17 = pbVar19;
                    if (!bVar5) goto LAB_100cc32f;
                    iVar15 = iVar15 + 1;
                  }
                  local_34 = (uint)*puVar1;
                  local_38 = local_38 + 1;
                } while ((int)local_38 < *(int *)(in_ECX + 0x18));
                pbVar19 = pbVar17;
                if (iVar16 != 0) {
                  local_8 = local_8 + 2;
                  *pbVar17 = (char)iVar16 - 1;
                  iVar16 = (local_34 - *(int *)(in_ECX + 0x18)) - local_c;
                  pbVar19 = pbVar17 + 1;
                  iVar11 = (*(int *)(in_ECX + 0x18) - local_c) + local_34;
                  if ((local_34 - local_c) + 0x80 < 0x100) {
                    *pbVar19 = (byte)(local_34 - local_c);
                    pbVar19 = pbVar17 + 2;
                  }
                  else if (iVar11 + 0x80U < 0x100) {
                    *pbVar19 = (byte)iVar11;
                    pbVar19 = pbVar17 + 2;
                  }
                  else if (iVar16 + 0x80U < 0x100) {
                    *pbVar19 = (byte)iVar16;
                    pbVar19 = pbVar17 + 2;
                  }
                  else {
                    (*DAT_1022303c)(2,"Nodes need sorting (%d,%d)!\n",local_34,local_c);
                  }
                }
                if (iVar15 != 0) {
                  local_8 = local_8 + 1;
                  *pbVar19 = -(char)iVar15;
                  pbVar19 = pbVar19 + 1;
                }
              }
              uVar12 = (int)pbVar19 - (int)pbVar10;
              iVar11 = *(int *)(in_ECX + 0x14);
              if (iVar11 == 0) {
                *(uint *)(in_ECX + 0x20) = uVar12;
                uVar14 = FUN_10171536(1,uVar12);
                *(undefined4 *)(in_ECX + 0x14) = uVar14;
                FUN_10140130(uVar14,pbVar10,uVar12);
                *(undefined4 *)(local_1c + *(int *)(in_ECX + 0xc)) = 0;
                local_20 = local_20 + local_8;
              }
              else {
                local_34 = *(int *)(in_ECX + 0x20);
                local_38 = 0;
                iVar16 = local_34 - uVar12;
                if (0 < iVar16) {
                  do {
                    pbVar19 = (byte *)(local_38 + iVar11);
                    pbVar17 = pbVar10;
                    uVar13 = uVar12;
                    while (uVar6 = uVar13 - 4, 3 < uVar13) {
                      if (*(int *)pbVar19 != *(int *)pbVar17) goto LAB_100cc426;
                      pbVar19 = pbVar19 + 4;
                      pbVar17 = pbVar17 + 4;
                      uVar13 = uVar6;
                    }
                    if (uVar6 == 0xfffffffc) {
LAB_100cc45a:
                      uVar13 = 0;
                    }
                    else {
LAB_100cc426:
                      bVar20 = *pbVar19 < *pbVar17;
                      if ((*pbVar19 == *pbVar17) &&
                         ((uVar6 == 0xfffffffd ||
                          ((bVar20 = pbVar19[1] < pbVar17[1], pbVar19[1] == pbVar17[1] &&
                           ((uVar6 == 0xfffffffe ||
                            ((bVar20 = pbVar19[2] < pbVar17[2], pbVar19[2] == pbVar17[2] &&
                             ((uVar6 == 0xffffffff ||
                              (bVar20 = pbVar19[3] < pbVar17[3], pbVar19[3] == pbVar17[3])))))))))))
                         ) goto LAB_100cc45a;
                      uVar13 = -(uint)bVar20 | 1;
                    }
                    if (uVar13 == 0) break;
                    local_34 = *(int *)(in_ECX + 0x20);
                    local_38 = local_38 + 1;
                    iVar11 = *(int *)(in_ECX + 0x14);
                  } while ((int)local_38 < iVar16);
                }
                if ((int)local_38 < (int)(local_34 - uVar12)) {
                  *(uint *)(local_1c + *(int *)(in_ECX + 0xc)) = local_38;
                }
                else {
                  iVar11 = FUN_10171536(1,local_34 + uVar12);
                  FUN_10140130(iVar11,*(undefined4 *)(in_ECX + 0x14),*(undefined4 *)(in_ECX + 0x20))
                  ;
                  FUN_101714d1(*(undefined4 *)(in_ECX + 0x14));
                  *(int *)(in_ECX + 0x14) = iVar11;
                  FUN_10140130(*(int *)(in_ECX + 0x20) + iVar11,pbVar10,uVar12);
                  *(undefined4 *)(local_1c + *(int *)(in_ECX + 0xc)) =
                       *(undefined4 *)(in_ECX + 0x20);
                  *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + uVar12;
                  local_20 = local_20 + local_8;
                }
              }
              local_1c = local_1c + 0x58;
              local_c = local_c + 1;
              iVar11 = *(int *)(in_ECX + 0x18);
            } while (local_c < iVar11);
          }
          local_3c = local_3c + 1;
        } while (local_3c < 2);
        local_24 = local_24 + 1;
      } while (local_24 < 4);
      (*DAT_1022303c)(2,"Size of Routes = %d\n",local_20);
    }
    FUN_1013dba5(iVar7,2);
  }
  if (iVar9 != 0) {
    FUN_1013dba5(iVar9,2);
  }
  if (pbVar10 != (byte *)0x0) {
    FUN_1013dba5(pbVar10,1);
  }
  if (piVar8 != (int *)0x0) {
    FUN_1013dba5(piVar8,4);
  }
  *(undefined4 *)(in_ECX + 8) = 1;
  return;
}

