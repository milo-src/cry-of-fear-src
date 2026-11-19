// rea decompile_all
// name: FUN_100c76d0
// address: 0x100c76d0
// body: available
// range: 0x100c76d0-0x100c79c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100c781c) */
/* WARNING: Removing unreachable block (ram,0x100c7828) */
/* WARNING: Removing unreachable block (ram,0x100c7836) */

void FUN_100c76d0(int param_1)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 local_8;
  
  if ((param_1 != 0) && (iVar9 = *(int *)(param_1 + 0x7c), iVar9 != 0)) {
    iVar4 = FUN_10017780();
    if (iVar4 != 0) {
      iVar4 = FUN_100177a0();
      iVar4 = FUN_100125e0(*(undefined4 *)(iVar4 + 4));
      if (iVar4 != 0) {
        FUN_10017740(0);
        FUN_10017740(0);
        *(float *)(iVar4 + 0x26ac) = *DAT_10223188;
      }
    }
    iVar4 = 1;
    bVar2 = false;
    bVar3 = false;
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        bVar2 = bVar3;
        piVar5 = (int *)FUN_10119680(iVar4);
        if (((piVar5 != (int *)0x0) && (*(float *)(piVar5[1] + 0x264) == 0.0)) &&
           (iVar6 = (**(code **)(*piVar5 + 0xbc))(), iVar6 != 0)) {
          bVar2 = true;
        }
        iVar4 = iVar4 + 1;
        bVar3 = bVar2;
      } while (iVar4 <= (int)DAT_10223188[0x24]);
    }
    bVar3 = false;
    if (!bVar2) {
      iVar4 = FUN_10118460(0,"cof_survivalmode");
      if (iVar4 != 0) {
        bVar3 = true;
        do {
          iVar4 = FUN_10118460(iVar4,"cof_survivalmode");
        } while (iVar4 != 0);
      }
      iVar4 = 1;
      if (0 < (int)DAT_10223188[0x24]) {
        do {
          iVar6 = FUN_10119680(iVar4);
          if (iVar6 != 0) {
            if (bVar3) {
              FUN_100ea600(0x3f800000);
            }
            fVar1 = *DAT_10223188;
            *(undefined1 *)(iVar6 + 0x1f28) = 0;
            *(undefined1 *)(iVar6 + 0x4e8) = 1;
            *(float *)(iVar6 + 0x1f24) = fVar1 + 5.0;
            *(float *)(iVar6 + 0x4ec) = *DAT_10223188;
            *(undefined4 *)(iVar6 + 0x4f0) = 5;
            FUN_10119810(iVar6,&DAT_101ca428,4,0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 <= (int)DAT_10223188[0x24]);
      }
    }
    FUN_10017740(0);
    FUN_10017740(0);
    FUN_10101ff0("game_playerleave",iVar9,iVar9,3,0);
    uVar8 = *(undefined4 *)(*(int *)(iVar9 + 4) + 0x20c);
    if (DAT_10222ee8 == 0) {
      param_1 = (*DAT_1022310c)(uVar8);
      local_8 = (*DAT_10223184)(uVar8);
      uVar8 = (*DAT_1022310c)(uVar8);
      pcVar10 = "\"%s<%i><%s><%i>\" disconnected\n";
      iVar9 = *(int *)(*(int *)(iVar9 + 4) + 0x1d4) + (int)DAT_10223188[0x26];
    }
    else {
      uVar7 = (*DAT_102230f0)(uVar8,"model");
      param_1 = (*DAT_102230f4)(uVar7);
      local_8 = (*DAT_10223184)(uVar8);
      uVar8 = (*DAT_1022310c)(uVar8);
      pcVar10 = "\"%s<%i><%s><%s>\" disconnected\n";
      iVar9 = *(int *)(*(int *)(iVar9 + 4) + 0x1d4) + (int)DAT_10223188[0x26];
    }
    FUN_10119200(pcVar10,iVar9,uVar8,local_8,param_1);
    FUN_100f0ba0(1);
  }
  return;
}

