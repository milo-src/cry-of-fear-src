// rea decompile_all
// name: type_case_integer_parse_into_buffer<>
// address: 0x1014facf
// body: available
// range: 0x1014facf-0x1014fb55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >
   >::type_case_integer_parse_into_buffer<unsigned int>(unsigned int,unsigned int,bool)
   
   Library: Visual Studio 2019 Release */

void type_case_integer_parse_into_buffer<>(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  int in_ECX;
  formatting_buffer *pfVar2;
  formatting_buffer *pfVar3;
  
  pfVar3 = *(formatting_buffer **)(in_ECX + 0x444);
  if (*(formatting_buffer **)(in_ECX + 0x444) == (formatting_buffer *)0x0) {
    pfVar3 = (formatting_buffer *)(in_ECX + 0x40);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<wchar_t>
                    ((formatting_buffer *)(in_ECX + 0x40));
  pfVar3 = pfVar3 + uVar1 * 2 + -2;
  *(formatting_buffer **)(in_ECX + 0x34) = pfVar3;
  pfVar2 = pfVar3;
  while ((0 < *(int *)(in_ECX + 0x28) || (param_1 != 0))) {
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + -1;
    uVar1 = param_1 % param_2 + 0x30 & 0xffff;
    if (0x39 < uVar1) {
      uVar1 = (uint)(ushort)(short)(char)((param_3 ^ 1) * ' ' + '\a' + (char)uVar1);
    }
    **(short **)(in_ECX + 0x34) = (short)(char)uVar1;
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -2;
    pfVar2 = *(formatting_buffer **)(in_ECX + 0x34);
    param_1 = param_1 / param_2;
  }
  *(int *)(in_ECX + 0x38) = (int)pfVar3 - (int)pfVar2 >> 1;
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 2;
  return;
}

