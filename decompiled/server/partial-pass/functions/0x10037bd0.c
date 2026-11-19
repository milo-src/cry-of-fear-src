// rea decompile_all
// name: FUN_10037bd0
// address: 0x10037bd0
// body: available
// range: 0x10037bd0-0x10037d05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037d01 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037bd0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_ECX;
  char *pcVar7;
  undefined1 local_34 [20];
  undefined1 local_20 [12];
  char local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d785;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(DAT_1021baf4 ^ (uint)&stack0xfffffffc);
    local_8 = 0;
    if (*(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0) {
      piVar2 = *(int **)((int)in_ECX + *(int *)(*in_ECX + 4) + 0x3c);
      if ((piVar2 == (int *)0x0) || (piVar2 == in_ECX)) {
        local_14 = true;
      }
      else {
        FUN_10037bd0();
        local_14 = *(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0;
      }
    }
    else {
      local_14 = false;
    }
    local_8 = 1;
    if ((bool)local_14 != false) {
      iVar4 = (**(code **)(*piVar1 + 0x34))();
      if (iVar4 == -1) {
        iVar4 = *(int *)(*in_ECX + 4);
        uVar5 = *(uint *)(iVar4 + 0xc + (int)in_ECX) & 0x13 | 4;
        *(uint *)(iVar4 + 0xc + (int)in_ECX) = uVar5;
        uVar5 = *(uint *)(iVar4 + 0x10 + (int)in_ECX) & uVar5;
        if (uVar5 != 0) {
          if ((uVar5 & 4) == 0) {
            pcVar7 = "ios_base::failbit set";
            if ((uVar5 & 2) == 0) {
              pcVar7 = "ios_base::eofbit set";
            }
          }
          else {
            pcVar7 = "ios_base::badbit set";
          }
          uVar6 = FUN_10037d50(local_20,1);
          FUN_10030100(pcVar7,uVar6);
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(local_34,&DAT_102048cc);
        }
      }
    }
    local_8 = 2;
    cVar3 = ___uncaught_exception();
    if (cVar3 == '\0') {
      FUN_10037550();
    }
    local_8 = CONCAT31(local_8._1_3_,3);
    piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  ExceptionList = local_10;
  return;
}

