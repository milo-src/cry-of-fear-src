// rea decompile_all
// name: FUN_1000f020
// address: 0x1000f020
// body: available
// range: 0x1000f020-0x1000f145 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1000f020(int param_1,int param_2,int *param_3,float param_4,float param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  
  if (((param_1 != 0) && (*(int *)(param_2 + 300) < *(int *)(param_1 + 0xa4))) &&
     (param_3 != (int *)0x0)) {
    iVar4 = *(int *)(param_2 + 300) * 0xb0 + *(int *)(param_1 + 0xa8) + param_1;
    iVar1 = *(int *)(iVar4 + 0x30);
    param_1 = *(int *)(iVar4 + 0x34) + param_1;
    if ((iVar1 != 0) && (param_6 <= iVar1)) {
      iVar2 = *(int *)(iVar4 + 0x38);
      if (iVar2 < 2) {
        param_4 = 0.0;
        param_5 = 1.0;
      }
      else {
        fVar5 = (float)(iVar2 + -1) * 0.00390625;
        param_4 = param_4 * fVar5;
        param_5 = param_5 * fVar5;
      }
      if (param_6 < iVar1) {
        piVar3 = (int *)(param_6 * 0x4c + param_1);
        do {
          if ((piVar3[1] < 5000) &&
             (((fVar5 = (float)*piVar3, param_4 <= fVar5 && (fVar5 < param_5)) ||
              (((*(byte *)(iVar4 + 0x24) & 1) != 0 &&
               (((float)(iVar2 + -1) <= param_5 && (fVar5 < (param_5 - (float)iVar2) + 1.0)))))))) {
            *param_3 = piVar3[1];
            param_3[1] = param_6 * 0x4c + param_1 + 0xc;
            return param_6 + 1;
          }
          param_6 = param_6 + 1;
          piVar3 = piVar3 + 0x13;
        } while (param_6 < *(int *)(iVar4 + 0x30));
      }
    }
  }
  return 0;
}

