// rea decompile_all
// name: FUN_1003d6a0
// address: 0x1003d6a0
// body: available
// range: 0x1003d6a0-0x1003d93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d6a0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x1f8) = 0;
  *(undefined4 *)(in_ECX + 0x128) = 0;
  if (*(int *)(*(int *)(in_ECX + 4) + 0x248) == 1) {
    if (*(int *)(in_ECX + 0x160) != 0) {
      (*DAT_10223000)(1,DAT_10226490,0,
                      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/signal.aur");
      (*DAT_10223008)(1);
      (*DAT_10223020)("models/weapons/flare/v_flare.mdl");
      (*DAT_10223010)(0);
      (*DAT_10223004)();
      (*DAT_10223000)(1,DAT_10226490,0,
                      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/blacksmoke.aur");
      (*DAT_10223008)(1);
      (*DAT_10223020)("models/weapons/flare/v_flare.mdl");
      (*DAT_10223010)(0);
      (*DAT_10223004)();
      (*DAT_10223000)(1,DAT_10226490,0,
                      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/flare_sparks.aur");
      (*DAT_10223008)(1);
      (*DAT_10223020)("models/weapons/flare/v_flare.mdl");
      (*DAT_10223010)(0);
      (*DAT_10223004)();
      (*DAT_10223000)(1,DAT_10226490,0,
                      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/flare_glow.aur");
      (*DAT_10223008)(1);
      (*DAT_10223020)("models/weapons/flare/v_flare.mdl");
      (*DAT_10223010)(2);
      (*DAT_10223004)();
      FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c),1,
                   "weapons/flare/flare_burn.wav",0x3e99999a,0x3f4ccccd,0,100);
      *(float *)(in_ECX + 0x1fc) = *DAT_10223188 + 6.9;
      uVar1 = *(uint *)(*(int *)(in_ECX + 0x160) + 0x5d0);
      if (((uVar1 & 0x10) == 0) && (*(char *)(in_ECX + 0x1f9) == '\0')) {
        *(uint *)(*(int *)(in_ECX + 0x160) + 0x5d0) = uVar1 | 0x10;
      }
    }
    FUN_1011c1a0("models/weapons/flare/v_flare.mdl","models/null.mdl",1,"crowbar",0,0);
    return;
  }
  if (*(char *)(*(int *)(in_ECX + 0x168) + 0x3f4 + *(int *)(in_ECX + 0x160)) == '\0') {
    *(undefined1 *)(*(int *)(in_ECX + 0x168) + 0x3f4 + *(int *)(in_ECX + 0x160)) = 1;
    FUN_1011c1a0("models/weapons/flare/v_flare.mdl","models/null.mdl",0x1f,"crowbar",0,0);
    return;
  }
  FUN_1011c1a0("models/weapons/flare/v_flare.mdl","models/null.mdl",0,"crowbar",0,0);
  return;
}

