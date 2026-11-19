// rea decompile_all
// name: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct_lv_contents
// address: 0x101399fe
// body: available
// range: 0x101399fe-0x10139a65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::_Construct_lv_contents(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const &)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Construct_lv_contents
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (0xf < *(uint *)(param_1 + 0x14)) {
    param_1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
               param_1;
  }
  if (uVar1 < 0x10) {
    *(undefined4 *)this = *(undefined4 *)param_1;
    *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar3 = 0xf;
  }
  else {
    uVar3 = 0x7fffffff;
    if ((uVar1 | 0xf) < 0x80000000) {
      uVar3 = uVar1 | 0xf;
    }
    uVar2 = FUN_1002f1e0(uVar3 + 1);
    *(undefined4 *)this = uVar2;
    FUN_10140130(uVar2,param_1,uVar1 + 1);
  }
  *(uint *)(this + 0x10) = uVar1;
  *(uint *)(this + 0x14) = uVar3;
  return;
}

