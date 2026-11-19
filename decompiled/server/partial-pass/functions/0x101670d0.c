// rea decompile_all
// name: __crt_strtox::multiply_by_power_of_ten
// address: 0x101670d0
// body: available
// range: 0x101670d0-0x10167337 inclusive
// range: 0x10167340-0x101675f2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    bool __cdecl __crt_strtox::multiply_by_power_of_ten(struct __crt_strtox::big_integer &,unsigned
   int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

bool __cdecl __crt_strtox::multiply_by_power_of_ten(big_integer *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  rsize_t _MaxCount;
  uint uVar8;
  int iVar9;
  uint uVar10;
  big_integer *pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  undefined1 local_5a4 [468];
  uint local_3d0;
  big_integer *local_3cc;
  uint local_3c8;
  big_integer *local_3c4;
  uint local_3c0;
  big_integer *local_3bc;
  uint local_3b8;
  big_integer *local_3b4;
  uint local_3b0;
  big_integer *local_3ac;
  uint local_3a8;
  uint local_3a4 [115];
  uint local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_3d0 = param_2 / 10;
  local_3ac = param_1;
  pbVar11 = param_1;
  local_3c0 = local_3d0;
  if (local_3d0 != 0) {
    do {
      local_3b8 = local_3d0;
      if (0x26 < local_3d0) {
        local_3b8 = 0x26;
      }
      uVar8 = (uint)(byte)(&DAT_101ed776)[local_3b8 * 4];
      bVar1 = (&DAT_101ed777)[local_3b8 * 4];
      local_3a8 = uVar8 + bVar1;
      _memset(local_3a4,0,uVar8 * 4);
      FUN_10140130(local_3a4 + uVar8,
                   &DAT_101ece70 + (uint)*(ushort *)(&DAT_101ed774 + local_3b8 * 4) * 4,
                   (uint)bVar1 * 4);
      param_1 = local_3ac;
      if (local_3a8 < 2) {
        if (local_3a4[0] == 0) {
          puVar15 = local_1d4;
          local_1d8 = local_3a4[0];
          *(uint *)pbVar11 = 0;
          _MaxCount = 0;
          param_1 = pbVar11;
          goto LAB_10167456;
        }
        param_1 = pbVar11;
        if ((local_3a4[0] == 1) || (uVar8 = *(uint *)pbVar11, param_1 = local_3ac, uVar8 == 0))
        goto LAB_1016745e;
        uVar12 = 0;
        uVar10 = 0;
        do {
          lVar3 = (ulonglong)local_3a4[0] * (ulonglong)*(uint *)(local_3ac + uVar10 * 4 + 4) +
                  (ulonglong)uVar12;
          uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
          *(int *)(local_3ac + 4 + uVar10 * 4) = (int)lVar3;
          uVar10 = uVar10 + 1;
          pbVar11 = local_3ac + 4;
        } while (uVar10 != uVar8);
LAB_10167203:
        param_1 = local_3ac;
        if (uVar12 == 0) goto LAB_1016745e;
        if (*(uint *)local_3ac < 0x73) {
          *(uint *)(local_3ac + *(uint *)local_3ac * 4 + 4) = uVar12;
          *(uint *)local_3ac = *(uint *)local_3ac + 1;
          goto LAB_1016745e;
        }
        local_3a8 = 0;
        *(uint *)local_3ac = 0;
        _memcpy_s(pbVar11,0x1cc,local_3a4,0);
        bVar4 = false;
      }
      else {
        uVar8 = *(uint *)pbVar11;
        local_3b4 = pbVar11 + 4;
        local_3b0 = uVar8;
        if (uVar8 < 2) {
          uVar8 = *(uint *)local_3b4;
          *(uint *)pbVar11 = local_3a8;
          _memcpy_s(local_3b4,0x1cc,local_3a4,local_3a8 << 2);
          if (uVar8 != 0) {
            param_1 = pbVar11;
            if ((uVar8 != 1) && (uVar10 = *(uint *)pbVar11, param_1 = local_3ac, uVar10 != 0)) {
              uVar12 = 0;
              uVar13 = 0;
              do {
                lVar3 = (ulonglong)uVar8 * (ulonglong)*(uint *)(local_3b4 + uVar13 * 4) +
                        (ulonglong)uVar12;
                uVar12 = (uint)((ulonglong)lVar3 >> 0x20);
                *(int *)(local_3b4 + uVar13 * 4) = (int)lVar3;
                uVar13 = uVar13 + 1;
                pbVar11 = local_3b4;
              } while (uVar13 != uVar10);
              goto LAB_10167203;
            }
            goto LAB_1016745e;
          }
          puVar15 = local_3a4;
          *(uint *)pbVar11 = 0;
          _MaxCount = 0;
          local_3a8 = 0;
          param_1 = pbVar11;
        }
        else {
          if (local_3a8 < uVar8) {
            local_3c8 = local_3a8;
            local_3cc = (big_integer *)local_3a4;
            local_3c4 = local_3b4;
          }
          else {
            local_3c4 = (big_integer *)local_3a4;
            local_3b0 = local_3a8;
            local_3c8 = uVar8;
            local_3cc = local_3b4;
          }
          uVar8 = 0;
          uVar10 = 0;
          local_1d8 = 0;
          if (local_3c8 != 0) {
            do {
              local_3bc = *(big_integer **)(local_3cc + uVar10 * 4);
              if (local_3bc == (big_integer *)0x0) {
                if (uVar10 == uVar8) {
                  uVar8 = uVar10 + 1;
                  local_1d4[uVar10] = 0;
                  local_1d8 = uVar8;
                }
              }
              else {
                uVar13 = 0;
                uVar14 = 0;
                uVar12 = uVar10;
                if (local_3b0 != 0) {
                  do {
                    if (uVar12 == 0x73) break;
                    if (uVar12 == uVar8) {
                      local_1d4[uVar12] = 0;
                      local_1d8 = uVar10 + 1 + uVar14;
                    }
                    uVar8 = *(uint *)(local_3c4 + uVar14 * 4);
                    uVar6 = (uint)((ulonglong)uVar8 * ZEXT48(local_3bc));
                    uVar2 = local_1d4[uVar12];
                    uVar7 = uVar6 + local_1d4[uVar12];
                    local_1d4[uVar12] = uVar7 + uVar13;
                    uVar13 = (int)((ulonglong)uVar8 * ZEXT48(local_3bc) >> 0x20) +
                             (uint)CARRY4(uVar6,uVar2) + (uint)CARRY4(uVar7,uVar13);
                    uVar14 = uVar14 + 1;
                    uVar12 = uVar12 + 1;
                    uVar8 = local_1d8;
                  } while (uVar14 != local_3b0);
                  do {
                    if (uVar13 == 0) break;
                    if (uVar12 == 0x73) goto LAB_101674d5;
                    if (uVar12 == uVar8) {
                      local_1d4[uVar12] = 0;
                      local_1d8 = uVar12 + 1;
                    }
                    puVar15 = local_1d4 + uVar12;
                    uVar8 = *puVar15;
                    *puVar15 = *puVar15 + uVar13;
                    uVar13 = (uint)CARRY4(uVar8,uVar13);
                    uVar12 = uVar12 + 1;
                    uVar8 = local_1d8;
                  } while( true );
                }
                if (uVar12 == 0x73) {
LAB_101674d5:
                  *(uint *)local_3ac = 0;
                  _memcpy_s(local_3ac + 4,0x1cc,local_5a4,0);
                  bVar4 = false;
                  goto LAB_10167460;
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != local_3c8);
          }
          *(uint *)local_3ac = uVar8;
          _MaxCount = uVar8 << 2;
          puVar15 = local_1d4;
        }
LAB_10167456:
        _memcpy_s(pbVar11 + 4,0x1cc,puVar15,_MaxCount);
LAB_1016745e:
        bVar4 = true;
      }
LAB_10167460:
      if (!bVar4) {
        *(uint *)param_1 = 0;
        _memcpy_s(param_1 + 4,0x1cc,local_5a4,0);
        uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar5;
      }
      local_3d0 = local_3d0 - local_3b8;
      pbVar11 = param_1;
    } while (local_3d0 != 0);
    local_3d0 = 0;
  }
  iVar9 = param_2 + local_3c0 * -10;
  if (iVar9 != 0) {
    uVar8 = *(uint *)(&DAT_101ed80c + iVar9 * 2);
    if (uVar8 == 0) {
      *(uint *)param_1 = 0;
      _memcpy_s(param_1 + 4,0x1cc,local_5a4,0);
    }
    else if ((uVar8 != 1) && (local_3c0 = *(uint *)param_1, local_3c0 != 0)) {
      local_3bc = param_1 + 4;
      uVar13 = 0;
      uVar10 = 0;
      do {
        lVar3 = (ulonglong)uVar8 * (ulonglong)*(uint *)(local_3bc + uVar10 * 4) + (ulonglong)uVar13;
        uVar13 = (uint)((ulonglong)lVar3 >> 0x20);
        *(int *)(local_3bc + uVar10 * 4) = (int)lVar3;
        uVar10 = uVar10 + 1;
      } while (uVar10 != local_3c0);
      if (uVar13 != 0) {
        if (*(uint *)local_3ac < 0x73) {
          *(uint *)(local_3ac + *(uint *)local_3ac * 4 + 4) = uVar13;
          *(uint *)local_3ac = *(uint *)local_3ac + 1;
          uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar5;
        }
        *(uint *)local_3ac = 0;
        _memcpy_s(local_3bc,0x1cc,local_5a4,0);
        uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar5;
      }
    }
  }
  uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}

