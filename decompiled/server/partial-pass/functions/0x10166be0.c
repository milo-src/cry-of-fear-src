// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::length
// address: 0x10166be0
// body: available
// range: 0x10166be0-0x10166c20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: unsigned int __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::length(void)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

uint __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::length(format_string_parser<wchar_t> *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x30);
  if (iVar1 < 0) {
    return 0;
  }
  if (1 < iVar1) {
    if (6 < iVar1) {
      if (iVar1 == 7) {
        uVar2 = to_floating_point_length(*(length_modifier *)(this + 0x28));
        return uVar2;
      }
      if (iVar1 == 8) goto LAB_10166c17;
      if (iVar1 != 9) {
        return 0;
      }
    }
    uVar2 = to_integer_length(*(length_modifier *)(this + 0x28));
    return uVar2;
  }
LAB_10166c17:
  return (this[0x2c] != (format_string_parser<wchar_t>)0x0) + 1;
}

