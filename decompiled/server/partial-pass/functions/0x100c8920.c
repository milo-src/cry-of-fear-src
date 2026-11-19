// rea decompile_all
// name: FUN_100c8920
// address: 0x100c8920
// body: available
// range: 0x100c8920-0x100c8a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100c8920(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *local_c;
  
  piVar2 = param_2;
  local_c = (int *)0x0;
  iVar5 = -1;
  iVar3 = (**(code **)(*param_2 + 0x148))();
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x2514);
    param_2 = (int *)0x0;
    do {
      for (piVar1 = (int *)*puVar4; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x59]) {
        iVar3 = *(int *)(&DAT_102318b0 + piVar1[0x5a] * 0x2c);
        if (((iVar3 < 0) || (iVar3 != *(int *)(&DAT_102318b0 + piVar2[0x5a] * 0x2c))) ||
           (piVar1 == piVar2)) {
          if (((iVar5 < iVar3) && (piVar1 != piVar2)) &&
             (iVar3 = (**(code **)(*piVar1 + 0x140))(), iVar3 != 0)) {
            iVar5 = *(int *)(&DAT_102318b0 + piVar1[0x5a] * 0x2c);
            local_c = piVar1;
          }
        }
        else {
          iVar3 = (**(code **)(*piVar1 + 0x140))();
          if ((iVar3 != 0) && (iVar3 = FUN_100f5e50(piVar1), iVar3 != 0)) {
            return 1;
          }
        }
      }
      param_2 = (int *)((int)param_2 + 1);
      puVar4 = puVar4 + 1;
    } while ((int)param_2 < 6);
    if (local_c != (int *)0x0) {
      FUN_100f5e50(local_c);
      return 1;
    }
  }
  return 0;
}

