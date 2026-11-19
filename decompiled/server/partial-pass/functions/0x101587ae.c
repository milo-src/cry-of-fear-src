// rea decompile_all
// name: type_case_c_tchar
// address: 0x101587ae
// body: available
// range: 0x101587ae-0x1015886e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_c_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_c_tchar(char)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::type_case_c_tchar(char)
   
   Library: Visual Studio 2019 Release */

undefined4 type_case_c_tchar(void)

{
  bool bVar1;
  char cVar2;
  uint _SizeInBytes;
  errno_t eVar3;
  undefined6 *puVar4;
  undefined6 *in_ECX;
  formatting_buffer *_MbCh;
  wchar_t _WCh;
  _locale_t _Locale;
  undefined6 *local_8;
  
  local_8 = in_ECX;
  bVar1 = __crt_stdio_output::is_wide_character_specifier<char>
                    (CONCAT26((short)((uint)*(undefined4 *)((int)in_ECX + 4) >> 0x10),*in_ECX),
                     *(char *)((int)in_ECX + 0x31),*(length_modifier *)((int)in_ECX + 0x2c));
  if (bVar1) {
    local_8 = (undefined6 *)((uint)local_8 & 0xffff0000);
    cVar2 = extract_argument_from_va_list<>(&local_8);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = should_format();
    if (cVar2 == '\0') {
      return 1;
    }
    _MbCh = *(formatting_buffer **)((int)in_ECX + 0x444);
    if (*(formatting_buffer **)((int)in_ECX + 0x444) == (formatting_buffer *)0x0) {
      _MbCh = (formatting_buffer *)(in_ECX + 8);
    }
    _Locale = *(_locale_t *)(in_ECX + 1);
    _WCh = (wchar_t)local_8;
    _SizeInBytes = __crt_stdio_output::formatting_buffer::count<char>
                             ((formatting_buffer *)(in_ECX + 8));
    eVar3 = __wctomb_s_l((int *)(in_ECX + 7),(char *)_MbCh,_SizeInBytes,_WCh,_Locale);
    if (eVar3 != 0) {
      *(undefined1 *)(in_ECX + 6) = 1;
    }
  }
  else {
    puVar4 = *(undefined6 **)((int)in_ECX + 0x444);
    if (*(undefined6 **)((int)in_ECX + 0x444) == (undefined6 *)0x0) {
      puVar4 = in_ECX + 8;
    }
    cVar2 = extract_argument_from_va_list<>(puVar4);
    if (cVar2 == '\0') {
      return 0;
    }
    cVar2 = should_format();
    if (cVar2 == '\0') {
      return 1;
    }
    *(undefined4 *)(in_ECX + 7) = 1;
  }
  puVar4 = in_ECX + 8;
  if (*(undefined6 **)((int)in_ECX + 0x444) != (undefined6 *)0x0) {
    puVar4 = *(undefined6 **)((int)in_ECX + 0x444);
  }
  *(undefined6 **)((int)in_ECX + 0x34) = puVar4;
  return 1;
}

