// rea decompile_all
// name: FUN_10125649
// address: 0x10125649
// body: available
// range: 0x10125649-0x1012570d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10125709 to 0x10122660 FUN_10122660 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10125649(int param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  _Lockit local_18 [4];
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10125655;
  std::_Lockit::_Lockit(local_18,0);
  local_8 = 0;
  if (*(uint *)(param_1 + 0xc) <= param_3) {
    uVar3 = param_3 + 1;
    if (uVar3 < 0x28) {
      uVar3 = 0x28;
    }
    iVar2 = FUN_1017623a(*(undefined4 *)(param_1 + 8),uVar3 << 2);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10122660();
    }
    *(int *)(param_1 + 8) = iVar2;
    while (*(uint *)(param_1 + 0xc) < uVar3) {
      *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0xc) * 4) = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    }
  }
  pcVar1 = *(code **)(*param_2 + 4);
  guard_check_icall();
  (*pcVar1)();
  local_14 = *(int **)(*(int *)(param_1 + 8) + param_3 * 4);
  if (local_14 != (int *)0x0) {
    pcVar1 = *(code **)(*local_14 + 8);
    guard_check_icall();
    local_14 = (int *)(*pcVar1)();
    if (local_14 != (int *)0x0) {
      pcVar1 = *(code **)*local_14;
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  *(int **)(*(int *)(param_1 + 8) + param_3 * 4) = param_2;
  std::_Lockit::~_Lockit(local_18);
  return;
}

