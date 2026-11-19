// rea decompile_all
// name: FUN_100fbdd0
// address: 0x100fbdd0
// body: available
// range: 0x100fbdd0-0x100fbf28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100fbdd0(int *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int in_ECX;
  char *pcVar7;
  bool bVar8;
  
  if (param_1 == (int *)0x0) {
    (*DAT_1022303c)(2,"Not Playing sentence %s\n",
                    *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x180));
    return 0;
  }
  uVar2 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4);
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x1a4) != 0) {
    uVar3 = *(undefined4 *)(in_ECX + 0x188);
    pbVar4 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x1a4));
    pcVar7 = "player";
    pbVar5 = pbVar4;
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100fbe63:
        uVar6 = -(uint)bVar8 | 1;
        goto LAB_100fbe68;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100fbe63;
      pbVar5 = pbVar5 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_100fbe68:
    if (uVar6 == 0) {
      uVar3 = 0x45800000;
    }
    uVar3 = FUN_101185c0(pbVar4,param_1[1] + 8,uVar3);
  }
  (**(code **)(*param_1 + 0x1a4))
            (*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x180),
             *(undefined4 *)(in_ECX + 0x18c),*(undefined4 *)(in_ECX + 0x198),
             *(undefined4 *)(in_ECX + 0x194),~(uVar2 >> 3) & 1,uVar3);
  (*DAT_1022303c)(2,"Playing sentence %s (%.1f)\n",
                  *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x180),
                  (double)*(float *)(in_ECX + 0x18c));
  FUN_10102930(0,3,0);
  return 1;
}

