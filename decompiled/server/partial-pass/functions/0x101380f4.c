// rea decompile_all
// name: std::collate<wchar_t>::do_transform
// address: 0x101380f4
// body: available
// range: 0x101380f4-0x10138179 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class
   std::allocator<wchar_t> > __thiscall std::collate<wchar_t>::do_transform(wchar_t const *,wchar_t
   const *)const 
   
   Library: Visual Studio 2019 Release */

wchar_t * __thiscall
std::collate<wchar_t>::do_transform(collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  size_t sVar1;
  wchar_t *_String1;
  size_t sVar2;
  wchar_t *pwVar3;
  wchar_t *in_stack_0000000c;
  
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\a';
  param_1[0xb] = L'\0';
  *param_1 = L'\0';
  sVar1 = (int)in_stack_0000000c - (int)param_2 >> 1;
  sVar2 = 0;
  if (sVar1 != 0) {
    sVar2 = sVar1;
    do {
      FID_conflict_resize(sVar2,0);
      pwVar3 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        pwVar3 = *(wchar_t **)param_1;
      }
      _String1 = param_1;
      if (7 < *(uint *)(param_1 + 10)) {
        _String1 = *(wchar_t **)param_1;
      }
      sVar2 = __Wcsxfrm(_String1,pwVar3 + *(int *)(param_1 + 8),param_2,in_stack_0000000c,
                        (_Collvec *)(this + 8));
    } while ((*(uint *)(param_1 + 8) < sVar2) && (sVar2 != 0));
  }
  FID_conflict_resize(sVar2,0);
  return param_1;
}

