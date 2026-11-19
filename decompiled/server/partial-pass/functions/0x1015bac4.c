// rea decompile_all
// name: validate_and_update_state_at_beginning_of_format_character
// address: 0x1015bac4
// body: available
// range: 0x1015bac4-0x1015bbc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>
   >::validate_and_update_state_at_beginning_of_format_character(void)
    protected: bool __thiscall __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>
   >::validate_and_update_state_at_beginning_of_format_character(void)
   
   Library: Visual Studio 2019 Release */

undefined4 validate_and_update_state_at_beginning_of_format_character(void)

{
  wchar_t wVar1;
  long lVar2;
  wchar_t *_Str;
  int *piVar3;
  wchar_t *in_ECX;
  int iVar4;
  wchar_t *local_c;
  wchar_t *local_8;
  
  if (*(int *)(in_ECX + 0xe) != 1) {
    return 1;
  }
  _Str = *(wchar_t **)(in_ECX + 8);
  wVar1 = *_Str;
  if (wVar1 == L'%') {
    return 1;
  }
  iVar4 = *(int *)(in_ECX + 0x22e);
  local_8 = in_ECX;
  if (iVar4 == 0) {
    local_8 = (wchar_t *)0x0;
    if ((0x2f < (ushort)wVar1) && ((ushort)wVar1 < 0x3a)) {
      lVar2 = _wcstol(_Str,&local_8,10);
      if ((lVar2 < 1) || (*local_8 != L'$')) {
        in_ECX[0x22e] = L'\x01';
        in_ECX[0x22f] = L'\0';
        return 1;
      }
      if (*(int *)(in_ECX + 0x22c) == 1) {
        _memset(in_ECX + 0x232,0,0x640);
      }
      _Str = *(wchar_t **)(in_ECX + 8);
      in_ECX[0x22e] = L'\x02';
      in_ECX[0x22f] = L'\0';
      goto LAB_1015bb60;
    }
    in_ECX[0x22e] = L'\x01';
    in_ECX[0x22f] = L'\0';
    iVar4 = 1;
  }
  if (iVar4 != 2) {
    return 1;
  }
LAB_1015bb60:
  local_c = (wchar_t *)0x0;
  lVar2 = _wcstol(_Str,&local_c,10);
  iVar4 = lVar2 + -1;
  *(int *)(in_ECX + 0x554) = iVar4;
  *(wchar_t **)(in_ECX + 8) = local_c + 1;
  if (*(int *)(in_ECX + 0x22c) == 1) {
    if (((iVar4 < 0) || (*local_c != L'$')) || (99 < iVar4)) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_1016fa52();
      return 0;
    }
    if (iVar4 <= *(int *)(in_ECX + 0x552)) {
      iVar4 = *(int *)(in_ECX + 0x552);
    }
    *(int *)(in_ECX + 0x552) = iVar4;
  }
  return 1;
}

