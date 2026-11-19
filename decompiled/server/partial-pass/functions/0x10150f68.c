// rea decompile_all
// name: <lambda_be68057ced330f874c40fe9612235e36>::operator()
// address: 0x10150f68
// body: available
// range: 0x10150f68-0x10151026 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall <lambda_be68057ced330f874c40fe9612235e36>::operator()(void)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
<lambda_be68057ced330f874c40fe9612235e36>::operator()
          (<lambda_be68057ced330f874c40fe9612235e36> *this)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  char *unaff_EDI;
  int local_478;
  wchar_t local_474 [4];
  char local_46c;
  undefined4 local_468;
  undefined4 local_464;
  output_adapter_data<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_> local_460 [64];
  formatting_buffer local_420 [1040];
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar1 = **(undefined4 **)this;
  uVar2 = ___acrt_stdio_begin_temporary_buffering_nolock(uVar1);
  local_468 = CONCAT31(local_468._1_3_,uVar2);
  _LocaleUpdate::_LocaleUpdate
            ((_LocaleUpdate *)&local_478,(__crt_locale_pointers *)**(undefined4 **)(this + 4));
  local_464 = **(undefined4 **)this;
  __crt_stdio_output::
  output_adapter_data<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>::
  output_adapter_data<wchar_t,__crt_stdio_output::stream_output_adapter<wchar_t>_>
            (local_460,(stream_output_adapter<wchar_t> *)&local_464,
             CONCAT44(**(undefined4 **)(this + 0xc),*(undefined4 *)(*(int *)(this + 8) + 4)),
             local_474,(__crt_locale_pointers *)**(undefined4 **)(this + 0x10),unaff_EDI);
  local_10 = 0;
  process();
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_420);
  if (local_46c != '\0') {
    *(uint *)(local_478 + 0x350) = *(uint *)(local_478 + 0x350) & 0xfffffffd;
  }
  ___acrt_stdio_end_temporary_buffering_nolock(local_468,uVar1);
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

