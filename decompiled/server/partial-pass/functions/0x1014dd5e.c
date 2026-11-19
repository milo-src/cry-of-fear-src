// rea decompile_all
// name: extract_argument_from_va_list<>
// address: 0x1014dd5e
// body: available
// range: 0x1014dd5e-0x1014dddd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >::extract_argument_from_va_list<unsigned
   int,__int64>(__int64 &)
    protected: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >::extract_argument_from_va_list<unsigned
   int,__int64>(__int64 &)
    protected: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >::extract_argument_from_va_list<unsigned
   int,__int64>(__int64 &)
   
   Library: Visual Studio 2019 Release */

undefined4 extract_argument_from_va_list<>(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x45c) == 1) {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + -4);
    param_1[1] = 0;
    *param_1 = uVar3;
  }
  else {
    uVar1 = *(uint *)(in_ECX + 0xaa8);
    if (99 < uVar1) {
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_1016fa52();
      return 0;
    }
    if (*(int *)(in_ECX + 0x458) == 1) {
      uVar3 = validate_and_store_parameter_data
                        (in_ECX + 0x464 + uVar1 * 0x10,1,*(undefined2 *)(in_ECX + 0x32),
                         *(undefined4 *)(in_ECX + 0x2c));
      return uVar3;
    }
    uVar3 = **(undefined4 **)(in_ECX + 0x46c + uVar1 * 0x10);
    param_1[1] = 0;
    *param_1 = uVar3;
  }
  return 1;
}

