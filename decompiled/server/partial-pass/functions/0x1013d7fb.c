// rea decompile_all
// name: __Strxfrm
// address: 0x1013d7fb
// body: available
// range: 0x1013d7fb-0x1013d8a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Strxfrm
   
   Library: Visual Studio 2019 Release */

size_t __cdecl __Strxfrm(char *_String1,char *_End1,char *param_3,char *param_4,_Collvec *param_5)

{
  wchar_t **ppwVar1;
  UINT _CchDest;
  _locale_t _Plocinfo;
  LPCSTR pCVar2;
  LPCSTR pCVar3;
  LPCSTR _LpSrcStr;
  BOOL unaff_EDI;
  LPSTR _LpDestStr;
  
  _LpSrcStr = param_4 + -(int)param_3;
  _LpDestStr = _End1 + -(int)_String1;
  if (param_5 == (_Collvec *)0x0) {
    ppwVar1 = ____lc_locale_name_func();
    _Plocinfo = (_locale_t)ppwVar1[1];
    _CchDest = ____lc_collate_cp_func();
  }
  else {
    _Plocinfo = (_locale_t)param_5->_LocaleName;
    _CchDest = param_5->_Page;
  }
  if ((_Plocinfo == (_locale_t)0x0) && (_CchDest == 0)) {
    pCVar3 = _LpSrcStr;
    if (_LpSrcStr <= _LpDestStr) {
      FUN_10140130(_String1,param_3,_LpSrcStr);
    }
  }
  else {
    pCVar2 = (LPCSTR)___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x400,(DWORD)param_3,_LpSrcStr,0,
                                        (LPSTR)0x0,_CchDest,1,unaff_EDI);
    pCVar3 = (LPCSTR)0xffffffff;
    if ((pCVar2 != (LPCSTR)0x0) && (pCVar3 = pCVar2, (int)pCVar2 <= (int)_LpDestStr)) {
      ___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x400,(DWORD)param_3,_LpSrcStr,(int)_String1,_LpDestStr,
                         _CchDest,1,unaff_EDI);
    }
  }
  return (size_t)pCVar3;
}

