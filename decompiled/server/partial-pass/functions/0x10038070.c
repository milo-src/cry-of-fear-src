// rea decompile_all
// name: FUN_10038070
// address: 0x10038070
// body: available
// range: 0x10038070-0x10038161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003815d to 0x100376c0 FUN_100376c0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038070(undefined1 param_1)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  
  uVar1 = in_ECX[5];
  uVar2 = in_ECX[4];
  if (uVar2 < uVar1) {
    in_ECX[4] = uVar2 + 1;
    if (0xf < uVar1) {
      in_ECX = (int *)*in_ECX;
    }
    *(undefined1 *)((int)in_ECX + uVar2) = param_1;
    *(undefined1 *)((int)in_ECX + uVar2 + 1) = 0;
    return;
  }
  if (uVar2 != 0x7fffffff) {
    uVar6 = uVar2 + 1 | 0xf;
    if (uVar6 < 0x80000000) {
      if (0x7fffffff - (uVar1 >> 1) < uVar1) {
        uVar6 = 0x7fffffff;
      }
      else {
        uVar4 = (uVar1 >> 1) + uVar1;
        if (uVar6 < uVar4) {
          uVar6 = uVar4;
        }
      }
    }
    else {
      uVar6 = 0x7fffffff;
    }
    iVar5 = FUN_1002f1e0(uVar6 + 1);
    in_ECX[4] = uVar2 + 1;
    in_ECX[5] = uVar6;
    if (0xf < uVar1) {
      pvVar3 = (void *)*in_ECX;
      FUN_10140130(iVar5,pvVar3,uVar2);
      *(undefined1 *)(iVar5 + uVar2) = param_1;
      *(undefined1 *)(iVar5 + 1 + uVar2) = 0;
      std::_Deallocate<8,0>(pvVar3,uVar1 + 1);
      *in_ECX = iVar5;
      return;
    }
    FUN_10140130(iVar5);
    *(undefined1 *)(iVar5 + uVar2) = param_1;
    *(undefined1 *)(iVar5 + 1 + uVar2) = 0;
    FUN_1002f280();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100376c0();
}

