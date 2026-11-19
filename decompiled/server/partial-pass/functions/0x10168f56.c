// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range
// address: 0x10168f56
// body: available
// range: 0x10168f56-0x101690bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range(void)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range
          (format_string_parser<wchar_t> *this)

{
  scanset_storage<2> *this_00;
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  uchar *puVar4;
  wchar_t wVar5;
  wchar_t *pwVar6;
  wchar_t wVar7;
  int iVar8;
  wchar_t *local_14;
  wchar_t *local_c;
  
  this_00 = (scanset_storage<2> *)(this + 0x34);
  puVar4 = scanset_storage<2>::data(this_00);
  if (puVar4 == (uchar *)0x0) {
    iVar8 = 0xc;
  }
  else {
    scanset_buffer<wchar_t>::reset((scanset_buffer<wchar_t> *)this_00);
    local_c = *(wchar_t **)(this + 8);
    wVar2 = *local_c;
    wVar3 = wVar2;
    if (wVar2 == L'^') {
      local_c = local_c + 1;
      *(wchar_t **)(this + 8) = local_c;
      wVar3 = *local_c;
    }
    if (wVar3 == L']') {
      *(wchar_t **)(this + 8) = local_c + 1;
      scanset_buffer<wchar_t>::set((scanset_buffer<wchar_t> *)this_00,L']');
      local_c = *(wchar_t **)(this + 8);
      wVar3 = *local_c;
    }
    local_14 = (wchar_t *)0x0;
    pwVar6 = local_c;
    while ((wVar3 != L']' && (wVar3 != L'\0'))) {
      if ((wVar3 == L'-') &&
         (((pwVar6 + -1 != local_14 && (pwVar6 != local_c)) &&
          (pwVar1 = pwVar6 + 1, *pwVar1 != L']')))) {
        wVar3 = pwVar6[-1];
        wVar7 = *pwVar1;
        wVar5 = wVar3;
        if ((ushort)wVar7 < (ushort)wVar3) {
          wVar5 = wVar7;
          wVar7 = wVar3;
        }
        for (; local_14 = pwVar1, wVar5 != (wchar_t)(wVar7 + L'\x01'); wVar5 = wVar5 + L'\x01') {
          scanset_buffer<wchar_t>::set((scanset_buffer<wchar_t> *)this_00,wVar5);
        }
      }
      else {
        scanset_buffer<wchar_t>::set((scanset_buffer<wchar_t> *)(this + 0x34),wVar3);
      }
      pwVar6 = (wchar_t *)(*(int *)(this + 8) + 2);
      *(wchar_t **)(this + 8) = pwVar6;
      wVar3 = *pwVar6;
    }
    if (*pwVar6 != L'\0') {
      if (wVar2 == L'^') {
        scanset_buffer<wchar_t>::invert((scanset_buffer<wchar_t> *)(this + 0x34));
        pwVar6 = *(wchar_t **)(this + 8);
      }
      *(wchar_t **)(this + 8) = pwVar6 + 1;
      return true;
    }
    iVar8 = 0x16;
  }
  reset_token_state_for_error(this,iVar8);
  return false;
}

