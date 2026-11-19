// rea decompile_all
// name: FUN_101180b0
// address: 0x101180b0
// body: available
// range: 0x101180b0-0x101181ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101180b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  
  if (((param_2 < 0) || (iVar1 = (&DAT_1021b944)[param_2 * 2], iVar1 < 0)) ||
     (*(float *)(param_1 + 0x10) == 1.0)) {
    return;
  }
  if ((param_2 == 0xb) || (param_2 == 0xc)) {
    FUN_10117fe0(param_1,"scorch",0);
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    sVar3 = 0;
  }
  else {
    piVar2 = *(int **)(*(int *)(param_1 + 0x30) + 0x7c);
    if ((piVar2 != (int *)0x0) && (iVar4 = (**(code **)(*piVar2 + 0xc0))(), iVar4 == 0)) {
      return;
    }
    sVar3 = (*DAT_10223064)(*(undefined4 *)(param_1 + 0x30));
    if (sVar3 != 0) {
      param_2 = 0x76;
      iVar4 = iVar1 + -0x100;
      if (iVar1 < 0x100) {
        param_2 = 0x68;
        iVar4 = iVar1;
      }
      goto LAB_10118176;
    }
  }
  param_2 = 0x74;
  iVar4 = iVar1;
  if (0xff < iVar1) {
    param_2 = 0x75;
    iVar4 = iVar1 + -0x100;
  }
LAB_10118176:
  (*DAT_10223000)(0,0x17,0,0);
  (*DAT_10223008)(param_2);
  (*DAT_1022301c)(*(undefined4 *)(param_1 + 0x14));
  (*DAT_1022301c)(*(undefined4 *)(param_1 + 0x18));
  (*DAT_1022301c)(*(undefined4 *)(param_1 + 0x1c));
  (*DAT_10223008)(iVar4);
  if (sVar3 != 0) {
    (*DAT_10223010)((int)sVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x101181e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_10223004)();
  return;
}

