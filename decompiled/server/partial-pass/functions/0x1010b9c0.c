// rea decompile_all
// name: FUN_1010b9c0
// address: 0x1010b9c0
// body: available
// range: 0x1010b9c0-0x1010ba7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1010b9c0(int *param_1,undefined4 param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  bool bVar9;
  
  cVar2 = (**(code **)(*param_1 + 0x40))();
  if (cVar2 < '\0') {
    return 1;
  }
  if ((*(int *)(param_1[1] + 0x108) == 0xc) && (iVar3 = *(int *)(param_1[1] + 0x198), iVar3 != 0)) {
    param_1 = *(int **)(iVar3 + 0x7c);
  }
  uVar8 = 1;
  iVar3 = FUN_10118590(0,param_2);
  do {
    if (iVar3 == 0) {
      return uVar8;
    }
    pcVar7 = "trigger_transition";
    pbVar4 = (byte *)(**(int **)(iVar3 + 4) + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_1010ba46:
        uVar5 = -(uint)bVar9 | 1;
        goto LAB_1010ba4b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_1010ba46;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_1010ba4b:
    if (uVar5 == 0) {
      iVar6 = FUN_10017d80(param_1);
      if (iVar6 != 0) {
        return 1;
      }
      uVar8 = 0;
    }
    iVar3 = FUN_10118590(iVar3,param_2);
  } while( true );
}

