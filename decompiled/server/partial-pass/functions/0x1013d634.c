// rea decompile_all
// name: __Wcsxfrm
// address: 0x1013d634
// body: available
// range: 0x1013d634-0x1013d6f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Wcsxfrm
   
   Library: Visual Studio 2019 Release */

size_t __cdecl
__Wcsxfrm(wchar_t *_String1,wchar_t *_End1,wchar_t *param_3,wchar_t *param_4,_Collvec *param_5)

{
  LPCWSTR _LocaleName;
  LPWSTR _LpDestStr;
  uint uVar1;
  uint uVar2;
  uint _CchSrc;
  
  uVar2 = (int)_End1 - (int)_String1 >> 1;
  _CchSrc = (int)param_4 - (int)param_3 >> 1;
  if (param_5 == (_Collvec *)0x0) {
    param_5 = (_Collvec *)____lc_locale_name_func();
  }
  _LocaleName = param_5->_LocaleName;
  if (_LocaleName == (LPCWSTR)0x0) {
    uVar1 = _CchSrc;
    if (_CchSrc <= uVar2) {
      FUN_10140130(_String1,param_3,_CchSrc * 2);
    }
  }
  else {
    _LpDestStr = (LPWSTR)FUN_1017556b(uVar2);
    uVar1 = 0xffffffff;
    if (_LpDestStr != (LPWSTR)0x0) {
      uVar1 = ___crtLCMapStringW(_LocaleName,0x400,param_3,_CchSrc,_LpDestStr,uVar2);
      if (uVar1 == 0) {
        uVar1 = ___crtLCMapStringW(_LocaleName,0x400,param_3,_CchSrc,(LPWSTR)0x0,0);
        if (uVar1 == 0) {
          uVar1 = 0x7fffffff;
        }
      }
      else {
        uVar2 = 0;
        if (uVar1 != 0) {
          do {
            _String1[uVar2] = (ushort)*(byte *)(uVar2 + (int)_LpDestStr);
            uVar2 = uVar2 + 1;
          } while (uVar2 < uVar1);
        }
      }
      FUN_101714d1(_LpDestStr);
    }
  }
  return uVar1;
}

