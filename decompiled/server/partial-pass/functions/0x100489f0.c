// rea decompile_all
// name: FUN_100489f0
// address: 0x100489f0
// body: available
// range: 0x100489f0-0x10048b9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100489f0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  
  iVar3 = FUN_10118590(0,*(int *)(*(int *)(in_ECX + 4) + 0x1cc) + *(int *)(DAT_10223188 + 0x98));
  if (iVar3 != 0) {
    for (piVar4 = (int *)FUN_101186b0(0,*(int *)(iVar3 + 4) + 8,0x44800000); piVar4 != (int *)0x0;
        piVar4 = (int *)FUN_101186b0(piVar4,*(int *)(iVar3 + 4) + 8,0x44800000)) {
      iVar7 = *(int *)piVar4[1];
      if (iVar7 != 0) {
        iVar2 = ((int *)piVar4[1])[0x83];
        pcVar8 = "monster_spitter";
        pbVar5 = (byte *)(*(int *)(-(uint)(iVar2 != 0) & iVar2 + 0x80U) +
                         *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar5;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10048a97:
            uVar6 = -(uint)bVar9 | 1;
            goto LAB_10048a9c;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10048a97;
          pbVar5 = pbVar5 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar6 = 0;
LAB_10048a9c:
        if ((uVar6 != 0) &&
           (iVar7 = FUN_1013f5f0(iVar7 + *(int *)(DAT_10223188 + 0x98),"monster_"), iVar7 != 0)) {
          pcVar8 = "monster_generic";
          pbVar5 = (byte *)(*(int *)(-(uint)(*(int *)(piVar4[1] + 0x20c) != 0) &
                                    *(int *)(piVar4[1] + 0x20c) + 0x80U) +
                           *(int *)(DAT_10223188 + 0x98));
          do {
            bVar1 = *pbVar5;
            bVar9 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_10048b04:
              uVar6 = -(uint)bVar9 | 1;
              goto LAB_10048b09;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar9 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_10048b04;
            pbVar5 = pbVar5 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar6 = 0;
LAB_10048b09:
          if ((((uVar6 != 0) && (iVar7 = (**(code **)(*piVar4 + 0xbc))(), iVar7 != 0)) &&
              (iVar7 = (**(code **)(*piVar4 + 0x78))(), iVar7 != 0)) &&
             (((*(float *)(iVar7 + 0x1e4) != (float)DAT_10222f34 ||
               (*(float *)(iVar7 + 0x1e8) != DAT_10222f34._4_4_)) ||
              (*(float *)(iVar7 + 0x1ec) != DAT_10222f3c)))) {
            FUN_10119fe0(iVar7,iVar7 + 0x1e4);
          }
        }
      }
    }
  }
  return;
}

