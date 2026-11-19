// rea decompile_all
// name: FUN_10102dd0
// address: 0x10102dd0
// body: available
// range: 0x10102dd0-0x10102f58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10102dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  
  iVar5 = FUN_10018350(param_3);
  if (iVar5 != 0) {
    iVar5 = *(int *)(in_ECX + 0x14);
    if (iVar5 != 0) {
      iVar3 = *(int *)(iVar5 + 0x1c);
      if (iVar3 == in_ECX) {
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(in_ECX + 0x20);
      }
      else {
        for (iVar5 = *(int *)(iVar3 + 0x20); (iVar5 != 0 && (iVar5 != in_ECX));
            iVar5 = *(int *)(iVar5 + 0x20)) {
          iVar3 = iVar5;
        }
        if (*(int *)(iVar3 + 0x20) != in_ECX) {
          (*DAT_1022303c)(4,"info_movewith can\'t find itself\n");
          return;
        }
        *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
      }
      *(undefined4 *)(in_ECX + 0x14) = 0;
      *(undefined4 *)(in_ECX + 0x20) = 0;
    }
    iVar5 = *(int *)(in_ECX + 4);
    uVar4 = *(uint *)(iVar5 + 0x1a4);
    if ((uVar4 & 1) == 0) {
      *(uint *)(iVar5 + 0x1a4) = uVar4 | 1;
      iVar5 = *(int *)(*(int *)(in_ECX + 4) + 0x1d4);
    }
    else {
      *(uint *)(iVar5 + 0x1a4) = uVar4 & 0xfffffffe;
      iVar5 = *(int *)(*(int *)(in_ECX + 4) + 0x1cc);
    }
    *(int *)(in_ECX + 0x18) = iVar5;
    if (iVar5 != 0) {
      iVar5 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x18));
      *(int *)(in_ECX + 0x14) = iVar5;
      if (iVar5 == 0) {
        (*DAT_1022303c)(1,"Missing movewith entity %s\n",
                        *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x18));
        return;
      }
      for (iVar3 = *(int *)(iVar5 + 0x1c); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x20)) {
        if (iVar3 == in_ECX) {
          return;
        }
      }
      *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar5 + 0x1c);
      *(int *)(iVar5 + 0x1c) = in_ECX;
      iVar5 = *(int *)(*(int *)(in_ECX + 0x14) + 4);
      iVar3 = *(int *)(in_ECX + 4);
      fVar1 = *(float *)(iVar3 + 0x10);
      fVar2 = *(float *)(iVar5 + 0x10);
      *(ulonglong *)(in_ECX + 0x24) =
           CONCAT44(*(float *)(iVar3 + 0xc) - *(float *)(iVar5 + 0xc),
                    *(float *)(iVar3 + 8) - *(float *)(iVar5 + 8));
      *(float *)(in_ECX + 0x2c) = fVar1 - fVar2;
    }
    FUN_100c4ed0();
  }
  return;
}

