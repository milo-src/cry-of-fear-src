// rea decompile_all
// name: type_case_integer_parse_into_buffer<>
// address: 0x1014fe15
// body: available
// range: 0x1014fe15-0x1014fea2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::console_output_adapter<char> >
   >::type_case_integer_parse_into_buffer<unsigned __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   __int64>(unsigned __int64,unsigned int,bool)
    private: void __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::type_case_integer_parse_into_buffer<unsigned
   __int64>(unsigned __int64,unsigned int,bool)
   
   Library: Visual Studio 2019 Release */

void type_case_integer_parse_into_buffer<>
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  uint uVar1;
  char extraout_CL;
  char cVar2;
  int in_ECX;
  formatting_buffer *pfVar3;
  formatting_buffer *pfVar4;
  longlong lVar5;
  
  lVar5 = CONCAT44(param_2,param_1);
  pfVar4 = *(formatting_buffer **)(in_ECX + 0x444);
  if (*(formatting_buffer **)(in_ECX + 0x444) == (formatting_buffer *)0x0) {
    pfVar4 = (formatting_buffer *)(in_ECX + 0x40);
  }
  uVar1 = __crt_stdio_output::formatting_buffer::count<char>((formatting_buffer *)(in_ECX + 0x40));
  pfVar4 = pfVar4 + (uVar1 - 1);
  *(formatting_buffer **)(in_ECX + 0x34) = pfVar4;
  pfVar3 = pfVar4;
  while ((0 < *(int *)(in_ECX + 0x28) || (lVar5 != 0))) {
    *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + -1;
    lVar5 = __aulldvrm(lVar5,param_3,0);
    cVar2 = extraout_CL + '0';
    if ('9' < cVar2) {
      cVar2 = cVar2 + (param_4 ^ 1) * ' ' + '\a';
    }
    **(char **)(in_ECX + 0x34) = cVar2;
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -1;
    pfVar3 = *(formatting_buffer **)(in_ECX + 0x34);
  }
  *(int *)(in_ECX + 0x38) = (int)pfVar4 - (int)pfVar3;
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  return;
}

