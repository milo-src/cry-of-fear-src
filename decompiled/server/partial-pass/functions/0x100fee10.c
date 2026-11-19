// rea decompile_all
// name: FUN_100fee10
// address: 0x100fee10
// body: available
// range: 0x100fee10-0x100fef56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fee10(int param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  char local_48 [12];
  char local_3c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(param_1 + 0x30);
  if ((iVar3 == 0) && (iVar3 = (*DAT_1022305c)(0), iVar3 == 0)) {
LAB_100fee61:
    local_4c = param_5;
    local_54 = param_4;
    local_58 = param_3;
    local_60 = param_2;
    uVar4 = (*DAT_1022305c)(0);
    pcVar5 = (char *)(*DAT_10222fd8)(uVar4,&local_60,&local_54);
  }
  else {
    piVar1 = *(int **)(iVar3 + 0x7c);
    if ((piVar1 != (int *)0x0) &&
       ((iVar3 = (**(code **)(*piVar1 + 0x50))(), iVar3 != 0 &&
        (iVar3 = (**(code **)(*piVar1 + 0x50))(), iVar3 != 1)))) goto LAB_100fef43;
    local_60 = param_2;
    local_58 = param_3;
    local_54 = param_4;
    local_4c = param_5;
    if (piVar1 == (int *)0x0) goto LAB_100fee61;
    pcVar5 = (char *)(*DAT_10222fd8)(*(undefined4 *)(piVar1[1] + 0x20c),&local_60,&local_54);
  }
  if (pcVar5 != (char *)0x0) {
    cVar2 = *pcVar5;
    if ((cVar2 == '-') || (cVar2 == '+')) {
      cVar2 = pcVar5[2];
      pcVar5 = pcVar5 + 2;
    }
    if ((((cVar2 == '{') || (cVar2 == '!')) || (cVar2 == '~')) || (cVar2 == ' ')) {
      pcVar5 = pcVar5 + 1;
    }
    pcVar6 = pcVar5;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar6[(int)(local_48 + (-1 - (int)pcVar5))] = cVar2;
    } while (cVar2 != '\0');
    local_3c = cVar2;
    FUN_100fedc0(local_48);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_100fef43:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

