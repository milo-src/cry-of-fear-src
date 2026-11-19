// rea decompile_all
// name: std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
// address: 0x1004ceb0
// body: available
// range: 0x1004ceb0-0x1004cf20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: class std::ostreambuf_iterator<char,struct std::char_traits<char> > __cdecl
   std::num_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::_Put(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,char const *,unsigned
   int)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
          (undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,int *param_5
          ,byte *param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  do {
    if (param_7 == 0) {
      param_3[1] = param_5;
      *param_3 = param_4;
      return;
    }
    if (param_5 == (int *)0x0) {
LAB_1004cf07:
      uVar4 = (uint)param_4 >> 8;
      param_4 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *param_6;
      if (*(int *)param_5[8] == 0) {
LAB_1004cef4:
        uVar4 = (**(code **)(*param_5 + 0xc))(bVar1);
      }
      else {
        iVar2 = *(int *)param_5[0xc];
        if (iVar2 < 1) goto LAB_1004cef4;
        *(int *)param_5[0xc] = iVar2 + -1;
        pbVar3 = *(byte **)param_5[8];
        *(byte **)param_5[8] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_1004cf07;
    }
    param_6 = param_6 + 1;
    param_7 = param_7 + -1;
  } while( true );
}

