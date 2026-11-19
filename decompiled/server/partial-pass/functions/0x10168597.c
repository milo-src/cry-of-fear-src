// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::scan_conversion_specifier
// address: 0x10168597
// body: available
// range: 0x10168597-0x10168701 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10168649 to 0x10168e1e __crt_stdio_input::format_string_parser<char>::scan_scanset_range (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_conversion_specifier(void)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::scan_conversion_specifier
          (format_string_parser<char> *this)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = **(byte **)(this + 8);
  if (bVar1 < 0x65) {
    if (bVar1 == 100) {
      *(undefined4 *)(this + 0x28) = 3;
      goto LAB_10168655;
    }
    if (bVar1 < 0x54) {
      if (bVar1 == 0x53) goto LAB_101686ec;
      if (bVar1 != 0x41) {
        if (bVar1 == 0x43) goto LAB_10168610;
        if (bVar1 < 0x45) {
LAB_101686ba:
          *(undefined4 *)(this + 0xc) = 0x16;
          *(undefined4 *)(this + 0x10) = 0;
          *(undefined2 *)(this + 0x14) = 0;
          this[0x16] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x18) = 0;
          *(undefined4 *)(this + 0x1c) = 0;
          *(undefined4 *)(this + 0x20) = 0;
          this[0x24] = (format_string_parser<char>)0x0;
          *(undefined4 *)(this + 0x28) = 0;
          return false;
        }
        if (0x47 < bVar1) {
          if (bVar1 != 0x49) goto LAB_101686ba;
          goto LAB_101685e6;
        }
      }
    }
    else {
      if (bVar1 == 0x58) goto LAB_101686a1;
      if (bVar1 == 0x5b) {
        set_wide_for_c_s_or_scanset(this);
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        *(undefined4 *)(this + 0x28) = 8;
        bVar2 = scan_scanset_range(this);
        return bVar2;
      }
      if (bVar1 != 0x61) {
        if (bVar1 != 99) goto LAB_101686ba;
LAB_10168610:
        if (*(int *)(this + 0x18) == 0 && *(int *)(this + 0x1c) == 0) {
          *(undefined4 *)(this + 0x18) = 1;
          *(undefined4 *)(this + 0x1c) = 0;
        }
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x28) = 0;
        goto LAB_101686fa;
      }
    }
LAB_10168691:
    *(undefined4 *)(this + 0x28) = 7;
  }
  else {
    if (bVar1 < 0x71) {
      if (bVar1 != 0x70) {
        if (0x67 < bVar1) {
          if (bVar1 != 0x69) {
            if (bVar1 == 0x6e) {
              *(undefined4 *)(this + 0x28) = 9;
            }
            else {
              if (bVar1 != 0x6f) goto LAB_101686ba;
              *(undefined4 *)(this + 0x28) = 4;
            }
            goto LAB_10168655;
          }
LAB_101685e6:
          *(undefined4 *)(this + 0x28) = 2;
          goto LAB_10168655;
        }
        goto LAB_10168691;
      }
      *(undefined4 *)(this + 0x20) = 9;
    }
    else {
      if (bVar1 == 0x73) {
LAB_101686ec:
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x28) = 1;
LAB_101686fa:
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        return true;
      }
      if (bVar1 == 0x75) {
        *(undefined4 *)(this + 0x28) = 5;
        goto LAB_10168655;
      }
      if (bVar1 != 0x78) goto LAB_101686ba;
    }
LAB_101686a1:
    *(undefined4 *)(this + 0x28) = 6;
  }
LAB_10168655:
  *(byte **)(this + 8) = *(byte **)(this + 8) + 1;
  return true;
}

