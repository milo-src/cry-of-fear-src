// rea decompile_all
// name: FUN_1013e09e
// address: 0x1013e09e
// body: available
// range: 0x1013e09e-0x1013e12a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1013e09e(void)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  unkbyte10 in_ST0;
  undefined8 local_20;
  undefined2 uStack_18;
  
  local_20._0_4_ = (uint)in_ST0;
  uVar2 = (uint)local_20;
  local_20._4_4_ = (uint)((unkuint10)in_ST0 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = (undefined8)in_ST0;
  uStack_18 = (ushort)((unkuint10)in_ST0 >> 0x40);
  uVar4 = uStack_18 & 0x7fff;
  if (uVar4 < 0x3fff) {
    return 0;
  }
  if ((int)uVar1 < 0) {
    if (uVar4 < 0x403e) {
      bVar3 = 0x3e - (char)uVar4;
      uVar5 = uVar1;
      if (0x1f < bVar3) {
        uVar5 = 0;
        uVar2 = uVar1;
      }
      uVar2 = uVar2 >> (bVar3 & 0x1f) | uVar5 << 0x20 - (bVar3 & 0x1f);
      uVar5 = uVar5 >> (bVar3 & 0x1f);
      if ((short)uStack_18 < 0) {
        bVar6 = uVar2 != 0;
        uVar2 = -uVar2;
        uVar5 = -(uVar5 + bVar6);
      }
      return CONCAT44(uVar5,uVar2);
    }
    if (((uVar4 < 0x403f) && ((uVar1 & 0x7fffffff) == 0 && uVar2 == 0)) && ((short)uStack_18 < 0)) {
      return local_20;
    }
  }
  return 0x8000000000000000;
}

