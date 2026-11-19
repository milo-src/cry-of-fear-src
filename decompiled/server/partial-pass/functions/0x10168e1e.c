// rea decompile_all
// name: __crt_stdio_input::format_string_parser<char>::scan_scanset_range
// address: 0x10168e1e
// body: available
// range: 0x10168e1e-0x10168f55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::format_string_parser<char>::scan_scanset_range(void)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<char>::scan_scanset_range(format_string_parser<char> *this)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  byte bVar6;
  format_string_parser<char> *pfVar7;
  byte *pbVar8;
  byte *local_c;
  
  if (this + 0x2c == (format_string_parser<char> *)0x0) {
    *(undefined4 *)(this + 0xc) = 0xc;
    *(undefined2 *)(this + 0x14) = 0;
  }
  else {
    pfVar7 = this + 0x2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined4 *)pfVar7 = 0;
      pfVar7 = pfVar7 + 4;
    }
    pbVar8 = *(byte **)(this + 8);
    bVar1 = *pbVar8;
    bVar6 = bVar1;
    if (bVar1 == 0x5e) {
      pbVar8 = pbVar8 + 1;
      *(byte **)(this + 8) = pbVar8;
      bVar6 = *pbVar8;
    }
    if (bVar6 == 0x5d) {
      pbVar8 = pbVar8 + 1;
      *(byte **)(this + 8) = pbVar8;
      this[0x37] = (format_string_parser<char>)((byte)this[0x37] | 0x20);
      bVar6 = *pbVar8;
    }
    local_c = (byte *)0x0;
    pbVar3 = pbVar8;
    while ((bVar6 != 0x5d && (bVar6 != 0))) {
      if ((bVar6 == 0x2d) && ((pbVar3 + -1 != local_c && (pbVar3 != pbVar8)))) {
        bVar2 = pbVar3[1];
        if (bVar2 == 0x5d) goto LAB_10168ef8;
        bVar6 = pbVar3[-1];
        bVar4 = bVar2;
        if (bVar2 < bVar6) {
          bVar4 = bVar6;
          bVar6 = bVar2;
        }
        for (; local_c = pbVar3 + 1, bVar6 != (byte)(bVar4 + 1); bVar6 = bVar6 + 1) {
          this[(bVar6 >> 3) + 0x2c] =
               (format_string_parser<char>)
               ((byte)this[(bVar6 >> 3) + 0x2c] | (byte)(1 << (bVar6 & 7)));
        }
      }
      else {
LAB_10168ef8:
        this[(bVar6 >> 3) + 0x2c] =
             (format_string_parser<char>)
             ((byte)this[(bVar6 >> 3) + 0x2c] | (byte)(1 << (bVar6 & 7)));
      }
      pbVar3 = (byte *)(*(int *)(this + 8) + 1);
      *(byte **)(this + 8) = pbVar3;
      bVar6 = *pbVar3;
    }
    if (*pbVar3 != 0) {
      if (bVar1 == 0x5e) {
        scanset_buffer<unsigned_char>::invert((scanset_buffer<unsigned_char> *)(this + 0x2c));
        pbVar3 = *(byte **)(this + 8);
      }
      *(byte **)(this + 8) = pbVar3 + 1;
      return true;
    }
    *(undefined2 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0xc) = 0x16;
  }
  *(undefined4 *)(this + 0x28) = 0;
  this[0x24] = (format_string_parser<char>)0x0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  this[0x16] = (format_string_parser<char>)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  return false;
}

