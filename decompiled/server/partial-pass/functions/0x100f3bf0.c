// rea decompile_all
// name: FUN_100f3bf0
// address: 0x100f3bf0
// body: available
// range: 0x100f3bf0-0x100f3d70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f3bf0(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  
  piVar3 = (int *)FUN_101186b0(0,&stack0x00000004,0x44800000);
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar6 = *(int *)piVar3[1];
    if (iVar6 != 0) {
      iVar2 = ((int *)piVar3[1])[0x83];
      pcVar7 = "monster_spitter";
      pbVar4 = (byte *)(*(int *)(-(uint)(iVar2 != 0) & iVar2 + 0x80U) +
                       *(int *)(DAT_10223188 + 0x98));
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < (byte)*pcVar7;
        if (bVar1 != *pcVar7) {
LAB_100f3c70:
          uVar5 = -(uint)bVar8 | 1;
          goto LAB_100f3c75;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < (byte)pcVar7[1];
        if (bVar1 != pcVar7[1]) goto LAB_100f3c70;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_100f3c75:
      if ((uVar5 != 0) &&
         (iVar6 = FUN_1013f5f0(iVar6 + *(int *)(DAT_10223188 + 0x98),"monster_"), iVar6 != 0)) {
        pcVar7 = "monster_generic";
        pbVar4 = (byte *)(*(int *)(-(uint)(*(int *)(piVar3[1] + 0x20c) != 0) &
                                  *(int *)(piVar3[1] + 0x20c) + 0x80U) +
                         *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar4;
          bVar8 = bVar1 < (byte)*pcVar7;
          if (bVar1 != *pcVar7) {
LAB_100f3ce0:
            uVar5 = -(uint)bVar8 | 1;
            goto LAB_100f3ce5;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar8 = bVar1 < (byte)pcVar7[1];
          if (bVar1 != pcVar7[1]) goto LAB_100f3ce0;
          pbVar4 = pbVar4 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_100f3ce5:
        if ((((uVar5 != 0) && (iVar6 = (**(code **)(*piVar3 + 0xbc))(), iVar6 != 0)) &&
            (iVar6 = (**(code **)(*piVar3 + 0x78))(), iVar6 != 0)) &&
           (((*(float *)(iVar6 + 0x1e4) != (float)DAT_10222f34 ||
             (*(float *)(iVar6 + 0x1e8) != DAT_10222f34._4_4_)) ||
            (*(float *)(iVar6 + 0x1ec) != DAT_10222f3c)))) {
          FUN_10119fe0(iVar6,iVar6 + 0x1e4);
        }
      }
    }
    piVar3 = (int *)FUN_101186b0(piVar3,&stack0x00000004,0x44800000);
  } while( true );
}

