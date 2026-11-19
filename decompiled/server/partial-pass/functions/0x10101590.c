// rea decompile_all
// name: FUN_10101590
// address: 0x10101590
// body: available
// range: 0x10101590-0x10101858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10101590(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  int *in_ECX;
  byte *pbVar8;
  bool bVar9;
  undefined1 local_5c [16];
  float local_4c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  int local_8;
  
  local_8 = (**(code **)(*in_ECX + 0x50))();
  local_c = in_ECX + 0xda;
  iVar3 = FUN_10017780();
  if ((iVar3 != 0) || (param_2 < 2)) {
    return 0;
  }
  FUN_10017740(in_ECX);
  param_2 = 1;
  iVar3 = *(int *)(in_ECX[1] + 0x1d4);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_101186b0(0,in_ECX[1] + 8,(float)param_1);
    if (piVar4 == (int *)0x0) goto LAB_1010183a;
    do {
      piVar5 = (int *)(**(code **)(*piVar4 + 0x7c))();
      if (((((piVar5 != (int *)0x0) && (piVar5 != in_ECX)) &&
           (iVar3 = (**(code **)(*piVar5 + 0xbc))(), iVar3 != 0)) &&
          ((piVar5[0xd3] == 0 && (iVar3 = FUN_10017780(), iVar3 == 0)))) &&
         (iVar3 = (**(code **)(*piVar5 + 0x50))(), iVar3 == local_8)) {
        if (local_8 == 7) {
          pbVar8 = (byte *)(*(int *)piVar5[1] + *(int *)(DAT_10223188 + 0x98));
          pbVar6 = (byte *)(*(int *)in_ECX[1] + *(int *)(DAT_10223188 + 0x98));
          do {
            bVar1 = *pbVar6;
            bVar9 = bVar1 < *pbVar8;
            if (bVar1 != *pbVar8) {
LAB_10101740:
              uVar7 = -(uint)bVar9 | 1;
              goto LAB_10101745;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar9 = bVar1 < pbVar8[1];
            if (bVar1 != pbVar8[1]) goto LAB_10101740;
            pbVar6 = pbVar6 + 2;
            pbVar8 = pbVar8 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_10101745:
          if (uVar7 != 0) goto LAB_1010180a;
        }
        iVar3 = piVar5[1];
        if (*(int *)(iVar3 + 0x1d4) == 0) {
          iVar2 = in_ECX[1];
          local_14 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar3 + 0xc);
          local_10 = *(float *)(iVar2 + 0x180) + *(float *)(iVar3 + 0x10);
          local_18 = *(float *)(iVar2 + 0x178) + *(float *)(iVar3 + 8);
          local_20 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0xc);
          local_1c = *(float *)(iVar2 + 0x180) + *(float *)(iVar2 + 0x10);
          local_24 = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 8);
          FUN_1011a800(&local_24,&local_18,1,*(undefined4 *)(iVar3 + 0x20c),local_5c);
          if (local_4c == 1.0) {
            iVar3 = FUN_101011e0(piVar5);
            if (iVar3 == 0) break;
            param_2 = param_2 + 1;
          }
        }
      }
LAB_1010180a:
      piVar4 = (int *)FUN_101186b0(piVar4,in_ECX[1] + 8,(float)param_1);
    } while (piVar4 != (int *)0x0);
  }
  else {
    piVar4 = (int *)FUN_10118480(0,"netname",*(int *)(DAT_10223188 + 0x98) + iVar3);
    if (piVar4 == (int *)0x0) goto LAB_1010183a;
    do {
      piVar5 = (int *)(**(code **)(*piVar4 + 0x7c))();
      if (((piVar5 != (int *)0x0) && (iVar3 = FUN_10017780(), iVar3 == 0)) &&
         ((iVar3 = (**(code **)(*piVar5 + 0x50))(), iVar3 == local_8 && (piVar5 != in_ECX)))) {
        iVar3 = FUN_101011e0(piVar5);
        if (iVar3 == 0) break;
        param_2 = param_2 + 1;
      }
      piVar4 = (int *)FUN_10118480(piVar4,"netname",
                                   *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1d4));
    } while (piVar4 != (int *)0x0);
  }
  if (param_2 != 1) {
    return param_2;
  }
LAB_1010183a:
  FUN_10017740(0);
  return 1;
}

