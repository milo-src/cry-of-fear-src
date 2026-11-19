// rea decompile_all
// name: FUN_100bbb30
// address: 0x100bbb30
// body: available
// range: 0x100bbb30-0x100bbdb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100bbb30(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int *in_ECX;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  bool bVar11;
  
  iVar4 = (*DAT_10222fa4)(in_ECX[0xda]);
  if (iVar4 == 0) {
LAB_100bbd9e:
    (*DAT_1022303c)(1,"NULL Ent in MonsterMaker!\n");
    return (int *)0x0;
  }
  iVar5 = (*DAT_10223060)(iVar4);
  if (iVar5 == 0) goto LAB_100bbd9e;
  iVar5 = in_ECX[1];
  pcVar8 = "item_key";
  uVar3 = *(uint *)(iVar4 + 0x224);
  uVar9 = uVar3 | 0x80000000;
  *(undefined8 *)(iVar4 + 0x88) = *(undefined8 *)(iVar5 + 8);
  *(undefined4 *)(iVar4 + 0x90) = *(undefined4 *)(iVar5 + 0x10);
  iVar5 = in_ECX[1];
  *(undefined8 *)(iVar4 + 0xd0) = *(undefined8 *)(iVar5 + 0x50);
  *(undefined4 *)(iVar4 + 0xd8) = *(undefined4 *)(iVar5 + 0x58);
  *(uint *)(iVar4 + 0x224) = uVar9;
  pbVar6 = (byte *)((int)DAT_10223188[0x26] + in_ECX[0xda]);
  do {
    bVar2 = *pbVar6;
    bVar11 = bVar2 < (byte)*pcVar8;
    if (bVar2 != *pcVar8) {
LAB_100bbbe0:
      uVar7 = -(uint)bVar11 | 1;
      goto LAB_100bbbe5;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar11 = bVar2 < (byte)pcVar8[1];
    if (bVar2 != pcVar8[1]) goto LAB_100bbbe0;
    pbVar6 = pbVar6 + 2;
    pcVar8 = pcVar8 + 2;
  } while (bVar2 != 0);
  uVar7 = 0;
LAB_100bbbe5:
  if ((uVar7 == 0) && (in_ECX[0xe0] != 0)) {
    *(int *)(iVar4 + 600) = in_ECX[0xe0];
  }
  iVar5 = in_ECX[1];
  if ((*(uint *)(iVar5 + 0x1a4) & 0x400) != 0) {
    uVar9 = uVar3 | 0x80000400;
    *(uint *)(iVar4 + 0x224) = uVar9;
    iVar5 = in_ECX[1];
  }
  if ((*(byte *)(iVar5 + 0x1a4) & 8) != 0) {
    *(uint *)(iVar4 + 0x224) = uVar9 | 4;
    iVar5 = in_ECX[1];
  }
  if (*(int *)(iVar5 + 0xb8) != 0) {
    *(int *)(iVar4 + 0x138) = *(int *)(iVar5 + 0xb8);
  }
  FUN_100167d0(*(undefined4 *)(iVar4 + 0x28c));
  *(undefined4 *)(iVar4 + 0x21c) = *(undefined4 *)(in_ECX[1] + 0x20c);
  iVar5 = *(int *)(iVar4 + 0x28c);
  if (iVar5 == 0) {
    iVar5 = (*DAT_1022305c)(0);
    if (iVar5 == 0) {
      piVar10 = (int *)0x0;
      goto LAB_100bbca1;
    }
  }
  piVar10 = (int *)0x0;
  if (*(int **)(iVar5 + 0x7c) != (int *)0x0) {
    piVar10 = (int *)(**(code **)(**(int **)(iVar5 + 0x7c) + 0x78))();
    if (piVar10 != (int *)0x0) {
      piVar10[0xd4] = in_ECX[0xd4];
      piVar10[0xd5] = in_ECX[0xd5];
    }
  }
LAB_100bbca1:
  iVar5 = in_ECX[1];
  if (*(int *)(iVar5 + 0x1d4) != 0) {
    *(int *)(iVar4 + 0x250) = *(int *)(iVar5 + 0x1d4);
    iVar5 = in_ECX[1];
  }
  if ((*(byte *)(iVar5 + 0x1a4) & 2) != 0) {
    *(undefined4 *)(iVar4 + 0x21c) = *(undefined4 *)(iVar5 + 0x20c);
  }
  *(int *)(iVar4 + 0x194) = in_ECX[0xdf];
  in_ECX[0xdc] = in_ECX[0xdc] + 1;
  piVar1 = in_ECX + 0xdb;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    in_ECX[0x1e] = 0;
    in_ECX[0x20] = 0;
  }
  else if ((in_ECX[0xe1] != 0) && ((*(byte *)(in_ECX[1] + 0x1a4) & 0x40) == 0)) {
    (**(code **)(*in_ECX + 8))(in_ECX[0x37]);
    in_ECX[0x1e] = (int)CMonsterMaker::MakerThink;
  }
  if (piVar10 != (int *)0x0) {
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 0x40) != 0) {
      *(undefined1 *)(piVar10 + 0x7c) = 1;
      piVar10[0x7e] = (int)*DAT_10223188;
      piVar10[0x7d] = (int)(*DAT_10223188 + 0.5);
    }
    iVar4 = FUN_1013f5f0(*(int *)piVar10[1] + (int)DAT_10223188[0x26],"monster_");
    if (iVar4 != 0) {
      (**(code **)(*piVar10 + 0x2c))();
    }
  }
  return piVar10;
}

