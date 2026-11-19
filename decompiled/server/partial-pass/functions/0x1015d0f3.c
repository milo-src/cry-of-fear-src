// rea decompile_all
// name: __crt_seh_guarded_call<int>::operator()<<lambda_df226acf18ffe7c576684f1d3093a96e>,<lambda_2e1cf6ed1c07646757a0128817e0c201>&,<lambda_b939e5933951b38cfbce0ac7ba09f070>_>
// address: 0x1015d0f3
// body: available
// range: 0x1015d0f3-0x1015d13e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall __crt_seh_guarded_call<int>::operator()<class
   <lambda_df226acf18ffe7c576684f1d3093a96e>,class <lambda_2e1cf6ed1c07646757a0128817e0c201> &,class
   <lambda_b939e5933951b38cfbce0ac7ba09f070> >(class <lambda_df226acf18ffe7c576684f1d3093a96e>
   &&,class <lambda_2e1cf6ed1c07646757a0128817e0c201> &,class
   <lambda_b939e5933951b38cfbce0ac7ba09f070> &&)
   
   Library: Visual Studio 2019 Release */

int __thiscall
__crt_seh_guarded_call<int>::
operator()<<lambda_df226acf18ffe7c576684f1d3093a96e>,<lambda_2e1cf6ed1c07646757a0128817e0c201>&,<lambda_b939e5933951b38cfbce0ac7ba09f070>_>
          (__crt_seh_guarded_call<int> *this,<lambda_df226acf18ffe7c576684f1d3093a96e> *param_1,
          <lambda_2e1cf6ed1c07646757a0128817e0c201> *param_2,
          <lambda_b939e5933951b38cfbce0ac7ba09f070> *param_3)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_1013f300(&DAT_10208070,0xc);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  __lock_file((FILE *)**(undefined4 **)(unaff_EBP + 8));
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = <lambda_2e1cf6ed1c07646757a0128817e0c201>::operator()
                    (*(<lambda_2e1cf6ed1c07646757a0128817e0c201> **)(unaff_EBP + 0xc));
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
  FUN_1015d142();
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar1;
}

