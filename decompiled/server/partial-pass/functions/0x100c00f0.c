// rea decompile_all
// name: FUN_100c00f0
// address: 0x100c00f0
// body: available
// range: 0x100c00f0-0x100c01f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c00f0(float param_1,float param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int in_ECX;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  float10 fVar8;
  float local_10;
  float local_c;
  float local_8;
  
  pcVar6 = "monster_slowerstuck";
  pbVar5 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(in_ECX + 4));
  pbVar3 = pbVar5;
  do {
    bVar1 = *pbVar3;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_100c0131:
      uVar4 = -(uint)bVar7 | 1;
      goto LAB_100c0136;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_100c0131;
    pbVar3 = pbVar3 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_100c0136:
  if ((uVar4 != 0) && (*(char *)(in_ECX + 9) == '\0')) {
    pcVar6 = "monster_spitter";
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100c0170:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_100c0175;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100c0170;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100c0175:
    if (uVar4 != 0) {
      if (*(int *)(in_ECX + 0x2d0) == 0xb) {
        local_10 = -param_2;
        param_2 = param_1;
      }
      else {
        local_10 = param_1;
        if (*(int *)(in_ECX + 0x2d0) == 0xc) {
          local_10 = param_2;
          param_2 = param_1;
        }
      }
      iVar2 = *(int *)(in_ECX + 4);
      local_c = param_2 - *(float *)(iVar2 + 0xc);
      local_8 = param_3 - *(float *)(iVar2 + 0x10);
      local_10 = local_10 - *(float *)(iVar2 + 8);
      fVar8 = (float10)FUN_1011a930(&local_10);
      *(float *)(*(int *)(in_ECX + 4) + 0xac) = (float)fVar8;
    }
  }
  return;
}

