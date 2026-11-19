// rea decompile_all
// name: common_vfprintf<>
// address: 0x1014c00d
// body: available
// range: 0x1014c00d-0x1014c070 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    int __cdecl common_vfprintf<class __crt_stdio_output::format_validation_base,char>(unsigned
   __int64,struct _iobuf * const,char const * const,struct __crt_locale_pointers * const,char *
   const)
    int __cdecl common_vfprintf<class __crt_stdio_output::format_validation_base,wchar_t>(unsigned
   __int64,struct _iobuf * const,wchar_t const * const,struct __crt_locale_pointers * const,char *
   const)
    int __cdecl common_vfprintf<class __crt_stdio_output::positional_parameter_base,char>(unsigned
   __int64,struct _iobuf * const,char const * const,struct __crt_locale_pointers * const,char *
   const)
    int __cdecl common_vfprintf<class
   __crt_stdio_output::positional_parameter_base,wchar_t>(unsigned __int64,struct _iobuf *
   const,wchar_t const * const,struct __crt_locale_pointers * const,char * const)
     6 names - too many to list
   
   Library: Visual Studio 2019 Release */

undefined4 common_vfprintf<>(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 *local_18;
  undefined1 *local_14;
  int local_10;
  int local_c [2];
  
  if ((param_3 != 0) && (param_4 != 0)) {
    local_24 = &param_3;
    local_c[0] = param_3;
    local_20 = &stack0x00000014;
    local_1c = (undefined1 *)&param_1;
    local_10 = param_3;
    local_18 = &param_4;
    local_14 = &stack0x00000018;
    uVar2 = operator()<>(&local_10,&local_24,local_c);
    return uVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x16;
  FUN_1016fa52();
  return 0xffffffff;
}

