// rea decompile_all
// name: state_case_size
// address: 0x10153f5f
// body: available
// range: 0x10153f5f-0x101540ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10153f7b to 0x10155003 __crt_stdio_output::output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>::state_case_type (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::state_case_size(void)
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::string_output_adapter<char>,class
   __crt_stdio_output::format_validation_base<char,class
   __crt_stdio_output::string_output_adapter<char> > >::state_case_size(void)
   
   Library: Visual Studio 2019 Release */

bool state_case_size(void)

{
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  oVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  int *piVar5;
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  *in_ECX;
  undefined4 uStack_4;
  
  oVar1 = in_ECX[0x31];
  if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                )0x46) {
    if ((*(uint *)in_ECX & 8) == 0) {
      *(undefined4 *)(in_ECX + 0x1c) = 7;
      bVar4 = __crt_stdio_output::
              output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
              ::state_case_type(in_ECX);
      return bVar4;
    }
  }
  else if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                     )0x4e) {
    if ((*(uint *)in_ECX & 8) == 0) {
      *(undefined4 *)(in_ECX + 0x1c) = 8;
      goto LAB_10153f97;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x2c) != 0) {
LAB_10153f97:
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_1016fa52();
      return false;
    }
    if ((char)oVar1 < 'k') {
      if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x6a) {
        *(undefined4 *)(in_ECX + 0x2c) = 5;
        return true;
      }
      if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x49) {
        pcVar3 = *(char **)(in_ECX + 0x10);
        cVar2 = *pcVar3;
        if ((cVar2 == '3') && (pcVar3[1] == '2')) {
          *(undefined4 *)(in_ECX + 0x2c) = 10;
          *(char **)(in_ECX + 0x10) = pcVar3 + 2;
          return true;
        }
        if ((cVar2 == '6') && (pcVar3[1] == '4')) {
          *(undefined4 *)(in_ECX + 0x2c) = 0xb;
          *(char **)(in_ECX + 0x10) = pcVar3 + 2;
          return true;
        }
        if ((((cVar2 != 'd') && (cVar2 != 'i')) && (cVar2 != 'o')) &&
           (((cVar2 != 'u' && (cVar2 != 'x')) && (cVar2 != 'X')))) {
          return true;
        }
        *(undefined4 *)(in_ECX + 0x2c) = 9;
        return true;
      }
      if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x4c) {
        *(undefined4 *)(in_ECX + 0x2c) = 8;
        return true;
      }
      if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x54) {
        *(undefined4 *)(in_ECX + 0x2c) = 0xd;
        return true;
      }
      if (oVar1 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x68) {
        return true;
      }
      if (**(char **)(in_ECX + 0x10) == 'h') {
        *(char **)(in_ECX + 0x10) = *(char **)(in_ECX + 0x10) + 1;
        uStack_4 = 1;
      }
      else {
        uStack_4 = 2;
      }
    }
    else {
      if (oVar1 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x6c) {
        if (oVar1 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x74) {
          *(undefined4 *)(in_ECX + 0x2c) = 7;
          return true;
        }
        if (oVar1 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x77) {
          if (oVar1 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                        )0x7a) {
            return true;
          }
          *(undefined4 *)(in_ECX + 0x2c) = 6;
          return true;
        }
        *(undefined4 *)(in_ECX + 0x2c) = 0xc;
        return true;
      }
      if (**(char **)(in_ECX + 0x10) == 'l') {
        *(char **)(in_ECX + 0x10) = *(char **)(in_ECX + 0x10) + 1;
        uStack_4 = 4;
      }
      else {
        uStack_4 = 3;
      }
    }
    *(undefined4 *)(in_ECX + 0x2c) = uStack_4;
  }
  return true;
}

