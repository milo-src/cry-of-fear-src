// rea decompile_all
// name: FUN_100d2660
// address: 0x100d2660
// body: available
// range: 0x100d2660-0x100d27b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100d2660(float param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = *(int *)(in_ECX + 4);
  fVar6 = param_2 - *(float *)(iVar1 + 0xc);
  fVar8 = param_1 - *(float *)(iVar1 + 8);
  dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8 + 0.0);
  if (dVar7 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  iVar3 = FUN_100d1f00();
  iVar5 = 0;
  fVar6 = (float)dVar7;
  iVar2 = in_ECX;
  while ((iVar4 = iVar3, iVar4 != 0 && (iVar4 != in_ECX))) {
    iVar5 = iVar5 + 1;
    if (9999 < iVar5) {
      (*DAT_1022303c)(4,"Bad sequence of path_tracks from %s",
                      *(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
      return 0;
    }
    fVar8 = param_2 - *(float *)(*(int *)(iVar4 + 4) + 0xc);
    fVar9 = param_1 - *(float *)(*(int *)(iVar4 + 4) + 8);
    dVar7 = (double)(fVar8 * fVar8 + fVar9 * fVar9 + 0.0);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    fVar8 = (float)dVar7;
    if (fVar6 <= fVar8) {
      iVar4 = iVar2;
      fVar8 = fVar6;
    }
    iVar3 = FUN_100d1f00();
    fVar6 = fVar8;
    iVar2 = iVar4;
  }
  return iVar2;
}

