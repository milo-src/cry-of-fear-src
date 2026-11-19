// rea decompile_all
// name: FUN_10043130
// address: 0x10043130
// body: available
// range: 0x10043130-0x10043370 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10043130(void)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar4 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar4 + 0x250) == 0) {
    iVar3 = *(int *)(iVar4 + 0x254);
    if (iVar3 == 0) {
      if (0.0 < *(float *)(iVar4 + 0x50)) {
        *(float *)(iVar4 + 0x50) = *(float *)(iVar4 + 0x50) - (float)*(int *)(iVar4 + 0x24c);
        iVar4 = *(int *)(in_ECX + 4);
      }
      if (*(float *)(iVar4 + 0x50) <= 0.0 && *(float *)(iVar4 + 0x50) != 0.0) {
        *(undefined4 *)(iVar4 + 0x50) = 0;
      }
    }
    else if (iVar3 == 1) {
      if (0.0 < *(float *)(iVar4 + 0x54)) {
        *(float *)(iVar4 + 0x54) = *(float *)(iVar4 + 0x54) - (float)*(int *)(iVar4 + 0x24c);
        iVar4 = *(int *)(in_ECX + 4);
      }
      if (*(float *)(iVar4 + 0x54) <= 0.0 && *(float *)(iVar4 + 0x54) != 0.0) {
        *(undefined4 *)(iVar4 + 0x54) = 0;
      }
    }
    else if (iVar3 == 2) {
      if (0.0 < *(float *)(iVar4 + 0x58)) {
        *(float *)(iVar4 + 0x58) = *(float *)(iVar4 + 0x58) - (float)*(int *)(iVar4 + 0x24c);
        iVar4 = *(int *)(in_ECX + 4);
      }
      if (*(float *)(iVar4 + 0x58) <= 0.0 && *(float *)(iVar4 + 0x58) != 0.0) {
        *(undefined4 *)(iVar4 + 0x58) = 0;
      }
    }
    iVar4 = FUN_10017780();
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x188);
      if (iVar4 == 0) {
        iVar4 = FUN_100177a0();
        fVar2 = *(float *)(*(int *)(iVar4 + 4) + 0x50);
        if (*(float *)(in_ECX + 0x18c) <= fVar2 && fVar2 != *(float *)(in_ECX + 0x18c)) {
          iVar4 = FUN_100177a0();
          *(float *)(*(int *)(iVar4 + 4) + 0x50) =
               *(float *)(*(int *)(iVar4 + 4) + 0x50) -
               (float)*(int *)(*(int *)(in_ECX + 4) + 0x24c);
        }
        iVar4 = FUN_100177a0();
        pfVar1 = (float *)(*(int *)(iVar4 + 4) + 0x50);
        if (*pfVar1 <= *(float *)(in_ECX + 0x18c) && *(float *)(in_ECX + 0x18c) != *pfVar1) {
          iVar4 = FUN_100177a0();
          *(undefined4 *)(*(int *)(iVar4 + 4) + 0x50) = *(undefined4 *)(in_ECX + 0x18c);
        }
      }
      else if (iVar4 == 1) {
        iVar4 = FUN_100177a0();
        fVar2 = *(float *)(*(int *)(iVar4 + 4) + 0x54);
        if (*(float *)(in_ECX + 400) <= fVar2 && fVar2 != *(float *)(in_ECX + 400)) {
          iVar4 = FUN_100177a0();
          *(float *)(*(int *)(iVar4 + 4) + 0x54) =
               *(float *)(*(int *)(iVar4 + 4) + 0x54) -
               (float)*(int *)(*(int *)(in_ECX + 4) + 0x24c);
        }
        iVar4 = FUN_100177a0();
        pfVar1 = (float *)(*(int *)(iVar4 + 4) + 0x54);
        if (*pfVar1 <= *(float *)(in_ECX + 400) && *(float *)(in_ECX + 400) != *pfVar1) {
          iVar4 = FUN_100177a0();
          *(undefined4 *)(*(int *)(iVar4 + 4) + 0x54) = *(undefined4 *)(in_ECX + 400);
          return;
        }
      }
      else if (iVar4 == 2) {
        iVar4 = FUN_100177a0();
        fVar2 = *(float *)(*(int *)(iVar4 + 4) + 0x58);
        if (*(float *)(in_ECX + 0x194) <= fVar2 && fVar2 != *(float *)(in_ECX + 0x194)) {
          iVar4 = FUN_100177a0();
          *(float *)(*(int *)(iVar4 + 4) + 0x58) =
               *(float *)(*(int *)(iVar4 + 4) + 0x58) -
               (float)*(int *)(*(int *)(in_ECX + 4) + 0x24c);
        }
        iVar4 = FUN_100177a0();
        pfVar1 = (float *)(*(int *)(iVar4 + 4) + 0x58);
        if (*pfVar1 <= *(float *)(in_ECX + 0x194) && *(float *)(in_ECX + 0x194) != *pfVar1) {
          iVar4 = FUN_100177a0();
          *(undefined4 *)(*(int *)(iVar4 + 4) + 0x58) = *(undefined4 *)(in_ECX + 0x194);
          return;
        }
      }
    }
  }
  return;
}

