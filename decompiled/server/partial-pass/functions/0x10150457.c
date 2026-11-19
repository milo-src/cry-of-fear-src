// rea decompile_all
// name: <>
// address: 0x10150457
// body: available
// range: 0x10150457-0x1015047e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall
   <lambda_0a97c9e57da7be065955385c79108ff2>::<lambda_0a97c9e57da7be065955385c79108ff2>(struct
   _iobuf * const &,struct __crt_locale_pointers * const &,unsigned __int64 const &,wchar_t const *
   const &,char * const &)
    public: __thiscall
   <lambda_0be4ab1c2a6918fda4e39227d83ea893>::<lambda_0be4ab1c2a6918fda4e39227d83ea893>(struct
   _iobuf * const &,struct __crt_locale_pointers * const &,unsigned __int64 const &,char const *
   const &,char * const &)
    public: __thiscall
   <lambda_21448eb78dd3c4a522ed7c65a98d88e6>::<lambda_21448eb78dd3c4a522ed7c65a98d88e6>(struct
   __crt_locale_pointers * const &,struct _iobuf * const &,unsigned __int64 const &,char const *
   const &,char * const &)
    public: __thiscall
   <lambda_2565fc715a641e539f44ad02d6823606>::<lambda_2565fc715a641e539f44ad02d6823606>(struct
   _iobuf * const &,struct __crt_locale_pointers * const &,unsigned __int64 const &,char const *
   const &,char * const &)
     26 names - too many to list
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void <>(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
       undefined4 param_5)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  return;
}

