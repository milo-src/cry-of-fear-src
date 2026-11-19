// rea decompile_all
// name: FUN_1002f350
// address: 0x1002f350
// body: available
// range: 0x1002f350-0x1002f47c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002f418 to 0x1002f49f FUN_1002f49f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002f449 to 0x1002f49f FUN_1002f49f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002f450 to 0x1002f49f FUN_1002f49f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1002f460 to 0x1002f49f FUN_1002f49f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_1002f350(int *param_1,undefined4 *param_2,byte param_3)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uStack_54;
  undefined1 auStack_44 [20];
  int *local_30;
  char local_2c;
  undefined1 auStack_28 [4];
  undefined4 local_24;
  uint local_20;
  byte *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d2b5;
  local_10 = ExceptionList;
  uStack_54 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_54;
  ExceptionList = &local_10;
  local_24 = 0;
  local_15 = 0;
  local_30 = param_1;
  piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
  puVar2 = &uStack_54;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 4))();
    puVar2 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar2;
  local_8 = 0;
  local_2c = FUN_10037300(1);
  local_8 = 1;
  if (local_2c != '\0') {
    local_8 = 2;
    param_2[4] = 0;
    puVar3 = param_2;
    if (0xf < (uint)param_2[5]) {
      puVar3 = (undefined4 *)*param_2;
    }
    *(undefined1 *)puVar3 = 0;
    local_20 = (uint)param_3;
    piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
    local_1c = *(byte **)piVar5[7];
    if ((local_1c == (byte *)0x0) || (*(int *)piVar5[0xb] < 1)) {
      uVar4 = (**(code **)(*piVar5 + 0x18))();
    }
    else {
      uVar4 = (uint)*local_1c;
    }
    while( true ) {
      if (uVar4 == 0xffffffff) {
        piVar5 = (int *)FUN_1002f49f();
        return piVar5;
      }
      if (uVar4 == local_20) break;
      if (0x7ffffffe < (uint)param_2[4]) {
        piVar5 = (int *)FUN_1002f49f();
        return piVar5;
      }
      FUN_10038070(uVar4);
      local_15 = 1;
      uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (*(int *)(*param_1 + 4) + 0x38 + (int)param_1));
    }
    local_15 = 1;
    piVar5 = *(int **)(*(int *)(*param_1 + 4) + 0x38 + (int)param_1);
    if (*(int *)piVar5[7] != 0) {
      iVar1 = *(int *)piVar5[0xb];
      if (0 < iVar1) {
        *(int *)piVar5[0xb] = iVar1 + -1;
        *(int *)piVar5[7] = *(int *)piVar5[7] + 1;
        piVar5 = (int *)FUN_1002f49f();
        return piVar5;
      }
    }
    (**(code **)(*piVar5 + 0x1c))();
    piVar5 = (int *)FUN_1002f49f();
    return piVar5;
  }
  uVar4 = 4;
  iVar1 = *(int *)(*param_1 + 4);
  if (*(int *)((int)param_1 + iVar1 + 0x38) != 0) {
    uVar4 = 0;
  }
  uVar4 = uVar4 | *(uint *)(iVar1 + 0xc + (int)param_1) & 0x17 | 2;
  *(uint *)((int)param_1 + iVar1 + 0xc) = uVar4;
  uVar4 = *(uint *)((int)param_1 + iVar1 + 0x10) & uVar4;
  if (uVar4 != 0) {
    if ((uVar4 & 4) == 0) {
      pcVar7 = "ios_base::failbit set";
      if ((uVar4 & 2) == 0) {
        pcVar7 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar7 = "ios_base::badbit set";
    }
    uVar6 = FUN_10037d50(auStack_28,1);
    FUN_10030100(pcVar7,uVar6);
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(auStack_44,&DAT_102048cc);
  }
  local_8 = 4;
  piVar5 = *(int **)(*(int *)(*local_30 + 4) + 0x38 + (int)local_30);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}

