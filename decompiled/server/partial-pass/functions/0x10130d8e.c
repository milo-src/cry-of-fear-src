// rea decompile_all
// name: Init
// address: 0x10130d8e
// body: available
// range: 0x10130d8e-0x10130dc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall std::ctype<unsigned short>::_Init(class std::_Locinfo const &)
    protected: void __thiscall std::ctype<wchar_t>::_Init(class std::_Locinfo const &)
   
   Library: Visual Studio 2019 Release */

void Init(void)

{
  _Ctypevec *p_Var1;
  _Cvtvec *p_Var2;
  int in_ECX;
  int iVar3;
  uint *puVar4;
  _Cvtvec local_40;
  _Ctypevec local_14;
  
  p_Var1 = __Getctype(&local_14);
  *(uint *)(in_ECX + 8) = p_Var1->_Page;
  *(short **)(in_ECX + 0xc) = p_Var1->_Table;
  *(int *)(in_ECX + 0x10) = p_Var1->_Delfl;
  *(wchar_t **)(in_ECX + 0x14) = p_Var1->_LocaleName;
  p_Var2 = __Getcvt(&local_40);
  puVar4 = (uint *)(in_ECX + 0x18);
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = p_Var2->_Page;
    p_Var2 = (_Cvtvec *)&p_Var2->_Mbcurmax;
    puVar4 = puVar4 + 1;
  }
  return;
}

