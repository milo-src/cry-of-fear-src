// rea decompile_all
// name: CallCatchBlock
// address: 0x10144406
// body: available
// range: 0x10144406-0x10144491 inclusive
// range: 0x10144523-0x10144547 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    void * __cdecl CallCatchBlock(struct EHExceptionRecord *,struct EHRegistrationNode *,struct
   _CONTEXT *,struct _s_FuncInfo const *,void *,int,unsigned long)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __cdecl
CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
              _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)

{
  EHRegistrationNode *pEVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int unaff_EBP;
  
  FUN_1013f300(&DAT_10207e50,0x3c);
  *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x18);
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  pEVar1 = *(EHRegistrationNode **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(pEVar1 + -4);
  iVar4 = *(int *)(unaff_EBP + 8);
  uVar2 = __CreateFrameInfo(unaff_EBP + -0x4c,*(undefined4 *)(iVar4 + 0x18));
  *(undefined4 *)(unaff_EBP + -0x34) = uVar2;
  iVar3 = ___vcrt_getptd();
  *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar3 + 0x10);
  iVar3 = ___vcrt_getptd();
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar3 + 0x14);
  iVar3 = ___vcrt_getptd();
  *(int *)(iVar3 + 0x10) = iVar4;
  iVar4 = ___vcrt_getptd();
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 1;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  pvVar5 = _CallCatchBlock2(pEVar1,*(_s_FuncInfo **)(unaff_EBP + 0x14),*(void **)(unaff_EBP + 0x18),
                            *(int *)(unaff_EBP + 0x1c),*(ulong *)(unaff_EBP + 0x20));
  *(void **)(unaff_EBP + -0x1c) = pvVar5;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xfffffffe;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  FUN_1014454e();
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return pvVar5;
}

