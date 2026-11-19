// rea decompile_all
// name: ___crtCompareStringA
// address: 0x1013d8a5
// body: available
// range: 0x1013d8a5-0x1013db09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___crtCompareStringA
   
   Library: Visual Studio 2019 Release */

int __cdecl
___crtCompareStringA
          (_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwCmpFlags,LPCSTR _LpString1,
          int _CchCount1,LPCSTR _LpString2,int _CchCount2,int _Code_page)

{
  BOOL BVar1;
  BYTE *pBVar2;
  uint uVar3;
  LPWSTR pWVar4;
  undefined4 *puVar5;
  int iVar6;
  LPWSTR local_34;
  LPWSTR local_30;
  int local_2c;
  LPWSTR local_28;
  byte *local_24;
  LPCSTR local_20;
  _cpinfo local_1c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_24 = (byte *)_CchCount1;
  local_20 = (LPCSTR)_DwCmpFlags;
  if ((int)_LpString1 < 1) {
    if ((int)_LpString1 < -1) goto LAB_1013daf8;
  }
  else {
    _LpString1 = (LPCSTR)___strncnt(_DwCmpFlags,_LpString1);
  }
  if ((int)_LpString2 < 1) {
    if ((int)_LpString2 < -1) goto LAB_1013daf8;
  }
  else {
    _LpString2 = (LPCSTR)___strncnt(local_24,_LpString2);
  }
  if ((_LpString1 == (LPCSTR)0x0) || (_LpString2 == (LPCSTR)0x0)) {
    if ((_LpString1 == _LpString2) ||
       (((1 < (int)_LpString2 || (1 < (int)_LpString1)) ||
        (BVar1 = GetCPInfo(_CchCount2,&local_1c), BVar1 == 0)))) goto LAB_1013daf8;
    if (0 < (int)_LpString1) {
      if (1 < local_1c.MaxCharSize) {
        pBVar2 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar2[1] != 0)) &&
               ((*(byte *)_DwCmpFlags < *pBVar2 || (pBVar2[1] < *(byte *)_DwCmpFlags))))) {
          pBVar2 = pBVar2 + 2;
          local_1c.LeadByte[0] = *pBVar2;
        }
      }
      goto LAB_1013daf8;
    }
    if (0 < (int)_LpString2) {
      if (1 < local_1c.MaxCharSize) {
        pBVar2 = local_1c.LeadByte;
        while (((local_1c.LeadByte[0] != 0 && (pBVar2[1] != 0)) &&
               ((*local_24 < *pBVar2 || (pBVar2[1] < *local_24))))) {
          pBVar2 = pBVar2 + 2;
          local_1c.LeadByte[0] = *pBVar2;
        }
      }
      goto LAB_1013daf8;
    }
  }
  local_2c = MultiByteToWideChar(_CchCount2,9,local_20,(int)_LpString1,(LPWSTR)0x0,0);
  if (local_2c == 0) goto LAB_1013daf8;
  uVar3 = local_2c * 2 + 8;
  uVar3 = -(uint)((uint)(local_2c * 2) < uVar3) & uVar3;
  if (uVar3 == 0) {
    local_34 = (LPWSTR)0x0;
  }
  else {
    if (uVar3 < 0x401) {
      pWVar4 = (LPWSTR)&stack0xffffffbc;
      local_28 = (LPWSTR)&stack0xffffffbc;
      if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_1013da12:
        local_28 = pWVar4 + 4;
      }
    }
    else {
      pWVar4 = (LPWSTR)FUN_1017556b(uVar3);
      local_28 = pWVar4;
      if (pWVar4 != (LPWSTR)0x0) {
        pWVar4[0] = L'\xdddd';
        pWVar4[1] = L'\0';
        goto LAB_1013da12;
      }
    }
    local_34 = local_28;
    if (((local_28 != (LPWSTR)0x0) &&
        (iVar6 = MultiByteToWideChar(_CchCount2,1,local_20,(int)_LpString1,local_28,local_2c),
        iVar6 != 0)) &&
       (local_20 = (LPCSTR)MultiByteToWideChar(_CchCount2,9,(LPCSTR)local_24,(int)_LpString2,
                                               (LPWSTR)0x0,0), local_20 != (LPCSTR)0x0)) {
      uVar3 = (int)local_20 * 2 + 8;
      uVar3 = -(uint)((uint)((int)local_20 * 2) < uVar3) & uVar3;
      if (uVar3 == 0) {
        local_30 = (LPWSTR)0x0;
      }
      else {
        if (uVar3 < 0x401) {
          puVar5 = (undefined4 *)&stack0xffffffbc;
          pWVar4 = (LPWSTR)&stack0xffffffbc;
          if (&stack0x00000000 != (undefined1 *)0x44) {
LAB_1013da96:
            pWVar4 = (LPWSTR)(puVar5 + 2);
          }
        }
        else {
          puVar5 = (undefined4 *)FUN_1017556b(uVar3);
          pWVar4 = (LPWSTR)0x0;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0xdddd;
            goto LAB_1013da96;
          }
        }
        local_30 = pWVar4;
        if ((pWVar4 != (LPWSTR)0x0) &&
           (iVar6 = MultiByteToWideChar(_CchCount2,1,(LPCSTR)local_24,(int)_LpString2,pWVar4,
                                        (int)local_20), iVar6 != 0)) {
          ___crtCompareStringEx
                    ((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,local_28,local_2c,pWVar4,(int)local_20);
        }
      }
      __crt_scoped_stack_ptr<wchar_t>::~__crt_scoped_stack_ptr<wchar_t>
                ((__crt_scoped_stack_ptr<wchar_t> *)&local_30);
    }
  }
  __crt_scoped_stack_ptr<wchar_t>::~__crt_scoped_stack_ptr<wchar_t>
            ((__crt_scoped_stack_ptr<wchar_t> *)&local_34);
LAB_1013daf8:
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

