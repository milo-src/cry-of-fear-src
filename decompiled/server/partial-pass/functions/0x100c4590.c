// rea decompile_all
// name: FUN_100c4590
// address: 0x100c4590
// body: available
// range: 0x100c4590-0x100c47e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c4590(int param_1,float param_2,float param_3,float param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float10 fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = *(int *)(param_1 + 4);
  fVar5 = param_2 - *(float *)(iVar1 + 8);
  fVar7 = param_3 - *(float *)(iVar1 + 0xc);
  fVar8 = param_4 - *(float *)(iVar1 + 0x10);
  dVar6 = (double)(fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8);
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  if ((0.01 < (float)dVar6) && (fVar4 = (float10)(*DAT_1022302c)(), (float)fVar4 != 0.0)) {
    piVar2 = *(int **)(param_1 + 4);
    (*DAT_1022303c)(1,"AssignOrigin %s %s: (%f %f %f) goes to (%f %f %f)\n",
                    *piVar2 + *(int *)(DAT_10223188 + 0x98),
                    piVar2[0x74] + *(int *)(DAT_10223188 + 0x98),(double)(float)piVar2[2],
                    (double)(float)piVar2[3],(double)(float)piVar2[4],(double)param_2,
                    (double)param_3,(double)param_4);
  }
  FUN_10119fe0(param_1,&param_2);
  if ((param_5 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    iVar1 = *(int *)(param_1 + 4);
    iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 4);
    fVar5 = *(float *)(iVar1 + 0x10);
    fVar7 = *(float *)(iVar3 + 0x10);
    *(ulonglong *)(param_1 + 0x24) =
         CONCAT44(*(float *)(iVar1 + 0xc) - *(float *)(iVar3 + 0xc),
                  *(float *)(iVar1 + 8) - *(float *)(iVar3 + 8));
    *(float *)(param_1 + 0x2c) = fVar5 - fVar7;
  }
  for (iVar1 = *(int *)(param_1 + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    FUN_100c4590();
  }
  return;
}

