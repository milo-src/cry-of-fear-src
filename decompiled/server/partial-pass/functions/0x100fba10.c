// rea decompile_all
// name: FUN_100fba10
// address: 0x100fba10
// body: available
// range: 0x100fba10-0x100fbb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fbb12 to 0x1000aad0 FUN_1000aad0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fba10(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  
  pcVar6 = "scripted_sequence";
  piVar7 = (int *)(param_1 + 0x80);
  piVar4 = (int *)0x0;
  if (param_1 != 0) {
    piVar4 = piVar7;
  }
  pbVar2 = (byte *)(*piVar4 + *(int *)(DAT_10223188 + 0x98));
  do {
    bVar1 = *pbVar2;
    bVar8 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100fba60:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_100fba65;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar8 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100fba60;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100fba65:
  if (uVar3 != 0) {
    pcVar6 = "scripted_action";
    piVar4 = (int *)0x0;
    if (param_1 != 0) {
      piVar4 = piVar7;
    }
    pbVar2 = (byte *)(*piVar4 + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100fbaa0:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_100fbaa5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100fbaa0;
      pbVar2 = pbVar2 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100fbaa5:
    if (uVar3 != 0) {
      return;
    }
  }
  if (param_1 == 0) {
    iVar5 = FUN_100fa1a0(0);
    piVar7 = (int *)0x0;
  }
  else {
    iVar5 = FUN_100fa1a0(piVar7);
  }
  *(undefined4 *)(iVar5 + 0x368) = 0;
  FUN_100fa1a0(piVar7);
  piVar7 = (int *)FUN_10017790();
  if (((piVar7 != (int *)0x0) && (iVar5 = (**(code **)(*piVar7 + 0x78))(), iVar5 != 0)) &&
     (*(int *)(iVar5 + 0x224) == 6)) {
    *(undefined4 *)(iVar5 + 0x348) = 2;
    FUN_100fa530();
    FUN_1000aad0();
    return;
  }
  return;
}

