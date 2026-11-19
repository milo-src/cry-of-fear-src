// rea decompile_all
// name: FID_conflict:operator()
// address: 0x10163422
// body: available
// range: 0x10163422-0x1016344d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: bool __thiscall <lambda_136dcf69874064575ae1b89ff2a94cd1>::operator()(void)const 
    public: bool __thiscall <lambda_448605b25275ab87d3c5d4aa7a38a0aa>::operator()(void)const 
    public: bool __thiscall <lambda_46698efe93618fff5274d84d009d2be1>::operator()(void)const 
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

void FID_conflict_operator__(void)

{
  undefined4 *in_ECX;
  
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
  unget((input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_> *)*in_ECX
        ,*(wchar_t *)in_ECX[1]);
  *(undefined2 *)in_ECX[1] = 0;
  restore_state(*(undefined4 *)in_ECX[2],((undefined4 *)in_ECX[2])[1]);
  return;
}

