// rea decompile_all
// name: FUN_10037550
// address: 0x10037550
// body: available
// range: 0x10037550-0x100375c1 inclusive
// range: 0x100375da-0x1003761b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100375c0 to 0x100375c8 FUN_100375c8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10037617 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037550(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  char *pcVar4;
  uint uStack_40;
  undefined1 local_30 [20];
  undefined1 local_1c [8];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1019d750;
  local_10 = ExceptionList;
  uStack_40 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_40;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar1 = *(int *)(*in_ECX + 4);
  if ((*(int *)(iVar1 + 0xc + (int)in_ECX) == 0) &&
     ((*(byte *)(iVar1 + 0x14 + (int)in_ECX) & 2) != 0)) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 0x38 + (int)in_ECX) + 0x34))();
    if (iVar1 == -1) {
      iVar1 = *(int *)(*in_ECX + 4);
      uVar2 = *(uint *)(iVar1 + 0xc + (int)in_ECX) & 0x13 | 4;
      *(uint *)(iVar1 + 0xc + (int)in_ECX) = uVar2;
      uVar2 = *(uint *)(iVar1 + 0x10 + (int)in_ECX) & uVar2;
      if (uVar2 == 0) {
        FUN_100375c8();
        return;
      }
      if ((uVar2 & 4) == 0) {
        pcVar4 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar4 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar4 = "ios_base::badbit set";
      }
      uVar3 = FUN_10037d50(local_1c,1);
      FUN_10030100(pcVar4,uVar3);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_30,&DAT_102048cc);
    }
  }
  ExceptionList = local_10;
  return;
}

