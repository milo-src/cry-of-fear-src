// rea decompile_all
// name: FUN_100d0490
// address: 0x100d0490
// body: available
// range: 0x100d0490-0x100d0623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d0490(undefined4 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    goto switchD_100d04a0_caseD_0;
  case 1:
    *param_1 = 0x3c0f0846;
    param_1[1] = 0x3c0f0846;
    param_1[2] = 0x3c0f0846;
    return;
  case 2:
    *param_1 = 0x3c8ef34d;
    param_1[1] = 0x3c8ef34d;
    param_1[2] = 0x3c8ef34d;
    return;
  case 3:
    *param_1 = 0x3cd67770;
    param_1[1] = 0x3cd67770;
    param_1[2] = 0x3cd67770;
    return;
  case 4:
    *param_1 = 0x3d0ef34d;
    param_1[1] = 0x3d0ef34d;
    param_1[2] = 0x3d0ef34d;
    return;
  case 5:
    *param_1 = 0x3d32aae3;
    param_1[1] = 0x3d32aae3;
    param_1[2] = 0x3d32aae3;
    return;
  case 6:
    *param_1 = 0x3d566278;
    param_1[1] = 0x3d566278;
    param_1[2] = 0x3d566278;
    return;
  case 7:
    *param_1 = 0x3d7a0f91;
    param_1[1] = 0x3d7a0f91;
    param_1[2] = 0x3d7a0f91;
    return;
  case 8:
    *param_1 = 0x3d8ede55;
    param_1[1] = 0x3d8ede55;
    param_1[2] = 0x3d8ede55;
    return;
  case 9:
    *param_1 = 0x3da0afa3;
    param_1[1] = 0x3da0afa3;
    param_1[2] = 0x3da0afa3;
    return;
  case 10:
    *param_1 = 0x3db280f1;
    param_1[1] = 0x3db280f1;
    param_1[2] = 0x3db280f1;
    return;
  default:
    (*DAT_1022303c)(1,&DAT_101b1774);
    (*DAT_1022303c)(1," * GetConeVectorForAngle error: %d - unsupported angle value\n",param_2);
    (*DAT_1022303c)(1,&DAT_101b1774);
switchD_100d04a0_caseD_0:
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  case 0xf:
    *param_1 = 0x3e05a9a8;
    param_1[1] = 0x3e05a9a8;
    param_1[2] = 0x3e05a9a8;
    return;
  case 0x14:
    *param_1 = 0x3e31d14e;
    param_1[1] = 0x3e31d14e;
    param_1[2] = 0x3e31d14e;
    return;
  }
}

