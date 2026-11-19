// rea decompile_all
// name: std::basic_filebuf<char,std::char_traits<char>_>::_Init
// address: 0x10037180
// body: available
// range: 0x10037180-0x10037266 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall std::basic_filebuf<char,struct std::char_traits<char> >::_Init(struct
   _iobuf *,enum std::basic_filebuf<char,struct std::char_traits<char> >::_Initfl)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::_Init
          (basic_filebuf<char,std::char_traits<char>_> *this,_iobuf *param_1,_Initfl param_2)

{
  _iobuf *p_Var1;
  undefined4 local_c;
  basic_filebuf<char,std::char_traits<char>_> *local_8;
  
  p_Var1 = param_1;
  this[0x48] = (basic_filebuf<char,std::char_traits<char>_>)(param_2 == 1);
  *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0xc) = this + 4;
  *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x10) = this + 8;
  this[0x3d] = (basic_filebuf<char,std::char_traits<char>_>)0x0;
  *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x20) = this + 0x18;
  *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x1c) = this + 0x14;
  *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x2c) = this + 0x24;
  *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x30) = this + 0x28;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  local_8 = this;
  if (param_1 != (_iobuf *)0x0) {
    param_2 = 0;
    param_1 = (_iobuf *)0x0;
    local_c = 0;
    __get_stream_buffer_pointers(p_Var1,&param_2,&param_1,&local_c);
    *(_Initfl *)(local_8 + 0xc) = param_2;
    *(_Initfl *)(local_8 + 0x10) = param_2;
    *(_iobuf **)(local_8 + 0x1c) = param_1;
    *(_iobuf **)(local_8 + 0x20) = param_1;
    *(undefined4 *)(local_8 + 0x2c) = local_c;
    *(undefined4 *)(local_8 + 0x30) = local_c;
  }
  *(_iobuf **)(local_8 + 0x4c) = p_Var1;
  *(undefined4 *)(local_8 + 0x40) = DAT_10222e1c;
  *(undefined4 *)(local_8 + 0x44) = DAT_10222e20;
  *(undefined4 *)(local_8 + 0x38) = 0;
  return;
}

