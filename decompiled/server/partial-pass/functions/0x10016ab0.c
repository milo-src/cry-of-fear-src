// rea decompile_all
// name: FUN_10016ab0
// address: 0x10016ab0
// body: available
// range: 0x10016ab0-0x10016c7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016ab0(int param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  float fVar10;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d21d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (((param_1 != 0) && (piVar2 = *(int **)(param_1 + 0x7c), piVar2 != (int *)0x0)) &&
     (param_2 != 0)) {
    iVar3 = *(int *)(param_2 + 0x1c);
    iVar4 = *(int *)(param_2 + 0x28);
    if (*(int *)(iVar4 + 4 + iVar3 * 0x18) != param_1) {
      (*DAT_1022303c)(4,"ENTITY TABLE OR INDEX IS WRONG!!!!\n",DAT_1021baf4 ^ (uint)&stack0xfffffffc
                     );
    }
    iVar5 = (**(code **)(*piVar2 + 0x40))();
    if (-1 < iVar5) {
      if ((((int *)piVar2[1] != (int *)0x0) && (iVar5 = *(int *)piVar2[1], iVar5 != 0)) &&
         (iVar5 = FUN_1013f5f0((int)DAT_10223188[0x26] + iVar5,"monster_"), iVar5 != 0)) {
        pbVar6 = (byte *)(*(int *)(-(uint)(*(int *)(piVar2[1] + 0x20c) != 0) &
                                  *(int *)(piVar2[1] + 0x20c) + 0x80U) + (int)DAT_10223188[0x26]);
        pcVar8 = "monster_generic";
        do {
          bVar1 = *pbVar6;
          bVar9 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_10016ba4:
            uVar7 = -(uint)bVar9 | 1;
            goto LAB_10016ba9;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar9 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_10016ba4;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar7 = 0;
LAB_10016ba9:
        if (uVar7 != 0) {
          iVar5 = (**(code **)(*piVar2 + 0xbc))();
          if (iVar5 == 0) {
            ExceptionList = local_10;
            return;
          }
          if (*(char *)((int)piVar2 + 9) != '\0') {
            ExceptionList = local_10;
            return;
          }
        }
      }
      iVar5 = piVar2[1];
      if (*(int *)(iVar5 + 0x108) == 7) {
        fVar10 = *DAT_10223188 - *(float *)(iVar5 + 0x100);
        *(float *)(iVar5 + 0x100) = *(float *)(iVar5 + 0x100) + fVar10;
        *(float *)(piVar2[1] + 0x104) = *(float *)(piVar2[1] + 0x104) + fVar10;
        piVar2[0x17] = *(int *)(piVar2[1] + 0x104);
        piVar2[0x16] = (int)((float)piVar2[0x16] + fVar10);
      }
      *(undefined4 *)(iVar4 + 8 + iVar3 * 0x18) = *(undefined4 *)(param_2 + 8);
      *(undefined4 *)(iVar4 + 0x14 + iVar3 * 0x18) = *(undefined4 *)piVar2[1];
      FUN_10116020(param_2);
      local_8 = 0;
      (**(code **)(*piVar2 + 0x38))(local_14);
      *(int *)(iVar4 + 0xc + iVar3 * 0x18) =
           *(int *)(param_2 + 8) - *(int *)(iVar4 + 8 + iVar3 * 0x18);
      FUN_10116080();
    }
  }
  ExceptionList = local_10;
  return;
}

