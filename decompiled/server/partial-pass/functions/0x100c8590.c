// rea decompile_all
// name: FUN_100c8590
// address: 0x100c8590
// body: available
// range: 0x100c8590-0x100c86bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c8590(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined2 *puVar8;
  char local_408 [512];
  char local_208 [512];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pcVar2 = param_1 + 1;
  if (*param_1 != '\\') {
    pcVar2 = param_1;
  }
  while( true ) {
    pcVar4 = local_408;
    cVar1 = *pcVar2;
    while (cVar1 != '\\') {
      if (cVar1 == '\0') goto LAB_100c86af;
      pcVar2 = pcVar2 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar2;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 1;
    *pcVar4 = '\0';
    pcVar4 = local_208;
    while ((cVar1 != '\\' && (cVar1 != '\0'))) {
      pcVar2 = pcVar2 + 1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar2;
    }
    *pcVar4 = '\0';
    pcVar4 = local_408;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)local_408;
    pcVar4 = (char *)(param_2 + -1);
    do {
      pcVar7 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar7 != '\0');
    pcVar7 = local_408;
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar4 = pcVar4 + 4;
    }
    pcVar6 = local_208;
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar4 = pcVar4 + 1;
    }
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (pcVar6 != local_208 + 1) {
      puVar8 = (undefined2 *)(param_2 + -1);
      do {
        pcVar4 = (char *)((int)puVar8 + 1);
        puVar8 = (undefined2 *)((int)puVar8 + 1);
      } while (*pcVar4 != '\0');
      *puVar8 = 0x20;
      pcVar4 = local_208;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)local_208;
      pcVar4 = (char *)(param_2 + -1);
      do {
        pcVar7 = pcVar4 + 1;
        pcVar4 = pcVar4 + 1;
      } while (*pcVar7 != '\0');
      pcVar7 = local_208;
      for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar4 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar4 = pcVar4 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar4 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar4 = pcVar4 + 1;
      }
    }
    puVar8 = (undefined2 *)(param_2 + -1);
    do {
      pcVar4 = (char *)((int)puVar8 + 1);
      puVar8 = (undefined2 *)((int)puVar8 + 1);
    } while (*pcVar4 != '\0');
    *puVar8 = 10;
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 1;
  }
LAB_100c86af:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

