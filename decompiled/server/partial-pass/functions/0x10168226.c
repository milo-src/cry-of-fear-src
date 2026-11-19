// rea decompile_all
// name: process_string_specifier
// address: 0x10168226
// body: available
// range: 0x10168226-0x1016826d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::console_input_adapter<wchar_t> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode)
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::stream_input_adapter<wchar_t> >::process_string_specifier(enum
   __crt_stdio_input::conversion_mode)
   
   Library: Visual Studio 2019 Release */

bool process_string_specifier(conversion_mode param_1)

{
  bool bVar1;
  uint uVar2;
  input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_> *in_ECX;
  
  if (param_1 == 1) {
    __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
    process_whitespace(in_ECX);
  }
  uVar2 = __crt_stdio_input::format_string_parser<wchar_t>::length
                    ((format_string_parser<wchar_t> *)(in_ECX + 0x10));
  if (uVar2 == 1) {
    bVar1 = __crt_stdio_input::
            input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
            process_string_specifier_tchar<char>(in_ECX,param_1,'\0');
  }
  else if (uVar2 == 2) {
    bVar1 = __crt_stdio_input::
            input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
            process_string_specifier_tchar<wchar_t>(in_ECX,param_1,L'\0');
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

