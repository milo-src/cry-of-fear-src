// rea decompile_all
// name: FUN_1000f880
// address: 0x1000f880
// body: available
// range: 0x1000f880-0x1000fa34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_1000f880(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != 0) {
    iVar3 = 0;
    iVar5 = *(int *)(param_1 + 0x98) + param_1;
    iVar4 = *(int *)(param_1 + 0x94);
    if (0 < iVar4) {
      do {
        if (*(int *)(iVar5 + 0x14) == param_3) goto LAB_1000f8bb;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x18;
      } while (iVar3 < iVar4);
    }
    if (iVar3 < iVar4) {
LAB_1000f8bb:
      if ((*(byte *)(iVar5 + 4) & 0x38) != 0) {
        fVar1 = *(float *)(iVar5 + 0xc);
        fVar2 = *(float *)(iVar5 + 8);
        if (fVar1 < fVar2) {
          param_4 = -param_4;
        }
        if (fVar2 + 359.0 < fVar1) {
          if (param_4 <= 360.0) {
            if (param_4 < 0.0) {
              param_4 = (float)(int)(1.0 - param_4 / 360.0) * 360.0 + param_4;
            }
          }
          else {
            param_4 = param_4 - (float)(int)(param_4 / 360.0) * 360.0;
          }
        }
        else {
          fVar1 = (fVar2 + fVar1) * 0.5;
          if (fVar1 + 180.0 < param_4) {
            param_4 = param_4 - 360.0;
          }
          if (param_4 < fVar1 - 180.0) {
            param_4 = param_4 + 360.0;
          }
        }
      }
      iVar3 = (int)(((param_4 - *(float *)(iVar5 + 8)) * 255.0) /
                   (*(float *)(iVar5 + 0xc) - *(float *)(iVar5 + 8)));
      iVar4 = 0;
      if (-1 < iVar3) {
        iVar4 = iVar3;
      }
      if (0xff < iVar4) {
        iVar4 = 0xff;
      }
      *(char *)(param_2 + 0x140 + param_3) = (char)iVar4;
      return (float10)((*(float *)(iVar5 + 0xc) - *(float *)(iVar5 + 8)) *
                       (float)iVar4 * 0.003921569 + *(float *)(iVar5 + 8));
    }
  }
  return (float10)param_4;
}

