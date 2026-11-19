// rea decompile_all
// name: std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Ifmt
// address: 0x10130acb
// body: available
// range: 0x10130acb-0x10130b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: char * __cdecl std::num_put<char,class std::ostreambuf_iterator<char,struct
   std::char_traits<char> > >::_Ifmt(char *,char const *,int)const 
   
   Library: Visual Studio 2019 Release */

char * __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Ifmt
          (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1
          ,char *param_2,int param_3)

{
  byte bVar1;
  char *pcVar2;
  byte *pbVar3;
  uint in_stack_00000010;
  
  *param_2 = '%';
  pcVar2 = param_2 + 1;
  if ((in_stack_00000010 & 0x20) != 0) {
    *pcVar2 = '+';
    pcVar2 = param_2 + 2;
  }
  if ((in_stack_00000010 & 8) != 0) {
    *pcVar2 = '#';
    pcVar2 = pcVar2 + 1;
  }
  pbVar3 = (byte *)(pcVar2 + 1);
  if (*(char *)param_3 == 'L') {
    *pcVar2 = 'I';
    pbVar3[0] = 0x36;
    pbVar3[1] = 0x34;
    pbVar3 = (byte *)(pcVar2 + 3);
  }
  else {
    *pcVar2 = *(char *)param_3;
  }
  if ((in_stack_00000010 & 0xe00) == 0x400) {
    bVar1 = 0x6f;
  }
  else if ((in_stack_00000010 & 0xe00) == 0x800) {
    bVar1 = ~((char)in_stack_00000010 << 3) & 0x20U | 0x58;
  }
  else {
    bVar1 = *(byte *)(param_3 + 1);
  }
  *pbVar3 = bVar1;
  pbVar3[1] = 0;
  return param_2;
}

