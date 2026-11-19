// rea decompile_all
// name: parse_floating_point_possible_nan<>
// address: 0x1016008e
// body: available
// range: 0x1016008e-0x101601be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > &,unsigned __int64)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > &,unsigned __int64)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_possible_nan<wchar_t,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> >,unsigned __int64>(wchar_t &,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > &,unsigned __int64)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

int parse_floating_point_possible_nan<>
              (wchar_t *param_1,
              input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
              *param_2)

{
  char cVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  do {
    if ((*param_1 != *(wchar_t *)((int)&DAT_101eda88 + iVar5)) &&
       (*param_1 != *(wchar_t *)((int)&DAT_101eda90 + iVar5))) {
      FID_conflict_operator__();
      return 7;
    }
    wVar2 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::get
                      (param_2);
    iVar5 = iVar5 + 2;
    *param_1 = wVar2;
  } while (iVar5 != 6);
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::
  unget(param_2,wVar2);
  wVar2 = __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::get
                    (param_2);
  *param_1 = wVar2;
  if (wVar2 == L'(') {
    wVar2 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::get
                      (param_2);
    *param_1 = wVar2;
    cVar1 = parse_floating_point_possible_nan_is_snan<>(param_1,param_2);
    if (cVar1 != '\0') {
      __crt_strtox::
      input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::unget
                (param_2,*param_1);
      return 5;
    }
    cVar1 = parse_floating_point_possible_nan_is_ind<>(param_1,param_2);
    wVar2 = *param_1;
    if (cVar1 != '\0') {
      __crt_strtox::
      input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::unget
                (param_2,wVar2);
      return 6;
    }
    wVar3 = wVar2;
    if (wVar2 == L')') {
LAB_101601ae:
      if (wVar2 != L')') goto LAB_101600f8;
    }
    else {
      do {
        uVar4 = (uint)(ushort)wVar3;
        wVar2 = L'\0';
        if (wVar3 == L'\0') goto LAB_101601ae;
        if ((((9 < uVar4 - 0x30) && (0x19 < uVar4 - 0x61)) && (0x19 < uVar4 - 0x41)) &&
           (wVar3 != L'_')) goto LAB_101600f8;
        wVar3 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::
                get(param_2);
        *param_1 = wVar3;
      } while (wVar3 != L')');
    }
    iVar5 = 4;
  }
  else {
LAB_101600f8:
    cVar1 = FID_conflict_operator__();
    iVar5 = (-(uint)(cVar1 != '\0') & 0xfffffffd) + 7;
  }
  return iVar5;
}

