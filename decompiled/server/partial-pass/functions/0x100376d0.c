// rea decompile_all
// name: FUN_100376d0
// address: 0x100376d0
// body: available
// range: 0x100376d0-0x10037808 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037804 to 0x100376c0 FUN_100376c0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100376d0(undefined4 param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  
  uVar2 = in_ECX[5];
  iVar3 = in_ECX[4];
  if (param_2 <= uVar2 - iVar3) {
    in_ECX[4] = iVar3 + param_2;
    if (0xf < uVar2) {
      in_ECX = (int *)*in_ECX;
    }
    FUN_101406b0(iVar3 + (int)in_ECX,param_1,param_2);
    *(undefined1 *)(iVar3 + (int)in_ECX + param_2) = 0;
    return;
  }
  if (param_2 <= 0x7fffffffU - iVar3) {
    uVar7 = iVar3 + param_2 | 0xf;
    if (uVar7 < 0x80000000) {
      if (0x7fffffff - (uVar2 >> 1) < uVar2) {
        uVar7 = 0x7fffffff;
      }
      else {
        uVar5 = (uVar2 >> 1) + uVar2;
        if (uVar7 < uVar5) {
          uVar7 = uVar5;
        }
      }
    }
    else {
      uVar7 = 0x7fffffff;
    }
    iVar6 = FUN_1002f1e0(uVar7 + 1);
    in_ECX[4] = iVar3 + param_2;
    in_ECX[5] = uVar7;
    iVar1 = iVar6 + iVar3;
    if (0xf < uVar2) {
      pvVar4 = (void *)*in_ECX;
      FUN_10140130(iVar6,pvVar4,iVar3);
      FUN_10140130(iVar1,param_1,param_2);
      *(undefined1 *)(iVar1 + param_2) = 0;
      std::_Deallocate<8,0>(pvVar4,uVar2 + 1);
      *in_ECX = iVar6;
      return;
    }
    FUN_10140130(iVar6);
    FUN_10140130(iVar1,param_1,param_2);
    *(undefined1 *)(iVar1 + param_2) = 0;
    FUN_1002f280();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100376c0();
}

