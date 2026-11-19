// rea decompile_all
// name: FUN_10031f00
// address: 0x10031f00
// body: available
// range: 0x10031f00-0x10031fe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10031f00(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = FUN_100e0310(param_1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x16c) != 0)) {
    return (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x16c));
  }
  if (param_1 - 1U < 0x15) {
    if (param_2 == '\0') {
      switch(param_1) {
      case 1:
        return "models/weapons/flashlight/v_flashlight.mdl";
      case 2:
        return "models/weapons/mobile/v_mobile.mdl";
      case 3:
        goto switchD_10031f4f_caseD_3;
      case 6:
        goto switchD_10031f4f_caseD_6;
      case 7:
        goto switchD_10031f4f_caseD_7;
      case 10:
        return "models/weapons/lantern/v_lantern.mdl";
      case 0xc:
        goto switchD_10031f4f_caseD_c;
      case 0xd:
        return "models/weapons/flare/v_flare.mdl";
      case 0x10:
        goto switchD_10031f4f_caseD_10;
      case 0x13:
        goto switchD_10031f4f_caseD_13;
      case 0x15:
        goto switchD_10031f4f_caseD_15;
      }
    }
    else {
      switch(param_1) {
      case 3:
switchD_10031f4f_caseD_3:
        return "models/weapons/glock/v_glock.mdl";
      case 6:
switchD_10031f4f_caseD_6:
        return "models/weapons/switchblade/v_switchblade.mdl";
      case 7:
switchD_10031f4f_caseD_7:
        return "models/weapons/p345/v_p345.mdl";
      case 0xc:
switchD_10031f4f_caseD_c:
        return "models/weapons/nightstick/v_nightstick.mdl";
      case 0x10:
switchD_10031f4f_caseD_10:
        return "models/weapons/branch/v_branch.mdl";
      case 0x13:
switchD_10031f4f_caseD_13:
        return "models/weapons/vp70/v_vp70.mdl";
      case 0x15:
switchD_10031f4f_caseD_15:
        return "models/weapons/revolver/v_revolver.mdl";
      }
    }
  }
  return "models/null.mdl";
}

