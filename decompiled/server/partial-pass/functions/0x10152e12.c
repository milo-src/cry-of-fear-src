// rea decompile_all
// name: process
// address: 0x10152e12
// body: available
// range: 0x10152e12-0x10152f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::process(void)
    public: int __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::process(void)
   
   Library: Visual Studio 2019 Release */

undefined4 process(void)

{
  short sVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
  *in_ECX;
  
  cVar2 = validate();
  if (cVar2 != '\0') {
    if (*(int *)(in_ECX + 0x10) == 0) {
LAB_10152e32:
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_1016fa52();
    }
    else {
      do {
        cVar2 = advance_to_next_pass();
        if (cVar2 == '\0') {
          return *(undefined4 *)(in_ECX + 0x18);
        }
        *(undefined4 *)(in_ECX + 0x38) = 0;
        *(undefined4 *)(in_ECX + 0x1c) = 0;
LAB_10152ee7:
        sVar1 = **(short **)(in_ECX + 0x10);
        *(short *)(in_ECX + 0x32) = sVar1;
        if (sVar1 != 0) {
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 2;
          if (*(int *)(in_ECX + 0x18) < 0) goto LAB_10152efe;
          uVar4 = find_next_state(*(undefined2 *)(in_ECX + 0x32),*(undefined4 *)(in_ECX + 0x1c));
          *(undefined4 *)(in_ECX + 0x1c) = uVar4;
          cVar2 = validate_and_update_state_at_beginning_of_format_character();
          if (cVar2 == '\0') {
            return 0xffffffff;
          }
          if (*(int *)(in_ECX + 0x1c) == 8) goto LAB_10152e32;
          switch(*(int *)(in_ECX + 0x1c)) {
          case 0:
            cVar2 = __crt_stdio_output::
                    output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                    ::state_case_normal(in_ECX);
            break;
          case 1:
            *(undefined4 *)(in_ECX + 0x28) = 0xffffffff;
            *(undefined4 *)(in_ECX + 0x24) = 0;
            in_ECX[0x30] = (output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                            )0x0;
            *(undefined4 *)(in_ECX + 0x20) = 0;
            *(undefined4 *)(in_ECX + 0x2c) = 0;
            in_ECX[0x3c] = (output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                            )0x0;
            goto LAB_10152ee7;
          case 2:
            cVar2 = state_case_flag();
            break;
          case 3:
            cVar2 = state_case_width();
            break;
          case 4:
            goto switchD_10152e8a_caseD_4;
          case 5:
            cVar2 = state_case_precision();
            break;
          case 6:
            cVar2 = state_case_size();
            break;
          case 7:
            cVar2 = __crt_stdio_output::
                    output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                    ::state_case_type(in_ECX);
            break;
          default:
            goto LAB_10152e45;
          }
          if (cVar2 == '\0') {
            return 0xffffffff;
          }
          goto LAB_10152ee7;
        }
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 2;
LAB_10152efe:
        cVar2 = validate_and_update_state_at_end_of_format_string();
      } while (cVar2 != '\0');
    }
  }
LAB_10152e45:
  return 0xffffffff;
switchD_10152e8a_caseD_4:
  *(undefined4 *)(in_ECX + 0x28) = 0;
  goto LAB_10152ee7;
}

