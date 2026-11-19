// rea decompile_all
// name: FUN_1004a350
// address: 0x1004a350
// body: available
// range: 0x1004a350-0x1004a42c inclusive
// range: 0x1004a453-0x1004a502 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004a4fe to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004a350(float param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  uint uStack_5c;
  undefined1 local_4c [20];
  uint local_38 [2];
  int *local_30;
  char local_2c;
  undefined4 local_28;
  int *local_20;
  int *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019da15;
  local_10 = ExceptionList;
  uStack_5c = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  uVar8 = 0;
  local_28 = 0;
  FUN_1004a020();
  local_8 = 0;
  if (local_2c != '\0') {
    piVar1 = *(int **)(*(int *)(*(int *)(*in_ECX + 4) + 0x30 + (int)in_ECX) + 4);
    local_20 = piVar1;
    (**(code **)(*piVar1 + 4))();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = (int *)FUN_100497f0();
    if ((piVar1 != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(*piVar1 + 8))(), puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)();
    }
    iVar5 = *(int *)(*in_ECX + 4) + (int)in_ECX;
    local_38[0] = local_38[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_20 = (int *)CONCAT31(local_20._1_3_,*(undefined1 *)(iVar5 + 0x40));
    (**(code **)(*local_1c + 0x14))
              (local_38,local_38[0],*(undefined4 *)(iVar5 + 0x38),iVar5,local_20,(double)param_1);
    if ((char)local_38[0] != '\0') {
      uVar8 = 4;
    }
  }
  local_8 = 0;
  uVar6 = 4;
  iVar5 = *(int *)(*in_ECX + 4);
  if (*(int *)((int)in_ECX + iVar5 + 0x38) != 0) {
    uVar6 = 0;
  }
  uVar6 = uVar6 | *(uint *)(iVar5 + 0xc + (int)in_ECX) & 0x17 | uVar8;
  *(uint *)((int)in_ECX + iVar5 + 0xc) = uVar6;
  uVar6 = *(uint *)((int)in_ECX + iVar5 + 0x10) & uVar6;
  if (uVar6 != 0) {
    if ((uVar6 & 4) == 0) {
      pcVar7 = "ios_base::failbit set";
      if ((uVar6 & 2) == 0) {
        pcVar7 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar7 = "ios_base::badbit set";
    }
    uVar4 = FUN_10037d50(local_38,1);
    FUN_10030100(pcVar7,uVar4);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_4c,&DAT_102048cc);
  }
  local_8 = 4;
  cVar2 = ___uncaught_exception();
  if (cVar2 == '\0') {
    FUN_10037550();
  }
  local_8 = CONCAT31(local_8._1_3_,5);
  piVar1 = *(int **)(*(int *)(*local_30 + 4) + 0x38 + (int)local_30);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return;
}

