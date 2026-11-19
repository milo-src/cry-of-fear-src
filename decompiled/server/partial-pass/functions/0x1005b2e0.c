// rea decompile_all
// name: FUN_1005b2e0
// address: 0x1005b2e0
// body: available
// range: 0x1005b2e0-0x1005b3fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b2e0(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  FUN_10116990("models/weapons/mp5/v_mp5.mdl");
  FUN_10116990("models/weapons/mp5/w_mp5.mdl");
  FUN_10116990("models/null.mdl");
  if (*(int *)(in_ECX + 0x16c) != 0) {
    FUN_10116940(*(int *)(in_ECX + 0x16c));
  }
  if (*(int *)(in_ECX + 0x170) != 0) {
    FUN_10116940(*(int *)(in_ECX + 0x170));
  }
  uVar1 = FUN_10116990("models/shell.mdl");
  *(undefined4 *)(in_ECX + 0x1f8) = uVar1;
  FUN_10116990("models/w_9mmclip.mdl");
  FUN_10116a30("weapons/item_get.wav");
  FUN_10116a30("weapons/mp5/mp5_charger_back.wav");
  FUN_10116a30("weapons/mp5/mp5_charger_forward.wav");
  FUN_10116a30("weapons/mp5/mp5_magin.wav");
  FUN_10116a30("weapons/mp5/mp5_magout.wav");
  if (DAT_10222ee4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))();
    if (iVar2 != 0) {
      FUN_10116990("police/models/weapons/tmp/p_tmp.mdl");
    }
  }
  iVar3 = (int)"weapons/mp5/mp5_shoot_loop.wav" - *(int *)(DAT_10223188 + 0x98);
  *(int *)(in_ECX + 0x1a8) = iVar3;
  iVar2 = (int)"weapons/mp5/mp5_shoot_end.wav" - *(int *)(DAT_10223188 + 0x98);
  *(int *)(in_ECX + 0x1ac) = iVar2;
  if (iVar3 != 0) {
    FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + iVar3);
    iVar2 = *(int *)(in_ECX + 0x1ac);
  }
  if (iVar2 != 0) {
    FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + iVar2);
  }
  return;
}

