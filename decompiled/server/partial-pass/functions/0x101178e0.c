// rea decompile_all
// name: FUN_101178e0
// address: 0x101178e0
// body: available
// range: 0x101178e0-0x10117b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101178e0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  bool bVar11;
  int in_stack_0000001c;
  int *in_stack_00000020;
  undefined1 local_c4 [16];
  float local_b4;
  int local_94;
  int local_8c;
  int local_88 [32];
  uint local_8;
  
  iVar3 = in_stack_0000001c;
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  FUN_1011a800(&stack0x00000004,&stack0x00000010,1,in_stack_0000001c,local_c4);
  local_8c = FUN_10118390(local_88,0x20,in_stack_00000020[1] + 0xdc,in_stack_00000020[1] + 0xe8,8);
  iVar8 = 0;
  if (0 < local_8c) {
    do {
      piVar9 = (int *)local_88[iVar8];
      iVar2 = (**(code **)(*piVar9 + 0xd0))();
      if ((iVar2 != 0) &&
         ((((iVar2 = iVar3, iVar3 != 0 || (iVar2 = (*DAT_1022305c)(0), iVar2 != 0)) &&
           (*(int **)(iVar2 + 0x7c) != (int *)0x0)) && (*(int **)(iVar2 + 0x7c) == piVar9))))
      goto LAB_10117b13;
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_8c);
  }
  if (1.0 <= local_b4) {
    FUN_1011a7e0(&stack0x00000004,&stack0x00000010,0,3,iVar3,local_c4);
    if (1.0 <= local_b4) goto LAB_10117b29;
    iVar3 = local_94;
    if ((local_94 == 0) && (iVar3 = (*DAT_1022305c)(0), iVar3 == 0)) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(iVar3 + 0x7c);
      if ((piVar9 != (int *)0x0) && (iVar3 = (**(code **)(*piVar9 + 0xc0))(), iVar3 == 0))
      goto LAB_10117a82;
    }
    pcVar7 = "worldspawn";
    pbVar6 = (byte *)(*(int *)piVar9[1] + *(int *)(DAT_10223188 + 0x98));
    pbVar4 = pbVar6;
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10117a38:
        uVar5 = -(uint)bVar11 | 1;
        goto LAB_10117a3d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10117a38;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10117a3d:
    if (uVar5 == 0) goto LAB_10117b29;
    pbVar4 = (byte *)(*(int *)in_stack_00000020[1] + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar6;
      bVar11 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_10117a70:
        uVar5 = -(uint)bVar11 | 1;
        goto LAB_10117a75;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar11 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_10117a70;
      pbVar6 = pbVar6 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10117a75:
    if (uVar5 == 0) goto LAB_10117b13;
  }
LAB_10117a82:
  piVar9 = in_stack_00000020;
  if (local_b4 < 1.0) {
    if ((local_94 == 0) && (local_94 = (*DAT_1022305c)(0), local_94 == 0)) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10 = *(int **)(local_94 + 0x7c);
      if ((piVar10 != (int *)0x0) &&
         ((iVar3 = (**(code **)(*piVar10 + 0x50))(), iVar3 != 0 &&
          (iVar3 = (**(code **)(*piVar10 + 0x50))(), iVar3 != 1)))) goto LAB_10117b29;
    }
    pcVar7 = "worldspawn";
    pbVar4 = (byte *)(*(int *)piVar10[1] + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10117b06:
        uVar5 = -(uint)bVar11 | 1;
        goto LAB_10117b0b;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10117b06;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10117b0b:
    if ((uVar5 != 0) && (piVar10 == piVar9)) {
LAB_10117b13:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_10117b29:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

