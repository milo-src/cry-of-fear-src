// rea decompile_all
// name: FUN_10087950
// address: 0x10087950
// body: available
// range: 0x10087950-0x10087af2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10087950(float param_1,int param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_8c [48];
  int local_5c;
  undefined1 local_54 [48];
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = (**(code **)(*in_ECX + 0xd0))();
  if (iVar1 == 0) {
    FUN_10119240(in_ECX[1] + 0x50);
  }
  else {
    FUN_10119320();
  }
  iVar1 = in_ECX[1];
  local_1c = *(float *)(iVar1 + 8);
  local_18 = *(float *)(iVar1 + 0xc);
  local_14 = *(float *)(iVar1 + 0xfc) * 0.5 + *(float *)(iVar1 + 0x10);
  local_10 = *(float *)(DAT_10223188 + 0x28) * param_1 + local_1c;
  local_c = *(float *)(DAT_10223188 + 0x2c) * param_1 + local_18;
  local_8 = *(float *)(DAT_10223188 + 0x30) * param_1 + local_14;
  FUN_1011a7e0(&local_1c,&local_10,0,3,*(undefined4 *)(iVar1 + 0x20c),local_54);
  if (((DAT_10222ee4 != (int *)0x0) && (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 != 0))
     && (iVar1 = 1, 0 < *(int *)(DAT_10223188 + 0x90))) {
    do {
      piVar2 = (int *)FUN_10119680(iVar1);
      if (((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0xbc))(), iVar3 != 0)) &&
         (FUN_1011a860(&local_1c,&local_10,3,*(undefined4 *)(piVar2[1] + 0x20c),local_8c),
         local_5c != 0)) {
        local_24 = local_5c;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 <= *(int *)(DAT_10223188 + 0x90));
  }
  if ((local_24 != 0) &&
     ((piVar2 = *(int **)(local_24 + 0x7c), param_4 == '\0' ||
      (iVar1 = (**(code **)(*piVar2 + 0xd0))(), iVar1 != 0)))) {
    if (0 < param_2) {
      (**(code **)(*piVar2 + 100))(in_ECX[1],in_ECX[1],(float)param_2,param_3);
    }
    return piVar2;
  }
  return (int *)0x0;
}

