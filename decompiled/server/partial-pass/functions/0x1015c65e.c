// rea decompile_all
// name: __crt_stdio_output::output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>::write_stored_string_tchar
// address: 0x1015c65e
// body: available
// range: 0x1015c65e-0x1015c6ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::write_stored_string_tchar(wchar_t)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
::write_stored_string_tchar
          (output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
           *this,wchar_t param_1)

{
  bool bVar1;
  int iVar2;
  char *_SrcCh;
  int iVar3;
  output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
  *local_8;
  
  local_8 = this;
  if ((this[0x3c] ==
       (output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
        )0x0) && (iVar3 = 0, 0 < *(int *)(this + 0x38))) {
    _SrcCh = *(char **)(this + 0x34);
    do {
      local_8 = (output_processor<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>_>
                 *)((uint)local_8 & 0xffff0000);
      iVar2 = __mbtowc_l((wchar_t *)&local_8,_SrcCh,(*(_locale_t *)(this + 8))->locinfo->lc_codepage
                         ,*(_locale_t *)(this + 8));
      if (iVar2 < 1) {
        *(undefined4 *)(this + 0x18) = 0xffffffff;
        return true;
      }
      bVar1 = stream_output_adapter<wchar_t>::write_character_without_count_update
                        ((stream_output_adapter<wchar_t> *)(this + 0x448),(wchar_t)local_8);
      if (bVar1) {
        *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      }
      else {
        *(undefined4 *)(this + 0x18) = 0xffffffff;
      }
      _SrcCh = _SrcCh + iVar2;
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(this + 0x38));
  }
  else {
    stream_output_adapter<wchar_t>::write_string
              ((stream_output_adapter<wchar_t> *)(this + 0x448),*(wchar_t **)(this + 0x34),
               *(int *)(this + 0x38),(int *)(this + 0x18),(__crt_deferred_errno_cache *)(this + 0xc)
              );
  }
  return true;
}

