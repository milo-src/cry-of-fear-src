// rea decompile_all
// name: __crt_strtox::accumulate_decimal_digits_into_big_integer
// address: 0x1016360e
// body: available
// range: 0x1016360e-0x10163c21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void __cdecl __crt_strtox::accumulate_decimal_digits_into_big_integer(unsigned char const *
   const,unsigned char const * const,struct __crt_strtox::big_integer &)
   
   Library: Visual Studio 2019 Release */

void __cdecl
__crt_strtox::accumulate_decimal_digits_into_big_integer
          (uchar *param_1,uchar *param_2,big_integer *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  big_integer *pbVar9;
  uint uVar10;
  uint uVar11;
  big_integer *pbVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  rsize_t _MaxCount;
  uint local_59c [115];
  big_integer *local_3d0;
  uint local_3cc;
  uint local_3c8;
  uint local_3c4;
  big_integer *local_3c0;
  big_integer *local_3bc;
  big_integer *local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  uint local_3a8;
  uint local_3a4 [115];
  uint local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar8 = 0;
  local_3bc = param_3;
  local_3cc = 0;
  if (param_1 == param_2) goto LAB_10163c13;
  do {
    uVar11 = local_3cc;
    if (uVar8 == 9) {
      local_3b0 = *(uint *)param_3;
      if (local_3b0 != 0) {
        uVar8 = 0;
        uVar13 = 0;
        do {
          lVar4 = (ulonglong)*(uint *)(param_3 + uVar13 * 4 + 4) * 1000000000 + (ulonglong)uVar8;
          *(int *)(param_3 + uVar13 * 4 + 4) = (int)lVar4;
          uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
          uVar13 = uVar13 + 1;
        } while (uVar13 != local_3b0);
        param_3 = local_3bc;
        if (uVar8 != 0) {
          if (*(uint *)local_3bc < 0x73) {
            *(uint *)(local_3bc + *(uint *)local_3bc * 4 + 4) = uVar8;
            *(uint *)local_3bc = *(uint *)local_3bc + 1;
          }
          else {
            local_3a8 = 0;
            *(uint *)local_3bc = 0;
            _memcpy_s(local_3bc + 4,0x1cc,local_3a4,0);
          }
        }
      }
      if (uVar11 != 0) {
        uVar13 = 0;
        uVar8 = 0;
        pbVar9 = param_3;
        if (*(uint *)param_3 != 0) {
          do {
            pbVar9 = pbVar9 + 4;
            uVar14 = *(uint *)pbVar9;
            *(uint *)pbVar9 = *(uint *)pbVar9 + uVar11;
            uVar8 = *(uint *)param_3;
            uVar11 = (uint)CARRY4(uVar14,uVar11);
            uVar13 = uVar13 + 1;
          } while (uVar13 != uVar8);
        }
        if (uVar11 != 0) {
          if (uVar8 < 0x73) {
            *(uint *)(param_3 + uVar8 * 4 + 4) = uVar11;
            *(uint *)param_3 = *(uint *)param_3 + 1;
          }
          else {
            local_3a8 = 0;
            *(uint *)param_3 = 0;
            _memcpy_s(param_3 + 4,0x1cc,local_3a4,0);
          }
        }
      }
      local_3cc = 0;
      uVar8 = 0;
    }
    local_3cc = local_3cc * 10 + (uint)*param_1;
    uVar8 = uVar8 + 1;
    param_1 = param_1 + 1;
  } while (param_1 != param_2);
  if (uVar8 == 0) goto LAB_10163c13;
  local_3d0 = (big_integer *)(uVar8 % 10);
  for (local_3b0 = uVar8 / 10; pbVar9 = param_3, local_3b0 != 0; local_3b0 = local_3b0 - local_3c8)
  {
    local_3c8 = local_3b0;
    if (0x26 < local_3b0) {
      local_3c8 = 0x26;
    }
    uVar8 = (uint)(byte)(&DAT_101ed776)[local_3c8 * 4];
    bVar1 = (&DAT_101ed777)[local_3c8 * 4];
    local_3a8 = bVar1 + uVar8;
    _memset(local_3a4,0,uVar8 * 4);
    FUN_10140130(local_3a4 + uVar8,
                 &DAT_101ece70 + (uint)*(ushort *)(&DAT_101ed774 + local_3c8 * 4) * 4,
                 (uint)bVar1 << 2);
    if (local_3a8 < 2) {
      if (local_3a4[0] == 0) {
        _MaxCount = 0;
        local_1d8 = 0;
        *(uint *)param_3 = 0;
        puVar15 = local_1d4;
        goto LAB_10163abc;
      }
      if ((local_3a4[0] == 1) || (local_3ac = *(uint *)param_3, local_3ac == 0)) goto LAB_10163ac4;
      local_3c0 = param_3 + 4;
      uVar8 = 0;
      uVar11 = 0;
      do {
        lVar4 = (ulonglong)local_3a4[0] * (ulonglong)*(uint *)(local_3c0 + uVar11 * 4) +
                (ulonglong)uVar8;
        uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
        *(int *)(local_3c0 + uVar11 * 4) = (int)lVar4;
        uVar11 = uVar11 + 1;
      } while (uVar11 != local_3ac);
      pbVar9 = local_3bc;
      if (uVar8 == 0) goto LAB_10163ac4;
      if (*(uint *)local_3bc < 0x73) {
        *(uint *)(local_3bc + *(uint *)local_3bc * 4 + 4) = uVar8;
LAB_10163859:
        *(uint *)local_3bc = *(uint *)local_3bc + 1;
        pbVar9 = local_3bc;
        goto LAB_10163ac4;
      }
      local_3a8 = 0;
      *(uint *)local_3bc = 0;
      puVar15 = local_3a4;
LAB_10163b77:
      _memcpy_s(param_3 + 4,0x1cc,puVar15,0);
      bVar5 = false;
    }
    else {
      local_3ac = *(uint *)param_3;
      pbVar12 = param_3 + 4;
      if (local_3ac < 2) {
        uVar8 = *(uint *)pbVar12;
        *(uint *)param_3 = local_3a8;
        _memcpy_s(pbVar12,0x1cc,local_3a4,local_3a8 << 2);
        if (uVar8 != 0) {
          if ((uVar8 != 1) && (local_3ac = *(uint *)param_3, local_3ac != 0)) {
            uVar11 = 0;
            uVar13 = 0;
            do {
              lVar4 = (ulonglong)uVar8 * (ulonglong)*(uint *)(pbVar12 + uVar13 * 4) +
                      (ulonglong)uVar11;
              *(int *)(pbVar12 + uVar13 * 4) = (int)lVar4;
              uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
              uVar13 = uVar13 + 1;
            } while (uVar13 != local_3ac);
            pbVar9 = local_3bc;
            if (uVar11 != 0) {
              if (*(uint *)local_3bc < 0x73) {
                *(uint *)(local_3bc + *(uint *)local_3bc * 4 + 4) = uVar11;
                goto LAB_10163859;
              }
              local_3a8 = 0;
              *(uint *)local_3bc = 0;
              puVar15 = local_3a4;
              goto LAB_10163b77;
            }
          }
          goto LAB_10163ac4;
        }
        local_3a8 = 0;
        *(uint *)param_3 = 0;
        _MaxCount = 0;
        puVar15 = local_3a4;
      }
      else {
        if (local_3ac <= local_3a8) {
          local_3c0 = (big_integer *)local_3a4;
          local_3b8 = pbVar12;
        }
        else {
          local_3c0 = pbVar12;
          local_3b8 = (big_integer *)local_3a4;
        }
        local_3c4 = local_3a8;
        uVar8 = local_3ac;
        if (local_3ac <= local_3a8) {
          uVar8 = local_3a8;
          local_3c4 = local_3ac;
        }
        uVar11 = 0;
        uVar13 = 0;
        local_1d8 = 0;
        local_3ac = uVar8;
        if (local_3c4 != 0) {
          do {
            if (*(int *)(local_3b8 + uVar13 * 4) == 0) {
              if (uVar13 == uVar11) {
                local_1d4[uVar13] = 0;
                uVar11 = uVar13 + 1;
                local_1d8 = uVar11;
              }
            }
            else {
              local_3b4 = 0;
              uVar10 = 0;
              uVar14 = uVar13;
              if (uVar8 != 0) {
                do {
                  if (uVar14 == 0x73) break;
                  if (uVar14 == uVar11) {
                    local_1d4[uVar14] = 0;
                    local_1d8 = uVar13 + 1 + uVar10;
                  }
                  uVar11 = *(uint *)(local_3c0 + uVar10 * 4);
                  uVar2 = *(uint *)(local_3b8 + uVar13 * 4);
                  uVar6 = (uint)((ulonglong)uVar11 * (ulonglong)uVar2);
                  uVar3 = local_1d4[uVar14];
                  uVar7 = uVar6 + local_1d4[uVar14];
                  local_1d4[uVar14] = uVar7 + local_3b4;
                  local_3b4 = (int)((ulonglong)uVar11 * (ulonglong)uVar2 >> 0x20) +
                              (uint)CARRY4(uVar6,uVar3) + (uint)CARRY4(uVar7,local_3b4);
                  uVar10 = uVar10 + 1;
                  uVar14 = uVar14 + 1;
                  uVar11 = local_1d8;
                } while (uVar10 != uVar8);
                do {
                  if (local_3b4 == 0) break;
                  if (uVar14 == 0x73) goto LAB_10163b5c;
                  if (uVar14 == uVar11) {
                    local_1d4[uVar14] = 0;
                    local_1d8 = uVar14 + 1;
                  }
                  uVar11 = local_1d4[uVar14];
                  local_1d4[uVar14] = uVar11 + local_3b4;
                  local_3b4 = (uint)CARRY4(uVar11,local_3b4);
                  uVar14 = uVar14 + 1;
                  uVar11 = local_1d8;
                } while( true );
              }
              if (uVar14 == 0x73) {
LAB_10163b5c:
                *(uint *)param_3 = 0;
                puVar15 = local_59c;
                goto LAB_10163b77;
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != local_3c4);
        }
        *(uint *)param_3 = uVar11;
        _MaxCount = uVar11 << 2;
        puVar15 = local_1d4;
      }
LAB_10163abc:
      _memcpy_s(param_3 + 4,0x1cc,puVar15,_MaxCount);
LAB_10163ac4:
      bVar5 = true;
    }
    if (!bVar5) {
      *(uint *)pbVar9 = 0;
      goto LAB_10163b9f;
    }
    param_3 = pbVar9;
  }
  if (local_3d0 != (big_integer *)0x0) {
    uVar8 = *(uint *)(&DAT_101ed80c + (int)local_3d0 * 2);
    if (uVar8 == 0) {
LAB_10163b94:
      *(uint *)pbVar9 = 0;
LAB_10163b9f:
      _memcpy_s(pbVar9 + 4,0x1cc,local_59c,0);
    }
    else if ((uVar8 != 1) && (local_3b0 = *(uint *)param_3, local_3b0 != 0)) {
      local_3d0 = param_3 + 4;
      uVar11 = 0;
      uVar13 = 0;
      do {
        lVar4 = (ulonglong)uVar8 * (ulonglong)*(uint *)(local_3d0 + uVar13 * 4) + (ulonglong)uVar11;
        *(int *)(local_3d0 + uVar13 * 4) = (int)lVar4;
        uVar11 = (uint)((ulonglong)lVar4 >> 0x20);
        uVar13 = uVar13 + 1;
      } while (uVar13 != local_3b0);
      pbVar9 = local_3bc;
      if (uVar11 != 0) {
        if (0x72 < *(uint *)local_3bc) goto LAB_10163b94;
        *(uint *)(local_3bc + *(uint *)local_3bc * 4 + 4) = uVar11;
        *(uint *)local_3bc = *(uint *)local_3bc + 1;
      }
    }
  }
  if (local_3cc != 0) {
    uVar13 = 0;
    uVar8 = 0;
    uVar11 = local_3cc;
    pbVar12 = pbVar9;
    if (*(uint *)pbVar9 != 0) {
      do {
        pbVar12 = pbVar12 + 4;
        uVar14 = *(uint *)pbVar12;
        *(uint *)pbVar12 = *(uint *)pbVar12 + uVar11;
        uVar8 = *(uint *)pbVar9;
        uVar11 = (uint)CARRY4(uVar14,uVar11);
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar8);
    }
    if (uVar11 != 0) {
      if (uVar8 < 0x73) {
        *(uint *)(pbVar9 + uVar8 * 4 + 4) = uVar11;
        *(uint *)pbVar9 = *(uint *)pbVar9 + 1;
      }
      else {
        *(uint *)pbVar9 = 0;
        _memcpy_s(pbVar9 + 4,0x1cc,local_59c,0);
      }
    }
  }
LAB_10163c13:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

