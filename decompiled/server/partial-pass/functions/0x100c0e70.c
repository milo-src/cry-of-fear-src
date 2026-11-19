// rea decompile_all
// name: FUN_100c0e70
// address: 0x100c0e70
// body: available
// range: 0x100c0e70-0x100c1048 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c0e70(undefined4 param_1,undefined4 param_2,float param_3)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  byte *pbVar4;
  uint uVar5;
  int in_ECX;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = "monster_bosschainsaw";
  piVar2 = *(int **)(in_ECX + 4);
  pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar2);
  pbVar4 = pbVar6;
  do {
    bVar1 = *pbVar4;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_100c0eb0:
      uVar5 = -(uint)bVar8 | 1;
      goto LAB_100c0eb5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_100c0eb0;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_100c0eb5:
  if ((uVar5 != 0) || (piVar2[0x44] != 1)) {
    pcVar7 = "monster_sewerboss";
    do {
      bVar1 = *pbVar6;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100c0ef0:
        uVar5 = -(uint)bVar8 | 1;
        goto LAB_100c0ef5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100c0ef0;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_100c0ef5:
    if ((uVar5 != 0) || (piVar2[0x44] != 1)) {
      if (piVar2[0x4c] == 0) {
        if (*(int *)(in_ECX + 0x218) != *(int *)(in_ECX + 0x2d0)) {
          *(int *)(in_ECX + 0x218) = *(int *)(in_ECX + 0x2d0);
        }
        for (param_3 = (float)piVar2[0x4f] * *(float *)(in_ECX + 0xf0) * param_3; 0.001 < param_3;
            param_3 = param_3 - fVar3) {
          fVar3 = 16.0;
          if (param_3 <= 16.0) {
            fVar3 = param_3;
          }
          FUN_10119420(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                       *(int *)(in_ECX + 700) * 0x10 + 0x238 + in_ECX,fVar3,0);
        }
      }
      else {
        param_3 = *(float *)(in_ECX + 0xf0) * param_3;
        if (0.001 < param_3) {
          do {
            fVar3 = 16.0;
            if (param_3 <= 16.0) {
              fVar3 = param_3;
            }
            FUN_10119420(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                         *(int *)(in_ECX + 700) * 0x10 + 0x238 + in_ECX,fVar3,1);
            param_3 = param_3 - fVar3;
          } while (0.001 < param_3);
          return;
        }
      }
    }
  }
  return;
}

