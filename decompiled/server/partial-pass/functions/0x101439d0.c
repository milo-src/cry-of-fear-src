// rea decompile_all
// name: FUN_101439d0
// address: 0x101439d0
// body: available
// range: 0x101439d0-0x10143aec inclusive
// range: 0x10143af6-0x10143b0c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10143b08 to 0x10176a6a _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_101439d0(void)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_EBP;
  int *piVar7;
  
  FUN_1013f300(&DAT_10207ed0,0x10);
  iVar6 = 0;
  puVar1 = *(uint **)(unaff_EBP + 0x10);
  if (((puVar1[1] == 0) || (*(char *)(puVar1[1] + 8) == '\0')) ||
     ((puVar1[2] == 0 && (-1 < (int)*puVar1)))) {
    iVar6 = 0;
    goto LAB_10143af8;
  }
  uVar2 = *puVar1;
  piVar7 = *(int **)(unaff_EBP + 0xc);
  if (-1 < (int)uVar2) {
    piVar7 = (int *)((int)piVar7 + puVar1[2] + 0xc);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = DAT_10232900;
  pbVar3 = *(byte **)(unaff_EBP + 0x14);
  if ((((char)uVar2 < '\0') && ((*pbVar3 & 0x10) != 0)) &&
     (*(int *)(unaff_EBP + -0x1c) = DAT_10232900, iVar4 != 0)) {
    guard_check_icall();
    iVar4 = (**(code **)(unaff_EBP + -0x1c))();
LAB_10143a47:
    if ((iVar4 == 0) || (piVar7 == (int *)0x0)) {
LAB_10143b08:
                    /* WARNING: Subroutine does not return */
      _abort();
    }
    *piVar7 = iVar4;
LAB_10143a97:
    iVar4 = ___AdjustPointer(iVar4,pbVar3 + 8);
    *piVar7 = iVar4;
  }
  else {
    iVar4 = *(int *)(unaff_EBP + 8);
    if ((uVar2 & 8) != 0) {
      iVar4 = *(int *)(iVar4 + 0x18);
      goto LAB_10143a47;
    }
    if ((*pbVar3 & 1) != 0) {
      if ((*(int *)(iVar4 + 0x18) == 0) || (piVar7 == (int *)0x0)) goto LAB_10143b08;
      FUN_101406b0(piVar7,*(undefined4 *)(iVar4 + 0x18),*(undefined4 *)(pbVar3 + 0x14));
      if ((*(int *)(pbVar3 + 0x14) != 4) || (*piVar7 == 0)) goto LAB_10143ae2;
      iVar4 = *piVar7;
      goto LAB_10143a97;
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    if (*(int *)(pbVar3 + 0x18) == 0) {
      if ((iVar4 == 0) || (piVar7 == (int *)0x0)) goto LAB_10143b08;
      uVar5 = ___AdjustPointer(iVar4,pbVar3 + 8,*(undefined4 *)(pbVar3 + 0x14));
      FUN_101406b0(piVar7,uVar5);
    }
    else {
      if ((iVar4 == 0) || (piVar7 == (int *)0x0)) goto LAB_10143b08;
      iVar6 = ((*pbVar3 & 4) != 0) + 1;
      *(int *)(unaff_EBP + -0x20) = iVar6;
    }
  }
LAB_10143ae2:
  *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
LAB_10143af8:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar6;
}

