// rea decompile_all
// name: FUN_100882c0
// address: 0x100882c0
// body: available
// range: 0x100882c0-0x10088466 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100882c0(int *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int in_ECX;
  char *pcVar3;
  undefined1 local_60 [16];
  float local_50;
  int local_30;
  undefined1 local_28 [12];
  undefined8 local_1c;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (((*(byte *)(param_1[1] + 0x1a8) & 0x80) != 0) && (DAT_10222e4e != '\0')) {
    (*DAT_1022303c)(1,"FVisible FAIL - FL_NOTARGET\n");
    return 0;
  }
  if ((((DAT_10222ee4 != (int *)0x0) && (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 != 0))
      && (iVar1 = (**(code **)(*param_1 + 0xd0))(), iVar1 != 0)) &&
     (*(float *)(param_1[1] + 0x260) == 3.0)) {
    if (DAT_10222e4e == '\0') {
      return 0;
    }
    (*DAT_1022303c)(1,"FVisible FAIL - fuser3\n");
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar1 + 0x1c4) == 3) {
    if (*(int *)(param_1[1] + 0x1c4) == 0) goto LAB_1008844f;
  }
  else if (*(int *)(param_1[1] + 0x1c4) == 3) {
LAB_1008844f:
    if (DAT_10222e4e == '\0') {
      return 0;
    }
    pcVar3 = "FVisible FAIL - waterlevel\n";
    goto LAB_1008842d;
  }
  local_c = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0xc);
  local_8 = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x180);
  local_10 = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 8);
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x100))(local_28);
  local_1c = *puVar2;
  local_14 = *(undefined4 *)(puVar2 + 1);
  FUN_1011a820(&local_10,&local_1c,1,1,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_60);
  if ((local_50 == 1.0) || (local_30 == *(int *)(param_1[1] + 0x20c))) {
    return 1;
  }
  if (DAT_10222e4e == '\0') {
    return 0;
  }
  pcVar3 = "FVisible FAIL - LOS\n";
LAB_1008842d:
  (*DAT_1022303c)(1,pcVar3);
  return 0;
}

