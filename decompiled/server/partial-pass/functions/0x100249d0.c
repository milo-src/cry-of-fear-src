// rea decompile_all
// name: FUN_100249d0
// address: 0x100249d0
// body: available
// range: 0x100249d0-0x10024c6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10024c6a to 0x100c0430 FUN_100c0430 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100249d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x218) == 1) {
    *(undefined4 *)(in_ECX + 0x218) = 0x16;
  }
  if (*(int *)(*(int *)(in_ECX + 4) + 0x248) == 0) {
    iVar1 = FUN_10017780();
    if (iVar1 != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x248) = 1;
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x160) = 0x44;
      (*DAT_10223000)(2,DAT_10226490,0,0);
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/signal.aur");
      (*DAT_10223008)(0);
      (*DAT_10223020)("models/booksimon.mdl");
      (*DAT_10223010)(3);
      (*DAT_10223004)();
      (*DAT_10223000)(2,DAT_10226490,0,0);
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/blacksmoke.aur");
      (*DAT_10223008)(0);
      (*DAT_10223020)("models/booksimon.mdl");
      (*DAT_10223010)(3);
      (*DAT_10223004)();
      (*DAT_10223000)(2,DAT_10226490,0,0);
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/flare_sparks.aur");
      (*DAT_10223008)(0);
      (*DAT_10223020)("models/booksimon.mdl");
      (*DAT_10223010)(3);
      (*DAT_10223004)();
      (*DAT_10223000)(2,DAT_10226490,0,0);
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223010)(uVar2);
      (*DAT_10223020)("aurora/flare_glow.aur");
      (*DAT_10223008)(0);
      (*DAT_10223020)("models/booksimon.mdl");
      (*DAT_10223010)(3);
      (*DAT_10223004)();
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"weapons/flare/flare_burn.wav",
                   0x3e99999a,0x3f4ccccd,0,100);
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,"weapons/flare/flare_ignite.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      *(float *)(*(int *)(in_ECX + 4) + 0x1b8) = *DAT_10223188 + 6.9;
    }
  }
  iVar1 = *(int *)(in_ECX + 4);
  if ((*(float *)(iVar1 + 0x1b8) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar1 + 0x1b8)) &&
     (*(int *)(iVar1 + 0x248) != 0)) {
    FUN_100fc9f0(*(undefined4 *)(iVar1 + 0x20c),3,"weapons/flare/flare_burn.wav",0x3e99999a,
                 0x3f4ccccd,0,100);
    *(float *)(*(int *)(in_ECX + 4) + 0x1b8) = *DAT_10223188 + 6.9;
  }
  FUN_100c0430();
  return;
}

