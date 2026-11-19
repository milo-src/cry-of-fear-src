// rea decompile_all
// name: FUN_10022cd0
// address: 0x10022cd0
// body: available
// range: 0x10022cd0-0x10022e54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022cd0(void)

{
  int in_ECX;
  int iVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(*(int *)(in_ECX + 4) + 0x248) != 1) {
    FUN_10119320(*(int *)(in_ECX + 4) + 0x50);
    iVar1 = *(int *)(in_ECX + 4);
    fVar4 = DAT_10223188[0xc];
    *(ulonglong *)(iVar1 + 0x20) =
         CONCAT44(*(float *)(iVar1 + 0x24) - DAT_10223188[0xb] * 2.5,
                  *(float *)(iVar1 + 0x20) - DAT_10223188[10] * 2.5);
    *(float *)(iVar1 + 0x28) = *(float *)(iVar1 + 0x28) - fVar4 * 2.5;
    iVar1 = *(int *)(in_ECX + 4);
    dVar2 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                     *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                    *(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28));
    if (dVar2 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar2 = SQRT(dVar2);
    }
    fVar4 = (float)dVar2;
    if (70.0 < fVar4) {
      fVar3 = 0.0;
      if (fVar4 == 0.0) {
        fVar4 = 1.0;
        fVar5 = 0.0;
      }
      else {
        fVar4 = 1.0 / fVar4;
        fVar3 = *(float *)(iVar1 + 0x20) * fVar4;
        fVar5 = *(float *)(iVar1 + 0x24) * fVar4;
        fVar4 = *(float *)(iVar1 + 0x28) * fVar4;
      }
      *(ulonglong *)(iVar1 + 0x20) = CONCAT44(fVar5 * 70.0,fVar3 * 70.0);
      *(float *)(iVar1 + 0x28) = fVar4 * 70.0;
      iVar1 = *(int *)(in_ECX + 4);
    }
    if (*(int *)(iVar1 + 0x248) != 2) {
      FUN_10023130("row_backwards");
      iVar1 = *(int *)(in_ECX + 4);
    }
    *(float *)(in_ECX + 0x108) = *DAT_10223188 + 0.2;
    *(undefined4 *)(iVar1 + 0x248) = 2;
  }
  return;
}

