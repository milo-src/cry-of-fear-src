// rea decompile_all
// name: FUN_100c27c0
// address: 0x100c27c0
// body: available
// range: 0x100c27c0-0x100c294a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100c27c0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  bool bVar4;
  
  uVar1 = FUN_1000b000();
  switch(in_ECX[0x89]) {
  case 1:
    if ((uVar1 & 0x10000) != 0) {
LAB_100c27e7:
      in_ECX[0x8a] = 2;
      return in_ECX[0x8a];
    }
    if (((uVar1 & 0x100) != 0) || ((uVar1 & 0x200) != 0)) {
      FUN_100c00f0(in_ECX[0xbd],in_ECX[0xbe],in_ECX[0xbf]);
      in_ECX[0x8a] = 3;
      return in_ECX[0x8a];
    }
    if ((uVar1 & 0x20000) == 0) {
      bVar4 = (uVar1 & 0x40040) == 0;
    }
    else {
      puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x1ec))();
      if (puVar2 == (undefined4 *)0x0) break;
      FUN_100c00f0(*puVar2,puVar2[1],puVar2[2]);
      bVar4 = (*(byte *)(puVar2 + 3) & 0x21) == 0;
    }
    if (!bVar4) {
      in_ECX[0x8a] = 3;
      return in_ECX[0x8a];
    }
    break;
  case 2:
    iVar3 = FUN_10017780();
    if (iVar3 == 0) {
      in_ECX[0x8a] = 3;
      (*DAT_1022303c)(2,"***Combat state with no enemy!\n");
      return in_ECX[0x8a];
    }
    break;
  case 3:
    if ((uVar1 & 0x10010) != 0) goto LAB_100c27e7;
    if ((uVar1 & 0x20000) != 0) {
      in_ECX[0x8a] = 3;
      puVar2 = (undefined4 *)(**(code **)(*in_ECX + 0x1ec))();
      if (puVar2 != (undefined4 *)0x0) {
        FUN_100c00f0(*puVar2,puVar2[1],puVar2[2]);
        return in_ECX[0x8a];
      }
    }
    break;
  case 6:
    if ((uVar1 & 0x40000300) != 0) {
      FUN_100fab90();
      return in_ECX[0x8a];
    }
    break;
  case 8:
    in_ECX[0x8a] = 8;
  }
  return in_ECX[0x8a];
}

