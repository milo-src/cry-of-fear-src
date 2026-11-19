// rea decompile_all
// name: FUN_100d08f0
// address: 0x100d08f0
// body: available
// range: 0x100d08f0-0x100d1921 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100d08f0(undefined4 param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  bool bVar14;
  double dVar15;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  int local_18;
  float local_14;
  int local_10;
  int local_c;
  int local_8;
  
  DAT_10225980 = 0;
  local_18 = (*DAT_102230c4)(param_1,&local_10);
  if ((local_18 == 0) || (local_10 == 0)) {
    (*DAT_1022303c)(1,&DAT_101b1774);
    (*DAT_1022303c)(1," * LoadSpreadTable failed to load file %s\n",param_1);
    (*DAT_1022303c)(1,&DAT_101b1774);
    return;
  }
  uVar4 = FUN_100c6de0(local_18);
  pcVar12 = &DAT_102231a8;
  do {
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  if (pcVar12 != &DAT_102231a9) {
    do {
      iVar13 = DAT_10225980;
      iVar9 = DAT_10225980 * 0xa4;
      pcVar12 = &DAT_102231a8;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar12[iVar9 + 0x2887] = cVar1;
      } while (cVar1 != '\0');
      (&DAT_10225a68)[iVar13 * 0x29] = 0;
      (&DAT_10225aa0)[iVar13 * 0x29] = 0;
      (&DAT_10225a6c)[iVar13 * 0x29] = 0x3e800000;
      (&DAT_10225aa4)[iVar13 * 0x29] = 0x3e4ccccd;
      (&DAT_10225ad0)[iVar13 * 0x29] = 0x3fc00000;
      (&DAT_10225ac0)[iVar13 * 0x29] = 0;
      (&DAT_10225ac4)[iVar13 * 0x29] = 0;
      (&DAT_10225ac8)[iVar13 * 0x29] = 0xffffffff;
      (&DAT_10225acc)[iVar13 * 0x29] = 0xffffffff;
      (&DAT_10225a70)[iVar13 * 0x29] = 0xbf000000;
      (&DAT_10225a7c)[iVar13 * 0x29] = 0x3fc00000;
      (&DAT_10225a74)[iVar13 * 0x29] = 0xbf000000;
      (&DAT_10225a80)[iVar13 * 0x29] = 0x3f000000;
      (&DAT_10225a78)[iVar13 * 0x29] = 0;
      (&DAT_10225a84)[iVar13 * 0x29] = 0;
      (&DAT_10225aa8)[iVar13 * 0x29] = 0xbe99999a;
      (&DAT_10225ab4)[iVar13 * 0x29] = 0x3f800000;
      (&DAT_10225aac)[iVar13 * 0x29] = 0xbe99999a;
      (&DAT_10225ab8)[iVar13 * 0x29] = 0x3e99999a;
      (&DAT_10225ab0)[iVar13 * 0x29] = 0;
      (&DAT_10225abc)[iVar13 * 0x29] = 0;
      uVar4 = FUN_100c6de0(uVar4);
      if (DAT_102231a8 != '{') {
        (*DAT_1022303c)(1,&DAT_101b1774);
        (*DAT_1022303c)(1," * LoadSpreadTable parsing error: expecting { after weapon name\n");
        (*DAT_1022303c)(1,&DAT_101b1774);
        break;
      }
      uVar4 = FUN_100c6de0(uVar4);
      iVar9 = 0;
      local_8 = 0;
      local_c = 0;
      iVar13 = 0;
      if (DAT_102231a8 != '}') {
        local_8 = 0;
        local_c = 0;
        do {
          pbVar10 = (byte *)&DAT_102231a8;
          pcVar12 = "primary";
          do {
            bVar2 = *pcVar12;
            bVar14 = bVar2 < *pbVar10;
            if (bVar2 != *pbVar10) {
LAB_100d0ac0:
              uVar5 = -(uint)bVar14 | 1;
              goto LAB_100d0ac5;
            }
            if (bVar2 == 0) break;
            bVar2 = pcVar12[1];
            bVar14 = bVar2 < pbVar10[1];
            if (bVar2 != pbVar10[1]) goto LAB_100d0ac0;
            pcVar12 = pcVar12 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_100d0ac5:
          if (uVar5 == 0) {
            uVar4 = FUN_100c6de0(uVar4);
            if (DAT_102231a8 != '{') {
LAB_100d1686:
              (*DAT_1022303c)(1,&DAT_101b1774);
              (*DAT_1022303c)(1," * LoadSpreadTable parsing error: expecting { after section name\n"
                             );
              (*DAT_1022303c)(1,&DAT_101b1774);
              break;
            }
            uVar4 = FUN_100c6de0(uVar4);
            while (DAT_102231a8 != '}') {
              pbVar10 = (byte *)&DAT_102231a8;
              pcVar12 = "minspread";
              do {
                bVar2 = *pcVar12;
                bVar14 = bVar2 < *pbVar10;
                if (bVar2 != *pbVar10) {
LAB_100d0b30:
                  uVar5 = -(uint)bVar14 | 1;
                  goto LAB_100d0b35;
                }
                if (bVar2 == 0) break;
                bVar2 = pcVar12[1];
                bVar14 = bVar2 < pbVar10[1];
                if (bVar2 != pbVar10[1]) goto LAB_100d0b30;
                pcVar12 = pcVar12 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
              uVar5 = 0;
LAB_100d0b35:
              if (uVar5 == 0) {
                uVar4 = FUN_100c6de0(uVar4);
                local_8 = _atoi(&DAT_102231a8);
              }
              else {
                pbVar10 = (byte *)&DAT_102231a8;
                pcVar12 = "maxspread";
                do {
                  bVar2 = *pcVar12;
                  bVar14 = bVar2 < *pbVar10;
                  if (bVar2 != *pbVar10) {
LAB_100d0b80:
                    uVar5 = -(uint)bVar14 | 1;
                    goto LAB_100d0b85;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pcVar12[1];
                  bVar14 = bVar2 < pbVar10[1];
                  if (bVar2 != pbVar10[1]) goto LAB_100d0b80;
                  pcVar12 = pcVar12 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar2 != 0);
                uVar5 = 0;
LAB_100d0b85:
                if (uVar5 == 0) {
                  uVar4 = FUN_100c6de0(uVar4);
                  iVar9 = _atoi(&DAT_102231a8);
                }
                else {
                  pbVar10 = (byte *)&DAT_102231a8;
                  pcVar12 = "equalize";
                  do {
                    bVar2 = *pcVar12;
                    bVar14 = bVar2 < *pbVar10;
                    if (bVar2 != *pbVar10) {
LAB_100d0bd0:
                      uVar5 = -(uint)bVar14 | 1;
                      goto LAB_100d0bd5;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pcVar12[1];
                    bVar14 = bVar2 < pbVar10[1];
                    if (bVar2 != pbVar10[1]) goto LAB_100d0bd0;
                    pcVar12 = pcVar12 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100d0bd5:
                  if (uVar5 == 0) {
                    uVar4 = FUN_100c6de0(uVar4);
                    pbVar10 = (byte *)&DAT_102231a8;
                    pcVar12 = "E_LINEAR";
                    do {
                      bVar2 = *pcVar12;
                      bVar14 = bVar2 < *pbVar10;
                      if (bVar2 != *pbVar10) {
LAB_100d0c12:
                        uVar5 = -(uint)bVar14 | 1;
                        goto LAB_100d0c17;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pcVar12[1];
                      bVar14 = bVar2 < pbVar10[1];
                      if (bVar2 != pbVar10[1]) goto LAB_100d0c12;
                      pcVar12 = pcVar12 + 2;
                      pbVar10 = pbVar10 + 2;
                    } while (bVar2 != 0);
                    uVar5 = 0;
LAB_100d0c17:
                    if (uVar5 == 0) {
                      (&DAT_10225a68)[DAT_10225980 * 0x29] = 0;
                    }
                    else {
                      pbVar11 = (byte *)&DAT_102231a8;
                      pbVar10 = &DAT_101d7944;
                      do {
                        bVar2 = *pbVar10;
                        bVar14 = bVar2 < *pbVar11;
                        if (bVar2 != *pbVar11) {
LAB_100d0c60:
                          uVar5 = -(uint)bVar14 | 1;
                          goto LAB_100d0c65;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pbVar10[1];
                        bVar14 = bVar2 < pbVar11[1];
                        if (bVar2 != pbVar11[1]) goto LAB_100d0c60;
                        pbVar10 = pbVar10 + 2;
                        pbVar11 = pbVar11 + 2;
                      } while (bVar2 != 0);
                      uVar5 = 0;
LAB_100d0c65:
                      if (uVar5 == 0) {
                        (&DAT_10225a68)[DAT_10225980 * 0x29] = 1;
                      }
                      else {
                        pbVar11 = (byte *)&DAT_102231a8;
                        pbVar10 = &DAT_101d794c;
                        do {
                          bVar2 = *pbVar10;
                          bVar14 = bVar2 < *pbVar11;
                          if (bVar2 != *pbVar11) {
LAB_100d0cb0:
                            uVar5 = -(uint)bVar14 | 1;
                            goto LAB_100d0cb5;
                          }
                          if (bVar2 == 0) break;
                          bVar2 = pbVar10[1];
                          bVar14 = bVar2 < pbVar11[1];
                          if (bVar2 != pbVar11[1]) goto LAB_100d0cb0;
                          pbVar10 = pbVar10 + 2;
                          pbVar11 = pbVar11 + 2;
                        } while (bVar2 != 0);
                        uVar5 = 0;
LAB_100d0cb5:
                        if (uVar5 == 0) {
                          (&DAT_10225a68)[DAT_10225980 * 0x29] = 2;
                        }
                        else {
                          pbVar11 = (byte *)&DAT_102231a8;
                          pbVar10 = &DAT_101d7954;
                          do {
                            bVar2 = *pbVar10;
                            bVar14 = bVar2 < *pbVar11;
                            if (bVar2 != *pbVar11) {
LAB_100d0d00:
                              uVar5 = -(uint)bVar14 | 1;
                              goto LAB_100d0d05;
                            }
                            if (bVar2 == 0) break;
                            bVar2 = pbVar10[1];
                            bVar14 = bVar2 < pbVar11[1];
                            if (bVar2 != pbVar11[1]) goto LAB_100d0d00;
                            pbVar10 = pbVar10 + 2;
                            pbVar11 = pbVar11 + 2;
                          } while (bVar2 != 0);
                          uVar5 = 0;
LAB_100d0d05:
                          if (uVar5 == 0) {
                            (&DAT_10225a68)[DAT_10225980 * 0x29] = 3;
                          }
                          else {
                            (*DAT_1022303c)(1,&DAT_101b1774);
                            pcVar12 = 
                            " * LoadSpreadTable parsing error: %s - unknown equalize type\n";
LAB_100d1004:
                            (*DAT_1022303c)(1,pcVar12,&DAT_102231a8);
                            (*DAT_1022303c)(1,&DAT_101b1774);
                          }
                        }
                      }
                    }
                  }
                  else {
                    pbVar10 = (byte *)&DAT_102231a8;
                    pcVar12 = "expand";
                    do {
                      bVar2 = *pcVar12;
                      bVar14 = bVar2 < *pbVar10;
                      if (bVar2 != *pbVar10) {
LAB_100d0d68:
                        uVar5 = -(uint)bVar14 | 1;
                        goto LAB_100d0d6d;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pcVar12[1];
                      bVar14 = bVar2 < pbVar10[1];
                      if (bVar2 != pbVar10[1]) goto LAB_100d0d68;
                      pcVar12 = pcVar12 + 2;
                      pbVar10 = pbVar10 + 2;
                    } while (bVar2 != 0);
                    uVar5 = 0;
LAB_100d0d6d:
                    if (uVar5 == 0) {
                      uVar4 = FUN_100c6de0(uVar4);
                      dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                      local_14 = (float)dVar15;
                      (&DAT_10225a6c)[DAT_10225980 * 0x29] = local_14;
                    }
                    else {
                      pbVar10 = (byte *)&DAT_102231a8;
                      pcVar12 = "speed";
                      do {
                        bVar2 = *pcVar12;
                        bVar14 = bVar2 < *pbVar10;
                        if (bVar2 != *pbVar10) {
LAB_100d0dd0:
                          uVar5 = -(uint)bVar14 | 1;
                          goto LAB_100d0dd5;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pcVar12[1];
                        bVar14 = bVar2 < pbVar10[1];
                        if (bVar2 != pbVar10[1]) goto LAB_100d0dd0;
                        pcVar12 = pcVar12 + 2;
                        pbVar10 = pbVar10 + 2;
                      } while (bVar2 != 0);
                      uVar5 = 0;
LAB_100d0dd5:
                      if (uVar5 == 0) {
                        uVar4 = FUN_100c6de0(uVar4);
                        dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                        local_14 = (float)dVar15;
                        (&DAT_10225ac0)[DAT_10225980 * 0x29] = local_14;
                      }
                      else {
                        pbVar11 = (byte *)&DAT_102231a8;
                        pbVar10 = &DAT_101d79ac;
                        do {
                          bVar2 = *pbVar10;
                          bVar14 = bVar2 < *pbVar11;
                          if (bVar2 != *pbVar11) {
LAB_100d0e37:
                            uVar5 = -(uint)bVar14 | 1;
                            goto LAB_100d0e3c;
                          }
                          if (bVar2 == 0) break;
                          bVar2 = pbVar10[1];
                          bVar14 = bVar2 < pbVar11[1];
                          if (bVar2 != pbVar11[1]) goto LAB_100d0e37;
                          pbVar10 = pbVar10 + 2;
                          pbVar11 = pbVar11 + 2;
                        } while (bVar2 != 0);
                        uVar5 = 0;
LAB_100d0e3c:
                        if (uVar5 == 0) {
                          uVar4 = FUN_100c6de0(uVar4);
                          iVar6 = _atoi(&DAT_102231a8);
                          (&DAT_10225ac8)[DAT_10225980 * 0x29] = iVar6;
                        }
                        else {
                          pbVar10 = (byte *)&DAT_102231a8;
                          pcVar12 = "minpunch";
                          do {
                            bVar2 = *pcVar12;
                            bVar14 = bVar2 < *pbVar10;
                            if (bVar2 != *pbVar10) {
LAB_100d0e94:
                              uVar5 = -(uint)bVar14 | 1;
                              goto LAB_100d0e99;
                            }
                            if (bVar2 == 0) break;
                            bVar2 = pcVar12[1];
                            bVar14 = bVar2 < pbVar10[1];
                            if (bVar2 != pbVar10[1]) goto LAB_100d0e94;
                            pcVar12 = pcVar12 + 2;
                            pbVar10 = pbVar10 + 2;
                          } while (bVar2 != 0);
                          uVar5 = 0;
LAB_100d0e99:
                          if (uVar5 == 0) {
                            uVar4 = FUN_100c6de0(uVar4);
                            dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                            local_14 = (float)dVar15;
                            (&DAT_10225a70)[DAT_10225980 * 0x29] = local_14;
                            uVar4 = FUN_100c6de0(uVar4);
                            dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                            local_14 = (float)dVar15;
                            (&DAT_10225a74)[DAT_10225980 * 0x29] = local_14;
                            uVar4 = FUN_100c6de0(uVar4);
                            dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                            local_14 = (float)dVar15;
                            (&DAT_10225a78)[DAT_10225980 * 0x29] = local_14;
                          }
                          else {
                            pbVar10 = (byte *)&DAT_102231a8;
                            pcVar12 = "maxpunch";
                            do {
                              bVar2 = *pcVar12;
                              bVar14 = bVar2 < *pbVar10;
                              if (bVar2 != *pbVar10) {
LAB_100d0f57:
                                uVar5 = -(uint)bVar14 | 1;
                                goto LAB_100d0f5c;
                              }
                              if (bVar2 == 0) break;
                              bVar2 = pcVar12[1];
                              bVar14 = bVar2 < pbVar10[1];
                              if (bVar2 != pbVar10[1]) goto LAB_100d0f57;
                              pcVar12 = pcVar12 + 2;
                              pbVar10 = pbVar10 + 2;
                            } while (bVar2 != 0);
                            uVar5 = 0;
LAB_100d0f5c:
                            if (uVar5 != 0) {
                              (*DAT_1022303c)(1,&DAT_101b1774);
                              pcVar12 = 
                              " * LoadSpreadTable parsing error: %s - unknown variable name\n";
                              goto LAB_100d1004;
                            }
                            uVar4 = FUN_100c6de0(uVar4);
                            dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                            local_14 = (float)dVar15;
                            (&DAT_10225a7c)[DAT_10225980 * 0x29] = local_14;
                            uVar4 = FUN_100c6de0(uVar4);
                            dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                            local_14 = (float)dVar15;
                            (&DAT_10225a80)[DAT_10225980 * 0x29] = local_14;
                            uVar4 = FUN_100c6de0(uVar4);
                            dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                            local_14 = (float)dVar15;
                            (&DAT_10225a84)[DAT_10225980 * 0x29] = local_14;
                          }
                        }
                      }
                    }
                  }
                }
              }
              uVar4 = FUN_100c6de0(uVar4);
            }
          }
          else {
            pbVar10 = (byte *)&DAT_102231a8;
            pcVar12 = "secondary";
            do {
              bVar2 = *pcVar12;
              bVar14 = bVar2 < *pbVar10;
              if (bVar2 != *pbVar10) {
LAB_100d1063:
                uVar5 = -(uint)bVar14 | 1;
                goto LAB_100d1068;
              }
              if (bVar2 == 0) break;
              bVar2 = pcVar12[1];
              bVar14 = bVar2 < pbVar10[1];
              if (bVar2 != pbVar10[1]) goto LAB_100d1063;
              pcVar12 = pcVar12 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar2 != 0);
            uVar5 = 0;
LAB_100d1068:
            if (uVar5 == 0) {
              uVar4 = FUN_100c6de0(uVar4);
              if (DAT_102231a8 != '{') goto LAB_100d1686;
              uVar4 = FUN_100c6de0(uVar4);
              while (DAT_102231a8 != '}') {
                pbVar10 = (byte *)&DAT_102231a8;
                pcVar12 = "minspread";
                do {
                  bVar2 = *pcVar12;
                  bVar14 = bVar2 < *pbVar10;
                  if (bVar2 != *pbVar10) {
LAB_100d10d0:
                    uVar5 = -(uint)bVar14 | 1;
                    goto LAB_100d10d5;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pcVar12[1];
                  bVar14 = bVar2 < pbVar10[1];
                  if (bVar2 != pbVar10[1]) goto LAB_100d10d0;
                  pcVar12 = pcVar12 + 2;
                  pbVar10 = pbVar10 + 2;
                } while (bVar2 != 0);
                uVar5 = 0;
LAB_100d10d5:
                if (uVar5 == 0) {
                  uVar4 = FUN_100c6de0(uVar4);
                  local_c = _atoi(&DAT_102231a8);
                }
                else {
                  pbVar10 = (byte *)&DAT_102231a8;
                  pcVar12 = "maxspread";
                  do {
                    bVar2 = *pcVar12;
                    bVar14 = bVar2 < *pbVar10;
                    if (bVar2 != *pbVar10) {
LAB_100d1120:
                      uVar5 = -(uint)bVar14 | 1;
                      goto LAB_100d1125;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pcVar12[1];
                    bVar14 = bVar2 < pbVar10[1];
                    if (bVar2 != pbVar10[1]) goto LAB_100d1120;
                    pcVar12 = pcVar12 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100d1125:
                  if (uVar5 == 0) {
                    uVar4 = FUN_100c6de0(uVar4);
                    iVar13 = _atoi(&DAT_102231a8);
                  }
                  else {
                    pbVar10 = (byte *)&DAT_102231a8;
                    pcVar12 = "equalize";
                    do {
                      bVar2 = *pcVar12;
                      bVar14 = bVar2 < *pbVar10;
                      if (bVar2 != *pbVar10) {
LAB_100d1170:
                        uVar5 = -(uint)bVar14 | 1;
                        goto LAB_100d1175;
                      }
                      if (bVar2 == 0) break;
                      bVar2 = pcVar12[1];
                      bVar14 = bVar2 < pbVar10[1];
                      if (bVar2 != pbVar10[1]) goto LAB_100d1170;
                      pcVar12 = pcVar12 + 2;
                      pbVar10 = pbVar10 + 2;
                    } while (bVar2 != 0);
                    uVar5 = 0;
LAB_100d1175:
                    if (uVar5 == 0) {
                      uVar4 = FUN_100c6de0(uVar4);
                      pbVar10 = (byte *)&DAT_102231a8;
                      pcVar12 = "E_LINEAR";
                      do {
                        bVar2 = *pcVar12;
                        bVar14 = bVar2 < *pbVar10;
                        if (bVar2 != *pbVar10) {
LAB_100d11b2:
                          uVar5 = -(uint)bVar14 | 1;
                          goto LAB_100d11b7;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pcVar12[1];
                        bVar14 = bVar2 < pbVar10[1];
                        if (bVar2 != pbVar10[1]) goto LAB_100d11b2;
                        pcVar12 = pcVar12 + 2;
                        pbVar10 = pbVar10 + 2;
                      } while (bVar2 != 0);
                      uVar5 = 0;
LAB_100d11b7:
                      if (uVar5 == 0) {
                        (&DAT_10225aa0)[DAT_10225980 * 0x29] = 0;
                      }
                      else {
                        pbVar11 = (byte *)&DAT_102231a8;
                        pbVar10 = &DAT_101d7944;
                        do {
                          bVar2 = *pbVar10;
                          bVar14 = bVar2 < *pbVar11;
                          if (bVar2 != *pbVar11) {
LAB_100d1200:
                            uVar5 = -(uint)bVar14 | 1;
                            goto LAB_100d1205;
                          }
                          if (bVar2 == 0) break;
                          bVar2 = pbVar10[1];
                          bVar14 = bVar2 < pbVar11[1];
                          if (bVar2 != pbVar11[1]) goto LAB_100d1200;
                          pbVar10 = pbVar10 + 2;
                          pbVar11 = pbVar11 + 2;
                        } while (bVar2 != 0);
                        uVar5 = 0;
LAB_100d1205:
                        if (uVar5 == 0) {
                          (&DAT_10225aa0)[DAT_10225980 * 0x29] = 1;
                        }
                        else {
                          pbVar11 = (byte *)&DAT_102231a8;
                          pbVar10 = &DAT_101d794c;
                          do {
                            bVar2 = *pbVar10;
                            bVar14 = bVar2 < *pbVar11;
                            if (bVar2 != *pbVar11) {
LAB_100d1250:
                              uVar5 = -(uint)bVar14 | 1;
                              goto LAB_100d1255;
                            }
                            if (bVar2 == 0) break;
                            bVar2 = pbVar10[1];
                            bVar14 = bVar2 < pbVar11[1];
                            if (bVar2 != pbVar11[1]) goto LAB_100d1250;
                            pbVar10 = pbVar10 + 2;
                            pbVar11 = pbVar11 + 2;
                          } while (bVar2 != 0);
                          uVar5 = 0;
LAB_100d1255:
                          if (uVar5 == 0) {
                            (&DAT_10225aa0)[DAT_10225980 * 0x29] = 2;
                          }
                          else {
                            pbVar11 = (byte *)&DAT_102231a8;
                            pbVar10 = &DAT_101d7954;
                            do {
                              bVar2 = *pbVar10;
                              bVar14 = bVar2 < *pbVar11;
                              if (bVar2 != *pbVar11) {
LAB_100d12a0:
                                uVar5 = -(uint)bVar14 | 1;
                                goto LAB_100d12a5;
                              }
                              if (bVar2 == 0) break;
                              bVar2 = pbVar10[1];
                              bVar14 = bVar2 < pbVar11[1];
                              if (bVar2 != pbVar11[1]) goto LAB_100d12a0;
                              pbVar10 = pbVar10 + 2;
                              pbVar11 = pbVar11 + 2;
                            } while (bVar2 != 0);
                            uVar5 = 0;
LAB_100d12a5:
                            if (uVar5 == 0) {
                              (&DAT_10225aa0)[DAT_10225980 * 0x29] = 3;
                            }
                            else {
                              (*DAT_1022303c)(1,&DAT_101b1774);
                              pcVar12 = 
                              " * LoadSpreadTable parsing error: %s - unknown equalize type\n";
LAB_100d15a4:
                              (*DAT_1022303c)(1,pcVar12,&DAT_102231a8);
                              (*DAT_1022303c)(1,&DAT_101b1774);
                            }
                          }
                        }
                      }
                    }
                    else {
                      pbVar10 = (byte *)&DAT_102231a8;
                      pcVar12 = "expand";
                      do {
                        bVar2 = *pcVar12;
                        bVar14 = bVar2 < *pbVar10;
                        if (bVar2 != *pbVar10) {
LAB_100d1308:
                          uVar5 = -(uint)bVar14 | 1;
                          goto LAB_100d130d;
                        }
                        if (bVar2 == 0) break;
                        bVar2 = pcVar12[1];
                        bVar14 = bVar2 < pbVar10[1];
                        if (bVar2 != pbVar10[1]) goto LAB_100d1308;
                        pcVar12 = pcVar12 + 2;
                        pbVar10 = pbVar10 + 2;
                      } while (bVar2 != 0);
                      uVar5 = 0;
LAB_100d130d:
                      if (uVar5 == 0) {
                        uVar4 = FUN_100c6de0(uVar4);
                        dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                        local_14 = (float)dVar15;
                        (&DAT_10225aa4)[DAT_10225980 * 0x29] = local_14;
                      }
                      else {
                        pbVar10 = (byte *)&DAT_102231a8;
                        pcVar12 = "speed";
                        do {
                          bVar2 = *pcVar12;
                          bVar14 = bVar2 < *pbVar10;
                          if (bVar2 != *pbVar10) {
LAB_100d1370:
                            uVar5 = -(uint)bVar14 | 1;
                            goto LAB_100d1375;
                          }
                          if (bVar2 == 0) break;
                          bVar2 = pcVar12[1];
                          bVar14 = bVar2 < pbVar10[1];
                          if (bVar2 != pbVar10[1]) goto LAB_100d1370;
                          pcVar12 = pcVar12 + 2;
                          pbVar10 = pbVar10 + 2;
                        } while (bVar2 != 0);
                        uVar5 = 0;
LAB_100d1375:
                        if (uVar5 == 0) {
                          uVar4 = FUN_100c6de0(uVar4);
                          dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                          local_14 = (float)dVar15;
                          (&DAT_10225ac4)[DAT_10225980 * 0x29] = local_14;
                        }
                        else {
                          pbVar11 = (byte *)&DAT_102231a8;
                          pbVar10 = &DAT_101d79ac;
                          do {
                            bVar2 = *pbVar10;
                            bVar14 = bVar2 < *pbVar11;
                            if (bVar2 != *pbVar11) {
LAB_100d13d7:
                              uVar5 = -(uint)bVar14 | 1;
                              goto LAB_100d13dc;
                            }
                            if (bVar2 == 0) break;
                            bVar2 = pbVar10[1];
                            bVar14 = bVar2 < pbVar11[1];
                            if (bVar2 != pbVar11[1]) goto LAB_100d13d7;
                            pbVar10 = pbVar10 + 2;
                            pbVar11 = pbVar11 + 2;
                          } while (bVar2 != 0);
                          uVar5 = 0;
LAB_100d13dc:
                          if (uVar5 == 0) {
                            uVar4 = FUN_100c6de0(uVar4);
                            iVar6 = _atoi(&DAT_102231a8);
                            (&DAT_10225acc)[DAT_10225980 * 0x29] = iVar6;
                          }
                          else {
                            pbVar10 = (byte *)&DAT_102231a8;
                            pcVar12 = "minpunch";
                            do {
                              bVar2 = *pcVar12;
                              bVar14 = bVar2 < *pbVar10;
                              if (bVar2 != *pbVar10) {
LAB_100d1434:
                                uVar5 = -(uint)bVar14 | 1;
                                goto LAB_100d1439;
                              }
                              if (bVar2 == 0) break;
                              bVar2 = pcVar12[1];
                              bVar14 = bVar2 < pbVar10[1];
                              if (bVar2 != pbVar10[1]) goto LAB_100d1434;
                              pcVar12 = pcVar12 + 2;
                              pbVar10 = pbVar10 + 2;
                            } while (bVar2 != 0);
                            uVar5 = 0;
LAB_100d1439:
                            if (uVar5 == 0) {
                              uVar4 = FUN_100c6de0(uVar4);
                              dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                              local_14 = (float)dVar15;
                              (&DAT_10225aa8)[DAT_10225980 * 0x29] = local_14;
                              uVar4 = FUN_100c6de0(uVar4);
                              dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                              local_14 = (float)dVar15;
                              (&DAT_10225aac)[DAT_10225980 * 0x29] = local_14;
                              uVar4 = FUN_100c6de0(uVar4);
                              dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                              local_14 = (float)dVar15;
                              (&DAT_10225ab0)[DAT_10225980 * 0x29] = local_14;
                            }
                            else {
                              pbVar10 = (byte *)&DAT_102231a8;
                              pcVar12 = "maxpunch";
                              do {
                                bVar2 = *pcVar12;
                                bVar14 = bVar2 < *pbVar10;
                                if (bVar2 != *pbVar10) {
LAB_100d14f7:
                                  uVar5 = -(uint)bVar14 | 1;
                                  goto LAB_100d14fc;
                                }
                                if (bVar2 == 0) break;
                                bVar2 = pcVar12[1];
                                bVar14 = bVar2 < pbVar10[1];
                                if (bVar2 != pbVar10[1]) goto LAB_100d14f7;
                                pcVar12 = pcVar12 + 2;
                                pbVar10 = pbVar10 + 2;
                              } while (bVar2 != 0);
                              uVar5 = 0;
LAB_100d14fc:
                              if (uVar5 != 0) {
                                (*DAT_1022303c)(1,&DAT_101b1774);
                                pcVar12 = 
                                " * LoadSpreadTable parsing error: %s - unknown variable name\n";
                                goto LAB_100d15a4;
                              }
                              uVar4 = FUN_100c6de0(uVar4);
                              dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                              local_14 = (float)dVar15;
                              (&DAT_10225ab4)[DAT_10225980 * 0x29] = local_14;
                              uVar4 = FUN_100c6de0(uVar4);
                              dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                              local_14 = (float)dVar15;
                              (&DAT_10225ab8)[DAT_10225980 * 0x29] = local_14;
                              uVar4 = FUN_100c6de0(uVar4);
                              dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                              local_14 = (float)dVar15;
                              (&DAT_10225abc)[DAT_10225980 * 0x29] = local_14;
                            }
                          }
                        }
                      }
                    }
                  }
                }
                uVar4 = FUN_100c6de0(uVar4);
              }
            }
            else {
              pbVar10 = (byte *)&DAT_102231a8;
              pcVar12 = "returntime";
              do {
                bVar2 = *pcVar12;
                bVar14 = bVar2 < *pbVar10;
                if (bVar2 != *pbVar10) {
LAB_100d1603:
                  uVar5 = -(uint)bVar14 | 1;
                  goto LAB_100d1608;
                }
                if (bVar2 == 0) break;
                bVar2 = pcVar12[1];
                bVar14 = bVar2 < pbVar10[1];
                if (bVar2 != pbVar10[1]) goto LAB_100d1603;
                pcVar12 = pcVar12 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar2 != 0);
              uVar5 = 0;
LAB_100d1608:
              if (uVar5 == 0) {
                uVar4 = FUN_100c6de0(uVar4);
                dVar15 = FID_conflict__atof((wchar_t *)&DAT_102231a8);
                local_14 = (float)dVar15;
                (&DAT_10225ad0)[DAT_10225980 * 0x29] = local_14;
              }
              else {
                (*DAT_1022303c)(1,&DAT_101b1774);
                (*DAT_1022303c)(1," * LoadSpreadTable parsing error: %s - unknown section name\n",
                                &DAT_102231a8);
                (*DAT_1022303c)(1,&DAT_101b1774);
              }
            }
          }
          uVar4 = FUN_100c6de0(uVar4);
        } while (DAT_102231a8 != '}');
        if (iVar9 < local_8) {
          (*DAT_1022303c)(1,&DAT_101b1774);
          (*DAT_1022303c)(1," * LoadSpreadTable warning: max prispread lower than min in %\n",
                          &DAT_10225a30 + DAT_10225980 * 0xa4);
          (*DAT_1022303c)(1,&DAT_101b1774);
        }
        if (iVar13 < local_c) {
          (*DAT_1022303c)(1,&DAT_101b1774);
          (*DAT_1022303c)(1," * LoadSpreadTable warning: max secspread lower than min in %\n",
                          &DAT_10225a30 + DAT_10225980 * 0xa4);
          (*DAT_1022303c)(1,&DAT_101b1774);
        }
      }
      puVar7 = (undefined8 *)FUN_100d0490(local_24,local_8);
      iVar6 = DAT_10225980;
      *(undefined8 *)((int)&DAT_10225a50 + DAT_10225980 * 0xa4) = *puVar7;
      (&DAT_10225a58)[iVar6 * 0x29] = *(undefined4 *)(puVar7 + 1);
      puVar7 = (undefined8 *)FUN_100d0490(local_30,iVar9 - local_8);
      iVar6 = local_c;
      iVar9 = DAT_10225980;
      *(undefined8 *)((int)&DAT_10225a5c + DAT_10225980 * 0xa4) = *puVar7;
      (&DAT_10225a64)[iVar9 * 0x29] = *(undefined4 *)(puVar7 + 1);
      puVar7 = (undefined8 *)FUN_100d0490(local_3c,local_c);
      iVar9 = DAT_10225980;
      *(undefined8 *)((int)&DAT_10225a88 + DAT_10225980 * 0xa4) = *puVar7;
      (&DAT_10225a90)[iVar9 * 0x29] = *(undefined4 *)(puVar7 + 1);
      puVar8 = (undefined4 *)FUN_100d0490(local_48,iVar13 - iVar6);
      uVar3 = puVar8[1];
      *(undefined4 *)((int)&DAT_10225a94 + DAT_10225980 * 0xa4) = *puVar8;
      *(undefined4 *)((int)&DAT_10225a94 + DAT_10225980 * 0xa4 + 4) = uVar3;
      (&DAT_10225a9c)[DAT_10225980 * 0x29] = puVar8[2];
      DAT_10225980 = DAT_10225980 + 1;
      uVar4 = FUN_100c6de0(uVar4);
      pcVar12 = &DAT_102231a8;
      do {
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
    } while (pcVar12 != &DAT_102231a9);
  }
  (*DAT_1022303c)(1,"%d spread weapons info loaded from %s\n",DAT_10225980,param_1);
  (*DAT_102230c8)(local_18);
  FUN_1001f160(&DAT_10225988,"default\n");
  DAT_102259a8 = 'x';
  DAT_102259a8_1._0_1_ = 'b';
  DAT_102259a8_1._1_1_ = 'V';
  DAT_102259a8_1._2_1_ = '=';
  uRam102259ac._0_1_ = 'x';
  uRam102259ac._1_1_ = 'b';
  uRam102259ac._2_1_ = 'V';
  uRam102259ac._3_1_ = '=';
  uRam102259b0._0_1_ = 'x';
  uRam102259b0._1_1_ = 'b';
  uRam102259b0._2_1_ = 'V';
  uRam102259b0._3_1_ = '=';
  uRam102259b4._0_1_ = 'x';
  uRam102259b4._1_1_ = 'b';
  uRam102259b4._2_1_ = 'V';
  uRam102259b4._3_1_ = '=';
  _DAT_102259b8 = 0x3d566278;
  _DAT_102259bc = 0x3d566278;
  _DAT_102259c0 = 0;
  _DAT_102259c4 = 0x3e800000;
  _DAT_102259e0 = 0x3c8ef34d;
  uRam102259e4 = 0x3c8ef34d;
  uRam102259e8 = 0x3c8ef34d;
  uRam102259ec = 0x3d0ef34d;
  _DAT_102259f0 = 0x3d0ef34d;
  _DAT_102259f4 = 0x3d0ef34d;
  _DAT_102259f8 = 0;
  _DAT_102259fc = 0x3e4ccccd;
  _DAT_10225a28 = 0x3fc00000;
  _DAT_10225a18 = 0;
  _DAT_10225a1c = 0;
  return;
}

