// rea decompile_all
// name: std::numpunct<wchar_t>::_Init
// address: 0x10130ef7
// body: available
// range: 0x10130ef7-0x10130fc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall std::numpunct<wchar_t>::_Init(class std::_Locinfo const &,bool)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::numpunct<wchar_t>::_Init(numpunct<wchar_t> *this,_Locinfo *param_1,bool param_2)

{
  wchar_t wVar1;
  lconv *plVar2;
  _Cvtvec *p_Var3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  _Cvtvec *p_Var7;
  _Cvtvec local_6c;
  _Cvtvec local_40;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x10130f03;
  plVar2 = _localeconv();
  p_Var3 = __Getcvt(&local_6c);
  p_Var7 = &local_40;
  for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
    p_Var7->_Page = p_Var3->_Page;
    p_Var3 = (_Cvtvec *)&p_Var3->_Mbcurmax;
    p_Var7 = (_Cvtvec *)&p_Var7->_Mbcurmax;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  local_8 = 0;
  __Getcvt(&local_6c);
  pcVar4 = "";
  if (!param_2) {
    pcVar4 = plVar2->grouping;
  }
  uVar5 = FUN_10049780(pcVar4,0,&local_6c);
  *(undefined4 *)(this + 8) = uVar5;
  uVar5 = FUN_101284d8("false",0,&local_40);
  *(undefined4 *)(this + 0x10) = uVar5;
  uVar5 = FUN_101284d8(&DAT_101b1054,0,&local_40);
  *(undefined4 *)(this + 0x14) = uVar5;
  if (param_2) {
    wVar1 = _Maklocchr<wchar_t>('.',(wchar_t *)0x0,&local_40);
    *(wchar_t *)(this + 0xc) = wVar1;
    wVar1 = _Maklocchr<wchar_t>(',',(wchar_t *)0x0,&local_40);
  }
  else {
    *(wchar_t *)(this + 0xc) = *plVar2->_W_decimal_point;
    wVar1 = *plVar2->_W_thousands_sep;
  }
  *(wchar_t *)(this + 0xe) = wVar1;
  FUN_1013ecd2();
  return;
}

