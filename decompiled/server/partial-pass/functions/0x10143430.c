// rea decompile_all
// name: __except_handler4
// address: 0x10143430
// body: available
// range: 0x10143430-0x1014358d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014358d with no resolved callee; its no-return basis is unknown.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2019 Release */

undefined4 __except_handler4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 uVar6;
  int iVar7;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  uint local_c;
  char local_5;
  
  local_5 = '\0';
  local_10 = 1;
  iVar3 = __filter_x86_sse2_floating_point_exception_default(*param_1);
  *param_1 = iVar3;
  iVar3 = param_2 + 0x10;
  local_c = *(uint *)(param_2 + 8) ^ DAT_1021baf4;
  local_14 = iVar3;
  _ValidateLocalCookies(local_c,iVar3);
  ___except_validate_context_record(param_3);
  iVar7 = *(int *)(param_2 + 0xc);
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    local_20 = param_1;
    local_1c = param_3;
    *(int ***)(param_2 + -4) = &local_20;
    if (iVar7 == -2) {
      return local_10;
    }
    do {
      iVar4 = iVar7 * 3 + 4;
      iVar1 = *(int *)(local_c + iVar4 * 4);
      local_18 = local_c + iVar4 * 4;
      if (*(int *)(local_18 + 4) != 0) {
        iVar4 = _EH4_CallFilterFunc(*(int *)(local_18 + 4),iVar3);
        local_5 = '\x01';
        if (iVar4 < 0) {
          local_10 = 0;
          goto LAB_101434f4;
        }
        if (0 < iVar4) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar5 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_101eb57c)
             , BVar5 != 0)) {
            guard_check_icall(param_1,1);
            ___DestructExceptionObject();
            iVar3 = local_14;
          }
          _EH4_GlobalUnwind2(param_2,param_1);
          if (*(int *)(param_2 + 0xc) != iVar7) {
            _EH4_LocalUnwind(param_2,iVar7,iVar3,&DAT_1021baf4);
          }
          *(int *)(param_2 + 0xc) = iVar1;
          _ValidateLocalCookies(local_c,iVar3);
          _EH4_TransferToHandler(*(undefined4 *)(local_18 + 8),iVar3);
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return uVar6;
        }
      }
      iVar7 = iVar1;
    } while (iVar1 != -2);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
    if (iVar7 == -2) {
      return local_10;
    }
    _EH4_LocalUnwind(param_2,0xfffffffe,iVar3,&DAT_1021baf4);
  }
LAB_101434f4:
  _ValidateLocalCookies(local_c,iVar3);
  return local_10;
}

