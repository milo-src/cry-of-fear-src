// rea decompile_all
// name: write_stored_string_tchar
// address: 0x1015c52c
// body: available
// range: 0x1015c52c-0x1015c5d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::write_stored_string_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> >
   >::write_stored_string_tchar(char)
   
   Library: Visual Studio 2019 Release */

void write_stored_string_tchar(void)

{
  wchar_t _WCh;
  errno_t eVar1;
  int in_ECX;
  int iVar2;
  wchar_t *pwVar3;
  int local_14;
  char local_10 [8];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((*(char *)(in_ECX + 0x3c) == '\0') || (*(int *)(in_ECX + 0x38) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              ((string_output_adapter<char> *)(in_ECX + 0x448),*(char **)(in_ECX + 0x34),
               *(int *)(in_ECX + 0x38),(int *)(in_ECX + 0x18),
               (__crt_deferred_errno_cache *)(in_ECX + 0xc));
  }
  else {
    pwVar3 = *(wchar_t **)(in_ECX + 0x34);
    iVar2 = 0;
    do {
      _WCh = *pwVar3;
      pwVar3 = pwVar3 + 1;
      local_14 = 0;
      eVar1 = __wctomb_s_l(&local_14,local_10,6,_WCh,*(_locale_t *)(in_ECX + 8));
      if ((eVar1 != 0) || (local_14 == 0)) {
        *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
        break;
      }
      __crt_stdio_output::string_output_adapter<char>::write_string
                ((string_output_adapter<char> *)(in_ECX + 0x448),local_10,local_14,
                 (int *)(in_ECX + 0x18),(__crt_deferred_errno_cache *)(in_ECX + 0xc));
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(in_ECX + 0x38));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

