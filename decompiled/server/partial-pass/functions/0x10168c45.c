// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_length_modifier
// address: 0x10168c45
// body: available
// range: 0x10168c45-0x10168d7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_length_modifier(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_optional_length_modifier
          (format_string_parser<wchar_t> *this)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  puVar2 = *(ushort **)(this + 8);
  uVar1 = *puVar2;
  if (uVar1 < 0x6b) {
    if (uVar1 == 0x6a) {
      puVar3 = puVar2 + 1;
      *(undefined4 *)(this + 0x28) = 5;
    }
    else if (uVar1 == 0x49) {
      uVar1 = puVar2[1];
      if (uVar1 == 0x33) {
        if (puVar2[2] != 0x32) {
LAB_10168cfe:
          if ((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
             (((uVar1 != 0x75 && (uVar1 != 0x78)) && (uVar1 != 0x58)))) {
            return;
          }
          *(ushort **)(this + 8) = puVar2 + 1;
          *(undefined4 *)(this + 0x28) = 9;
          return;
        }
        puVar3 = puVar2 + 3;
        *(undefined4 *)(this + 0x28) = 9;
      }
      else {
        if ((uVar1 != 0x36) || (puVar2[2] != 0x34)) goto LAB_10168cfe;
        puVar3 = puVar2 + 3;
        *(undefined4 *)(this + 0x28) = 10;
      }
    }
    else if (uVar1 == 0x4c) {
      puVar3 = puVar2 + 1;
      *(undefined4 *)(this + 0x28) = 8;
    }
    else {
      if (uVar1 != 0x54) {
        if (uVar1 != 0x68) {
          return;
        }
        uVar1 = puVar2[1];
        *(ushort **)(this + 8) = puVar2 + (uVar1 == 0x68) + 1;
        *(uint *)(this + 0x28) = (uVar1 != 0x68) + 1;
        return;
      }
      puVar3 = puVar2 + 1;
      *(undefined4 *)(this + 0x28) = 0xb;
    }
  }
  else if (uVar1 == 0x6c) {
    puVar3 = puVar2 + 1;
    if (*puVar3 == 0x6c) {
      puVar3 = puVar2 + 2;
      *(undefined4 *)(this + 0x28) = 4;
    }
    else {
      *(undefined4 *)(this + 0x28) = 3;
    }
  }
  else if (uVar1 == 0x74) {
    puVar3 = puVar2 + 1;
    *(undefined4 *)(this + 0x28) = 7;
  }
  else {
    if (uVar1 != 0x7a) {
      return;
    }
    puVar3 = puVar2 + 1;
    *(undefined4 *)(this + 0x28) = 6;
  }
  *(ushort **)(this + 8) = puVar3;
  return;
}

