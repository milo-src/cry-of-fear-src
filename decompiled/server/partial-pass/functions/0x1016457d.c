// rea decompile_all
// name: __crt_strtox::convert_decimal_string_to_floating_type_common
// address: 0x1016457d
// body: available
// range: 0x1016457d-0x10166250 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::convert_decimal_string_to_floating_type_common(struct
   __crt_strtox::floating_point_string const &,class __crt_strtox::floating_point_value const &)
   
   Library: Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::convert_decimal_string_to_floating_type_common
          (floating_point_string *param_1,floating_point_value *param_2)

{
  byte bVar1;
  floating_point_string fVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  SLD_STATUS SVar6;
  uint uVar7;
  uint uVar8;
  floating_point_string *pfVar9;
  floating_point_string *pfVar10;
  uint *puVar11;
  uint uVar12;
  floating_point_string *pfVar13;
  floating_point_string *pfVar14;
  floating_point_string *pfVar15;
  bool bVar16;
  __uint64 _Var17;
  longlong lVar18;
  rsize_t _MaxCount;
  uint local_b2c [115];
  floating_point_string *local_960;
  floating_point_string *local_95c;
  floating_point_string *local_958;
  floating_point_value *local_954;
  floating_point_string *local_950;
  floating_point_string *local_94c;
  uint local_948;
  floating_point_string *local_944;
  floating_point_string *local_940;
  floating_point_string *local_93c;
  floating_point_string *local_938;
  floating_point_string *local_934;
  floating_point_string *local_930;
  floating_point_string *local_92c;
  floating_point_string *local_928;
  floating_point_string *local_924;
  floating_point_string *local_920;
  floating_point_string *local_91c;
  floating_point_string *local_918;
  uint local_914 [115];
  floating_point_string *local_748;
  uint local_744 [115];
  floating_point_string *local_578;
  uint local_574 [115];
  floating_point_string *local_3a8;
  uint local_3a4 [115];
  floating_point_string *local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar12 = *(uint *)param_1;
  local_94c = param_1;
  local_954 = param_2;
  local_950 = (floating_point_string *)
              (((param_2[4] == (floating_point_value)0x0) - 1 & 0x1d) + 0x19);
  if ((int)uVar12 < 0) {
    uVar12 = 0;
  }
  uVar8 = *(uint *)(param_1 + 4);
  uVar7 = uVar12;
  if (uVar8 <= uVar12) {
    uVar7 = uVar8;
  }
  local_93c = (floating_point_string *)(uVar12 - uVar7);
  pfVar15 = param_1 + 8;
  local_958 = param_1 + uVar7 + 8;
  local_95c = param_1 + uVar8 + 8;
  pfVar13 = (floating_point_string *)0x0;
  local_920 = local_95c + -(int)local_958;
  local_91c = (floating_point_string *)0x0;
  uVar12 = 0;
  local_1d8 = (floating_point_string *)0x0;
  local_924 = (floating_point_string *)0x0;
  local_940 = pfVar15;
  if (pfVar15 != local_958) {
    do {
      if (uVar12 == 9) {
        local_940 = pfVar15;
        if (pfVar13 != (floating_point_string *)0x0) {
          uVar12 = 0;
          pfVar14 = (floating_point_string *)0x0;
          do {
            lVar18 = (ulonglong)local_1d4[(int)pfVar14] * 1000000000 + (ulonglong)uVar12;
            local_1d4[(int)pfVar14] = (uint)lVar18;
            uVar12 = (uint)((ulonglong)lVar18 >> 0x20);
            pfVar14 = pfVar14 + 1;
          } while (pfVar14 != pfVar13);
          pfVar13 = local_1d8;
          if (uVar12 != 0) {
            if (local_1d8 < (floating_point_string *)0x73) {
              local_1d4[(int)local_1d8] = uVar12;
              local_1d8 = local_1d8 + 1;
              pfVar13 = local_1d8;
            }
            else {
              local_918 = (floating_point_string *)0x0;
              local_1d8 = (floating_point_string *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_914,0);
              pfVar13 = local_1d8;
            }
          }
        }
        if (local_924 != (floating_point_string *)0x0) {
          pfVar9 = (floating_point_string *)0x0;
          pfVar14 = local_924;
          if (pfVar13 != (floating_point_string *)0x0) {
            do {
              puVar11 = local_1d4 + (int)pfVar9;
              uVar12 = *puVar11;
              *puVar11 = (uint)(pfVar14 + *puVar11);
              pfVar14 = (floating_point_string *)(uint)CARRY4(uVar12,(uint)pfVar14);
              pfVar9 = pfVar9 + 1;
              pfVar13 = local_1d8;
            } while (pfVar9 != local_1d8);
          }
          if (pfVar14 != (floating_point_string *)0x0) {
            if (pfVar13 < (floating_point_string *)0x73) {
              local_1d4[(int)pfVar13] = (uint)pfVar14;
              local_1d8 = local_1d8 + 1;
              pfVar13 = local_1d8;
            }
            else {
              local_918 = (floating_point_string *)0x0;
              local_1d8 = (floating_point_string *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_914,0);
              pfVar13 = local_1d8;
            }
          }
        }
        local_924 = (floating_point_string *)0x0;
        uVar12 = 0;
      }
      local_924 = (floating_point_string *)((int)local_924 * 10 + (uint)(byte)*pfVar15);
      uVar12 = uVar12 + 1;
      pfVar15 = pfVar15 + 1;
    } while (pfVar15 != local_958);
    local_940 = pfVar15;
    local_91c = pfVar13;
    if (uVar12 != 0) {
      local_930 = (floating_point_string *)(uVar12 % 10);
      for (local_938 = (floating_point_string *)(uVar12 / 10); local_91c = pfVar13,
          local_938 != (floating_point_string *)0x0; local_938 = local_938 + -(int)local_92c) {
        local_92c = local_938;
        if ((floating_point_string *)0x26 < local_938) {
          local_92c = (floating_point_string *)0x26;
        }
        uVar12 = (uint)(byte)(&DAT_101ed776)[(int)local_92c * 4];
        bVar1 = (&DAT_101ed777)[(int)local_92c * 4];
        local_918 = (floating_point_string *)(uVar12 + bVar1);
        _memset(local_914,0,uVar12 * 4);
        FUN_10140130(local_914 + uVar12,
                     &DAT_101ece70 + (uint)*(ushort *)(&DAT_101ed774 + (int)local_92c * 4) * 4,
                     (uint)bVar1 << 2);
        uVar12 = local_1d4[0];
        if (local_918 < (floating_point_string *)0x2) {
          if (local_914[0] == 0) {
            local_578 = (floating_point_string *)0x0;
            puVar11 = local_574;
LAB_1016481c:
            local_1d8 = (floating_point_string *)0x0;
            _memcpy_s(local_1d4,0x1cc,puVar11,0);
          }
          else {
            if ((local_914[0] == 1) || (pfVar13 == (floating_point_string *)0x0)) {
              bVar16 = true;
              goto LAB_10164af8;
            }
            uVar12 = 0;
            pfVar15 = (floating_point_string *)0x0;
            do {
              lVar18 = (ulonglong)local_914[0] * (ulonglong)local_1d4[(int)pfVar15] +
                       (ulonglong)uVar12;
              local_1d4[(int)pfVar15] = (uint)lVar18;
              uVar12 = (uint)((ulonglong)lVar18 >> 0x20);
              pfVar15 = pfVar15 + 1;
            } while (pfVar15 != pfVar13);
            if (uVar12 != 0) {
              if ((floating_point_string *)0x72 < local_1d8) {
LAB_10164895:
                local_918 = (floating_point_string *)0x0;
                local_1d8 = (floating_point_string *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_914,0);
                bVar16 = false;
                local_91c = local_1d8;
                goto LAB_10164af8;
              }
              local_1d4[(int)local_1d8] = uVar12;
LAB_10164886:
              local_1d8 = local_1d8 + 1;
            }
          }
LAB_10164831:
          bVar16 = true;
          local_91c = local_1d8;
        }
        else if (pfVar13 < (floating_point_string *)0x2) {
          local_1d8 = local_918;
          _memcpy_s(local_1d4,0x1cc,local_914,(int)local_918 << 2);
          if (uVar12 == 0) {
            local_918 = (floating_point_string *)0x0;
            puVar11 = local_914;
            goto LAB_1016481c;
          }
          bVar16 = true;
          local_91c = local_1d8;
          if ((uVar12 != 1) && (local_1d8 != (floating_point_string *)0x0)) {
            uVar8 = 0;
            pfVar15 = (floating_point_string *)0x0;
            do {
              lVar18 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)pfVar15] + (ulonglong)uVar8;
              local_1d4[(int)pfVar15] = (uint)lVar18;
              uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
              pfVar15 = pfVar15 + 1;
            } while (pfVar15 != local_1d8);
            if (uVar8 != 0) {
              if ((floating_point_string *)0x72 < local_1d8) goto LAB_10164895;
              local_1d4[(int)local_1d8] = uVar8;
              goto LAB_10164886;
            }
            goto LAB_10164831;
          }
        }
        else {
          local_91c = (floating_point_string *)local_914;
          local_940 = (floating_point_string *)local_1d4;
          pfVar15 = pfVar13;
          local_934 = local_918;
          if (pfVar13 <= local_918) {
            local_91c = (floating_point_string *)local_1d4;
            local_940 = (floating_point_string *)local_914;
            pfVar15 = local_918;
            local_934 = pfVar13;
          }
          local_1d8 = (floating_point_string *)0x0;
          pfVar13 = (floating_point_string *)0x0;
          local_578 = (floating_point_string *)0x0;
          if (local_934 != (floating_point_string *)0x0) {
            do {
              if (*(uint *)((int)local_91c + pfVar13 * 4) == 0) {
                if (pfVar13 == local_1d8) {
                  local_574[(int)pfVar13] = 0;
                  local_1d8 = pfVar13 + 1;
                  local_578 = local_1d8;
                }
              }
              else {
                pfVar9 = (floating_point_string *)0x0;
                local_928 = (floating_point_string *)0x0;
                pfVar14 = pfVar13;
                if (pfVar15 != (floating_point_string *)0x0) {
                  do {
                    pfVar10 = local_928;
                    if (pfVar14 == (floating_point_string *)0x73) break;
                    if (pfVar14 == local_1d8) {
                      local_574[(int)pfVar14] = 0;
                      local_578 = pfVar13 + 1 + (int)pfVar9;
                    }
                    uVar12 = *(uint *)(local_940 + (int)pfVar9 * 4);
                    uVar8 = *(uint *)((int)local_91c + pfVar13 * 4);
                    uVar3 = (uint)((ulonglong)uVar12 * (ulonglong)uVar8);
                    uVar7 = local_574[(int)pfVar14];
                    uVar4 = uVar3 + local_574[(int)pfVar14];
                    local_574[(int)pfVar14] = (uint)(local_928 + uVar4);
                    pfVar10 = (floating_point_string *)
                              ((int)((ulonglong)uVar12 * (ulonglong)uVar8 >> 0x20) +
                               (uint)CARRY4(uVar3,uVar7) + (uint)CARRY4(uVar4,(uint)local_928));
                    pfVar9 = pfVar9 + 1;
                    pfVar14 = pfVar14 + 1;
                    local_1d8 = local_578;
                    local_928 = pfVar10;
                  } while (pfVar9 != pfVar15);
                  do {
                    if (pfVar10 == (floating_point_string *)0x0) break;
                    if (pfVar14 == (floating_point_string *)0x73) goto LAB_10164b69;
                    if (pfVar14 == local_1d8) {
                      local_574[(int)pfVar14] = 0;
                      local_578 = pfVar14 + 1;
                    }
                    puVar11 = local_574 + (int)pfVar14;
                    uVar12 = *puVar11;
                    *puVar11 = (uint)(pfVar10 + *puVar11);
                    pfVar10 = (floating_point_string *)(uint)CARRY4(uVar12,(uint)pfVar10);
                    pfVar14 = pfVar14 + 1;
                    local_1d8 = local_578;
                  } while( true );
                }
                if (pfVar14 == (floating_point_string *)0x73) {
LAB_10164b69:
                  local_1d8 = (floating_point_string *)0x0;
                  _memcpy_s(local_1d4,0x1cc,local_b2c,0);
                  bVar16 = false;
                  goto LAB_10164ae9;
                }
              }
              pfVar13 = pfVar13 + 1;
            } while (pfVar13 != local_934);
          }
          _memcpy_s(local_1d4,0x1cc,local_574,(int)local_1d8 << 2);
          bVar16 = true;
LAB_10164ae9:
          local_91c = local_1d8;
        }
LAB_10164af8:
        if (!bVar16) goto LAB_10164b2d;
        pfVar13 = local_91c;
      }
      if (local_930 != (floating_point_string *)0x0) {
        uVar12 = *(uint *)(&DAT_101ed80c + (int)local_930 * 2);
        if (uVar12 == 0) {
LAB_10164b2d:
          local_1d8 = (floating_point_string *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
LAB_10164b58:
          local_91c = local_1d8;
        }
        else if ((uVar12 != 1) && (pfVar13 != (floating_point_string *)0x0)) {
          uVar8 = 0;
          pfVar15 = (floating_point_string *)0x0;
          do {
            lVar18 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)pfVar15] + (ulonglong)uVar8;
            local_1d4[(int)pfVar15] = (uint)lVar18;
            uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
            pfVar15 = pfVar15 + 1;
          } while (pfVar15 != pfVar13);
          if (uVar8 == 0) goto LAB_10164b58;
          if ((floating_point_string *)0x72 < local_1d8) goto LAB_10164b2d;
          local_1d4[(int)local_1d8] = uVar8;
          local_1d8 = local_1d8 + 1;
          local_91c = local_1d8;
        }
      }
      if (local_924 != (floating_point_string *)0x0) {
        pfVar13 = (floating_point_string *)0x0;
        pfVar15 = local_924;
        if (local_91c != (floating_point_string *)0x0) {
          do {
            puVar11 = local_1d4 + (int)pfVar13;
            uVar12 = *puVar11;
            *puVar11 = (uint)(pfVar15 + *puVar11);
            pfVar15 = (floating_point_string *)(uint)CARRY4(uVar12,(uint)pfVar15);
            local_91c = local_1d8;
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != local_1d8);
        }
        if (pfVar15 != (floating_point_string *)0x0) {
          if (local_91c < (floating_point_string *)0x73) {
            local_1d4[(int)local_91c] = (uint)pfVar15;
            local_1d8 = local_1d8 + 1;
            local_91c = local_1d8;
          }
          else {
            local_1d8 = (floating_point_string *)0x0;
            _memcpy_s(local_1d4,0x1cc,local_b2c,0);
            local_91c = local_1d8;
          }
        }
      }
    }
  }
  if (local_93c == (floating_point_string *)0x0) {
LAB_101650a0:
    if (local_91c == (floating_point_string *)0x0) goto LAB_101650a8;
    uVar12 = local_1d4[(int)(local_91c + -1)];
    local_948 = 0;
    iVar5 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    local_940 = (floating_point_string *)((int)(local_91c + -1) * 0x20 + iVar5);
  }
  else {
    local_930 = (floating_point_string *)((uint)local_93c % 10);
    pfVar15 = local_91c;
    for (local_928 = (floating_point_string *)((uint)local_93c / 10); local_91c = pfVar15,
        local_928 != (floating_point_string *)0x0; local_928 = local_928 + -(int)local_924) {
      local_924 = local_928;
      if ((floating_point_string *)0x26 < local_928) {
        local_924 = (floating_point_string *)0x26;
      }
      uVar12 = (uint)(byte)(&DAT_101ed776)[(int)local_924 * 4];
      bVar1 = (&DAT_101ed777)[(int)local_924 * 4];
      local_918 = (floating_point_string *)(uVar12 + bVar1);
      _memset(local_914,0,uVar12 * 4);
      FUN_10140130(local_914 + uVar12,
                   &DAT_101ece70 + (uint)*(ushort *)(&DAT_101ed774 + (int)local_924 * 4) * 4,
                   (uint)bVar1 << 2);
      uVar12 = local_1d4[0];
      if (local_918 < (floating_point_string *)0x2) {
        if (local_914[0] == 0) {
LAB_10164d58:
          local_1d8 = (floating_point_string *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
        }
        else {
          if ((local_914[0] == 1) || (pfVar15 == (floating_point_string *)0x0)) {
            bVar16 = true;
            goto LAB_10165031;
          }
          uVar12 = 0;
          pfVar13 = (floating_point_string *)0x0;
          do {
            lVar18 = (ulonglong)local_914[0] * (ulonglong)local_1d4[(int)pfVar13] +
                     (ulonglong)uVar12;
            local_1d4[(int)pfVar13] = (uint)lVar18;
            uVar12 = (uint)((ulonglong)lVar18 >> 0x20);
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != pfVar15);
          if (uVar12 != 0) {
            if ((floating_point_string *)0x72 < local_1d8) {
LAB_10164dd1:
              local_1d8 = (floating_point_string *)0x0;
              _memcpy_s(local_1d4,0x1cc,local_b2c,0);
              bVar16 = false;
              local_91c = local_1d8;
              goto LAB_10165031;
            }
            local_1d4[(int)local_1d8] = uVar12;
LAB_10164dc2:
            local_1d8 = local_1d8 + 1;
          }
        }
LAB_10164d6d:
        bVar16 = true;
        local_91c = local_1d8;
      }
      else if (pfVar15 < (floating_point_string *)0x2) {
        local_1d8 = local_918;
        _memcpy_s(local_1d4,0x1cc,local_914,(int)local_918 << 2);
        if (uVar12 == 0) goto LAB_10164d58;
        bVar16 = true;
        local_91c = local_1d8;
        if ((uVar12 != 1) && (local_1d8 != (floating_point_string *)0x0)) {
          uVar8 = 0;
          pfVar15 = (floating_point_string *)0x0;
          do {
            lVar18 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)pfVar15] + (ulonglong)uVar8;
            local_1d4[(int)pfVar15] = (uint)lVar18;
            uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
            pfVar15 = pfVar15 + 1;
          } while (pfVar15 != local_1d8);
          if (uVar8 != 0) {
            if ((floating_point_string *)0x72 < local_1d8) goto LAB_10164dd1;
            local_1d4[(int)local_1d8] = uVar8;
            goto LAB_10164dc2;
          }
          goto LAB_10164d6d;
        }
      }
      else {
        local_92c = (floating_point_string *)local_914;
        local_938 = (floating_point_string *)local_1d4;
        pfVar13 = pfVar15;
        local_940 = local_918;
        if (pfVar15 <= local_918) {
          local_92c = (floating_point_string *)local_1d4;
          local_938 = (floating_point_string *)local_914;
          pfVar13 = local_918;
          local_940 = pfVar15;
        }
        local_1d8 = (floating_point_string *)0x0;
        pfVar15 = (floating_point_string *)0x0;
        local_578 = (floating_point_string *)0x0;
        if (local_940 != (floating_point_string *)0x0) {
          do {
            if (*(int *)(local_92c + (int)pfVar15 * 4) == 0) {
              if (pfVar15 == local_1d8) {
                local_574[(int)pfVar15] = 0;
                local_1d8 = pfVar15 + 1;
                local_578 = local_1d8;
              }
            }
            else {
              uVar12 = 0;
              local_934 = (floating_point_string *)0x0;
              pfVar14 = pfVar15;
              if (pfVar13 != (floating_point_string *)0x0) {
                do {
                  if (pfVar14 == (floating_point_string *)0x73) break;
                  if (pfVar14 == local_1d8) {
                    local_574[(int)pfVar14] = 0;
                    local_578 = pfVar15 + 1 + (int)local_934;
                  }
                  lVar18 = (ulonglong)*(uint *)(local_938 + (int)local_934 * 4) *
                           (ulonglong)*(uint *)(local_92c + (int)pfVar15 * 4) + (ulonglong)uVar12;
                  uVar8 = (uint)lVar18;
                  puVar11 = local_574 + (int)pfVar14;
                  uVar12 = *puVar11;
                  *puVar11 = *puVar11 + uVar8;
                  uVar12 = (int)((ulonglong)lVar18 >> 0x20) + (uint)CARRY4(uVar12,uVar8);
                  local_934 = local_934 + 1;
                  pfVar14 = pfVar14 + 1;
                  local_1d8 = local_578;
                } while (local_934 != pfVar13);
                do {
                  if (uVar12 == 0) break;
                  if (pfVar14 == (floating_point_string *)0x73) goto LAB_101650af;
                  if (pfVar14 == local_1d8) {
                    local_574[(int)pfVar14] = 0;
                    local_578 = pfVar14 + 1;
                  }
                  puVar11 = local_574 + (int)pfVar14;
                  uVar8 = *puVar11;
                  *puVar11 = *puVar11 + uVar12;
                  uVar12 = (uint)CARRY4(uVar8,uVar12);
                  pfVar14 = pfVar14 + 1;
                  local_1d8 = local_578;
                } while( true );
              }
              if (pfVar14 == (floating_point_string *)0x73) {
LAB_101650af:
                local_1d8 = (floating_point_string *)0x0;
                _memcpy_s(local_1d4,0x1cc,local_b2c,0);
                bVar16 = false;
                goto LAB_10165025;
              }
            }
            pfVar15 = pfVar15 + 1;
          } while (pfVar15 != local_940);
        }
        _memcpy_s(local_1d4,0x1cc,local_574,(int)local_1d8 << 2);
        bVar16 = true;
LAB_10165025:
        local_91c = local_1d8;
      }
LAB_10165031:
      if (!bVar16) goto LAB_10165156;
      pfVar15 = local_91c;
    }
    if (local_930 == (floating_point_string *)0x0) goto LAB_101650a0;
    uVar12 = *(uint *)(&DAT_101ed80c + (int)local_930 * 2);
    if (uVar12 == 0) {
      local_1d8 = (floating_point_string *)0x0;
      _memcpy_s(local_1d4,0x1cc,local_b2c,0);
      local_91c = local_1d8;
      goto LAB_101650a0;
    }
    if (uVar12 == 1) goto LAB_101650a0;
    if (pfVar15 != (floating_point_string *)0x0) {
      uVar8 = 0;
      pfVar13 = (floating_point_string *)0x0;
      do {
        lVar18 = (ulonglong)uVar12 * (ulonglong)local_1d4[(int)pfVar13] + (ulonglong)uVar8;
        local_1d4[(int)pfVar13] = (uint)lVar18;
        uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
        pfVar13 = pfVar13 + 1;
      } while (pfVar13 != pfVar15);
      local_91c = local_1d8;
      if (uVar8 != 0) {
        local_91c = pfVar15;
        if ((floating_point_string *)0x72 < local_1d8) {
LAB_10165156:
          local_1d8 = (floating_point_string *)0x0;
          _memcpy_s(local_1d4,0x1cc,local_b2c,0);
          assemble_floating_point_infinity((bool)local_94c[0x308],local_954);
          goto LAB_10166242;
        }
        local_1d4[(int)local_1d8] = uVar8;
        local_1d8 = local_1d8 + 1;
        local_91c = local_1d8;
      }
      goto LAB_101650a0;
    }
LAB_101650a8:
    local_940 = (floating_point_string *)0x0;
  }
  if ((local_950 <= local_940) || (local_920 == (floating_point_string *)0x0)) {
    bVar16 = local_95c != local_958;
    fVar2 = local_94c[0x308];
LAB_10166233:
    assemble_floating_point_value_from_big_integer
              ((big_integer *)&local_1d8,(uint)local_940,(bool)fVar2,bVar16,local_954);
    goto LAB_10166242;
  }
  pfVar15 = (floating_point_string *)0x0;
  local_3a8 = (floating_point_string *)0x0;
  uVar12 = 0;
  local_928 = (floating_point_string *)0x0;
  local_924 = local_958;
  pfVar13 = local_958;
  if (local_958 != local_95c) {
    do {
      pfVar14 = local_928;
      if (uVar12 == 9) {
        local_924 = pfVar13;
        if (pfVar15 != (floating_point_string *)0x0) {
          uVar12 = 0;
          pfVar13 = (floating_point_string *)0x0;
          do {
            lVar18 = (ulonglong)local_3a4[(int)pfVar13] * 1000000000 + (ulonglong)uVar12;
            local_3a4[(int)pfVar13] = (uint)lVar18;
            uVar12 = (uint)((ulonglong)lVar18 >> 0x20);
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != pfVar15);
          pfVar15 = local_3a8;
          if (uVar12 != 0) {
            if (local_3a8 < (floating_point_string *)0x73) {
              local_3a4[(int)local_3a8] = uVar12;
              local_3a8 = local_3a8 + 1;
              pfVar15 = local_3a8;
            }
            else {
              local_3a8 = (floating_point_string *)0x0;
              _memcpy_s(local_3a4,0x1cc,local_b2c,0);
              pfVar15 = local_3a8;
            }
          }
        }
        pfVar13 = local_924;
        if (pfVar14 != (floating_point_string *)0x0) {
          pfVar9 = (floating_point_string *)0x0;
          if (pfVar15 != (floating_point_string *)0x0) {
            do {
              puVar11 = local_3a4 + (int)pfVar9;
              uVar12 = *puVar11;
              *puVar11 = (uint)(pfVar14 + *puVar11);
              pfVar14 = (floating_point_string *)(uint)CARRY4(uVar12,(uint)pfVar14);
              pfVar9 = pfVar9 + 1;
              pfVar15 = local_3a8;
            } while (pfVar9 != local_3a8);
          }
          if (pfVar14 != (floating_point_string *)0x0) {
            if (pfVar15 < (floating_point_string *)0x73) {
              local_3a4[(int)pfVar15] = (uint)pfVar14;
              local_3a8 = local_3a8 + 1;
              pfVar15 = local_3a8;
            }
            else {
              local_3a8 = (floating_point_string *)0x0;
              _memcpy_s(local_3a4,0x1cc,local_b2c,0);
              pfVar15 = local_3a8;
            }
          }
        }
        local_928 = (floating_point_string *)0x0;
        uVar12 = 0;
      }
      local_928 = (floating_point_string *)((int)local_928 * 10 + (uint)(byte)*pfVar13);
      uVar12 = uVar12 + 1;
      pfVar13 = pfVar13 + 1;
    } while (pfVar13 != local_95c);
    local_924 = pfVar13;
    if (uVar12 != 0) {
      local_944 = (floating_point_string *)(uVar12 % 10);
      for (local_930 = (floating_point_string *)(uVar12 / 10);
          local_930 != (floating_point_string *)0x0; local_930 = local_930 + -(int)local_924) {
        local_924 = local_930;
        if ((floating_point_string *)0x26 < local_930) {
          local_924 = (floating_point_string *)0x26;
        }
        uVar12 = (uint)(byte)(&DAT_101ed776)[(int)local_924 * 4];
        bVar1 = (&DAT_101ed777)[(int)local_924 * 4];
        local_918 = (floating_point_string *)(uVar12 + bVar1);
        _memset(local_914,0,uVar12 * 4);
        FUN_10140130(local_914 + uVar12,
                     &DAT_101ece70 + (uint)*(ushort *)(&DAT_101ed774 + (int)local_924 * 4) * 4,
                     (uint)bVar1 << 2);
        uVar12 = local_3a4[0];
        if (local_918 < (floating_point_string *)0x2) {
          if (local_914[0] == 0) {
            local_3a8 = (floating_point_string *)0x0;
            _MaxCount = 0;
            puVar11 = local_b2c;
            goto LAB_1016566a;
          }
          if ((local_914[0] == 1) || (pfVar15 == (floating_point_string *)0x0)) {
            bVar16 = true;
          }
          else {
            uVar8 = 0;
            pfVar13 = (floating_point_string *)0x0;
            do {
              lVar18 = (ulonglong)local_914[0] * (ulonglong)local_3a4[(int)pfVar13] +
                       (ulonglong)uVar8;
              local_3a4[(int)pfVar13] = (uint)lVar18;
              uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
              pfVar13 = pfVar13 + 1;
            } while (pfVar13 != pfVar15);
LAB_10165422:
            if (uVar8 != 0) {
              if ((floating_point_string *)0x72 < local_3a8) {
                local_3a8 = (floating_point_string *)0x0;
                _memcpy_s(local_3a4,0x1cc,local_b2c,0);
                bVar16 = false;
                pfVar15 = local_3a8;
                goto LAB_10165681;
              }
              local_3a4[(int)local_3a8] = uVar8;
              local_3a8 = local_3a8 + 1;
            }
            bVar16 = true;
            pfVar15 = local_3a8;
          }
        }
        else {
          if (pfVar15 < (floating_point_string *)0x2) {
            local_3a8 = local_918;
            _memcpy_s(local_3a4,0x1cc,local_914,(int)local_918 << 2);
            if (uVar12 != 0) {
              bVar16 = true;
              pfVar15 = local_3a8;
              if ((uVar12 != 1) && (local_3a8 != (floating_point_string *)0x0)) {
                uVar8 = 0;
                pfVar15 = (floating_point_string *)0x0;
                do {
                  lVar18 = (ulonglong)uVar12 * (ulonglong)local_3a4[(int)pfVar15] + (ulonglong)uVar8
                  ;
                  local_3a4[(int)pfVar15] = (uint)lVar18;
                  uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
                  pfVar15 = pfVar15 + 1;
                } while (pfVar15 != local_3a8);
                goto LAB_10165422;
              }
              goto LAB_10165681;
            }
            _MaxCount = 0;
            local_3a8 = (floating_point_string *)0x0;
            puVar11 = local_b2c;
          }
          else {
            local_92c = (floating_point_string *)local_914;
            local_938 = (floating_point_string *)local_3a4;
            pfVar13 = pfVar15;
            local_93c = local_918;
            if (pfVar15 <= local_918) {
              local_92c = (floating_point_string *)local_3a4;
              local_938 = (floating_point_string *)local_914;
              pfVar13 = local_918;
              local_93c = pfVar15;
            }
            local_3a8 = (floating_point_string *)0x0;
            pfVar15 = (floating_point_string *)0x0;
            local_578 = (floating_point_string *)0x0;
            if (local_93c != (floating_point_string *)0x0) {
              do {
                if (*(int *)(local_92c + (int)pfVar15 * 4) == 0) {
                  if (pfVar15 == local_3a8) {
                    local_574[(int)pfVar15] = 0;
                    local_3a8 = pfVar15 + 1;
                    local_578 = local_3a8;
                  }
                }
                else {
                  uVar12 = 0;
                  local_934 = (floating_point_string *)0x0;
                  pfVar14 = pfVar15;
                  if (pfVar13 != (floating_point_string *)0x0) {
                    do {
                      if (pfVar14 == (floating_point_string *)0x73) break;
                      if (pfVar14 == local_3a8) {
                        local_574[(int)pfVar14] = 0;
                        local_578 = pfVar15 + 1 + (int)local_934;
                      }
                      lVar18 = (ulonglong)*(uint *)(local_938 + (int)local_934 * 4) *
                               (ulonglong)*(uint *)(local_92c + (int)pfVar15 * 4) +
                               (ulonglong)uVar12;
                      uVar8 = (uint)lVar18;
                      puVar11 = local_574 + (int)pfVar14;
                      uVar12 = *puVar11;
                      *puVar11 = *puVar11 + uVar8;
                      uVar12 = (int)((ulonglong)lVar18 >> 0x20) + (uint)CARRY4(uVar12,uVar8);
                      local_934 = local_934 + 1;
                      pfVar14 = pfVar14 + 1;
                      local_3a8 = local_578;
                    } while (local_934 != pfVar13);
                    do {
                      if (uVar12 == 0) break;
                      if (pfVar14 == (floating_point_string *)0x73) goto LAB_10165718;
                      if (pfVar14 == local_3a8) {
                        local_574[(int)pfVar14] = 0;
                        local_578 = pfVar14 + 1;
                      }
                      puVar11 = local_574 + (int)pfVar14;
                      uVar8 = *puVar11;
                      *puVar11 = *puVar11 + uVar12;
                      uVar12 = (uint)CARRY4(uVar8,uVar12);
                      pfVar14 = pfVar14 + 1;
                      local_3a8 = local_578;
                    } while( true );
                  }
                  if (pfVar14 == (floating_point_string *)0x73) {
LAB_10165718:
                    local_3a8 = (floating_point_string *)0x0;
                    _memcpy_s(local_3a4,0x1cc,local_b2c,0);
                    bVar16 = false;
                    pfVar15 = local_3a8;
                    goto LAB_10165681;
                  }
                }
                pfVar15 = pfVar15 + 1;
              } while (pfVar15 != local_93c);
            }
            _MaxCount = (int)local_3a8 << 2;
            puVar11 = local_574;
          }
LAB_1016566a:
          _memcpy_s(local_3a4,0x1cc,puVar11,_MaxCount);
          bVar16 = true;
          pfVar15 = local_3a8;
        }
LAB_10165681:
        if (!bVar16) goto LAB_1016576a;
      }
      if (local_944 != (floating_point_string *)0x0) {
        uVar12 = *(uint *)(&DAT_101ed80c + (int)local_944 * 2);
        if (uVar12 == 0) {
LAB_1016576a:
          local_3a8 = (floating_point_string *)0x0;
          _memcpy_s(local_3a4,0x1cc,local_b2c,0);
          pfVar15 = local_3a8;
        }
        else if ((uVar12 != 1) && (pfVar15 != (floating_point_string *)0x0)) {
          uVar8 = 0;
          pfVar13 = (floating_point_string *)0x0;
          do {
            lVar18 = (ulonglong)uVar12 * (ulonglong)local_3a4[(int)pfVar13] + (ulonglong)uVar8;
            local_3a4[(int)pfVar13] = (uint)lVar18;
            uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
            pfVar13 = pfVar13 + 1;
          } while (pfVar13 != pfVar15);
          pfVar15 = local_3a8;
          if (uVar8 != 0) {
            if ((floating_point_string *)0x72 < local_3a8) goto LAB_1016576a;
            local_3a4[(int)local_3a8] = uVar8;
            local_3a8 = local_3a8 + 1;
            pfVar15 = local_3a8;
          }
        }
      }
      if (local_928 != (floating_point_string *)0x0) {
        pfVar14 = (floating_point_string *)0x0;
        pfVar13 = local_928;
        if (pfVar15 != (floating_point_string *)0x0) {
          do {
            puVar11 = local_3a4 + (int)pfVar14;
            uVar12 = *puVar11;
            *puVar11 = (uint)(pfVar13 + *puVar11);
            pfVar13 = (floating_point_string *)(uint)CARRY4(uVar12,(uint)pfVar13);
            pfVar14 = pfVar14 + 1;
            pfVar15 = local_3a8;
          } while (pfVar14 != local_3a8);
        }
        if (pfVar13 != (floating_point_string *)0x0) {
          if (pfVar15 < (floating_point_string *)0x73) {
            local_3a4[(int)pfVar15] = (uint)pfVar13;
            local_3a8 = local_3a8 + 1;
            pfVar15 = local_3a8;
          }
          else {
            local_3a8 = (floating_point_string *)0x0;
            _memcpy_s(local_3a4,0x1cc,local_b2c,0);
            pfVar15 = local_3a8;
          }
        }
      }
    }
  }
  local_92c = local_920;
  if (*(int *)local_94c < 0) {
    local_92c = local_920 + -*(int *)local_94c;
  }
  local_744[1] = 0;
  local_944 = (floating_point_string *)((uint)local_92c % 10);
  local_744[0] = 1;
  local_920 = (floating_point_string *)0x1;
  local_748 = (floating_point_string *)0x1;
  for (local_92c = (floating_point_string *)((uint)local_92c / 10);
      local_92c != (floating_point_string *)0x0; local_92c = local_92c + -(int)local_934) {
    local_934 = local_92c;
    if ((floating_point_string *)0x26 < local_92c) {
      local_934 = (floating_point_string *)0x26;
    }
    pfVar15 = local_934;
    uVar12 = (uint)(byte)(&DAT_101ed776)[(int)local_934 * 4];
    bVar1 = (&DAT_101ed777)[(int)local_934 * 4];
    local_918 = (floating_point_string *)(uVar12 + bVar1);
    _memset(local_914,0,uVar12 * 4);
    FUN_10140130(local_914 + uVar12,
                 &DAT_101ece70 + (uint)*(ushort *)(&DAT_101ed774 + (int)pfVar15 * 4) * 4,
                 (uint)bVar1 << 2);
    uVar12 = local_744[0];
    if (local_918 < (floating_point_string *)0x2) {
      if (local_914[0] == 0) {
LAB_101658ef:
        local_748 = (floating_point_string *)0x0;
        _memcpy_s(local_744,0x1cc,local_b2c,0);
      }
      else {
        if ((local_914[0] == 1) || (local_920 == (floating_point_string *)0x0)) {
          bVar16 = true;
          goto LAB_10165bbe;
        }
        uVar8 = 0;
        pfVar15 = (floating_point_string *)0x0;
        do {
          lVar18 = (ulonglong)local_914[0] * (ulonglong)local_744[(int)pfVar15] + (ulonglong)uVar8;
          local_744[(int)pfVar15] = (uint)lVar18;
          uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
          pfVar15 = pfVar15 + 1;
        } while (pfVar15 != local_920);
LAB_101659fb:
        if (uVar8 != 0) {
          if ((floating_point_string *)0x72 < local_748) {
            local_748 = (floating_point_string *)0x0;
            _memcpy_s(local_744,0x1cc,local_b2c,0);
            bVar16 = false;
            local_920 = local_748;
            goto LAB_10165bbe;
          }
          local_744[(int)local_748] = uVar8;
          local_748 = local_748 + 1;
        }
      }
      bVar16 = true;
      local_920 = local_748;
    }
    else if (local_920 < (floating_point_string *)0x2) {
      local_748 = local_918;
      _memcpy_s(local_744,0x1cc,local_914,(int)local_918 << 2);
      if (uVar12 == 0) goto LAB_101658ef;
      bVar16 = true;
      local_920 = local_748;
      if ((uVar12 != 1) && (local_748 != (floating_point_string *)0x0)) {
        uVar8 = 0;
        pfVar15 = (floating_point_string *)0x0;
        do {
          lVar18 = (ulonglong)uVar12 * (ulonglong)local_744[(int)pfVar15] + (ulonglong)uVar8;
          local_744[(int)pfVar15] = (uint)lVar18;
          uVar8 = (uint)((ulonglong)lVar18 >> 0x20);
          pfVar15 = pfVar15 + 1;
        } while (pfVar15 != local_748);
        goto LAB_101659fb;
      }
    }
    else {
      local_928 = (floating_point_string *)local_914;
      local_930 = (floating_point_string *)local_744;
      pfVar15 = local_920;
      local_938 = local_918;
      if (local_920 <= local_918) {
        local_928 = (floating_point_string *)local_744;
        local_930 = (floating_point_string *)local_914;
        pfVar15 = local_918;
        local_938 = local_920;
      }
      local_748 = (floating_point_string *)0x0;
      pfVar13 = (floating_point_string *)0x0;
      local_578 = (floating_point_string *)0x0;
      if (local_938 != (floating_point_string *)0x0) {
        do {
          if (*(int *)(local_928 + (int)pfVar13 * 4) == 0) {
            if (pfVar13 == local_748) {
              local_574[(int)pfVar13] = 0;
              local_748 = pfVar13 + 1;
              local_578 = local_748;
            }
          }
          else {
            uVar12 = 0;
            local_93c = (floating_point_string *)0x0;
            pfVar14 = pfVar13;
            if (pfVar15 != (floating_point_string *)0x0) {
              do {
                if (pfVar14 == (floating_point_string *)0x73) break;
                if (pfVar14 == local_748) {
                  local_574[(int)pfVar14] = 0;
                  local_578 = pfVar13 + 1 + (int)local_93c;
                }
                lVar18 = (ulonglong)*(uint *)(local_930 + (int)local_93c * 4) *
                         (ulonglong)*(uint *)(local_928 + (int)pfVar13 * 4) + (ulonglong)uVar12;
                uVar8 = (uint)lVar18;
                puVar11 = local_574 + (int)pfVar14;
                uVar12 = *puVar11;
                *puVar11 = *puVar11 + uVar8;
                uVar12 = (int)((ulonglong)lVar18 >> 0x20) + (uint)CARRY4(uVar12,uVar8);
                local_93c = local_93c + 1;
                pfVar14 = pfVar14 + 1;
                local_748 = local_578;
              } while (local_93c != pfVar15);
              do {
                if (uVar12 == 0) break;
                if (pfVar14 == (floating_point_string *)0x73) goto LAB_10165c46;
                if (pfVar14 == local_748) {
                  local_574[(int)pfVar14] = 0;
                  local_578 = pfVar14 + 1;
                }
                puVar11 = local_574 + (int)pfVar14;
                uVar8 = *puVar11;
                *puVar11 = *puVar11 + uVar12;
                uVar12 = (uint)CARRY4(uVar8,uVar12);
                pfVar14 = pfVar14 + 1;
                local_748 = local_578;
              } while( true );
            }
            if (pfVar14 == (floating_point_string *)0x73) {
LAB_10165c46:
              local_748 = (floating_point_string *)0x0;
              _memcpy_s(local_744,0x1cc,local_b2c,0);
              bVar16 = false;
              goto LAB_10165bb2;
            }
          }
          pfVar13 = pfVar13 + 1;
        } while (pfVar13 != local_938);
      }
      _memcpy_s(local_744,0x1cc,local_574,(int)local_748 << 2);
      bVar16 = true;
LAB_10165bb2:
      local_920 = local_748;
    }
LAB_10165bbe:
    if (!bVar16) goto LAB_10165cfd;
    pfVar15 = local_3a8;
  }
  if (local_944 != (floating_point_string *)0x0) {
    local_944 = *(floating_point_string **)(&DAT_101ed80c + (int)local_944 * 2);
    if (local_944 == (floating_point_string *)0x0) {
      local_748 = local_944;
      _memcpy_s(local_744,0x1cc,local_b2c,0);
      pfVar15 = local_3a8;
LAB_10165c35:
      local_920 = local_748;
    }
    else if ((local_944 != (floating_point_string *)0x1) &&
            (local_920 != (floating_point_string *)0x0)) {
      uVar12 = 0;
      pfVar13 = (floating_point_string *)0x0;
      do {
        lVar18 = ZEXT48(local_944) * (ulonglong)local_744[(int)pfVar13] + (ulonglong)uVar12;
        local_744[(int)pfVar13] = (uint)lVar18;
        uVar12 = (uint)((ulonglong)lVar18 >> 0x20);
        pfVar13 = pfVar13 + 1;
      } while (pfVar13 != local_920);
      if (uVar12 == 0) goto LAB_10165c35;
      if ((floating_point_string *)0x72 < local_748) {
LAB_10165cfd:
        local_748 = (floating_point_string *)0x0;
        _memcpy_s(local_744,0x1cc,local_b2c,0);
        assemble_floating_point_zero((bool)local_94c[0x308],local_954);
        goto LAB_10166242;
      }
      local_744[(int)local_748] = uVar12;
      local_920 = local_748 + 1;
      local_748 = local_920;
    }
  }
  if (pfVar15 == (floating_point_string *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar12 = local_3a4[(int)(pfVar15 + -1)];
    local_948 = 0;
    iVar5 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar12 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    uVar12 = (int)(pfVar15 + -1) * 0x20 + iVar5;
  }
  if (local_920 == (floating_point_string *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = local_744[(int)(local_920 + -1)];
    local_948 = 0;
    iVar5 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    uVar8 = (int)(local_920 + -1) * 0x20 + iVar5;
  }
  local_924 = (floating_point_string *)(-(uint)(uVar12 < uVar8) & uVar8 - uVar12);
  pfVar13 = local_920;
  if (local_924 != (floating_point_string *)0x0) {
    pfVar13 = (floating_point_string *)((uint)local_924 & 0x1f);
    uVar8 = (uint)local_924 >> 5;
    local_934 = (floating_point_string *)(0x20 - (int)pfVar13);
    local_948 = uVar8;
    local_944 = pfVar13;
    iVar5 = __allshl();
    uVar12 = local_3a4[(int)(pfVar15 + -1)];
    local_928 = (floating_point_string *)(iVar5 + -1);
    iVar5 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    local_938 = (floating_point_string *)~(uint)local_928;
    local_960 = (floating_point_string *)0x0;
    if (uVar12 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    if ((pfVar15 + uVar8 < (floating_point_string *)0x74) &&
       (local_960 = pfVar15 + ((floating_point_string *)(0x20 - iVar5) < pfVar13) + uVar8,
       local_960 < (floating_point_string *)0x74)) {
      local_92c = (floating_point_string *)(uVar8 - 1);
      local_93c = local_960 + -1;
      if (local_93c != local_92c) {
        pfVar13 = local_93c + -uVar8;
        puVar11 = local_3a4 + (int)(pfVar13 + -1);
        do {
          if (pfVar13 < pfVar15) {
            local_930 = (floating_point_string *)puVar11[1];
          }
          else {
            local_930 = (floating_point_string *)0x0;
          }
          if (pfVar13 + -1 < pfVar15) {
            uVar12 = *puVar11;
          }
          else {
            uVar12 = 0;
          }
          puVar11 = puVar11 + -1;
          local_3a4[(int)local_93c] =
               (uVar12 & (uint)local_938) >> ((byte)local_934 & 0x1f) |
               ((uint)local_930 & (uint)local_928) << ((byte)local_944 & 0x1f);
          local_93c = local_93c + -1;
          pfVar13 = pfVar13 + -1;
          pfVar15 = local_3a8;
          uVar8 = local_948;
        } while (local_93c != local_92c);
      }
      if (uVar8 != 0) {
        puVar11 = local_3a4;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar11 = 0;
          puVar11 = puVar11 + 1;
        }
      }
      local_3a8 = local_960;
      pfVar13 = local_920;
      pfVar15 = local_3a8;
    }
    else {
      local_3a8 = (floating_point_string *)0x0;
      _memcpy_s(local_3a4,0x1cc,local_b2c,0);
      pfVar13 = local_748;
      pfVar15 = local_3a8;
    }
  }
  local_950 = local_950 + -(int)local_940;
  pfVar14 = local_950;
  if (local_940 != (floating_point_string *)0x0) {
    if (local_950 < local_924) {
      bVar16 = local_95c != local_958;
      fVar2 = local_94c[0x308];
      goto LAB_10166233;
    }
    pfVar14 = local_950 + -(int)local_924;
  }
  if (pfVar15 <= pfVar13) {
    if (pfVar15 < pfVar13) {
LAB_10165fb0:
      local_924 = local_924 + 1;
    }
    else {
      pfVar13 = pfVar15 + -1;
      if (pfVar13 != (floating_point_string *)0xffffffff) {
        do {
          if (local_3a4[(int)pfVar13] != local_744[(int)pfVar13]) break;
          pfVar13 = pfVar13 + -1;
        } while (pfVar13 != (floating_point_string *)0xffffffff);
        if ((pfVar13 != (floating_point_string *)0xffffffff) &&
           (local_3a4[(int)pfVar13] <= local_744[(int)pfVar13])) goto LAB_10165fb0;
      }
    }
  }
  pfVar13 = (floating_point_string *)((uint)pfVar14 & 0x1f);
  uVar8 = (uint)pfVar14 >> 5;
  local_960 = (floating_point_string *)(0x20 - (int)pfVar13);
  local_938 = pfVar13;
  iVar5 = __allshl();
  uVar12 = local_3a4[(int)(pfVar15 + -1)];
  local_944 = (floating_point_string *)(iVar5 + -1);
  iVar5 = 0x1f;
  if (uVar12 != 0) {
    for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
    }
  }
  local_948 = ~(uint)local_944;
  local_930 = (floating_point_string *)0x0;
  if (uVar12 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 1;
  }
  if ((pfVar15 + uVar8 < (floating_point_string *)0x74) &&
     (local_934 = pfVar15 + ((floating_point_string *)(0x20 - iVar5) < pfVar13) + uVar8,
     local_934 < (floating_point_string *)0x74)) {
    local_93c = local_934 + -1;
    if (local_93c != (floating_point_string *)(uVar8 - 1)) {
      pfVar13 = local_93c + -uVar8;
      puVar11 = local_3a4 + (int)(pfVar13 + -1);
      do {
        if (pfVar13 < pfVar15) {
          local_930 = (floating_point_string *)puVar11[1];
        }
        else {
          local_930 = (floating_point_string *)0x0;
        }
        if (pfVar13 + -1 < pfVar15) {
          uVar12 = *puVar11;
        }
        else {
          uVar12 = 0;
        }
        puVar11 = puVar11 + -1;
        local_3a4[(int)local_93c] =
             (uVar12 & local_948) >> ((byte)local_960 & 0x1f) |
             ((uint)local_930 & (uint)local_944) << ((byte)local_938 & 0x1f);
        local_93c = local_93c + -1;
        pfVar13 = pfVar13 + -1;
        pfVar15 = local_3a8;
      } while (local_93c != (floating_point_string *)(uVar8 - 1));
    }
    local_3a8 = local_934;
    if (uVar8 != 0) {
      puVar11 = local_3a4;
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
    }
  }
  else {
    local_3a8 = (floating_point_string *)0x0;
    _memcpy_s(local_3a4,0x1cc,local_b2c,0);
  }
  _Var17 = divide((big_integer *)&local_3a8,(big_integer *)&local_748);
  uVar8 = (uint)(_Var17 >> 0x20);
  uVar12 = (uint)_Var17;
  local_928 = (floating_point_string *)
              CONCAT31(local_928._1_3_,local_3a8 == (floating_point_string *)0x0);
  if (uVar8 == 0) {
    iVar5 = 0x1f;
    if (uVar12 != 0) {
      for (; uVar12 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar12 == 0) {
      pfVar15 = (floating_point_string *)0x0;
    }
    else {
      pfVar15 = (floating_point_string *)(iVar5 + 1);
    }
  }
  else {
    iVar5 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = iVar5 + 1;
    }
    pfVar15 = (floating_point_string *)(iVar5 + 0x20);
  }
  if (local_950 < pfVar15) {
    if (local_3a8 == (floating_point_string *)0x0) {
      lVar18 = __allshl();
      local_928 = (floating_point_string *)CONCAT31(local_928._1_3_,1);
      if ((lVar18 - 1U & _Var17) != 0) goto LAB_10166180;
    }
    else {
LAB_10166180:
      local_928 = (floating_point_string *)((uint)local_928 & 0xffffff00);
    }
    _Var17 = __aullshr();
  }
  lVar18 = __allshl();
  if (local_940 == (floating_point_string *)0x0) {
    pfVar15 = (floating_point_string *)~(uint)local_924;
  }
  else {
    pfVar15 = local_940 + -2;
  }
  assemble_floating_point_value
            (_Var17 + lVar18,(int)pfVar15,(bool)local_94c[0x308],SUB41(local_928,0),local_954);
LAB_10166242:
  SVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return SVar6;
}

