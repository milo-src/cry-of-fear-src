// rea decompile_all
// name: FUN_1004958c
// address: 0x1004958c
// body: available
// range: 0x1004958c-0x10049640 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004963c to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004958c(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  uint in_ECX;
  uint uVar5;
  int *unaff_EBX;
  int unaff_EBP;
  char *pcVar6;
  
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar1 = *(int *)(*unaff_EBX + 4);
  uVar5 = 4;
  if (*(int *)((int)unaff_EBX + iVar1 + 0x38) != 0) {
    uVar5 = 0;
  }
  uVar5 = uVar5 | (*(uint *)(iVar1 + 0xc + (int)unaff_EBX) | in_ECX) & 0x17;
  *(uint *)((int)unaff_EBX + iVar1 + 0xc) = uVar5;
  uVar5 = *(uint *)((int)unaff_EBX + iVar1 + 0x10) & uVar5;
  if (uVar5 == 0) {
    *(undefined4 *)(unaff_EBP + -4) = 3;
    cVar3 = ___uncaught_exception();
    if (cVar3 == '\0') {
      FUN_10037550();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    piVar2 = *(int **)(*(int *)(**(int **)(unaff_EBP + -0x28) + 4) + 0x38 +
                      (int)*(int **)(unaff_EBP + -0x28));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))();
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  if ((uVar5 & 4) == 0) {
    pcVar6 = "ios_base::failbit set";
    if ((uVar5 & 2) == 0) {
      pcVar6 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar6 = "ios_base::badbit set";
  }
  uVar4 = FUN_10037d50(unaff_EBP + -0x20,1);
  FUN_10030100(pcVar6,uVar4);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_102048cc);
}

