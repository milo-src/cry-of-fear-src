// rea decompile_all
// name: std::numpunct<unsigned_short>::_Init
// address: 0x10130e1e
// body: available
// range: 0x10130e1e-0x10130ef6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall std::numpunct<unsigned short>::_Init(class std::_Locinfo const
   &,bool)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::numpunct<unsigned_short>::_Init(numpunct<unsigned_short> *this,_Locinfo *param_1,bool param_2)

{
  _Cvtvec _Var1;
  ushort uVar2;
  lconv *plVar3;
  _Cvtvec *p_Var4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  _Cvtvec *p_Var8;
  _Cvtvec *p_Var9;
  uint *puVar10;
  uint in_stack_ffffff50;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  _Cvtvec *p_Var14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Cvtvec local_6c;
  _Cvtvec local_40;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x10130e2a;
  plVar3 = _localeconv();
  p_Var4 = __Getcvt(&local_6c);
  p_Var9 = &local_40;
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    p_Var9->_Page = p_Var4->_Page;
    p_Var4 = (_Cvtvec *)&p_Var4->_Mbcurmax;
    p_Var9 = (_Cvtvec *)&p_Var9->_Mbcurmax;
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  local_8 = 0;
  __Getcvt(&local_6c);
  if (param_2) {
    pcVar5 = "";
  }
  else {
    pcVar5 = plVar3->grouping;
  }
  p_Var4 = &local_6c;
  uVar17 = 0;
  uVar6 = FUN_10049780();
  *(undefined4 *)(this + 8) = uVar6;
  p_Var9 = &local_40;
  uVar16 = 0;
  pcVar15 = "false";
  uVar6 = FUN_10128430();
  *(undefined4 *)(this + 0x10) = uVar6;
  p_Var14 = &local_40;
  uVar13 = 0;
  puVar12 = &DAT_101b1054;
  uVar11 = 0x10130ea5;
  uVar6 = FUN_10128430();
  *(undefined4 *)(this + 0x14) = uVar6;
  if (param_2) {
    uVar2 = _Maklocchr<unsigned_short>('.',(ushort *)0x0,&local_40);
    *(ushort *)(this + 0xc) = uVar2;
    uVar2 = _Maklocchr<unsigned_short>(',',(ushort *)0x0,&local_40);
    *(ushort *)(this + 0xe) = uVar2;
  }
  else {
    p_Var8 = &local_40;
    puVar10 = (uint *)&stack0xffffff50;
    for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = p_Var8->_Page;
      p_Var8 = (_Cvtvec *)&p_Var8->_Mbcurmax;
      puVar10 = puVar10 + 1;
    }
    _Var1._Mbcurmax = uVar11;
    _Var1._Page = in_stack_ffffff50;
    _Var1._Isclocale = (int)puVar12;
    _Var1._Isleadbyte[0] = (char)uVar13;
    _Var1._Isleadbyte[1] = (char)((uint)uVar13 >> 8);
    _Var1._Isleadbyte[2] = (char)((uint)uVar13 >> 0x10);
    _Var1._Isleadbyte[3] = (char)((uint)uVar13 >> 0x18);
    _Var1._Isleadbyte._4_4_ = p_Var14;
    _Var1._Isleadbyte._8_4_ = pcVar15;
    _Var1._Isleadbyte[0xc] = (char)uVar16;
    _Var1._Isleadbyte[0xd] = (char)((uint)uVar16 >> 8);
    _Var1._Isleadbyte[0xe] = (char)((uint)uVar16 >> 0x10);
    _Var1._Isleadbyte[0xf] = (char)((uint)uVar16 >> 0x18);
    _Var1._Isleadbyte._16_4_ = p_Var9;
    _Var1._Isleadbyte._20_4_ = pcVar5;
    _Var1._Isleadbyte[0x18] = (char)uVar17;
    _Var1._Isleadbyte[0x19] = (char)((uint)uVar17 >> 8);
    _Var1._Isleadbyte[0x1a] = (char)((uint)uVar17 >> 0x10);
    _Var1._Isleadbyte[0x1b] = (char)((uint)uVar17 >> 0x18);
    _Var1._Isleadbyte._28_4_ = p_Var4;
    _Getvals<unsigned_short>(this,0,plVar3,_Var1);
  }
  FUN_1013ecd2();
  return;
}

