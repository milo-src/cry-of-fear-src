// rea decompile_all
// name: FUN_10014260
// address: 0x10014260
// body: available
// range: 0x10014260-0x100144fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014260(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x40) != 0) {
    FUN_10116a30("buttons/spark1.wav");
    FUN_10116a30("buttons/spark2.wav");
    FUN_10116a30("buttons/spark3.wav");
    FUN_10116a30("buttons/spark4.wav");
    FUN_10116a30("buttons/spark5.wav");
    FUN_10116a30("buttons/spark6.wav");
  }
  FUN_10116990("sprites/glow04.spr");
  if (*(int *)(in_ECX + 0x194) != 0) {
    FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x194));
  }
  if (*(int *)(in_ECX + 0x198) != 0) {
    FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x198));
  }
  if (*(char *)(in_ECX + 0x1d8) != '\0') {
    uVar1 = FUN_10012df0(*(char *)(in_ECX + 0x1d8));
    FUN_10116a30(uVar1);
    uVar1 = (*DAT_10223054)(uVar1);
    *(undefined4 *)(in_ECX + 0x1b4) = uVar1;
  }
  if (*(char *)(in_ECX + 0x1da) != '\0') {
    uVar1 = FUN_10012df0(*(char *)(in_ECX + 0x1da));
    FUN_10116a30(uVar1);
    uVar1 = (*DAT_10223054)(uVar1);
    *(undefined4 *)(in_ECX + 0x1bc) = uVar1;
  }
  switch(*(undefined1 *)(in_ECX + 0x1d9)) {
  case 1:
    iVar2 = (int)&DAT_101a568c - *(int *)(DAT_10223188 + 0x98);
    break;
  case 2:
    iVar2 = (int)&DAT_101a5690 - *(int *)(DAT_10223188 + 0x98);
    break;
  case 3:
    iVar2 = (int)&DAT_101a5694 - *(int *)(DAT_10223188 + 0x98);
    break;
  case 4:
    iVar2 = (int)"NFIRE" - *(int *)(DAT_10223188 + 0x98);
    break;
  case 5:
    iVar2 = (int)"NCHEM" - *(int *)(DAT_10223188 + 0x98);
    break;
  case 6:
    iVar2 = (int)&DAT_101a56a8 - *(int *)(DAT_10223188 + 0x98);
    break;
  case 7:
    iVar2 = (int)&DAT_101a56b0 - *(int *)(DAT_10223188 + 0x98);
    break;
  case 8:
    iVar2 = (int)&DAT_101a56b8 - *(int *)(DAT_10223188 + 0x98);
    break;
  case 9:
    iVar2 = (int)&DAT_101a56bc - *(int *)(DAT_10223188 + 0x98);
    break;
  default:
    iVar2 = 0;
  }
  *(int *)(in_ECX + 0x1b8) = iVar2;
  switch(*(undefined1 *)(in_ECX + 0x1db)) {
  case 1:
    *(int *)(in_ECX + 0x1c0) = (int)&DAT_101a56c0 - *(int *)(DAT_10223188 + 0x98);
    return;
  case 2:
    *(int *)(in_ECX + 0x1c0) = (int)&DAT_101a56c4 - *(int *)(DAT_10223188 + 0x98);
    return;
  case 3:
    *(int *)(in_ECX + 0x1c0) = (int)&DAT_101a56c8 - *(int *)(DAT_10223188 + 0x98);
    return;
  case 4:
    *(int *)(in_ECX + 0x1c0) = (int)"EFIRE" - *(int *)(DAT_10223188 + 0x98);
    return;
  case 5:
    *(int *)(in_ECX + 0x1c0) = (int)"ECHEM" - *(int *)(DAT_10223188 + 0x98);
    return;
  case 6:
    *(int *)(in_ECX + 0x1c0) = (int)&DAT_101a56dc - *(int *)(DAT_10223188 + 0x98);
    return;
  case 7:
    *(int *)(in_ECX + 0x1c0) = (int)&DAT_101a56e4 - *(int *)(DAT_10223188 + 0x98);
    return;
  case 8:
    *(int *)(in_ECX + 0x1c0) = (int)&DAT_101a56ec - *(int *)(DAT_10223188 + 0x98);
    return;
  default:
    *(undefined4 *)(in_ECX + 0x1c0) = 0;
    return;
  }
}

