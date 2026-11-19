// rea decompile_all
// name: is_positional_parameter_reappearance_consistent
// address: 0x10151982
// body: available
// range: 0x10151982-0x10151a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::console_output_adapter<char>
   >::is_positional_parameter_reappearance_consistent(struct
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::console_output_adapter<char> >::parameter_data const &,enum
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::console_output_adapter<char> >::parameter_type,char,enum
   __crt_stdio_output::length_modifier)
    private: bool __thiscall __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char>
   >::is_positional_parameter_reappearance_consistent(struct
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> >::parameter_data const &,enum
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> >::parameter_type,char,enum
   __crt_stdio_output::length_modifier)
    private: bool __thiscall __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char>
   >::is_positional_parameter_reappearance_consistent(struct
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char> >::parameter_data const &,enum
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::string_output_adapter<char> >::parameter_type,char,enum
   __crt_stdio_output::length_modifier)
   
   Library: Visual Studio 2019 Release */

bool is_positional_parameter_reappearance_consistent
               (int *param_1,int param_2,undefined4 param_3,length_modifier param_4)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  __uint64 *in_ECX;
  char cVar8;
  char cVar9;
  char local_5;
  
  cVar1 = (char)param_1[1];
  cVar2 = (char)param_3;
  if ((cVar1 == 'p') || (cVar2 == 'p')) {
    return (cVar1 == 'p') != (cVar2 != 'p');
  }
  cVar7 = '\0';
  if ((cVar1 == 's') || (local_5 = '\0', cVar1 == 'S')) {
    local_5 = '\x01';
  }
  if ((cVar2 == 's') || (cVar9 = cVar7, cVar2 == 'S')) {
    cVar9 = '\x01';
  }
  if ((cVar1 == 'c') || (cVar8 = cVar7, cVar1 == 'C')) {
    cVar8 = '\x01';
  }
  if ((cVar2 == 'c') || (cVar2 == 'C')) {
    cVar7 = '\x01';
  }
  if (local_5 == '\0') {
    if (cVar9 != '\0') {
      return false;
    }
    if (cVar8 == '\0') {
      if (cVar7 != '\0') {
        return false;
      }
      cVar1 = is_integral_specifier<>(cVar1);
      cVar2 = is_integral_specifier<>(param_3);
      if (cVar1 == '\0') {
        if (cVar2 != '\0') {
          return false;
        }
        return *param_1 == param_2;
      }
      if (cVar1 != cVar2) {
        return false;
      }
      if ((param_1[3] == 9) != (param_4 == 9)) {
        return false;
      }
      uVar5 = __crt_stdio_output::to_integer_size(param_1[3]);
      uVar6 = __crt_stdio_output::to_integer_size(param_4);
      return uVar5 == uVar6;
    }
  }
  else if (local_5 != cVar9) {
    return false;
  }
  if (cVar8 == cVar7) {
    bVar3 = __crt_stdio_output::is_wide_character_specifier<char>(*in_ECX,cVar1,param_1[3]);
    bVar4 = __crt_stdio_output::is_wide_character_specifier<char>(*in_ECX,cVar2,param_4);
    if (bVar3 == bVar4) {
      return true;
    }
  }
  return false;
}

