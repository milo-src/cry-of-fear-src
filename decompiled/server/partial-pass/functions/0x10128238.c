// rea decompile_all
// name: _Getvals<>
// address: 0x10128238
// body: available
// range: 0x10128238-0x101282a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall std::time_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getvals<char>(char,class std::_Locinfo const &)
    protected: void __thiscall std::time_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getvals<unsigned short>(unsigned short,class
   std::_Locinfo const &)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void _Getvals<>(undefined4 param_1,_Locinfo *param_2)

{
  _Cvtvec *p_Var1;
  char *pcVar2;
  int in_ECX;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Cvtvec local_34;
  int local_8;
  
  local_8 = in_ECX;
  p_Var1 = __Getcvt(&local_34);
  puVar4 = (uint *)(in_ECX + 0x18);
  puVar5 = puVar4;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = p_Var1->_Page;
    p_Var1 = (_Cvtvec *)&p_Var1->_Mbcurmax;
    puVar5 = puVar5 + 1;
  }
  uVar6 = 0;
  puVar5 = puVar4;
  pcVar2 = std::_Locinfo::_Getdays(param_2);
  uVar6 = FUN_10128430(pcVar2,uVar6,puVar5);
  uVar7 = 0;
  *(undefined4 *)(local_8 + 8) = uVar6;
  puVar5 = puVar4;
  pcVar2 = std::_Locinfo::_Getmonths(param_2);
  uVar6 = FUN_10128430(pcVar2,uVar7,puVar5);
  *(undefined4 *)(local_8 + 0xc) = uVar6;
  uVar6 = FUN_10128430(":AM:am:PM:pm",0,puVar4);
  *(undefined4 *)(local_8 + 0x10) = uVar6;
  return;
}

