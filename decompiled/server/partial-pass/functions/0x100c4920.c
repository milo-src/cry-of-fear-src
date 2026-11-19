// rea decompile_all
// name: FUN_100c4920
// address: 0x100c4920
// body: available
// range: 0x100c4920-0x100c4b84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c4920(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar4 = param_2 - *(float *)(iVar1 + 0x50);
  fVar6 = param_3 - *(float *)(iVar1 + 0x54);
  fVar7 = param_4 - *(float *)(iVar1 + 0x58);
  dVar5 = (double)(fVar4 * fVar4 + fVar6 * fVar6 + fVar7 * fVar7);
  if (dVar5 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  if ((0.01 < (float)dVar5) && (fVar3 = (float10)(*DAT_1022302c)(), (float)fVar3 != 0.0)) {
    piVar2 = *(int **)(param_1 + 4);
    (*DAT_1022303c)(1,"SetAngles %s %s: (%f %f %f) goes to (%f %f %f)\n",
                    *piVar2 + *(int *)(DAT_10223188 + 0x98),
                    piVar2[0x74] + *(int *)(DAT_10223188 + 0x98),(double)(float)piVar2[0x14],
                    (double)(float)piVar2[0x15],(double)(float)piVar2[0x16],(double)param_2,
                    (double)param_3,(double)param_4);
  }
  iVar1 = *(int *)(param_1 + 4);
  *(ulonglong *)(iVar1 + 0x50) = CONCAT44(param_3,param_2);
  *(float *)(iVar1 + 0x58) = param_4;
  if ((param_5 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    fVar4 = *(float *)(iVar1 + 0x58);
    *(ulonglong *)(param_1 + 0x30) =
         CONCAT44(param_3 - *(float *)(iVar1 + 0x54),param_2 - *(float *)(iVar1 + 0x50));
    *(float *)(param_1 + 0x38) = param_4 - fVar4;
  }
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    FUN_100c4920();
  }
  return;
}

