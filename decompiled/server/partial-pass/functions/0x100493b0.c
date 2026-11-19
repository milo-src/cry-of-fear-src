// rea decompile_all
// name: FUN_100493b0
// address: 0x100493b0
// body: available
// range: 0x100493b0-0x1004956c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004956b to 0x1004958c FUN_1004958c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100493b0(int *param_1,char *param_2)

{
  byte *pbVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  uint uStack_50;
  undefined1 auStack_40 [20];
  undefined8 local_2c;
  undefined1 auStack_24 [4];
  undefined4 local_20;
  uint local_1c;
  byte local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d7fd;
  local_10 = ExceptionList;
  uStack_50 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_50;
  ExceptionList = &local_10;
  local_20 = 0;
  pcVar5 = param_2;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  local_1c = (int)pcVar5 - (int)(param_2 + 1);
  iVar9 = *(int *)(*(int *)(*param_1 + 4) + 0x24 + (int)param_1);
  uVar7 = *(uint *)(*(int *)(*param_1 + 4) + 0x20 + (int)param_1);
  if ((iVar9 < 0) ||
     ((iVar9 < 1 && (((uVar7 == 0 || (iVar9 < 0)) || ((iVar9 < 1 && (uVar7 <= local_1c)))))))) {
    local_2c = 0;
    local_2c._4_4_ = 0;
    local_2c._0_4_ = (int *)0x0;
    iVar8 = (int)(int *)local_2c;
    iVar9 = local_2c._4_4_;
  }
  else {
    iVar8 = uVar7 - local_1c;
    iVar9 = iVar9 - (uint)(uVar7 < local_1c);
  }
  FUN_1004a020(param_1);
  local_8 = 0;
  if (local_2c._4_1_ == '\0') {
    iVar9 = *(int *)(*param_1 + 4);
    uVar7 = 4;
    if (*(int *)((int)param_1 + iVar9 + 0x38) != 0) {
      uVar7 = 0;
    }
    uVar7 = uVar7 | *(uint *)(iVar9 + 0xc + (int)param_1) & 0x17 | 4;
    *(uint *)((int)param_1 + iVar9 + 0xc) = uVar7;
    uVar7 = *(uint *)((int)param_1 + iVar9 + 0x10) & uVar7;
    if (uVar7 != 0) {
      if ((uVar7 & 4) == 0) {
        pcVar5 = "ios_base::failbit set";
        if ((uVar7 & 2) == 0) {
          pcVar5 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar5 = "ios_base::badbit set";
      }
      uVar4 = FUN_10037d50(auStack_24,1);
      FUN_10030100(pcVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(auStack_40,&DAT_102048cc);
    }
    local_8 = 3;
    cVar2 = ___uncaught_exception();
    if (cVar2 == '\0') {
      FUN_10037550();
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    piVar3 = *(int **)(*(int *)(*(int *)local_2c + 4) + 0x38 + (int)(int *)local_2c);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
    ExceptionList = local_10;
    return param_1;
  }
  iVar6 = *param_1;
  local_8 = 1;
  if ((*(uint *)(*(int *)(iVar6 + 4) + 0x14 + (int)param_1) & 0x1c0) != 0x40) {
    for (; (-1 < iVar9 && ((0 < iVar9 || (iVar8 != 0)))); iVar8 = iVar8 + -1) {
      local_15 = *(byte *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      if (*(int *)piVar3[8] == 0) {
LAB_100494b2:
        uVar7 = (**(code **)(*piVar3 + 0xc))(local_15);
      }
      else {
        iVar6 = *(int *)piVar3[0xc];
        if (iVar6 < 1) goto LAB_100494b2;
        *(int *)piVar3[0xc] = iVar6 + -1;
        pbVar1 = *(byte **)piVar3[8];
        *(byte **)piVar3[8] = pbVar1 + 1;
        *pbVar1 = local_15;
        uVar7 = (uint)local_15;
      }
      if (uVar7 == 0xffffffff) goto LAB_10049556;
      iVar9 = iVar9 + -1 + (uint)(iVar8 != 0);
    }
    iVar6 = *param_1;
  }
  uVar10 = (**(code **)(**(int **)(*(int *)(iVar6 + 4) + 0x38 + (int)param_1) + 0x24))
                     (param_2,local_1c,0);
  if (((uint)uVar10 == local_1c) && ((int)((ulonglong)uVar10 >> 0x20) == 0)) {
    for (; (-1 < iVar9 && ((0 < iVar9 || (iVar8 != 0)))); iVar8 = iVar8 + -1) {
      piVar3 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
      local_15 = *(byte *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1);
      if ((*(int *)piVar3[8] == 0) || (*(int *)piVar3[0xc] < 1)) {
        uVar7 = (**(code **)(*piVar3 + 0xc))(local_15);
      }
      else {
        *(int *)piVar3[0xc] = *(int *)piVar3[0xc] + -1;
        pbVar1 = *(byte **)piVar3[8];
        *(byte **)piVar3[8] = pbVar1 + 1;
        *pbVar1 = local_15;
        uVar7 = (uint)local_15;
      }
      if (uVar7 == 0xffffffff) break;
      iVar9 = iVar9 + -1 + (uint)(iVar8 != 0);
    }
  }
LAB_10049556:
  iVar9 = *(int *)(*param_1 + 4);
  *(undefined4 *)(iVar9 + 0x20 + (int)param_1) = 0;
  *(undefined4 *)(iVar9 + 0x24 + (int)param_1) = 0;
  piVar3 = (int *)FUN_1004958c();
  return piVar3;
}

