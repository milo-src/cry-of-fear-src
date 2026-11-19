// rea decompile_all
// name: FUN_100f9e60
// address: 0x100f9e60
// body: available
// range: 0x100f9e60-0x100f9fda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f9fd6 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f9e60(undefined4 param_1,char param_2)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  _Locimp *p_Var5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int in_ECX;
  char *pcVar9;
  undefined1 local_2c [20];
  undefined1 local_18 [4];
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019e0dd;
  local_10 = ExceptionList;
  uVar3 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0x201;
  *(undefined4 *)(in_ECX + 0x18) = 6;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  iVar4 = FUN_1013e1e9(8,uVar3);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    local_8 = 0;
    p_Var5 = std::locale::_Init(true);
    *(_Locimp **)(iVar4 + 4) = p_Var5;
  }
  *(int *)(in_ECX + 0x30) = iVar4;
  *(undefined4 *)(in_ECX + 0x38) = param_1;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  piVar1 = *(int **)(iVar4 + 4);
  local_14 = piVar1;
  (**(code **)(*piVar1 + 4))();
  local_8 = 1;
  piVar6 = (int *)FUN_1002f750(local_18);
  uVar2 = (**(code **)(*piVar6 + 0x20))(0x20);
  local_8 = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    puVar7 = (undefined4 *)(**(code **)(*piVar1 + 8))();
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
  }
  *(undefined1 *)(in_ECX + 0x40) = uVar2;
  if (*(int *)(in_ECX + 0x38) == 0) {
    uVar3 = *(uint *)(in_ECX + 0xc) & 0x13 | 4;
    *(uint *)(in_ECX + 0xc) = uVar3;
    uVar3 = *(uint *)(in_ECX + 0x10) & uVar3;
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        pcVar9 = "ios_base::failbit set";
        if ((uVar3 & 2) == 0) {
          pcVar9 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar9 = "ios_base::badbit set";
      }
      uVar8 = FUN_10037d50(local_18,1);
      FUN_10030100(pcVar9,uVar8);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_2c,&DAT_102048cc);
    }
  }
  if (param_2 != '\0') {
    FUN_10122f70();
  }
  ExceptionList = local_10;
  return;
}

