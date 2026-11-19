// rea decompile_all
// name: process_conversion_specifier
// address: 0x10167b65
// body: available
// range: 0x10167b65-0x10167bb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10167ba4 to 0x10167cf1 __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::process_floating_point_specifier (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::string_input_adapter<char> >::process_conversion_specifier(void)
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::console_input_adapter<wchar_t> >::process_conversion_specifier(void)
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::stream_input_adapter<wchar_t> >::process_conversion_specifier(void)
   
   Library: Visual Studio 2019 Release */

bool process_conversion_specifier(void)

{
  bool bVar1;
  input_processor<char,__crt_stdio_input::string_input_adapter<char>_> *in_ECX;
  uint uVar2;
  conversion_mode cVar3;
  
  switch(*(undefined4 *)(in_ECX + 0x40)) {
  case 0:
    cVar3 = 0;
    goto LAB_10167b76;
  case 1:
    cVar3 = 1;
    goto LAB_10167b76;
  case 2:
    bVar1 = true;
    uVar2 = 0;
    break;
  case 3:
    bVar1 = true;
    goto LAB_10167b90;
  case 4:
    bVar1 = false;
    uVar2 = 8;
    break;
  case 5:
    bVar1 = false;
LAB_10167b90:
    uVar2 = 10;
    break;
  case 6:
    bVar1 = false;
    uVar2 = 0x10;
    break;
  case 7:
    bVar1 = __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
            ::process_floating_point_specifier(in_ECX);
    return bVar1;
  case 8:
    cVar3 = 8;
LAB_10167b76:
    bVar1 = __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>
            ::process_string_specifier(in_ECX,cVar3);
    return bVar1;
  case 9:
    if (in_ECX[0x2e] == (input_processor<char,__crt_stdio_input::string_input_adapter<char>_>)0x0) {
      bVar1 = __crt_stdio_input::
              input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::write_integer
                        (in_ECX,(ulonglong)(uint)(*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 8)));
      return bVar1;
    }
    return true;
  default:
    return false;
  }
  bVar1 = __crt_stdio_input::input_processor<char,__crt_stdio_input::string_input_adapter<char>_>::
          process_integer_specifier(in_ECX,uVar2,bVar1);
  return bVar1;
}

