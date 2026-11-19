// rea decompile_all
// name: std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::basic_string<char,std::char_traits<char>,std::allocator<char>_>
// address: 0x100c50e0
// body: available
// range: 0x100c50e0-0x100c517f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >(struct std::_String_constructor_concat_tag,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,char
   const * const,unsigned int,char const * const,unsigned int)
   
   Library: Visual Studio 2019 Release */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
basic_string<char,std::char_traits<char>,std::allocator<char>_>
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *this,undefined4 param_2,
          undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,int param_7)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar1;
  uint uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_c;
  uint local_8;
  
  local_8 = param_5 + param_7;
  uVar2 = 0xf;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  pbVar1 = this;
  if (0xf < local_8) {
    uVar2 = local_8 | 0xf;
    if (uVar2 < 0x80000000) {
      if (uVar2 < 0x16) {
        uVar2 = 0x16;
      }
    }
    else {
      uVar2 = 0x7fffffff;
    }
    pbVar1 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)
             FUN_1002f1e0(uVar2 + 1);
    local_c = pbVar1;
    FUN_1002f280(this,&local_c);
  }
  *(uint *)(this + 0x14) = uVar2;
  *(uint *)(this + 0x10) = local_8;
  FUN_10140130(pbVar1,param_4,param_5);
  FUN_10140130(pbVar1 + param_5,param_6,param_7);
  pbVar1[local_8] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  return this;
}

