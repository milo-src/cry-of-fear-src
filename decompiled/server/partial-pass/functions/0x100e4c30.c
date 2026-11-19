// rea decompile_all
// name: FUN_100e4c30
// address: 0x100e4c30
// body: available
// range: 0x100e4c30-0x100e4d59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100e4c30(void)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int in_ECX;
  byte *pbVar4;
  bool bVar5;
  
  if (*(int *)(in_ECX + 0xc4) != 4) {
    pbVar4 = &DAT_101dcb74;
    pbVar2 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_100e4c78:
        uVar3 = -(uint)bVar5 | 1;
        goto LAB_100e4c7d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_100e4c78;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100e4c7d:
    if (uVar3 != 0) {
      pbVar4 = &DAT_101dcb88;
      pbVar2 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      do {
        bVar1 = *pbVar2;
        bVar5 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_100e4cc0:
          uVar3 = -(uint)bVar5 | 1;
          goto LAB_100e4cc5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_100e4cc0;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_100e4cc5:
      if (uVar3 != 0) {
        pbVar4 = &DAT_101dcb9c;
        pbVar2 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        do {
          bVar1 = *pbVar2;
          bVar5 = bVar1 < *pbVar4;
          if (bVar1 != *pbVar4) {
LAB_100e4d04:
            uVar3 = -(uint)bVar5 | 1;
            goto LAB_100e4d09;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar2[1];
          bVar5 = bVar1 < pbVar4[1];
          if (bVar1 != pbVar4[1]) goto LAB_100e4d04;
          pbVar2 = pbVar2 + 2;
          pbVar4 = pbVar4 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_100e4d09:
        if (uVar3 != 0) {
          pbVar4 = &DAT_101dcbb0;
          pbVar2 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
          do {
            bVar1 = *pbVar2;
            bVar5 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_100e4d44:
              uVar3 = -(uint)bVar5 | 1;
              goto LAB_100e4d49;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar2[1];
            bVar5 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_100e4d44;
            pbVar2 = pbVar2 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          uVar3 = 0;
LAB_100e4d49:
          if (uVar3 != 0) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

