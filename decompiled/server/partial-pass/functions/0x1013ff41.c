// rea decompile_all
// name: FUN_1013ff41
// address: 0x1013ff41
// body: available
// range: 0x1013ff41-0x1013ffe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013ffdf to 0x10176a6a _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1013ff41(int param_1,int *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int *piVar6;
  bool bVar7;
  
  if ((((param_2 == (int *)0x0) || (param_2 = (int *)*param_2, param_2 == (int *)0x0)) ||
      (*param_2 != -0x1f928c9d)) ||
     ((param_2[4] != 3 ||
      (((param_2[5] != 0x19930520 && (param_2[5] != 0x19930521)) && (param_2[5] != 0x19930522))))))
  {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  piVar6 = *(int **)(param_2[7] + 0xc);
  iVar4 = *piVar6;
  do {
    if (iVar4 < 1) {
      return 0;
    }
    piVar6 = piVar6 + 1;
    pbVar5 = (byte *)(param_1 + 8);
    pbVar2 = (byte *)(*(int *)(*piVar6 + 4) + 8);
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_1013ffc2:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_1013ffc7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_1013ffc2;
      pbVar5 = pbVar5 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_1013ffc7:
    if (uVar3 == 0) {
      return 1;
    }
    iVar4 = iVar4 + -1;
  } while( true );
}

