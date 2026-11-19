// rea decompile_all
// name: FUN_100fad20
// address: 0x100fad20
// body: available
// range: 0x100fad20-0x100fae69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100fad20(undefined4 param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int in_ECX;
  byte *pbVar7;
  bool bVar8;
  
  for (piVar2 = (int *)FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x184),
                                    param_1); piVar2 != (int *)0x0;
      piVar2 = (int *)FUN_10118500(piVar2,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x184),
                                   param_1)) {
    iVar3 = (**(code **)(*piVar2 + 0x78))();
    if ((iVar3 != 0) && (iVar4 = FUN_100fa2c0(iVar3), iVar4 != 0)) {
      return iVar3;
    }
  }
  piVar2 = (int *)FUN_101186b0(0,*(int *)(in_ECX + 4) + 8,*(undefined4 *)(in_ECX + 0x188));
  do {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    pbVar7 = (byte *)(*(int *)(in_ECX + 0x184) + *(int *)(DAT_10223188 + 0x98));
    pbVar5 = (byte *)(*(int *)piVar2[1] + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar5;
      bVar8 = bVar1 < *pbVar7;
      if (bVar1 != *pbVar7) {
LAB_100fae09:
        uVar6 = -(uint)bVar8 | 1;
        goto LAB_100fae0e;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar8 = bVar1 < pbVar7[1];
      if (bVar1 != pbVar7[1]) goto LAB_100fae09;
      pbVar5 = pbVar5 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_100fae0e:
    if ((uVar6 == 0) && ((*(byte *)((int *)piVar2[1] + 0x6a) & 0x20) != 0)) {
      iVar3 = (**(code **)(*piVar2 + 0x78))();
      iVar4 = FUN_100fa2c0(iVar3);
      if (iVar4 != 0) {
        return iVar3;
      }
    }
    piVar2 = (int *)FUN_101186b0(piVar2,*(int *)(in_ECX + 4) + 8,*(undefined4 *)(in_ECX + 0x188));
  } while( true );
}

