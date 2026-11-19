// rea decompile_all
// name: ___crtLCMapStringA
// address: 0x10126cd5
// body: available
// range: 0x10126cd5-0x10126e97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Single Match
    ___crtLCMapStringA
   
   Library: Visual Studio 2019 Release */

int __cdecl
___crtLCMapStringA(_locale_t _Plocinfo,LPCWSTR _LocaleName,DWORD _DwMapFlag,LPCSTR _LpSrcStr,
                  int _CchSrc,LPSTR _LpDestStr,int _CchDest,int _Code_page,BOOL _BError)

{
  LPCSTR pCVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  LPCWSTR lpWideCharStr;
  LPCSTR cbMultiByte;
  LPCWSTR lpDestStr;
  LPCWSTR local_10;
  LPCWSTR local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  cbMultiByte = _LpSrcStr;
  if (0 < (int)_LpSrcStr) {
    pCVar1 = (LPCSTR)___strncnt(_DwMapFlag,_LpSrcStr);
    cbMultiByte = pCVar1 + 1;
    if ((int)_LpSrcStr <= (int)pCVar1) {
      cbMultiByte = pCVar1;
    }
  }
  iVar2 = MultiByteToWideChar(_CchDest,(uint)(_Code_page != 0) * 8 + 1,(LPCSTR)_DwMapFlag,
                              (int)cbMultiByte,(LPWSTR)0x0,0);
  if (iVar2 == 0) goto LAB_10126e86;
  uVar3 = iVar2 * 2 + 8;
  uVar3 = -(uint)((uint)(iVar2 * 2) < uVar3) & uVar3;
  if (uVar3 == 0) {
    local_10 = (LPCWSTR)0x0;
  }
  else {
    if (uVar3 < 0x401) {
      puVar5 = (undefined4 *)&stack0xffffffe0;
      lpWideCharStr = (LPCWSTR)&stack0xffffffe0;
      if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_10126d70:
        lpWideCharStr = (LPCWSTR)(puVar5 + 2);
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_1017556b(uVar3);
      lpWideCharStr = (LPCWSTR)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0xdddd;
        goto LAB_10126d70;
      }
    }
    local_10 = lpWideCharStr;
    if (((lpWideCharStr != (LPCWSTR)0x0) &&
        (iVar4 = MultiByteToWideChar(_CchDest,1,(LPCSTR)_DwMapFlag,(int)cbMultiByte,lpWideCharStr,
                                     iVar2), iVar4 != 0)) &&
       (iVar4 = ___crtLCMapStringEx((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar2,
                                    (LPWSTR)0x0,0), iVar4 != 0)) {
      if (((uint)_LocaleName & 0x400) == 0) {
        uVar3 = iVar4 * 2 + 8;
        uVar3 = -(uint)((uint)(iVar4 * 2) < uVar3) & uVar3;
        if (uVar3 == 0) {
          local_c = (LPCWSTR)0x0;
        }
        else {
          if (uVar3 < 0x401) {
            puVar5 = (undefined4 *)&stack0xffffffe0;
            lpDestStr = (LPCWSTR)&stack0xffffffe0;
            if (&stack0x00000000 != (undefined1 *)0x20) {
LAB_10126e23:
              lpDestStr = (LPCWSTR)(puVar5 + 2);
            }
          }
          else {
            puVar5 = (undefined4 *)FUN_1017556b(uVar3);
            lpDestStr = (LPCWSTR)0x0;
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0xdddd;
              goto LAB_10126e23;
            }
          }
          local_c = lpDestStr;
          if ((lpDestStr != (LPCWSTR)0x0) &&
             (iVar2 = ___crtLCMapStringEx((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar2,
                                          lpDestStr,iVar4), iVar2 != 0)) {
            if (_LpDestStr == (LPSTR)0x0) {
              _LpDestStr = (LPSTR)0x0;
              _CchSrc = 0;
            }
            WideCharToMultiByte(_CchDest,0,lpDestStr,iVar4,(LPSTR)_CchSrc,(int)_LpDestStr,
                                (LPCSTR)0x0,(LPBOOL)0x0);
          }
        }
        __crt_scoped_stack_ptr<wchar_t>::~__crt_scoped_stack_ptr<wchar_t>
                  ((__crt_scoped_stack_ptr<wchar_t> *)&local_c);
      }
      else if ((_LpDestStr != (LPSTR)0x0) && (iVar4 <= (int)_LpDestStr)) {
        ___crtLCMapStringEx((LPCWSTR)_Plocinfo,(DWORD)_LocaleName,lpWideCharStr,iVar2,
                            (LPWSTR)_CchSrc,(int)_LpDestStr);
      }
    }
  }
  __crt_scoped_stack_ptr<wchar_t>::~__crt_scoped_stack_ptr<wchar_t>
            ((__crt_scoped_stack_ptr<wchar_t> *)&local_10);
LAB_10126e86:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

