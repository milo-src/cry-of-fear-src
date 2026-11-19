// rea decompile_all
// name: FUN_1002ee70
// address: 0x1002ee70
// body: available
// range: 0x1002ee70-0x1002eff5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002ee70(int *param_1,undefined4 param_2)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  int in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  fVar1 = *(float *)(*(int *)(in_ECX + 4) + 0x1b8);
  if (*DAT_10223188 <= fVar1 && fVar1 != *DAT_10223188) {
    return;
  }
  iVar3 = FUN_10118460(0,"monster_doctorboss");
  pcVar7 = "monster_doctorboss";
  pbVar6 = (byte *)((int)DAT_10223188[0x26] + *param_1);
  do {
    bVar2 = *pbVar6;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_1002eed8:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1002eedd;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_1002eed8;
    pbVar6 = pbVar6 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  uVar4 = 0;
LAB_1002eedd:
  if (uVar4 == 0) {
    return;
  }
  if (iVar3 == 0) {
    return;
  }
  piVar5 = (int *)FUN_1002c950(*(undefined4 *)(iVar3 + 4));
  if (piVar5 == (int *)0x0) {
    return;
  }
  switch(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x248)) {
  case 1:
    iVar3 = FUN_1002d690();
    if (iVar3 != 1) {
      iVar3 = FUN_1002d690();
      bVar8 = iVar3 == 5;
LAB_1002ef7a:
      if (!bVar8) {
        return;
      }
    }
    break;
  case 2:
    iVar3 = FUN_1002d690();
    if (iVar3 != 2) {
      iVar3 = FUN_1002d690();
      bVar8 = iVar3 == 6;
      goto LAB_1002ef7a;
    }
    break;
  case 3:
    iVar3 = FUN_1002d690();
    if (iVar3 != 3) {
      iVar3 = FUN_1002d690();
      bVar8 = iVar3 == 7;
      goto LAB_1002ef7a;
    }
    break;
  case 4:
    iVar3 = FUN_1002d690();
    if (iVar3 != 4) {
      iVar3 = FUN_1002d690();
      bVar8 = iVar3 == 8;
      goto LAB_1002ef7a;
    }
    break;
  default:
    goto switchD_1002ef15_default;
  }
  *(float *)(*(int *)(in_ECX + 4) + 0x1b8) = *DAT_10223188 + 1.0;
  *(undefined4 *)(piVar5[1] + 0x24c) = 1;
  (**(code **)(*piVar5 + 100))(param_1,param_1,param_2,in_stack_0000001c);
  iVar3 = piVar5[1];
  FUN_10117770(in_stack_00000018 + 0x14,&stack0x0000000c,0xf7,0x32,*(undefined4 *)(iVar3 + 0x20),
               *(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x28));
switchD_1002ef15_default:
  return;
}

