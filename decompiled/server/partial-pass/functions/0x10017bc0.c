// rea decompile_all
// name: FUN_10017bc0
// address: 0x10017bc0
// body: available
// range: 0x10017bc0-0x10017d71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017bc0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    iVar4 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x18));
    *(int *)(in_ECX + 0x14) = iVar4;
    if (iVar4 == 0) {
      (*DAT_1022303c)(1,"Missing movewith entity %s\n",
                      *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x18));
      return;
    }
    for (iVar5 = *(int *)(iVar4 + 0x1c); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x20)) {
      if (iVar5 == in_ECX) {
        return;
      }
    }
    *(int *)(in_ECX + 0x20) = *(int *)(iVar4 + 0x1c);
    *(int *)(iVar4 + 0x1c) = in_ECX;
    iVar4 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar4 + 0x108) == 0) {
      *(uint *)(iVar4 + 0x108) = (*(int *)(iVar4 + 0x10c) != 4) + 7;
    }
    iVar4 = *(int *)(in_ECX + 0x14);
    if (((*(float *)(iVar4 + 0x68) == (float)DAT_10222f34) &&
        (*(float *)(iVar4 + 0x6c) == DAT_10222f34._4_4_)) &&
       (*(float *)(iVar4 + 0x70) == DAT_10222f3c)) {
      iVar3 = *(int *)(iVar4 + 4);
      iVar5 = *(int *)(in_ECX + 4);
      fVar1 = *(float *)(iVar5 + 0x10);
      fVar2 = *(float *)(iVar3 + 0x10);
      *(ulonglong *)(in_ECX + 0x24) =
           CONCAT44(*(float *)(iVar5 + 0xc) - *(float *)(iVar3 + 0xc),
                    *(float *)(iVar5 + 8) - *(float *)(iVar3 + 8));
      *(float *)(in_ECX + 0x2c) = fVar1 - fVar2;
    }
    else {
      FUN_100c4550();
      iVar4 = *(int *)(in_ECX + 0x14);
      iVar5 = *(int *)(in_ECX + 4);
      fVar1 = *(float *)(iVar4 + 0x70);
      *(ulonglong *)(in_ECX + 0x68) =
           CONCAT44(*(float *)(iVar4 + 0x6c) + *(float *)(in_ECX + 0x6c),
                    *(float *)(iVar4 + 0x68) + *(float *)(in_ECX + 0x68));
      *(float *)(in_ECX + 0x70) = fVar1 + *(float *)(in_ECX + 0x70);
    }
    iVar4 = *(int *)(iVar4 + 4);
    fVar1 = *(float *)(iVar5 + 0x58);
    fVar2 = *(float *)(iVar4 + 0x58);
    *(ulonglong *)(in_ECX + 0x30) =
         CONCAT44(*(float *)(iVar5 + 0x54) - *(float *)(iVar4 + 0x54),
                  *(float *)(iVar5 + 0x50) - *(float *)(iVar4 + 0x50));
    *(float *)(in_ECX + 0x38) = fVar1 - fVar2;
  }
  return;
}

