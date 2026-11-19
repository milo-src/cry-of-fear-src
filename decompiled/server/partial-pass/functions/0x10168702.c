// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_conversion_specifier
// address: 0x10168702
// body: available
// range: 0x10168702-0x1016884d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101687b1 to 0x10168f56 __crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_conversion_specifier(void)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_conversion_specifier
          (format_string_parser<wchar_t> *this)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = **(ushort **)(this + 8);
  if (uVar1 < 0x65) {
    if (uVar1 == 100) {
      *(undefined4 *)(this + 0x30) = 3;
      goto LAB_101687bd;
    }
    if (uVar1 < 0x54) {
      if (uVar1 == 0x53) goto LAB_10168838;
      if (uVar1 != 0x41) {
        if (uVar1 == 0x43) goto LAB_1016877a;
        if (uVar1 < 0x45) {
LAB_10168822:
          reset_token_state_for_error(this,0x16);
          return false;
        }
        if (0x47 < uVar1) {
          if (uVar1 != 0x49) goto LAB_10168822;
          goto LAB_10168750;
        }
      }
    }
    else {
      if (uVar1 == 0x58) goto LAB_10168809;
      if (uVar1 == 0x5b) {
        set_wide_for_c_s_or_scanset(this);
        *(int *)(this + 8) = *(int *)(this + 8) + 2;
        *(undefined4 *)(this + 0x30) = 8;
        bVar2 = scan_scanset_range(this);
        return bVar2;
      }
      if (uVar1 != 0x61) {
        if (uVar1 != 99) goto LAB_10168822;
LAB_1016877a:
        if (*(int *)(this + 0x20) == 0 && *(int *)(this + 0x24) == 0) {
          *(undefined4 *)(this + 0x24) = 0;
          *(undefined4 *)(this + 0x20) = 1;
        }
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x30) = 0;
        goto LAB_10168846;
      }
    }
LAB_101687f9:
    *(undefined4 *)(this + 0x30) = 7;
  }
  else {
    if (uVar1 < 0x71) {
      if (uVar1 != 0x70) {
        if (0x67 < uVar1) {
          if (uVar1 != 0x69) {
            if (uVar1 == 0x6e) {
              *(undefined4 *)(this + 0x30) = 9;
            }
            else {
              if (uVar1 != 0x6f) goto LAB_10168822;
              *(undefined4 *)(this + 0x30) = 4;
            }
            goto LAB_101687bd;
          }
LAB_10168750:
          *(undefined4 *)(this + 0x30) = 2;
          goto LAB_101687bd;
        }
        goto LAB_101687f9;
      }
      *(undefined4 *)(this + 0x28) = 9;
    }
    else {
      if (uVar1 == 0x73) {
LAB_10168838:
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x30) = 1;
LAB_10168846:
        *(int *)(this + 8) = *(int *)(this + 8) + 2;
        return true;
      }
      if (uVar1 == 0x75) {
        *(undefined4 *)(this + 0x30) = 5;
        goto LAB_101687bd;
      }
      if (uVar1 != 0x78) goto LAB_10168822;
    }
LAB_10168809:
    *(undefined4 *)(this + 0x30) = 6;
  }
LAB_101687bd:
  *(ushort **)(this + 8) = *(ushort **)(this + 8) + 1;
  return true;
}

