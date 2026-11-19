// rea decompile_all
// name: FID_conflict:standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_><__crt_stdio_output::string_output_adapter<wchar_t>_const&,unsigned___int64_const&,wchar_t_const*_const&,__crt_locale_pointers*_const&,char*_const&>
// address: 0x1014ba59
// body: available
// range: 0x1014ba59-0x1014ba8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    protected: __thiscall __crt_stdio_output::standard_base<char,class
   __crt_stdio_output::stream_output_adapter<char> >::standard_base<char,class
   __crt_stdio_output::stream_output_adapter<char> ><class
   __crt_stdio_output::stream_output_adapter<char> const &,unsigned __int64 const &,char const *
   const &,struct __crt_locale_pointers * const &,char * const &>(class
   __crt_stdio_output::stream_output_adapter<char> const &,unsigned __int64 const &,char const *
   const &,struct __crt_locale_pointers * const &,char * const &)
    protected: __thiscall __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> >::standard_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> ><class
   __crt_stdio_output::stream_output_adapter<wchar_t> const &,unsigned __int64 const &,wchar_t const
   * const &,struct __crt_locale_pointers * const &,char * const &>(class
   __crt_stdio_output::stream_output_adapter<wchar_t> const &,unsigned __int64 const &,wchar_t const
   * const &,struct __crt_locale_pointers * const &,char * const &)
    protected: __thiscall __crt_stdio_output::standard_base<char,class
   __crt_stdio_output::string_output_adapter<char> >::standard_base<char,class
   __crt_stdio_output::string_output_adapter<char> ><class
   __crt_stdio_output::string_output_adapter<char> const &,unsigned __int64 const &,char const *
   const &,struct __crt_locale_pointers * const &,char * const &>(class
   __crt_stdio_output::string_output_adapter<char> const &,unsigned __int64 const &,char const *
   const &,struct __crt_locale_pointers * const &,char * const &)
    protected: __thiscall __crt_stdio_output::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> >::standard_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> ><class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64 const &,wchar_t const
   * const &,struct __crt_locale_pointers * const &,char * const &>(class
   __crt_stdio_output::string_output_adapter<wchar_t> const &,unsigned __int64 const &,wchar_t const
   * const &,struct __crt_locale_pointers * const &,char * const &)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict_standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_><__crt_stdio_output::string_output_adapter<wchar_t>_const&,unsigned___int64_const&,wchar_t_const*_const&,__crt_locale_pointers*_const&,char*_const&>
               (stream_output_adapter<wchar_t> *param_1,int param_2,undefined4 *param_3,
               undefined4 *param_4,undefined4 *param_5)

{
  output_adapter_data<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_> *in_ECX;
  char *unaff_ESI;
  
  __crt_stdio_output::
  output_adapter_data<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>::
  output_adapter_data<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>
            (in_ECX,param_1,CONCAT44(*param_3,*(undefined4 *)(param_2 + 4)),(wchar_t *)*param_4,
             (__crt_locale_pointers *)*param_5,unaff_ESI);
  *(undefined4 *)(in_ECX + 0x450) = 0;
  return;
}

