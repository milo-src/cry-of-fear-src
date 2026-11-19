// rea decompile_all
// name: type_case_c_tchar
// address: 0x10158c1e
// body: available
// range: 0x10158c1e-0x10158cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::format_validation_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_c_tchar(wchar_t)
     6 names - too many to list
   
   Library: Visual Studio 2019 Release */

undefined4 type_case_c_tchar(void)

{
  wchar_t wVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  __uint64 *in_ECX;
  wchar_t *pwVar5;
  undefined4 local_8;
  
  *(int *)((int)in_ECX + 0x14) = *(int *)((int)in_ECX + 0x14) + 4;
  pwVar5 = (wchar_t *)(in_ECX + 8);
  *(undefined1 *)((int)in_ECX + 0x3c) = 1;
  wVar1 = *(wchar_t *)(*(int *)((int)in_ECX + 0x14) + -4);
  local_8 = in_ECX;
  bVar2 = __crt_stdio_output::is_wide_character_specifier<wchar_t>
                    (*in_ECX,*(wchar_t *)((int)in_ECX + 0x32),
                     *(length_modifier *)((int)in_ECX + 0x2c));
  if (bVar2) {
    pwVar4 = *(wchar_t **)((int)in_ECX + 0x444);
    if (*(wchar_t **)((int)in_ECX + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    *pwVar4 = wVar1;
  }
  else {
    local_8 = (__uint64 *)(CONCAT22(local_8._2_2_,wVar1) & 0xffff00ff);
    pwVar4 = *(wchar_t **)((int)in_ECX + 0x444);
    if (*(wchar_t **)((int)in_ECX + 0x444) == (wchar_t *)0x0) {
      pwVar4 = pwVar5;
    }
    iVar3 = __mbtowc_l(pwVar4,(char *)&local_8,(*(_locale_t *)(in_ECX + 1))->locinfo->lc_codepage,
                       *(_locale_t *)(in_ECX + 1));
    if (iVar3 < 0) {
      *(undefined1 *)(in_ECX + 6) = 1;
    }
  }
  pwVar4 = *(wchar_t **)((int)in_ECX + 0x444);
  if (pwVar4 != (wchar_t *)0x0) {
    pwVar5 = pwVar4;
  }
  *(wchar_t **)((int)in_ECX + 0x34) = pwVar5;
  *(undefined4 *)(in_ECX + 7) = 1;
  return CONCAT31((int3)((uint)pwVar4 >> 8),1);
}

