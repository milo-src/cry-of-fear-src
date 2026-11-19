// rea decompile_all
// name: __Tolower
// address: 0x10122d52
// body: available
// range: 0x10122d52-0x10122e4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __Tolower
   
   Library: Visual Studio 2019 Release */

int __cdecl __Tolower(int param_1,_Ctypevec *param_2)

{
  wchar_t **ppwVar1;
  UINT _CchDest;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  LPCSTR _LpSrcStr;
  BOOL unaff_EBX;
  _locale_t _Plocinfo;
  byte local_c;
  undefined1 local_b;
  undefined1 local_8;
  undefined1 local_7;
  undefined1 local_6;
  
  if (param_2 == (_Ctypevec *)0x0) {
    ppwVar1 = ____lc_locale_name_func();
    _Plocinfo = (_locale_t)ppwVar1[2];
    _CchDest = ____lc_codepage_func();
  }
  else {
    _Plocinfo = (_locale_t)param_2->_LocaleName;
    _CchDest = param_2->_Page;
  }
  if (_Plocinfo == (_locale_t)0x0) {
    if (param_1 < 0x41) {
      return param_1;
    }
    if (0x5a < param_1) {
      return param_1;
    }
    return param_1 + 0x20;
  }
  if ((uint)param_1 < 0x100) {
    if (param_2 == (_Ctypevec *)0x0) {
      iVar2 = _isupper(param_1);
      if (iVar2 == 0) {
        return param_1;
      }
LAB_10122deb:
      puVar3 = ___pctype_func();
      uVar4 = puVar3[param_1 >> 8 & 0xff] & 0x8000;
      goto LAB_10122dd4;
    }
    if ((*(byte *)(param_2->_Table + param_1) & 1) == 0) {
      return param_1;
    }
  }
  else if (param_2 == (_Ctypevec *)0x0) goto LAB_10122deb;
  uVar4 = (uint)(int)param_2->_Table[param_1 >> 8 & 0xff] >> 0xf & 1;
LAB_10122dd4:
  if (uVar4 == 0) {
    local_7 = 0;
    _LpSrcStr = (LPCSTR)0x1;
    local_8 = (char)param_1;
  }
  else {
    local_6 = 0;
    _LpSrcStr = (LPCSTR)0x2;
    local_8 = (char)((uint)param_1 >> 8);
    local_7 = (char)param_1;
  }
  iVar2 = ___crtLCMapStringA(_Plocinfo,(LPCWSTR)0x100,(DWORD)&local_8,_LpSrcStr,(int)&local_c,
                             (LPSTR)0x3,_CchDest,1,unaff_EBX);
  if ((iVar2 != 0) && (param_1 = (int)local_c, iVar2 != 1)) {
    param_1 = (int)CONCAT11(local_c,local_b);
  }
  return param_1;
}

