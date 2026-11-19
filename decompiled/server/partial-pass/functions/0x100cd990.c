// rea decompile_all
// name: FUN_100cd990
// address: 0x100cd990
// body: available
// range: 0x100cd990-0x100cdaee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100cd990(undefined4 param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  
  if ((*in_ECX == 0) || (in_ECX[1] == 0)) {
    (*DAT_1022303c)(2,"Graph not ready!\n");
    return 0;
  }
  if ((param_2 == (int *)0x0) || (iVar1 = (*DAT_10223060)(param_2[0x83]), iVar1 == 0)) {
    (*DAT_1022303c)(2,"dead path ent!\n");
    return 1;
  }
  iVar1 = FUN_1000aaf0(param_2,"func_door");
  if ((iVar1 == 0) && (iVar1 = FUN_1000aaf0(param_2,"func_door_rotating"), iVar1 == 0)) {
    iVar1 = FUN_1000aaf0(param_2,"func_breakable");
    if ((iVar1 != 0) && (param_4 == 1)) {
      return 1;
    }
    (*DAT_1022303c)(2,"Unhandled Ent in Path %s\n",*(int *)(DAT_10223188 + 0x98) + *param_2);
    return 0;
  }
  iVar1 = param_2[0x83];
  if ((iVar1 == 0) && (iVar1 = (*DAT_1022305c)(0), iVar1 == 0)) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(iVar1 + 0x7c);
  }
  if ((param_2[0x69] & 0x100U) != 0) {
    if ((param_3 & 0x200) != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*piVar2 + 0x80))();
    if (iVar1 != 0) {
      return 0;
    }
    if ((*(byte *)(param_2 + 0x69) & 0x20) == 0) {
      return 0;
    }
    return 1;
  }
  iVar1 = (**(code **)(*piVar2 + 0x80))();
  if ((iVar1 == 0) && ((*(byte *)(param_2 + 0x69) & 0x20) != 0)) {
    return 1;
  }
  if ((param_3 & 0x200) != 0) {
    if ((param_2[0x69] & 0x200U) == 0) {
      return 1;
    }
    if (param_4 == 1) {
      return 1;
    }
  }
  return 0;
}

