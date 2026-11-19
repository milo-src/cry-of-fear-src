// rea decompile_all
// name: FUN_10109d40
// address: 0x10109d40
// body: available
// range: 0x10109d40-0x10109f21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10109d40(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  int *piVar8;
  
  if ((DAT_10222ee4 != (int *)0x0) && (iVar5 = (**(code **)(*DAT_10222ee4 + 0x24))(), iVar5 != 0)) {
    return;
  }
  if (*DAT_10223188 == *(float *)(*(int *)(in_ECX + 4) + 0x1e8)) {
    return;
  }
  *(float *)(*(int *)(in_ECX + 4) + 0x1e8) = *DAT_10223188;
  iVar5 = (*DAT_10223068)(1);
  if ((iVar5 == 0) && (iVar5 = (*DAT_1022305c)(0), iVar5 == 0)) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)(iVar5 + 0x7c);
  }
  pcVar1 = (char *)(in_ECX + 0x1a0);
  iVar5 = FUN_1010b9c0(piVar8,pcVar1);
  if (iVar5 != 0) {
    if ((piVar8 != (int *)0x0) && (iVar5 = (**(code **)(*piVar8 + 0xd0))(), iVar5 != 0)) {
      piVar8[0x132] = 0x539;
    }
    if ((*(int *)(in_ECX + 0x1c0) != 0) && (iVar5 = FUN_10107890(0), iVar5 != 0)) {
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0x1cc) = *(undefined4 *)(in_ECX + 0x1c0);
      *(undefined4 *)(iVar5 + 0xdc) = *(undefined4 *)(in_ECX + 0x1c4);
      iVar6 = piVar8[1];
      iVar3 = *(int *)(iVar5 + 4);
      *(undefined8 *)(iVar3 + 8) = *(undefined8 *)(iVar6 + 8);
      *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar6 + 0x10);
      FUN_100167d0(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
    }
    pcVar7 = (char *)(in_ECX + 0x180);
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar7[0x10231013 - (in_ECX + 0x180)] = cVar2;
    } while (cVar2 != '\0');
    FUN_10017740(param_1);
    FUN_10102930(param_1,3,0);
    DAT_10231034 = 0;
    iVar5 = FUN_1010ada0(pcVar1);
    if ((iVar5 != 0) && (iVar6 = (*DAT_10223060)(iVar5), iVar6 != 0)) {
      pcVar7 = pcVar1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar7[0x10231033 - (int)pcVar1] = cVar2;
        pfVar4 = DAT_10223188;
      } while (cVar2 != '\0');
      *(undefined8 *)(DAT_10223188 + 0x28) = *(undefined8 *)(iVar5 + 0x88);
      pfVar4[0x2a] = *(float *)(iVar5 + 0x90);
    }
    (*DAT_1022303c)(1,"CHANGE LEVEL: %s %s\n",&DAT_10231014,&DAT_10231034);
    (*DAT_10222f60)(&DAT_10231014,&DAT_10231034);
    return;
  }
  (*DAT_1022303c)(2,"Player isn\'t in the transition volume %s, aborting\n",pcVar1);
  return;
}

