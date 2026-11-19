// rea decompile_all
// name: FUN_100fb6b0
// address: 0x100fb6b0
// body: available
// range: 0x100fb6b0-0x100fb955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fb6b0(void)

{
  uint *puVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int in_ECX;
  byte *pbVar9;
  bool bVar10;
  
  piVar3 = (int *)FUN_10017790();
  if (piVar3 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*piVar3 + 0x78))();
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(iVar4 + 0x34c) != 0) {
    FUN_100fa4b0();
  }
  *(int *)(iVar4 + 0x34c) = in_ECX;
  if (*(int *)(in_ECX + 0x378) == 0) {
LAB_100fb846:
    FUN_10017740(in_ECX);
  }
  else {
    uVar5 = FUN_10017790();
    uVar5 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x378),uVar5);
    FUN_10017740(uVar5);
    iVar6 = FUN_10017780();
    if (iVar6 == 0) {
      uVar5 = FUN_10017790(*(int *)(in_ECX + 4) + 8,*(undefined4 *)(in_ECX + 0x394));
      uVar5 = FUN_101186b0(uVar5);
      iVar6 = FUN_10017740(uVar5);
      while (iVar6 != 0) {
        pbVar9 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x378));
        iVar6 = FUN_100177a0();
        pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar6 + 4));
        do {
          bVar2 = *pbVar7;
          bVar10 = bVar2 < *pbVar9;
          if (bVar2 != *pbVar9) {
LAB_100fb7c8:
            uVar8 = -(uint)bVar10 | 1;
            goto LAB_100fb7cd;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar7[1];
          bVar10 = bVar2 < pbVar9[1];
          if (bVar2 != pbVar9[1]) goto LAB_100fb7c8;
          pbVar7 = pbVar7 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar2 != 0);
        uVar8 = 0;
LAB_100fb7cd:
        if (uVar8 == 0) break;
        uVar5 = FUN_10017790(*(int *)(in_ECX + 4) + 8,*(undefined4 *)(in_ECX + 0x394));
        uVar5 = FUN_101186b0(uVar5);
        iVar6 = FUN_10017740(uVar5);
      }
    }
    iVar6 = FUN_10017780();
    if (iVar6 == 0) {
      iVar6 = *(int *)(DAT_10223188 + 0x98);
      (*DAT_1022303c)(1,"%s %s has a missing \"turn target\": %s\n",**(int **)(in_ECX + 4) + iVar6,
                      (*(int **)(in_ECX + 4))[0x74] + iVar6,*(int *)(in_ECX + 0x378) + iVar6);
      goto LAB_100fb846;
    }
  }
  if (*(int *)(in_ECX + 0x37c) != 0) {
    uVar5 = FUN_10017790();
    iVar6 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x37c),uVar5);
    *(int *)(iVar4 + 0xc) = iVar6;
    if (iVar6 != 0) goto LAB_100fb8c7;
    iVar6 = *(int *)(DAT_10223188 + 0x98);
    (*DAT_1022303c)(1,"%s %s has a missing \"move target\": %s\n",**(int **)(in_ECX + 4) + iVar6,
                    (*(int **)(in_ECX + 4))[0x74] + iVar6,*(int *)(in_ECX + 0x37c) + iVar6);
  }
  *(int *)(iVar4 + 0xc) = in_ECX;
LAB_100fb8c7:
  *(undefined4 *)(in_ECX + 0x3b0) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x108);
  *(undefined4 *)(in_ECX + 0x3b4) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x10c);
  *(undefined4 *)(in_ECX + 0x3b8) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x118);
  puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x118);
  *puVar1 = *puVar1 | *(uint *)(*(int *)(in_ECX + 4) + 0x118);
  *(undefined4 *)(in_ECX + 0x368) = 2;
  switch(*(undefined4 *)(in_ECX + 900)) {
  case 1:
  case 2:
    FUN_100fa990(1);
    *(undefined4 *)(in_ECX + 0x368) = 1;
  case 0:
  case 4:
  case 5:
  case 6:
    *(undefined4 *)(iVar4 + 0x348) = 1;
  default:
    *(undefined4 *)(iVar4 + 0x228) = 6;
    return;
  }
}

