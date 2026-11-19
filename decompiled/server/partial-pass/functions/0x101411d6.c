// rea decompile_all
// name: FUN_101411d6
// address: 0x101411d6
// body: available
// range: 0x101411d6-0x1014127c inclusive
// range: 0x101412aa-0x101412c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101412c3 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_101411d6(void)

{
  int *piVar1;
  _s_RTTICompleteObjectLocator *p_Var2;
  TypeDescriptor *pTVar3;
  int iVar4;
  _s_RTTIBaseClassDescriptor *p_Var5;
  int unaff_EBP;
  void *pvVar6;
  
  FUN_1013f300(&DAT_10207d58,0x14);
  piVar1 = *(int **)(unaff_EBP + 8);
  if (piVar1 != (int *)0x0) {
    *(undefined4 *)(unaff_EBP + -4) = 0;
    p_Var2 = *(_s_RTTICompleteObjectLocator **)(*piVar1 + -4);
    pvVar6 = (void *)((int)piVar1 +
                     (-(-(uint)(*(int *)(p_Var2 + 8) != 0) &
                       *(uint *)((int)piVar1 - *(int *)(p_Var2 + 8))) - *(int *)(p_Var2 + 4)));
    pTVar3 = *(TypeDescriptor **)(unaff_EBP + 0x14);
    if ((*(uint *)(*(int *)(p_Var2 + 0x10) + 4) & 1) == 0) {
      p_Var5 = FindSITargetTypeInstance(p_Var2,*(TypeDescriptor **)(unaff_EBP + 0x10),pTVar3);
    }
    else {
      iVar4 = (int)piVar1 + (-(int)pvVar6 - *(int *)(unaff_EBP + 0xc));
      if ((*(uint *)(*(int *)(p_Var2 + 0x10) + 4) & 2) == 0) {
        p_Var5 = FindMITargetTypeInstance
                           (pvVar6,p_Var2,*(TypeDescriptor **)(unaff_EBP + 0x10),iVar4,pTVar3);
      }
      else {
        p_Var5 = FindVITargetTypeInstance
                           (pvVar6,p_Var2,*(TypeDescriptor **)(unaff_EBP + 0x10),iVar4,pTVar3);
      }
    }
    if (p_Var5 != (_s_RTTIBaseClassDescriptor *)0x0) {
      iVar4 = PMDtoOffset(pvVar6,(PMD *)(p_Var5 + 8));
      iVar4 = iVar4 + (int)pvVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
      goto LAB_101411eb;
    }
    if (*(int *)(unaff_EBP + 0x18) != 0) {
      construct_from_string_literal(unaff_EBP + -0x24,"Bad dynamic_cast!");
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x24,&DAT_10204894);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
  }
  iVar4 = 0;
LAB_101411eb:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar4;
}

