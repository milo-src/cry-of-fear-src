// rea decompile_all
// name: is_positional_parameter_reappearance_consistent
// address: 0x10151bb7
// body: available
// range: 0x10151bb7-0x10151cd1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>
   >::is_positional_parameter_reappearance_consistent(struct
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >::parameter_data const &,enum
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> >::parameter_type,wchar_t,enum
   __crt_stdio_output::length_modifier)
    private: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>
   >::is_positional_parameter_reappearance_consistent(struct
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >::parameter_data const &,enum
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >::parameter_type,wchar_t,enum
   __crt_stdio_output::length_modifier)
    private: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>
   >::is_positional_parameter_reappearance_consistent(struct
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >::parameter_data const &,enum
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >::parameter_type,wchar_t,enum
   __crt_stdio_output::length_modifier)
   
   Library: Visual Studio 2019 Release */

bool is_positional_parameter_reappearance_consistent
               (int *param_1,int param_2,undefined4 param_3,length_modifier param_4)

{
  wchar_t wVar1;
  wchar_t wVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  __uint64 *in_ECX;
  
  wVar1 = *(wchar_t *)(param_1 + 1);
  wVar2 = (wchar_t)param_3;
  if ((wVar1 == L'p') || (wVar2 == L'p')) {
    return (wVar1 == L'p') != (wVar2 != L'p');
  }
  cVar3 = is_string_specifier<>(wVar1);
  cVar4 = is_string_specifier<>(param_3);
  cVar5 = is_character_specifier<>(wVar1);
  cVar6 = is_character_specifier<>(param_3);
  if (cVar3 == '\0') {
    if (cVar4 != '\0') {
      return false;
    }
    if (cVar5 == '\0') {
      if (cVar6 != '\0') {
        return false;
      }
      cVar3 = is_integral_specifier<>(wVar1);
      cVar4 = is_integral_specifier<>(param_3);
      if (cVar3 == '\0') {
        if (cVar4 != '\0') {
          return false;
        }
        return *param_1 == param_2;
      }
      if (cVar3 != cVar4) {
        return false;
      }
      if ((param_1[3] == 9) != (param_4 == 9)) {
        return false;
      }
      uVar9 = __crt_stdio_output::to_integer_size(param_1[3]);
      uVar10 = __crt_stdio_output::to_integer_size(param_4);
      return uVar9 == uVar10;
    }
  }
  else if (cVar3 != cVar4) {
    return false;
  }
  if (cVar5 == cVar6) {
    bVar7 = __crt_stdio_output::is_wide_character_specifier<wchar_t>(*in_ECX,wVar1,param_1[3]);
    bVar8 = __crt_stdio_output::is_wide_character_specifier<wchar_t>(*in_ECX,wVar2,param_4);
    if (bVar7 == bVar8) {
      return true;
    }
  }
  return false;
}

