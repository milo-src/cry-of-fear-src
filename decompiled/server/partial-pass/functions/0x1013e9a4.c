// rea decompile_all
// name: FUN_1013e9a4
// address: 0x1013e9a4
// body: available
// range: 0x1013e9a4-0x1013ea83 inclusive
// range: 0x1013ea91-0x1013eaa9 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013eaa5 to 0x1013f0f7 ___scrt_fastfail (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1013e9a4(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int unaff_EBP;
  
  FUN_1013f300(&DAT_10207cd0,0x10);
  cVar3 = ___scrt_initialize_crt(0);
  if (cVar3 != '\0') {
    uVar4 = ___scrt_acquire_startup_lock();
    *(undefined1 *)(unaff_EBP + -0x1d) = uVar4;
    bVar2 = true;
    *(undefined1 *)(unaff_EBP + -0x19) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (DAT_102328c4 != 0) {
                    /* WARNING: Subroutine does not return */
      ___scrt_fastfail(7);
    }
    DAT_102328c4 = 1;
    cVar3 = FUN_1013e30c();
    if (cVar3 != '\0') {
      FUN_1013f42b();
      FUN_1013f3f0();
      FUN_1013f408();
      iVar5 = __initterm_e(&DAT_101a11e4,&DAT_101a1200);
      if (iVar5 == 0) {
        cVar3 = ___scrt_dllmain_after_initialize_c();
        if (cVar3 != '\0') {
          __initterm(&DAT_101a11bc,&DAT_101a11e0);
          DAT_102328c4 = 2;
          bVar2 = false;
          *(undefined1 *)(unaff_EBP + -0x19) = 0;
        }
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
    FUN_1013ea87();
    if (!bVar2) {
      piVar6 = (int *)FUN_1013f425();
      if (*piVar6 != 0) {
        cVar3 = ___scrt_is_nonwritable_in_current_image(piVar6);
        if (cVar3 != '\0') {
          pcVar1 = (code *)*piVar6;
          guard_check_icall(*(undefined4 *)(unaff_EBP + 8),2,*(undefined4 *)(unaff_EBP + 0xc));
          (*pcVar1)();
        }
      }
      DAT_102328e8 = DAT_102328e8 + 1;
      uVar7 = 1;
      goto LAB_1013ea93;
    }
  }
  uVar7 = 0;
LAB_1013ea93:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return uVar7;
}

