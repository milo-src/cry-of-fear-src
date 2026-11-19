// rea decompile_all
// name: __crt_stdio_output::output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>::process
// address: 0x101523c6
// body: available
// range: 0x101523c6-0x101524d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::process(void)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
::process(output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
          *this)

{
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  oVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  
  bVar2 = stream_output_adapter<char>::validate((stream_output_adapter<char> *)(this + 0x448));
  if (bVar2) {
    if (*(int *)(this + 0x10) == 0) {
LAB_101523e6:
      piVar4 = __errno();
      *piVar4 = 0x16;
      FUN_1016fa52();
    }
    else {
      do {
        cVar3 = advance_to_next_pass();
        if (cVar3 == '\0') {
          return *(int *)(this + 0x18);
        }
        *(undefined4 *)(this + 0x38) = 0;
        *(undefined4 *)(this + 0x1c) = 0;
LAB_1015249a:
        oVar1 = **(output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                   **)(this + 0x10);
        this[0x31] = oVar1;
        if (oVar1 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x0) {
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
          if (*(int *)(this + 0x18) < 0) goto LAB_101524ad;
          uVar5 = find_next_state(this[0x31],*(undefined4 *)(this + 0x1c));
          *(undefined4 *)(this + 0x1c) = uVar5;
          cVar3 = validate_and_update_state_at_beginning_of_format_character();
          if (cVar3 == '\0') {
            return -1;
          }
          if (*(int *)(this + 0x1c) == 8) goto LAB_101523e6;
          switch(*(int *)(this + 0x1c)) {
          case 0:
            cVar3 = state_case_normal(this);
            break;
          case 1:
            *(undefined4 *)(this + 0x28) = 0xffffffff;
            *(undefined4 *)(this + 0x24) = 0;
            this[0x30] = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                          )0x0;
            *(undefined4 *)(this + 0x20) = 0;
            *(undefined4 *)(this + 0x2c) = 0;
            this[0x3c] = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                          )0x0;
            goto LAB_1015249a;
          case 2:
            cVar3 = state_case_flag();
            break;
          case 3:
            cVar3 = state_case_width();
            break;
          case 4:
            goto switchD_1015243d_caseD_4;
          case 5:
            cVar3 = state_case_precision();
            break;
          case 6:
            cVar3 = state_case_size();
            break;
          case 7:
            cVar3 = state_case_type(this);
            break;
          default:
            goto LAB_101523f9;
          }
          if (cVar3 == '\0') {
            return -1;
          }
          goto LAB_1015249a;
        }
        *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
LAB_101524ad:
        cVar3 = validate_and_update_state_at_end_of_format_string();
      } while (cVar3 != '\0');
    }
  }
LAB_101523f9:
  return -1;
switchD_1015243d_caseD_4:
  *(undefined4 *)(this + 0x28) = 0;
  goto LAB_1015249a;
}

