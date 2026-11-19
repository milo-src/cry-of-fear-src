// rea decompile_all
// name: std::_Mpunct<unsigned_short>::_Init
// address: 0x10130b8c
// body: available
// range: 0x10130b8c-0x10130c56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall std::_Mpunct<unsigned short>::_Init(class std::_Locinfo const &,bool)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::_Mpunct<unsigned_short>::_Init(_Mpunct<unsigned_short> *this,_Locinfo *param_1,bool param_2)

{
  char cVar1;
  _Cvtvec *p_Var2;
  lconv *plVar3;
  undefined4 uVar4;
  int iVar5;
  _Mpunct<unsigned_short> *p_Var6;
  _Cvtvec local_40;
  _Mpunct<unsigned_short> *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x10130b98;
  local_14 = this;
  p_Var2 = __Getcvt(&local_40);
  p_Var6 = this + 0x2c;
  for (iVar5 = 0xb; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(uint *)p_Var6 = p_Var2->_Page;
    p_Var2 = (_Cvtvec *)&p_Var2->_Mbcurmax;
    p_Var6 = p_Var6 + 4;
  }
  plVar3 = _localeconv();
  p_Var6 = local_14;
  *(undefined4 *)(local_14 + 8) = 0;
  *(undefined4 *)(local_14 + 0x10) = 0;
  *(undefined4 *)(local_14 + 0x14) = 0;
  *(undefined4 *)(local_14 + 0x18) = 0;
  local_8 = 0;
  uVar4 = FUN_10049780(plVar3->mon_grouping,0,this + 0x2c);
  *(undefined4 *)(p_Var6 + 8) = uVar4;
  _Getvals<unsigned_short>(p_Var6,0,plVar3);
  if (p_Var6[0x28] == (_Mpunct<unsigned_short>)0x0) {
    cVar1 = plVar3->frac_digits;
  }
  else {
    cVar1 = plVar3->int_frac_digits;
  }
  iVar5 = (int)cVar1;
  *(int *)(p_Var6 + 0x1c) = iVar5;
  if ((iVar5 < 0) || (0x7e < iVar5)) {
    *(undefined4 *)(p_Var6 + 0x1c) = 0;
  }
  Makpat(p_Var6 + 0x20,(int)plVar3->p_sep_by_space,(int)plVar3->p_cs_precedes,
         (int)plVar3->p_sign_posn);
  Makpat(p_Var6 + 0x24,(int)plVar3->n_sep_by_space,(int)plVar3->n_cs_precedes,
         (int)plVar3->n_sign_posn);
  if (param_2) {
    *(undefined4 *)(p_Var6 + 0x20) = 0x76782b24;
    *(undefined4 *)(p_Var6 + 0x24) = 0x76782b24;
  }
  return;
}

