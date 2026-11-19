// rea decompile_all
// name: FUN_1000d890
// address: 0x1000d890
// body: available
// range: 0x1000d890-0x1000d9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1000d890(byte *param_1)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int in_ECX;
  byte *pbVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  
  if (param_1 == (byte *)0x0) {
    (*DAT_1022303c)(1,"info_group: GetMember called with null szMemberName!?\n");
    return 0;
  }
  iVar9 = 0;
  if (0 < *(int *)(in_ECX + 0xdc)) {
    piVar10 = (int *)(in_ECX + 0xe0);
    do {
      pbVar3 = (byte *)(*piVar10 + *(int *)(DAT_10223188 + 0x98));
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar5;
        bVar11 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_1000d900:
          uVar4 = -(uint)bVar11 | 1;
          goto LAB_1000d905;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar11 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_1000d900;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_1000d905:
      if (uVar4 == 0) {
        return *(int *)(in_ECX + 0x120 + iVar9 * 4);
      }
      iVar9 = iVar9 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar9 < *(int *)(in_ECX + 0xdc));
  }
  if (*(int *)(in_ECX + 0x160) == 0) {
    (*DAT_1022303c)(1,"info_group \"%s\" has no member called \"%s\".\n",
                    *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98),param_1);
    return 0;
  }
  pcVar8 = &DAT_10222d70;
  pcVar6 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x160));
  do {
    cVar2 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar8 = cVar2;
    iVar9 = DAT_10223188;
    pcVar8 = pcVar8 + 1;
    pbVar5 = param_1;
  } while (cVar2 != '\0');
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
  } while (bVar1 != 0);
  uVar4 = (int)pbVar5 - (int)param_1;
  pbVar5 = &DAT_10222d6f;
  do {
    pbVar3 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
  } while (*pbVar3 != 0);
  for (uVar7 = uVar4 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined4 *)pbVar5 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pbVar5 = pbVar5 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pbVar5 = *param_1;
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
  }
  return (int)&DAT_10222d70 - *(int *)(iVar9 + 0x98);
}

