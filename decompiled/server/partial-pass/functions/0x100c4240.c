// rea decompile_all
// name: FUN_100c4240
// address: 0x100c4240
// body: available
// range: 0x100c4240-0x100c44d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100c4240(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float local_1c;
  
  fVar11 = DAT_10223188[1];
  if (fVar11 != 0.0) {
    uVar8 = *(uint *)(param_1 + 0x60);
    if ((uVar8 & 0x20) != 0) {
      fVar1 = *(float *)(param_1 + 0x58);
      if (0.0 < fVar1) {
        iVar9 = *(int *)(param_1 + 4);
        if (*(int *)(iVar9 + 0x108) == 7) {
          fVar10 = *(float *)(iVar9 + 0x100);
        }
        else {
          fVar10 = *DAT_10223188;
        }
        if ((fVar1 <= fVar11 + fVar10) && (fVar11 = (fVar1 - fVar10) / fVar11, fVar11 != 0.0)) {
          if ((uVar8 & 0x40) != 0) {
            if ((uVar8 & 8) == 0) {
              uVar8 = uVar8 | 8;
              *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(iVar9 + 0x20);
              *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar9 + 0x28);
              *(uint *)(param_1 + 0x60) = uVar8;
            }
            if ((uVar8 & 0x10) == 0) {
              *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(iVar9 + 0x5c);
              *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar9 + 100);
              *(uint *)(param_1 + 0x60) = uVar8 | 0x10;
            }
            fVar1 = *(float *)(iVar9 + 0x60);
            fVar10 = *(float *)(iVar9 + 0x20);
            fVar2 = *(float *)(iVar9 + 0x24);
            fVar3 = *(float *)(iVar9 + 0x28);
            fVar4 = *(float *)(iVar9 + 0x5c);
            fVar5 = *(float *)(iVar9 + 100);
            if (*(int *)(param_1 + 0x14) == 0) {
              *(ulonglong *)(iVar9 + 0x20) = CONCAT44(fVar2 * fVar11,fVar10 * fVar11);
              *(float *)(iVar9 + 0x28) = fVar3 * fVar11;
              iVar9 = *(int *)(param_1 + 4);
              local_1c = *(float *)(iVar9 + 100) * fVar11;
              *(ulonglong *)(iVar9 + 0x5c) =
                   CONCAT44(*(float *)(iVar9 + 0x60) * fVar11,fVar11 * *(float *)(iVar9 + 0x5c));
            }
            else {
              iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 4);
              fVar6 = *(float *)(iVar7 + 0x28);
              *(ulonglong *)(iVar9 + 0x20) =
                   CONCAT44(*(float *)(iVar7 + 0x24) + (fVar2 - *(float *)(iVar7 + 0x24)) * fVar11,
                            *(float *)(iVar7 + 0x20) + (fVar10 - *(float *)(iVar7 + 0x20)) * fVar11)
              ;
              *(float *)(iVar9 + 0x28) = fVar6 + (fVar3 - fVar6) * fVar11;
              iVar9 = *(int *)(param_1 + 4);
              iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 4);
              local_1c = *(float *)(iVar7 + 100) +
                         (*(float *)(iVar9 + 100) - *(float *)(iVar7 + 100)) * fVar11;
              *(ulonglong *)(iVar9 + 0x5c) =
                   CONCAT44(*(float *)(iVar7 + 0x60) +
                            (*(float *)(iVar9 + 0x60) - *(float *)(iVar7 + 0x60)) * fVar11,
                            *(float *)(iVar7 + 0x5c) +
                            (*(float *)(iVar9 + 0x5c) - *(float *)(iVar7 + 0x5c)) * fVar11);
            }
            *(float *)(iVar9 + 100) = local_1c;
            iVar9 = *(int *)(param_1 + 4);
            iVar7 = *(int *)(param_1 + 4);
            FUN_100c3fa0(param_1,fVar10 - *(float *)(iVar7 + 0x20),fVar2 - *(float *)(iVar7 + 0x24),
                         fVar3 - *(float *)(iVar7 + 0x28),fVar4 - *(float *)(iVar9 + 0x5c),
                         fVar1 - *(float *)(iVar9 + 0x60),fVar5 - *(float *)(iVar9 + 100));
            FUN_100c4830(param_1);
          }
          FUN_100c4850(param_1);
          *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffffdf;
        }
        return 1;
      }
      *(uint *)(param_1 + 0x60) = uVar8 & 0xffffffdf;
    }
  }
  return 0;
}

