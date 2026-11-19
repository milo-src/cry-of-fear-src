// rea decompile_all
// name: FUN_1001db50
// address: 0x1001db50
// body: available
// range: 0x1001db50-0x1001dccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001db50(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 undefined8 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_4 + 0x88);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_4 + 0x90);
  *(undefined8 *)(param_3 + 0x1c) = *(undefined8 *)(param_4 + 0xd0);
  *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)(param_4 + 0xd8);
  *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_4 + 0x1b4);
  *(undefined2 *)(param_3 + 0x38) = *(undefined2 *)(param_4 + 400);
  *(uint *)(param_3 + 0x48) = (uint)*(byte *)(param_4 + 0x1cc);
  *(uint *)(param_3 + 0x4c) = (int)*(float *)(param_4 + 0x1d0) & 0xff;
  *(char *)(param_3 + 0x50) = (char)(int)*(float *)(param_4 + 0x1d4);
  *(char *)(param_3 + 0x51) = (char)(int)*(float *)(param_4 + 0x1d8);
  *(char *)(param_3 + 0x52) = (char)(int)*(float *)(param_4 + 0x1dc);
  *(uint *)(param_3 + 0x54) = (uint)*(byte *)(param_4 + 0x1e0);
  if (param_1 != 0) {
    *(undefined8 *)(param_3 + 0x7c) = param_6;
    *(undefined4 *)(param_3 + 0x84) = param_7;
    *(undefined8 *)(param_3 + 0x88) = param_8;
    *(undefined4 *)(param_3 + 0x90) = param_9;
    *(undefined4 *)(param_3 + 0x34) = param_2;
    *(undefined4 *)(param_3 + 0x28) = param_5;
    *(undefined4 *)(param_3 + 0x9c) = 0x3f800000;
    *(undefined4 *)(param_3 + 0x58) = 3;
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_4 + 0x1c8);
    *(undefined2 *)(param_3 + 0x3a) = 3;
    *(undefined4 *)(param_3 + 0x60) = 0x3f800000;
    *(undefined4 *)(param_3 + 0xa0) = 0x3f800000;
    return;
  }
  *(undefined8 *)(param_3 + 0x7c) = *(undefined8 *)(param_4 + 0x15c);
  *(undefined4 *)(param_3 + 0x84) = *(undefined4 *)(param_4 + 0x164);
  *(undefined8 *)(param_3 + 0x88) = *(undefined8 *)(param_4 + 0x168);
  *(undefined4 *)(param_3 + 0x90) = *(undefined4 *)(param_4 + 0x170);
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x28) = *(undefined4 *)(param_4 + 0x134);
  *(undefined4 *)(param_3 + 0x58) = *(undefined4 *)(param_4 + 0x188);
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_4 + 0x1c8);
  *(undefined2 *)(param_3 + 0x3a) = *(undefined2 *)(param_4 + 0x18c);
  *(undefined4 *)(param_3 + 0x60) = *(undefined4 *)(param_4 + 0x1bc);
  *(undefined4 *)(param_3 + 0xa0) = *(undefined4 *)(param_4 + 0x19c);
  return;
}

