// rea decompile_all
// name: FUN_1014466b
// address: 0x1014466b
// body: available
// range: 0x1014466b-0x101446ec inclusive
// range: 0x101446fa-0x10144735 inclusive
// range: 0x1014474d-0x10144751 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014474d to 0x10176a6a _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1014466b(void)

{
  _s_FuncInfo *p_Var1;
  UnwindMapEntry *pUVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_1013f300(&DAT_10207e28,0x10);
  iVar3 = __FrameHandler3::GetCurrentState
                    (*(EHRegistrationNode **)(unaff_EBP + 8),*(void **)(unaff_EBP + 0xc),
                     *(_s_FuncInfo **)(unaff_EBP + 0x10));
  *(int *)(unaff_EBP + -0x1c) = iVar3;
  iVar4 = ___vcrt_getptd();
  *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + 1;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  while (iVar3 != *(int *)(unaff_EBP + 0x14)) {
    if ((iVar3 < 0) || (p_Var1 = *(_s_FuncInfo **)(unaff_EBP + 0x10), p_Var1->maxState <= iVar3))
    goto LAB_1014474d;
    pUVar2 = p_Var1->pUnwindMap;
    iVar4 = pUVar2[iVar3].toState;
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    if (pUVar2[iVar3].action != (action *)0x0) {
      __FrameHandler3::SetState(*(EHRegistrationNode **)(unaff_EBP + 8),p_Var1,iVar4);
      __CallSettingFrame_12(p_Var1->pUnwindMap[iVar3].action,*(undefined4 *)(unaff_EBP + 8),0x103);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iVar3 = *(int *)(unaff_EBP + -0x20);
    *(int *)(unaff_EBP + -0x1c) = iVar3;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
  FUN_10144739();
  if (iVar3 == *(int *)(unaff_EBP + 0x14)) {
    __FrameHandler3::SetState
              (*(EHRegistrationNode **)(unaff_EBP + 8),*(_s_FuncInfo **)(unaff_EBP + 0x10),iVar3);
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return;
  }
LAB_1014474d:
                    /* WARNING: Subroutine does not return */
  _abort();
}

