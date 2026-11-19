// rea decompile_all
// name: type_case_Z
// address: 0x10156f8e
// body: available
// range: 0x10156f8e-0x10157001 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::console_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::console_output_adapter<char> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::type_case_Z(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::type_case_Z(void)
   
   Library: Visual Studio 2019 Release */

undefined1 type_case_Z(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  __uint64 *in_ECX;
  ushort *local_8;
  
  local_8 = (ushort *)0x0;
  cVar4 = extract_argument_from_va_list<>(&local_8);
  if (cVar4 == '\0') {
    return 0;
  }
  cVar4 = should_format();
  puVar3 = local_8;
  if (cVar4 == '\0') {
    return 1;
  }
  if ((local_8 == (ushort *)0x0) || (iVar2 = *(int *)(local_8 + 2), iVar2 == 0)) {
    *(char **)((int)in_ECX + 0x34) = "(null)";
    uVar6 = 6;
  }
  else {
    bVar5 = __crt_stdio_output::is_wide_character_specifier<char>
                      (*in_ECX,*(char *)((int)in_ECX + 0x31),
                       *(length_modifier *)((int)in_ECX + 0x2c));
    *(int *)((int)in_ECX + 0x34) = iVar2;
    uVar1 = *puVar3;
    uVar6 = (uint)uVar1;
    if (bVar5) {
      *(undefined1 *)((int)in_ECX + 0x3c) = 1;
      uVar6 = (uint)(uVar1 >> 1);
      goto LAB_10156ff8;
    }
  }
  *(undefined1 *)((int)in_ECX + 0x3c) = 0;
LAB_10156ff8:
  *(uint *)(in_ECX + 7) = uVar6;
  return 1;
}

