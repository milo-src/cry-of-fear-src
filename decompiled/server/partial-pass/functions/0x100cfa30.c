// rea decompile_all
// name: FUN_100cfa30
// address: 0x100cfa30
// body: available
// range: 0x100cfa30-0x100cfdcd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cfa30(void)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  int iVar10;
  float fVar11;
  int local_38;
  float local_34;
  float local_28;
  int local_24;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  lVar1 = (ulonglong)*(uint *)(in_ECX + 0x18) * 4;
  piVar2 = (int *)FUN_1013e5a8(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  lVar1 = (ulonglong)*(uint *)(in_ECX + 0x18) * 4;
  piVar3 = (int *)FUN_1013e5a8(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  if (piVar2 != (int *)0x0) {
    if (piVar3 != (int *)0x0) {
      local_c = 0;
      do {
        local_24 = 0;
        do {
          if (local_24 == 0) {
            local_18 = 0;
          }
          else if (local_24 == 1) {
            local_18 = 0x340;
          }
          iVar4 = *(int *)(in_ECX + 0x18);
          local_10 = 0;
          if (0 < iVar4) {
            do {
              local_14 = 0;
              if (0 < iVar4) {
LAB_100cfad0:
                *(undefined4 *)(in_ECX + 8) = 0;
                iVar4 = FUN_100cd5e0(piVar2,local_10,local_14,local_c,local_18);
                *(undefined4 *)(in_ECX + 8) = 1;
                iVar5 = FUN_100cd5e0(piVar3,local_10,local_14,local_c,local_18);
                if (iVar5 == 10) goto LAB_100cfc45;
                fVar11 = 0.0;
                local_34 = (float)(iVar4 + -1);
                local_28 = 0.0;
                piVar7 = piVar2;
                if (0 < (int)local_34) {
                  do {
                    piVar9 = piVar7 + 1;
                    if (*piVar7 != *piVar9) {
                      iVar8 = 0;
                      iVar6 = *piVar7 * 0x58;
                      iVar10 = *(int *)(iVar6 + 0x20 + *(int *)(in_ECX + 0xc));
                      if (0 < iVar10) {
                        iVar6 = *(int *)(iVar6 + 0x24 + *(int *)(in_ECX + 0xc));
                        piVar7 = (int *)(iVar6 * 0x18 + 4 + *(int *)(in_ECX + 0x10));
                        do {
                          if (*piVar7 == *piVar9) {
                            fVar11 = fVar11 + *(float *)(*(int *)(in_ECX + 0x10) + 0x14 +
                                                        (iVar6 + iVar8) * 0x18);
                            local_28 = fVar11;
                            goto LAB_100cfb8e;
                          }
                          iVar8 = iVar8 + 1;
                          piVar7 = piVar7 + 6;
                        } while (iVar8 < iVar10);
                      }
                      (*DAT_1022303c)(2,"No link.\n");
                      fVar11 = local_28;
                    }
LAB_100cfb8e:
                    local_34 = (float)((int)local_34 + -1);
                    piVar7 = piVar9;
                  } while (local_34 != 0.0);
                }
                local_38 = iVar5 + -1;
                fVar11 = 0.0;
                local_34 = 0.0;
                piVar7 = piVar3;
                if (0 < local_38) {
                  do {
                    piVar9 = piVar7 + 1;
                    if (*piVar7 != *piVar9) {
                      iVar8 = 0;
                      iVar6 = *piVar7 * 0x58;
                      iVar10 = *(int *)(iVar6 + 0x20 + *(int *)(in_ECX + 0xc));
                      if (0 < iVar10) {
                        iVar6 = *(int *)(iVar6 + 0x24 + *(int *)(in_ECX + 0xc));
                        piVar7 = (int *)(iVar6 * 0x18 + 4 + *(int *)(in_ECX + 0x10));
                        do {
                          if (*piVar7 == *piVar9) {
                            fVar11 = fVar11 + *(float *)(*(int *)(in_ECX + 0x10) + 0x14 +
                                                        (iVar6 + iVar8) * 0x18);
                            local_34 = fVar11;
                            goto LAB_100cfc15;
                          }
                          iVar8 = iVar8 + 1;
                          piVar7 = piVar7 + 6;
                        } while (iVar8 < iVar10);
                      }
                      (*DAT_1022303c)(2,"No link.\n");
                      fVar11 = local_34;
                    }
LAB_100cfc15:
                    local_38 = local_38 + -1;
                    piVar7 = piVar9;
                  } while (local_38 != 0);
                }
                if (ABS(local_28 - fVar11) <= 0.1) goto LAB_100cfc45;
                (*DAT_1022303c)(2,"Routing is inconsistent!!!\n");
                (*DAT_1022303c)(2,"(%d to %d |%d/%d)1:",local_10,local_14,local_c,local_24);
                iVar10 = 0;
                if (0 < iVar4) {
                  do {
                    (*DAT_1022303c)(2,&DAT_101d74a8,piVar2[iVar10]);
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < iVar4);
                }
                (*DAT_1022303c)(2,"\n(%d to %d |%d/%d)2:",local_10,local_14,local_c,local_24);
                iVar4 = 0;
                if (0 < iVar5) {
                  do {
                    (*DAT_1022303c)(2,&DAT_101d74a8,piVar3[iVar4]);
                    iVar4 = iVar4 + 1;
                  } while (iVar4 < iVar5);
                }
                (*DAT_1022303c)(2,&DAT_101a84c8);
                *(undefined4 *)(in_ECX + 8) = 0;
                FUN_100cd5e0(piVar2,local_10,local_14,local_c,local_18);
                *(undefined4 *)(in_ECX + 8) = 1;
                FUN_100cd5e0(piVar3,local_10,local_14,local_c,local_18);
                goto LAB_100cfda9;
              }
LAB_100cfc57:
              local_10 = local_10 + 1;
            } while (local_10 < iVar4);
          }
          local_24 = local_24 + 1;
        } while (local_24 < 2);
        local_c = local_c + 1;
      } while (local_c < 4);
    }
LAB_100cfda9:
    FUN_1013dba5(piVar2,4);
  }
  if (piVar3 != (int *)0x0) {
    FUN_1013dba5(piVar3,4);
  }
  return;
LAB_100cfc45:
  iVar4 = *(int *)(in_ECX + 0x18);
  local_14 = local_14 + 1;
  if (iVar4 <= local_14) goto LAB_100cfc57;
  goto LAB_100cfad0;
}

