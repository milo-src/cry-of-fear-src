// rea decompile_all
// name: FUN_100c1310
// address: 0x100c1310
// body: available
// range: 0x100c1310-0x100c13f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100c1310(void)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float local_10;
  
  fVar4 = -NAN;
  fVar5 = *(float *)(in_ECX + 0x2d4);
  local_10 = 8192.0;
  if (fVar5 == -NAN) {
    (*DAT_1022303c)(2,"ERROR! PBestScent() has empty soundlist!\n");
  }
  else {
    do {
      pfVar1 = (float *)FUN_10100910(fVar5);
      iVar2 = FUN_101005e0();
      if (iVar2 != 0) {
        iVar2 = *(int *)(in_ECX + 4);
        fVar9 = pfVar1[1] - *(float *)(iVar2 + 0xc);
        fVar8 = *pfVar1 - *(float *)(iVar2 + 8);
        fVar6 = pfVar1[2] - *(float *)(iVar2 + 0x10);
        dVar7 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
        if (dVar7 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar7 = SQRT(dVar7);
        }
        if ((float)dVar7 < local_10) {
          fVar4 = fVar5;
          local_10 = (float)dVar7;
        }
      }
      fVar5 = pfVar1[7];
    } while (fVar5 != -NAN);
    if (-1 < (int)fVar4) {
      uVar3 = FUN_10100910(fVar4);
      return uVar3;
    }
  }
  return 0;
}

