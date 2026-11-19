// rea decompile_all
// name: FUN_100e24a0
// address: 0x100e24a0
// body: available
// range: 0x100e24a0-0x100e252b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100e24a0(void)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int in_ECX;
  char *pcVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  piVar2 = (int *)(in_ECX + 0x2514);
  iVar6 = 0;
  do {
    iVar7 = *piVar2;
    if (iVar7 != 0) {
      do {
        pcVar5 = "weapon_glock";
        pbVar3 = (byte *)(**(int **)(iVar7 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar3;
          bVar8 = bVar1 < (byte)*pcVar5;
          if (bVar1 != *pcVar5) {
LAB_100e24f0:
            uVar4 = -(uint)bVar8 | 1;
            goto LAB_100e24f5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar3[1];
          bVar8 = bVar1 < (byte)pcVar5[1];
          if (bVar1 != pcVar5[1]) goto LAB_100e24f0;
          pbVar3 = pbVar3 + 2;
          pcVar5 = pcVar5 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_100e24f5:
        if ((uVar4 == 0) && (*(char *)(iVar7 + 0x200) != '\0')) {
          return 1;
        }
        iVar7 = *(int *)(iVar7 + 0x164);
      } while (iVar7 != 0);
    }
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 1;
    if (5 < iVar6) {
      return (uint)piVar2 & 0xffffff00;
    }
  } while( true );
}

