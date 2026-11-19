// rea decompile_all
// name: dllmain_dispatch
// address: 0x1013eb5b
// body: available
// range: 0x1013eb5b-0x1013ec25 inclusive
// range: 0x1013ec4a-0x1013ec65 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl dllmain_dispatch(struct HINSTANCE__ * const,unsigned long,void * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl dllmain_dispatch(HINSTANCE__ *param_1,ulong param_2,void *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_1013f300(&DAT_10207d18,0xc);
  uVar1 = *(ulong *)(unaff_EBP + 0xc);
  if ((uVar1 == 0) && (DAT_102328e8 < 1)) {
    iVar2 = 0;
    goto LAB_1013ec56;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((uVar1 == 1) || (uVar1 == 2)) {
    pvVar4 = *(void **)(unaff_EBP + 0x10);
    iVar3 = dllmain_raw(*(HINSTANCE__ **)(unaff_EBP + 8),uVar1,pvVar4);
    *(int *)(unaff_EBP + -0x1c) = iVar3;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar3 = dllmain_crt_dispatch(*(HINSTANCE__ **)(unaff_EBP + 8),uVar1,pvVar4);
      *(int *)(unaff_EBP + -0x1c) = iVar3;
      iVar2 = 0;
      if (iVar3 != 0) goto LAB_1013ebc1;
    }
  }
  else {
    pvVar4 = *(void **)(unaff_EBP + 0x10);
LAB_1013ebc1:
    iVar2 = FUN_100b4ad0(*(undefined4 *)(unaff_EBP + 8),uVar1,pvVar4);
    *(int *)(unaff_EBP + -0x1c) = iVar2;
    if ((uVar1 == 1) && (iVar2 == 0)) {
      FUN_100b4ad0(*(undefined4 *)(unaff_EBP + 8),0,pvVar4);
      FUN_1013eaab(pvVar4 != (void *)0x0);
      dllmain_raw(*(HINSTANCE__ **)(unaff_EBP + 8),0,pvVar4);
    }
    if ((uVar1 == 0) || (uVar1 == 3)) {
      iVar3 = dllmain_crt_dispatch(*(HINSTANCE__ **)(unaff_EBP + 8),uVar1,pvVar4);
      *(int *)(unaff_EBP + -0x1c) = iVar3;
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = dllmain_raw(*(HINSTANCE__ **)(unaff_EBP + 8),uVar1,pvVar4);
        *(int *)(unaff_EBP + -0x1c) = iVar2;
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
LAB_1013ec56:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar2;
}

