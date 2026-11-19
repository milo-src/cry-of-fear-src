// rea decompile_all
// name: __crt_strtox::multiply
// address: 0x10166ca0
// body: available
// range: 0x10166ca0-0x10166fdc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    bool __cdecl __crt_strtox::multiply(struct __crt_strtox::big_integer &,struct
   __crt_strtox::big_integer const &)
   
   Library: Visual Studio 2019 Release */

bool __cdecl __crt_strtox::multiply(big_integer *param_1,big_integer *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 uVar5;
  big_integer *pbVar6;
  uint uVar7;
  uint uVar8;
  rsize_t _MaxCount;
  int iVar9;
  big_integer *pbVar10;
  big_integer *pbVar11;
  uint uVar12;
  uint uVar13;
  big_integer *pbVar14;
  undefined1 local_3c4 [468];
  uint local_1f0;
  big_integer *local_1ec;
  big_integer *local_1e8;
  big_integer *local_1e4;
  big_integer *local_1e0;
  big_integer *local_1dc;
  big_integer *local_1d8;
  uint local_1d4 [115];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pbVar6 = *(big_integer **)param_2;
  local_1e8 = param_2 + 4;
  local_1e4 = param_1;
  if (pbVar6 < (big_integer *)0x2) {
    uVar13 = *(uint *)local_1e8;
    if (uVar13 != 0) {
      if ((uVar13 == 1) || (iVar2 = *(int *)param_1, iVar2 == 0)) goto LAB_10166f87;
      local_1e8 = param_1 + 4;
      uVar12 = 0;
      iVar9 = 0;
      do {
        lVar4 = (ulonglong)uVar13 * (ulonglong)*(uint *)(local_1e8 + iVar9 * 4) + (ulonglong)uVar12;
        uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
        *(int *)(local_1e8 + iVar9 * 4) = (int)lVar4;
        iVar9 = iVar9 + 1;
        pbVar6 = local_1e8;
      } while (iVar9 != iVar2);
LAB_10166d3a:
      if (uVar12 != 0) {
        if (*(uint *)local_1e4 < 0x73) {
          *(uint *)(local_1e4 + *(uint *)local_1e4 * 4 + 4) = uVar12;
          *(uint *)local_1e4 = *(uint *)local_1e4 + 1;
          uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return (bool)uVar5;
        }
        local_1d8 = (big_integer *)0x0;
        *(uint *)local_1e4 = 0;
        _memcpy_s(pbVar6,0x1cc,local_1d4,0);
        uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return (bool)uVar5;
      }
      goto LAB_10166f87;
    }
    *(undefined4 *)param_1 = 0;
    _MaxCount = 0;
    local_1d8 = (big_integer *)0x0;
  }
  else {
    local_1ec = *(big_integer **)param_1;
    pbVar14 = param_1 + 4;
    if (local_1ec < (big_integer *)0x2) {
      uVar13 = *(uint *)pbVar14;
      *(big_integer **)param_1 = pbVar6;
      local_1e0 = pbVar14;
      _memcpy_s(param_1 + 4,0x1cc,local_1e8,*(int *)param_2 << 2);
      if (uVar13 != 0) {
        if ((uVar13 == 1) || (iVar2 = *(int *)param_1, iVar2 == 0)) goto LAB_10166f87;
        uVar12 = 0;
        iVar9 = 0;
        do {
          lVar4 = (ulonglong)uVar13 * (ulonglong)*(uint *)(local_1e0 + iVar9 * 4) +
                  (ulonglong)uVar12;
          uVar12 = (uint)((ulonglong)lVar4 >> 0x20);
          *(int *)(local_1e0 + iVar9 * 4) = (int)lVar4;
          iVar9 = iVar9 + 1;
          pbVar6 = local_1e0;
        } while (iVar9 != iVar2);
        goto LAB_10166d3a;
      }
      *(undefined4 *)param_1 = 0;
      _MaxCount = 0;
      local_1d8 = (big_integer *)0x0;
    }
    else {
      local_1e0 = local_1ec;
      local_1dc = pbVar14;
      if (pbVar6 < local_1ec) {
        local_1e0 = pbVar6;
        local_1dc = local_1e8;
        pbVar6 = local_1ec;
        local_1e8 = pbVar14;
      }
      local_1ec = pbVar6;
      pbVar6 = (big_integer *)0x0;
      pbVar14 = (big_integer *)0x0;
      local_1d8 = (big_integer *)0x0;
      if (local_1e0 != (big_integer *)0x0) {
        do {
          local_1f0 = *(uint *)(local_1dc + (int)pbVar14 * 4);
          if (local_1f0 == 0) {
            if (pbVar14 == pbVar6) {
              pbVar6 = pbVar14 + 1;
              local_1d4[(int)pbVar14] = 0;
              local_1d8 = pbVar6;
            }
          }
          else {
            pbVar11 = (big_integer *)0x0;
            uVar13 = 0;
            pbVar10 = pbVar14;
            if (local_1ec != (big_integer *)0x0) {
              do {
                if (pbVar10 == (big_integer *)0x73) break;
                if (pbVar10 == pbVar6) {
                  local_1d4[(int)pbVar10] = 0;
                  local_1d8 = pbVar14 + 1 + (int)pbVar11;
                }
                uVar12 = *(uint *)(local_1e8 + (int)pbVar11 * 4);
                uVar7 = (uint)((ulonglong)uVar12 * (ulonglong)local_1f0);
                uVar3 = local_1d4[(int)pbVar10];
                uVar8 = uVar7 + local_1d4[(int)pbVar10];
                local_1d4[(int)pbVar10] = uVar8 + uVar13;
                uVar13 = (int)((ulonglong)uVar12 * (ulonglong)local_1f0 >> 0x20) +
                         (uint)CARRY4(uVar7,uVar3) + (uint)CARRY4(uVar8,uVar13);
                pbVar11 = pbVar11 + 1;
                pbVar10 = pbVar10 + 1;
                pbVar6 = local_1d8;
              } while (pbVar11 != local_1ec);
              do {
                if (uVar13 == 0) break;
                if (pbVar10 == (big_integer *)0x73) goto LAB_10166f9a;
                if (pbVar10 == pbVar6) {
                  local_1d8 = pbVar10 + 1;
                  local_1d4[(int)pbVar10] = 0;
                }
                puVar1 = local_1d4 + (int)pbVar10;
                uVar12 = *puVar1;
                *puVar1 = *puVar1 + uVar13;
                uVar13 = (uint)CARRY4(uVar12,uVar13);
                pbVar10 = pbVar10 + 1;
                pbVar6 = local_1d8;
              } while( true );
            }
            if (pbVar10 == (big_integer *)0x73) {
LAB_10166f9a:
              *(undefined4 *)param_1 = 0;
              _memcpy_s(param_1 + 4,0x1cc,local_3c4,0);
              uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return (bool)uVar5;
            }
          }
          pbVar14 = pbVar14 + 1;
        } while (pbVar14 != local_1e0);
      }
      *(big_integer **)param_1 = pbVar6;
      _MaxCount = (int)pbVar6 << 2;
    }
  }
  _memcpy_s(param_1 + 4,0x1cc,local_1d4,_MaxCount);
LAB_10166f87:
  uVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar5;
}

