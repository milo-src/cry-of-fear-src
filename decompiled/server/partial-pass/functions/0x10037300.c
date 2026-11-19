// rea decompile_all
// name: FUN_10037300
// address: 0x10037300
// body: available
// range: 0x10037300-0x1003746c inclusive
// range: 0x100374aa-0x1003752d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003745b to 0x10037489 FUN_10037489 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100374e7 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10037529 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10037300(char param_1)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *in_ECX;
  char *pcVar10;
  uint uStack_5c;
  undefined1 local_4c [20];
  undefined1 local_38 [20];
  undefined1 local_24 [4];
  int *local_20;
  undefined1 local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  pvVar3 = ExceptionList;
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d72d;
  local_10 = ExceptionList;
  uStack_5c = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_5c;
  ExceptionList = &local_10;
  iVar7 = *(int *)(*in_ECX + 4);
  uVar6 = *(uint *)((int)in_ECX + iVar7 + 0xc);
  if (uVar6 != 0) {
    uVar5 = 4;
    if (*(int *)((int)in_ECX + iVar7 + 0x38) != 0) {
      uVar5 = 0;
    }
    uVar6 = uVar5 | uVar6 & 0x15 | 2;
    *(uint *)((int)in_ECX + iVar7 + 0xc) = uVar6;
    uVar6 = *(uint *)((int)in_ECX + iVar7 + 0x10) & uVar6;
    if (uVar6 != 0) {
      if ((uVar6 & 4) == 0) {
        pcVar10 = "ios_base::failbit set";
        if ((uVar6 & 2) == 0) {
          pcVar10 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar10 = "ios_base::badbit set";
      }
      local_14 = (undefined1 *)&uStack_5c;
      uVar9 = FUN_10037d50(local_24,1);
      FUN_10030100(pcVar10,uVar9);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_38,&DAT_102048cc);
    }
    ExceptionList = pvVar3;
    return 0;
  }
  puVar4 = &uStack_5c;
  if (*(int *)((int)in_ECX + iVar7 + 0x3c) != 0) {
    FUN_10037bd0();
    puVar4 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar4;
  bVar2 = false;
  if ((param_1 == '\0') && ((*(byte *)(*(int *)(*in_ECX + 4) + 0x14 + (int)in_ECX) & 1) != 0)) {
    piVar1 = *(int **)(*(int *)(*(int *)(*in_ECX + 4) + 0x30 + (int)in_ECX) + 4);
    local_20 = piVar1;
    (**(code **)(*piVar1 + 4))();
    local_8 = 0;
    iVar7 = FUN_1002f750(local_24);
    if ((piVar1 != (int *)0x0) &&
       (puVar8 = (undefined4 *)(**(code **)(*piVar1 + 8))(), puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    local_8 = 1;
    piVar1 = *(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX);
    if ((*(byte **)piVar1[7] == (byte *)0x0) || (*(int *)piVar1[0xb] < 1)) {
      uVar6 = (**(code **)(*piVar1 + 0x18))();
    }
    else {
      uVar6 = (uint)**(byte **)piVar1[7];
    }
    while (uVar6 != 0xffffffff) {
      if ((*(byte *)(*(int *)(iVar7 + 0xc) + (uVar6 & 0xff) * 2) & 0x48) == 0) goto LAB_10037425;
      uVar6 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX));
    }
    bVar2 = true;
LAB_10037425:
    local_8 = 0xffffffff;
    if (bVar2) {
      iVar7 = *(int *)(*in_ECX + 4);
      uVar6 = 4;
      if (*(int *)((int)in_ECX + iVar7 + 0x38) != 0) {
        uVar6 = 0;
      }
      uVar6 = uVar6 | *(uint *)((int)in_ECX + iVar7 + 0xc) & 0x14 | 3;
      *(uint *)((int)in_ECX + iVar7 + 0xc) = uVar6;
      uVar6 = *(uint *)((int)in_ECX + iVar7 + 0x10) & uVar6;
      if (uVar6 != 0) {
        if ((uVar6 & 4) == 0) {
          pcVar10 = "ios_base::failbit set";
          if ((uVar6 & 2) == 0) {
            pcVar10 = "ios_base::eofbit set";
          }
        }
        else {
          pcVar10 = "ios_base::badbit set";
        }
        uVar9 = FUN_10037d50(local_1c,1);
        FUN_10030100(pcVar10,uVar9);
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(local_4c,&DAT_102048cc);
      }
      uVar9 = FUN_10037489();
      return uVar9;
    }
  }
  ExceptionList = local_10;
  return CONCAT31((int3)((uint)*(int *)(*in_ECX + 4) >> 8),
                  *(int *)(*(int *)(*in_ECX + 4) + 0xc + (int)in_ECX) == 0);
}

