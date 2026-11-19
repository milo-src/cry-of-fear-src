// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier
// address: 0x10168b36
// body: available
// range: 0x10168b36-0x10168c44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall
   __crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier(void)
   
   Libraries: Visual Studio 2017 Debug, Visual Studio 2017 Release, Visual Studio 2019 Debug, Visual
   Studio 2019 Release */

void __thiscall
__crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier
          (format_string_parser<char> *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(this + 8);
  bVar1 = *pbVar2;
  if (bVar1 < 0x6b) {
    if (bVar1 == 0x6a) {
      pbVar3 = pbVar2 + 1;
      *(undefined4 *)(this + 0x20) = 5;
    }
    else if (bVar1 == 0x49) {
      bVar1 = pbVar2[1];
      if (bVar1 == 0x33) {
        if (pbVar2[2] != 0x32) {
LAB_10168bd1:
          if ((((bVar1 != 100) && (bVar1 != 0x69)) && (bVar1 != 0x6f)) &&
             (((bVar1 != 0x75 && (bVar1 != 0x78)) && (bVar1 != 0x58)))) {
            return;
          }
          *(byte **)(this + 8) = pbVar2 + 1;
          *(undefined4 *)(this + 0x20) = 9;
          return;
        }
        pbVar3 = pbVar2 + 3;
        *(undefined4 *)(this + 0x20) = 9;
      }
      else {
        if ((bVar1 != 0x36) || (pbVar2[2] != 0x34)) goto LAB_10168bd1;
        pbVar3 = pbVar2 + 3;
        *(undefined4 *)(this + 0x20) = 10;
      }
    }
    else if (bVar1 == 0x4c) {
      pbVar3 = pbVar2 + 1;
      *(undefined4 *)(this + 0x20) = 8;
    }
    else {
      if (bVar1 != 0x54) {
        if (bVar1 != 0x68) {
          return;
        }
        bVar1 = pbVar2[1];
        *(byte **)(this + 8) = pbVar2 + (bVar1 == 0x68) + 1;
        *(uint *)(this + 0x20) = (bVar1 != 0x68) + 1;
        return;
      }
      pbVar3 = pbVar2 + 1;
      *(undefined4 *)(this + 0x20) = 0xb;
    }
  }
  else if (bVar1 == 0x6c) {
    pbVar3 = pbVar2 + 1;
    if (*pbVar3 == 0x6c) {
      pbVar3 = pbVar2 + 2;
      *(undefined4 *)(this + 0x20) = 4;
    }
    else {
      *(undefined4 *)(this + 0x20) = 3;
    }
  }
  else if (bVar1 == 0x74) {
    pbVar3 = pbVar2 + 1;
    *(undefined4 *)(this + 0x20) = 7;
  }
  else {
    if (bVar1 != 0x7a) {
      return;
    }
    pbVar3 = pbVar2 + 1;
    *(undefined4 *)(this + 0x20) = 6;
  }
  *(byte **)(this + 8) = pbVar3;
  return;
}

