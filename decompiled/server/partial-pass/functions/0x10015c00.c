// rea decompile_all
// name: FUN_10015c00
// address: 0x10015c00
// body: available
// range: 0x10015c00-0x10015cb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015c00(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int in_ECX;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  do {
    iVar6 = FUN_101184e0(iVar6,*(int *)(DAT_10223188 + 0x98) +
                               *(int *)(*(int *)(in_ECX + 4) + 0x1cc));
    if ((iVar6 == 0) || (iVar2 = *(int *)(*(int *)(iVar6 + 4) + 0x20c), iVar2 == 0)) {
      return;
    }
    iVar2 = (*DAT_10223060)(iVar2);
    if (iVar2 == 0) {
      return;
    }
    pcVar5 = "momentary_rot_button";
    pbVar3 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar6 + 4));
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10015c84:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_10015c89;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10015c84;
      pbVar3 = pbVar3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10015c89:
    if (uVar4 == 0) {
      if (param_2 == 0) {
        FUN_10015e30(param_1);
      }
      else {
        FUN_10015cc0(param_1);
      }
    }
  } while( true );
}

