// rea decompile_all
// name: FUN_100f1a50
// address: 0x100f1a50
// body: available
// range: 0x100f1a50-0x100f1c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f1a50(byte *param_1)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int in_ECX;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  int local_8;
  
  if (((((*(char *)(in_ECX + 0x1ee8) == '\0') && (iVar3 = FUN_100e4ed0(), iVar3 == 0)) &&
       (param_1 != (byte *)0x0)) && (fVar1 = *DAT_10223188, *(float *)(in_ECX + 0x1ee4) <= fVar1))
     && (((iVar3 = *(int *)(in_ECX + 0x252c), iVar3 == 0 ||
          (((*(float *)(iVar3 + 0x1cc) <= fVar1 && (*(float *)(iVar3 + 0x1d0) <= fVar1)) &&
           (*(float *)(iVar3 + 0x1d4) <= fVar1)))) && (*(float *)(in_ECX + 0x308) <= fVar1)))) {
    if (2 < *(int *)(*(int *)(in_ECX + 4) + 0x1c4)) {
      pcVar7 = "weapon_action";
      pbVar4 = param_1;
      do {
        bVar2 = *pbVar4;
        bVar10 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_100f1b20:
          uVar5 = -(uint)bVar10 | 1;
          goto LAB_100f1b25;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar10 = bVar2 < (byte)pcVar7[1];
        if (bVar2 != pcVar7[1]) goto LAB_100f1b20;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100f1b25:
      if (uVar5 != 0) {
        return;
      }
    }
    if (*(float *)(*(int *)(in_ECX + 4) + 0x260) != 10.0) {
      piVar8 = (int *)(in_ECX + 0x2514);
      local_8 = 0;
      iVar3 = 0;
      do {
        iVar9 = *piVar8;
        if (iVar9 == 0) {
          iVar9 = iVar3;
          if (iVar3 != 0) goto LAB_100f1bca;
        }
        else {
          do {
            pbVar6 = (byte *)(**(int **)(iVar9 + 4) + (int)DAT_10223188[0x26]);
            pbVar4 = param_1;
            do {
              bVar2 = *pbVar6;
              bVar10 = bVar2 < *pbVar4;
              if (bVar2 != *pbVar4) {
LAB_100f1b90:
                uVar5 = -(uint)bVar10 | 1;
                goto LAB_100f1b95;
              }
              if (bVar2 == 0) break;
              bVar2 = pbVar6[1];
              bVar10 = bVar2 < pbVar4[1];
              if (bVar2 != pbVar4[1]) goto LAB_100f1b90;
              pbVar6 = pbVar6 + 2;
              pbVar4 = pbVar4 + 2;
            } while (bVar2 != 0);
            uVar5 = 0;
LAB_100f1b95:
            iVar3 = iVar9;
            if (uVar5 == 0) goto LAB_100f1bca;
            iVar9 = *(int *)(iVar9 + 0x164);
          } while (iVar9 != 0);
        }
        local_8 = local_8 + 1;
        piVar8 = piVar8 + 1;
        iVar3 = iVar9;
      } while (local_8 < 6);
      if (iVar9 != 0) {
LAB_100f1bca:
        if (iVar3 != *(int *)(in_ECX + 0x252c)) {
          FUN_100f1440();
          piVar8 = *(int **)(in_ECX + 0x252c);
          if (piVar8 != (int *)0x0) {
            if ((char)piVar8[0x5e] != '\0') {
              (**(code **)(*piVar8 + 0x130))();
              piVar8 = *(int **)(in_ECX + 0x252c);
            }
            (**(code **)(*piVar8 + 0x14c))();
          }
          *(undefined1 *)(in_ECX + 0x1ef9) = 1;
          *(int *)(in_ECX + 0x2538) = iVar3;
        }
      }
    }
  }
  return;
}

