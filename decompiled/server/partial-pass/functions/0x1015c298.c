// rea decompile_all
// name: __crt_stdio_output::output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>::write_stored_string_tchar
// address: 0x1015c298
// body: available
// range: 0x1015c298-0x1015c33c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::write_stored_string_tchar(char)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
::write_stored_string_tchar
          (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
           *this,char param_1)

{
  wchar_t _WCh;
  undefined1 uVar1;
  errno_t eVar2;
  int iVar3;
  wchar_t *pwVar4;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((this[0x3c] ==
       (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
        )0x0) || (*(int *)(this + 0x38) < 1)) {
    stream_output_adapter<char>::write_string
              ((stream_output_adapter<char> *)(this + 0x448),*(char **)(this + 0x34),
               *(int *)(this + 0x38),(int *)(this + 0x18),(__crt_deferred_errno_cache *)(this + 0xc)
              );
  }
  else {
    pwVar4 = *(wchar_t **)(this + 0x34);
    iVar3 = 0;
    do {
      _WCh = *pwVar4;
      pwVar4 = pwVar4 + 1;
      local_14 = 0;
      eVar2 = __wctomb_s_l(&local_14,local_10,6,_WCh,*(_locale_t *)(this + 8));
      if ((eVar2 != 0) || (local_14 == 0)) {
        *(undefined4 *)(this + 0x18) = 0xffffffff;
        break;
      }
      stream_output_adapter<char>::write_string
                ((stream_output_adapter<char> *)(this + 0x448),local_10,local_14,
                 (int *)(this + 0x18),(__crt_deferred_errno_cache *)(this + 0xc));
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(this + 0x38));
  }
  uVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar1;
}

