// rea decompile_all
// name: FUN_1005d690
// address: 0x1005d690
// body: available
// range: 0x1005d690-0x1005d828 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d690(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  iVar1 = FUN_10118460(0,"cof_numeralplate_right");
  iVar2 = FUN_10118460(0,"cof_telephone");
  iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x110);
  if (iVar4 == 1) {
    pcVar5 = "inventoryitems/leftplate_1.txt";
    pcVar7 = "51173896";
LAB_1005d702:
    iVar3 = (int)pcVar5 - *(int *)(DAT_10223188 + 0x98);
    iVar8 = (int)pcVar7 - *(int *)(DAT_10223188 + 0x98);
  }
  else {
    if (iVar4 == 2) {
      pcVar5 = "inventoryitems/leftplate_2.txt";
      pcVar7 = "51173979";
      goto LAB_1005d702;
    }
    iVar3 = iVar2;
    iVar8 = iVar2;
    if (iVar4 == 3) {
      pcVar5 = "inventoryitems/leftplate_3.txt";
      pcVar7 = "51177816";
      goto LAB_1005d702;
    }
  }
  if (iVar1 == 0) {
    (*DAT_1022303c)(1,"cof_numeralplate_left: Unable to find cof_numeralplate_right!\n");
    return;
  }
  *(int *)(*(int *)(iVar1 + 4) + 0x110) = iVar4;
  iVar4 = *(int *)(*(int *)(iVar1 + 4) + 0x110);
  if (iVar4 == 1) {
    pcVar5 = "inventoryitems/rightplate_1.txt";
  }
  else if (iVar4 == 2) {
    pcVar5 = "inventoryitems/rightplate_2.txt";
  }
  else {
    iVar6 = iVar2;
    if (iVar4 != 3) goto LAB_1005d75d;
    pcVar5 = "inventoryitems/rightplate_3.txt";
  }
  iVar6 = (int)pcVar5 - *(int *)(DAT_10223188 + 0x98);
LAB_1005d75d:
  iVar4 = *(int *)(in_ECX + 4);
  iVar3 = FUN_100179f0("item_key",iVar3,iVar4 + 8,iVar4 + 0x50,*(undefined4 *)(iVar4 + 0x20c),0);
  iVar4 = *(int *)(iVar1 + 4);
  iVar4 = FUN_100179f0("item_key",iVar6,iVar4 + 8,iVar4 + 0x50,*(undefined4 *)(iVar4 + 0x20c),0);
  if (iVar4 == 0) {
    (*DAT_1022303c)(1,"cof_numeralplate_left: Unable to create RIGHT key!\n");
  }
  else {
    FUN_10119900(iVar1);
  }
  if (iVar3 == 0) {
    (*DAT_1022303c)(1,"cof_numeralplate_left: Unable to create LEFT key!\n");
  }
  else {
    FUN_10119900(in_ECX);
  }
  if (iVar2 == 0) {
    (*DAT_1022303c)(1,"cof_numeralplate_left: Unable to find telephone entity!\n");
    return;
  }
  *(int *)(*(int *)(iVar2 + 4) + 0x1d8) = iVar8;
  return;
}

