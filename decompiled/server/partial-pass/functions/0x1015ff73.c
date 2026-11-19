// rea decompile_all
// name: __crt_strtox::parse_floating_point_possible_nan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>,unsigned___int64>
// address: 0x1015ff73
// body: available
// range: 0x1015ff73-0x1016008d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<char,class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char>
   >,unsigned __int64>(char &,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<char> > &,unsigned __int64)
   
   Library: Visual Studio 2019 Release */

floating_point_parse_result __cdecl
__crt_strtox::
parse_floating_point_possible_nan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>,unsigned___int64>
          (char *param_1,
          input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_> *param_2,
          __uint64 param_3)

{
  char cVar1;
  bool bVar2;
  floating_point_parse_result fVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    if ((*param_1 != (&DAT_101eda58)[iVar4]) && (*param_1 != (&DAT_101eda5c)[iVar4])) {
      ::FID_conflict_operator__();
      return 7;
    }
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    iVar4 = iVar4 + 1;
    *param_1 = cVar1;
  } while (iVar4 != 3);
  input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
            (param_2,cVar1);
  cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                    (param_2);
  *param_1 = cVar1;
  if (cVar1 == '(') {
    cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::get
                      (param_2);
    *param_1 = cVar1;
    bVar2 = parse_floating_point_possible_nan_is_snan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                      (param_1,param_2);
    if (bVar2) {
      input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                (param_2,*param_1);
      fVar3 = 5;
    }
    else {
      bVar2 = parse_floating_point_possible_nan_is_ind<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>_>
                        (param_1,param_2);
      cVar1 = *param_1;
      if (bVar2) {
        input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::unget
                  (param_2,cVar1);
        fVar3 = 6;
      }
      else {
        while (cVar1 != ')') {
          if ((cVar1 == '\0') ||
             ((((9 < (byte)(cVar1 - 0x30U) && (0x19 < (byte)(cVar1 + 0x9fU))) &&
               (0x19 < (byte)(cVar1 + 0xbfU))) && (cVar1 != '_')))) goto LAB_1015ffd4;
          cVar1 = input_adapter_character_source<__crt_stdio_input::string_input_adapter<char>_>::
                  get(param_2);
          *param_1 = cVar1;
        }
        fVar3 = 4;
      }
    }
  }
  else {
LAB_1015ffd4:
    cVar1 = ::FID_conflict_operator__();
    fVar3 = (-(uint)(cVar1 != '\0') & 0xfffffffd) + 7;
  }
  return fVar3;
}

