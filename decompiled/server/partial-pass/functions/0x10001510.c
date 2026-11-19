// rea decompile_all
// name: FUN_10001510
// address: 0x10001510
// body: available
// range: 0x10001510-0x10001703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001510(void)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  float10 fVar8;
  int local_14;
  uint local_c;
  char local_5;
  
  *(undefined8 *)(in_ECX + 0x18) = 0;
  fVar8 = (float10)(*DAT_1022302c)("sv_alltalk");
  local_5 = (float)fVar8 != 0.0;
  local_14 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    do {
      piVar3 = (int *)FUN_10119680(local_14 + 1);
      if ((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xd0))(), iVar4 != 0)) {
        uVar5 = 1 << ((byte)local_14 & 0x1f);
        if (((&DAT_10220ab8)[local_14 >> 5] & uVar5) != 0) {
          (*DAT_10223000)(1,*(undefined4 *)(in_ECX + 0xc),0,*(undefined4 *)(piVar3[1] + 0x20c));
          (*DAT_10223004)();
        }
        local_c = 0;
        if ((((&DAT_10220abc)[local_14 >> 5] & uVar5) != 0) &&
           (uVar5 = 0, 0 < *(int *)(in_ECX + 0x14))) {
          do {
            uVar1 = uVar5 + 1;
            piVar6 = (int *)FUN_10119680(uVar1);
            if (((piVar6 != (int *)0x0) && (iVar4 = (**(code **)(*piVar6 + 0xd0))(), iVar4 != 0)) &&
               ((local_5 != '\0' ||
                (cVar2 = (**(code **)(**(int **)(in_ECX + 0x10) + 4))(piVar3,piVar6), cVar2 != '\0')
                ))) {
              (&local_c)[(int)uVar5 >> 5] = (&local_c)[(int)uVar5 >> 5] | 1 << (uVar5 & 0x1f);
            }
            uVar5 = uVar1;
          } while ((int)uVar1 < *(int *)(in_ECX + 0x14));
        }
        if ((local_c != (&DAT_10220bc0)[local_14]) ||
           ((&DAT_10220ac0)[local_14] != (&DAT_10220b40)[local_14])) {
          (&DAT_10220bc0)[local_14] = local_c;
          (&DAT_10220b40)[local_14] = (&DAT_10220ac0)[local_14];
          (*DAT_10223000)(1,*(undefined4 *)(in_ECX + 8),0,*(undefined4 *)(piVar3[1] + 0x20c));
          (*DAT_10223014)(local_c);
          (*DAT_10223014)((&DAT_10220ac0)[local_14]);
          (*DAT_10223004)();
        }
        iVar4 = 0;
        if (0 < *(int *)(in_ECX + 0x14)) {
          do {
            uVar5 = 1 << ((byte)iVar4 & 0x1f);
            if ((((&local_c)[iVar4 >> 5] & uVar5) == 0) ||
               (((&DAT_10220ac0)[(iVar4 >> 5) + local_14] & uVar5) != 0)) {
              uVar7 = 0;
            }
            else {
              uVar7 = 1;
            }
            iVar4 = iVar4 + 1;
            (*DAT_10223180)(local_14 + 1,iVar4,uVar7);
          } while (iVar4 < *(int *)(in_ECX + 0x14));
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x14));
  }
  return;
}

