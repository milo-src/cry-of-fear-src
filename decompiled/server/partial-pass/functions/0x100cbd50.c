// rea decompile_all
// name: FUN_100cbd50
// address: 0x100cbd50
// body: available
// range: 0x100cbd50-0x100cbd5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cbd50(float param_1,float param_2,float param_3,int param_4)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  undefined1 auStack_40 [16];
  float fStack_30;
  
  iVar2 = param_4;
  if (*(int *)(*(int *)(in_ECX + 0x24) + 0xc + param_4 * 0x10) != *(int *)(in_ECX + 0x1860)) {
    *(int *)(*(int *)(in_ECX + 0x24) + 0xc + param_4 * 0x10) = *(int *)(in_ECX + 0x1860);
    iVar1 = param_4 * 0x58;
    pfVar3 = (float *)(*(int *)(in_ECX + 0xc) + 0xc + iVar1);
    dVar5 = (double)((param_2 - pfVar3[1]) * (param_2 - pfVar3[1]) +
                     (param_1 - *pfVar3) * (param_1 - *pfVar3) +
                    (param_3 - pfVar3[2]) * (param_3 - pfVar3[2]));
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    fVar6 = (float)dVar5;
    if (fVar6 < *(float *)(in_ECX + 0x1828)) {
      FUN_1011a800(&param_1,pfVar3,1,0,auStack_40);
      if (fStack_30 == 1.0) {
        *(int *)(in_ECX + 0x182c) = iVar2;
        *(float *)(in_ECX + 0x1828) = fVar6;
        FUN_100cfde0(in_ECX + 0x1830,in_ECX + 0x183c,
                     (((int)param_1 - (int)*(float *)(in_ECX + 0x1864)) * 0x100) /
                     (((int)*(float *)(in_ECX + 0x1870) - (int)*(float *)(in_ECX + 0x1864)) + 1),
                     *(undefined1 *)(iVar1 + 0x18 + *(int *)(in_ECX + 0xc)));
        FUN_100cfde0(in_ECX + 0x1834,in_ECX + 0x1840,
                     (((int)param_2 - (int)*(float *)(in_ECX + 0x1868)) * 0x100) /
                     (((int)*(float *)(in_ECX + 0x1874) - (int)*(float *)(in_ECX + 0x1868)) + 1),
                     *(undefined1 *)(iVar1 + 0x19 + *(int *)(in_ECX + 0xc)));
        FUN_100cfde0(in_ECX + 0x1838,in_ECX + 0x1844,
                     (((int)param_3 - (int)*(float *)(in_ECX + 0x186c)) * 0x100) /
                     (((int)*(float *)(in_ECX + 0x1878) - (int)*(float *)(in_ECX + 0x186c)) + 1),
                     *(undefined1 *)(iVar1 + 0x1a + *(int *)(in_ECX + 0xc)));
        iVar1 = (int)*(float *)(in_ECX + 0x1864);
        iVar2 = ((int)*(float *)(in_ECX + 0x1870) - iVar1) + 1;
        *(int *)(in_ECX + 0x1848) = (((int)(param_1 - fVar6) - iVar1) * 0x100) / iVar2;
        iVar4 = (int)*(float *)(in_ECX + 0x1868);
        *(int *)(in_ECX + 0x1854) = (((int)(param_1 + fVar6) - iVar1) * 0x100) / iVar2;
        iVar2 = ((int)*(float *)(in_ECX + 0x1874) - iVar4) + 1;
        *(int *)(in_ECX + 0x184c) = (((int)(param_2 - fVar6) - iVar4) * 0x100) / iVar2;
        iVar1 = (int)*(float *)(in_ECX + 0x186c);
        *(int *)(in_ECX + 0x1858) = (((int)(param_2 + fVar6) - iVar4) * 0x100) / iVar2;
        iVar2 = ((int)*(float *)(in_ECX + 0x1878) - iVar1) + 1;
        *(int *)(in_ECX + 0x1850) = (((int)(param_3 - fVar6) - iVar1) * 0x100) / iVar2;
        *(int *)(in_ECX + 0x185c) = (((int)(param_3 + fVar6) - iVar1) * 0x100) / iVar2;
      }
    }
  }
  return;
}

