// rea decompile_all
// name: type_case_integer
// address: 0x10159b26
// body: available
// range: 0x10159b26-0x10159caa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::type_case_integer(unsigned int,bool)
   
   Library: Visual Studio 2019 Release */

undefined4 type_case_integer(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = __crt_stdio_output::to_integer_size(*(length_modifier *)(in_ECX + 0x2c));
  local_10 = 0;
  local_c = 0;
  if (local_8 == 1) {
    if ((*(uint *)(in_ECX + 0x20) >> 4 & 1) == 0) {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
    else {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
  }
  else if (local_8 == 2) {
    if ((*(uint *)(in_ECX + 0x20) >> 4 & 1) == 0) {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
    else {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
  }
  else if (local_8 == 4) {
    if ((*(uint *)(in_ECX + 0x20) >> 4 & 1) == 0) {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
    else {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
  }
  else {
    if (local_8 != 8) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_1016fa52();
      return 0;
    }
    if ((*(uint *)(in_ECX + 0x20) >> 4 & 1) == 0) {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
    else {
      cVar1 = extract_argument_from_va_list<>(&local_10);
    }
  }
  if (cVar1 == '\0') {
    return 0;
  }
  cVar1 = should_format();
  if (cVar1 != '\0') {
    uVar3 = *(uint *)(in_ECX + 0x20);
    iVar4 = local_c;
    iVar5 = local_10;
    if ((((uVar3 >> 4 & 1) != 0) && (local_c < 1)) && (local_c < 0)) {
      uVar3 = uVar3 | 0x40;
      *(uint *)(in_ECX + 0x20) = uVar3;
      iVar4 = -(local_c + (uint)(local_10 != 0));
      iVar5 = -local_10;
    }
    if (*(int *)(in_ECX + 0x28) < 0) {
      *(undefined4 *)(in_ECX + 0x28) = 1;
    }
    else {
      *(uint *)(in_ECX + 0x20) = uVar3 & 0xfffffff7;
      __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<wchar_t>
                ((formatting_buffer *)(in_ECX + 0x40),*(uint *)(in_ECX + 0x28));
    }
    if (iVar5 == 0 && iVar4 == 0) {
      *(uint *)(in_ECX + 0x20) = *(uint *)(in_ECX + 0x20) & 0xffffffdf;
    }
    *(undefined1 *)(in_ECX + 0x3c) = 1;
    if (local_8 == 8) {
      type_case_integer_parse_into_buffer<>(iVar5,iVar4,param_1,param_2);
    }
    else {
      type_case_integer_parse_into_buffer<>(iVar5,param_1,param_2);
    }
    if (((*(uint *)(in_ECX + 0x20) >> 7 & 1) != 0) &&
       ((*(int *)(in_ECX + 0x38) == 0 || (**(short **)(in_ECX + 0x34) != 0x30)))) {
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -2;
      **(undefined2 **)(in_ECX + 0x34) = 0x30;
      *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
    }
  }
  return 1;
}

