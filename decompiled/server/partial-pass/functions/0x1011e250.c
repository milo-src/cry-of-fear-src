// rea decompile_all
// name: FUN_1011e250
// address: 0x1011e250
// body: available
// range: 0x1011e250-0x1011e326 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1011e250(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  puVar5 = &DAT_10231898;
  do {
    pbVar4 = (byte *)puVar5[-2];
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(*(int *)(DAT_10223188 + 0x98) + param_1);
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_1011e295:
          uVar3 = -(uint)bVar7 | 1;
          goto LAB_1011e29a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_1011e295;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_1011e29a:
      if (uVar3 == 0) {
        return (&DAT_10231894)[iVar6 * 0xb];
      }
    }
    pbVar4 = (byte *)*puVar5;
    if (pbVar4 != (byte *)0x0) {
      pbVar2 = (byte *)(*(int *)(DAT_10223188 + 0x98) + param_1);
      do {
        bVar1 = *pbVar2;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_1011e2d0:
          uVar3 = -(uint)bVar7 | 1;
          goto LAB_1011e2d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_1011e2d0;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_1011e2d5:
      if (uVar3 == 0) {
        return (&DAT_1023189c)[iVar6 * 0xb];
      }
    }
    puVar5 = puVar5 + 0xb;
    iVar6 = iVar6 + 1;
    if (0x10231e17 < (int)puVar5) {
      (*DAT_1022303c)(1,"MaxAmmoCarry() doesn\'t recognize \'%s\'!\n",
                      *(int *)(DAT_10223188 + 0x98) + param_1);
      return 0xffffffff;
    }
  } while( true );
}

