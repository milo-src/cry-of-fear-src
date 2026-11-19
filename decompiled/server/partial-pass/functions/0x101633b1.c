// rea decompile_all
// name: <lambda_2e1cf6ed1c07646757a0128817e0c201>::operator()
// address: 0x101633b1
// body: available
// range: 0x101633b1-0x10163421 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall <lambda_2e1cf6ed1c07646757a0128817e0c201>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
<lambda_2e1cf6ed1c07646757a0128817e0c201>::operator()
          (<lambda_2e1cf6ed1c07646757a0128817e0c201> *this)

{
  int iVar1;
  char *unaff_ESI;
  input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_> local_74 [68];
  void *local_30;
  int local_1c;
  wchar_t local_18 [4];
  char local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  _LocaleUpdate::_LocaleUpdate
            ((_LocaleUpdate *)&local_1c,(__crt_locale_pointers *)**(undefined4 **)this);
  local_8 = 0;
  local_c = **(undefined4 **)(this + 4);
  __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::
  input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>
            (local_74,(stream_input_adapter<wchar_t> *)&local_c,
             CONCAT44(**(undefined4 **)(this + 0xc),*(undefined4 *)(*(int *)(this + 8) + 4)),
             local_18,(__crt_locale_pointers *)**(undefined4 **)(this + 0x10),unaff_ESI);
  iVar1 = __crt_stdio_input::
          input_processor<wchar_t,__crt_stdio_input::stream_input_adapter<wchar_t>_>::process
                    (local_74);
  FID_conflict__free(local_30);
  if (local_10 != '\0') {
    *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
  }
  return iVar1;
}

