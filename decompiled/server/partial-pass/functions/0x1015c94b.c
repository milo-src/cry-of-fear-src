// rea decompile_all
// name: __crt_stdio_output::stream_output_adapter<wchar_t>::write_string
// address: 0x1015c94b
// body: available
// range: 0x1015c94b-0x1015c976 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1015c972 to 0x1015caed __crt_stdio_output::output_adapter_common<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>::write_string_impl (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall __crt_stdio_output::stream_output_adapter<wchar_t>::write_string(wchar_t
   const * const,int,int * const,class __crt_deferred_errno_cache &)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
__crt_stdio_output::stream_output_adapter<wchar_t>::write_string
          (stream_output_adapter<wchar_t> *this,wchar_t *param_1,int param_2,int *param_3,
          __crt_deferred_errno_cache *param_4)

{
  if (((*(uint *)(*(int *)this + 0xc) >> 0xc & 1) != 0) && (*(int *)(*(int *)this + 4) == 0)) {
    *param_3 = *param_3 + param_2;
    return;
  }
  output_adapter_common<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>::
  write_string_impl((output_adapter_common<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>
                     *)this,param_1,param_2,param_3,param_4);
  return;
}

