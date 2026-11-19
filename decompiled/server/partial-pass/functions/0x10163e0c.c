// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::advance
// address: 0x10163e0c
// body: available
// range: 0x10163e0c-0x10163f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::format_string_parser<wchar_t>::advance(void)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::advance(format_string_parser<wchar_t> *this)

{
  wint_t _C;
  wint_t *pwVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    this[0x18] = (format_string_parser<wchar_t>)0x0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    this[0x2c] = (format_string_parser<wchar_t>)0x0;
    *(undefined4 *)(this + 0x30) = 0;
    if (**(wint_t **)(this + 8) != 0) {
      iVar3 = _iswctype(**(wint_t **)(this + 8),8);
      pwVar1 = *(wint_t **)(this + 8);
      if (iVar3 == 0) {
        if ((*pwVar1 == 0x25) && (pwVar1[1] != 0x25)) {
          *(undefined4 *)(this + 0x10) = 4;
          *(wint_t **)(this + 8) = pwVar1 + 1;
          scan_optional_assignment_suppressor(this);
          bVar2 = scan_optional_field_width(this);
          if (!bVar2) {
            return false;
          }
          scan_optional_length_modifier(this);
          scan_optional_wide_modifier(this);
          bVar2 = scan_conversion_specifier(this);
          if (!bVar2) {
            return false;
          }
          if ((&DAT_101ed990)[*(int *)(this + 0x28) + *(int *)(this + 0x30) * 0xc] == '\0') {
            reset_token_state_for_error(this,0x16);
            return false;
          }
          return true;
        }
        *(undefined4 *)(this + 0x10) = 3;
        *(wint_t *)(this + 0x14) = *pwVar1;
        *(wint_t **)(this + 8) = pwVar1 + (*pwVar1 == 0x25) + 1;
      }
      else {
        *(undefined4 *)(this + 0x10) = 2;
        _C = *pwVar1;
        while (iVar3 = _iswctype(_C,8), iVar3 != 0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 2;
          _C = **(wint_t **)(this + 8);
        }
      }
      return true;
    }
    *(undefined4 *)(this + 0x10) = 1;
  }
  return false;
}

