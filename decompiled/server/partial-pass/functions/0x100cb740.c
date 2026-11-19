// rea decompile_all
// name: FUN_100cb740
// address: 0x100cb740
// body: available
// range: 0x100cb740-0x100cb9a9 inclusive
// range: 0x100cb9b0-0x100cbbc5 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cb740(void)

{
  float fVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int in_ECX;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_101714d1(*(int *)(in_ECX + 0x24));
  }
  iVar7 = FUN_10171536(0x10,*(undefined4 *)(in_ECX + 0x18));
  *(int *)(in_ECX + 0x24) = iVar7;
  if (iVar7 != 0) {
    *(undefined4 *)(in_ECX + 0x1864) = 0x4e6e6b28;
    iVar7 = 0;
    *(undefined4 *)(in_ECX + 0x1870) = 0xce6e6b28;
    *(undefined4 *)(in_ECX + 0x1868) = 0x4e6e6b28;
    *(undefined4 *)(in_ECX + 0x1874) = 0xce6e6b28;
    *(undefined4 *)(in_ECX + 0x186c) = 0x4e6e6b28;
    *(undefined4 *)(in_ECX + 0x1878) = 0xce6e6b28;
    if (0 < *(int *)(in_ECX + 0x18)) {
      iVar8 = 0;
      do {
        iVar13 = *(int *)(in_ECX + 0xc);
        if (*(float *)(iVar8 + iVar13) < *(float *)(in_ECX + 0x1864)) {
          *(float *)(in_ECX + 0x1864) = *(float *)(iVar8 + iVar13);
        }
        fVar1 = *(float *)(iVar8 + 4 + iVar13);
        if (fVar1 < *(float *)(in_ECX + 0x1868)) {
          *(float *)(in_ECX + 0x1868) = fVar1;
        }
        fVar1 = *(float *)(iVar8 + 8 + iVar13);
        if (fVar1 < *(float *)(in_ECX + 0x186c)) {
          *(float *)(in_ECX + 0x186c) = fVar1;
        }
        fVar1 = *(float *)(iVar8 + iVar13);
        if (*(float *)(in_ECX + 0x1870) <= fVar1 && fVar1 != *(float *)(in_ECX + 0x1870)) {
          *(float *)(in_ECX + 0x1870) = fVar1;
        }
        fVar1 = *(float *)(iVar8 + 4 + iVar13);
        if (*(float *)(in_ECX + 0x1874) <= fVar1 && fVar1 != *(float *)(in_ECX + 0x1874)) {
          *(float *)(in_ECX + 0x1874) = fVar1;
        }
        fVar1 = *(float *)(iVar8 + 8 + iVar13);
        if (*(float *)(in_ECX + 0x1878) <= fVar1 && fVar1 != *(float *)(in_ECX + 0x1878)) {
          *(float *)(in_ECX + 0x1878) = fVar1;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 0x58;
      } while (iVar7 < *(int *)(in_ECX + 0x18));
      local_14 = 0;
      iVar7 = 0;
      do {
        *(char *)(iVar7 + 0x18 + *(int *)(in_ECX + 0xc)) =
             (char)((((int)*(float *)(iVar7 + *(int *)(in_ECX + 0xc)) -
                     (int)*(float *)(in_ECX + 0x1864)) * 0x100) /
                   (((int)*(float *)(in_ECX + 0x1870) - (int)*(float *)(in_ECX + 0x1864)) + 1));
        *(char *)(iVar7 + 0x19 + *(int *)(in_ECX + 0xc)) =
             (char)((((int)*(float *)(iVar7 + 4 + *(int *)(in_ECX + 0xc)) -
                     (int)*(float *)(in_ECX + 0x1868)) * 0x100) /
                   (((int)*(float *)(in_ECX + 0x1874) - (int)*(float *)(in_ECX + 0x1868)) + 1));
        *(char *)(iVar7 + 0x1a + *(int *)(in_ECX + 0xc)) =
             (char)((((int)*(float *)(iVar7 + 8 + *(int *)(in_ECX + 0xc)) -
                     (int)*(float *)(in_ECX + 0x186c)) * 0x100) /
                   (((int)*(float *)(in_ECX + 0x1878) - (int)*(float *)(in_ECX + 0x186c)) + 1));
        local_14 = local_14 + 1;
        iVar7 = iVar7 + 0x58;
      } while (local_14 < *(int *)(in_ECX + 0x18));
    }
    local_8 = 0;
    iVar7 = local_10;
    do {
      iVar8 = 0x100;
      puVar9 = (undefined4 *)(local_8 * 0x400 + 0xc28 + in_ECX);
      do {
        puVar9[-0x300] = 0xff;
        *puVar9 = 0;
        iVar8 = iVar8 + -1;
        puVar9 = puVar9 + 1;
      } while (iVar8 != 0);
      local_20 = *(int *)(in_ECX + 0x18);
      iVar8 = 0;
      if (0 < local_20) {
        iVar13 = local_8 << 2;
        do {
          *(int *)(iVar13 + *(int *)(in_ECX + 0x24)) = iVar8;
          iVar8 = iVar8 + 1;
          local_20 = *(int *)(in_ECX + 0x18);
          iVar7 = local_10;
          iVar13 = iVar13 + 0x10;
        } while (iVar8 < local_20);
      }
      if (local_20 != 1 && -1 < local_20 + -1) {
        local_c = 1;
        iVar8 = local_8 * 4;
        do {
          iVar11 = *(int *)(iVar8 + *(int *)(in_ECX + 0x24)) * 0x58;
          iVar13 = *(int *)(in_ECX + 0xc);
          uVar15 = (uint)*(byte *)(iVar11 + 0x18 + iVar13);
          bVar2 = *(byte *)(iVar11 + 0x19 + iVar13);
          bVar3 = *(byte *)(iVar11 + 0x1a + iVar13);
          if (local_8 == 0) {
            iVar7 = (uVar15 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3;
          }
          else if (local_8 == 1) {
            iVar7 = (uint)CONCAT11(bVar2,bVar3) * 0x100 + uVar15;
          }
          else if (local_8 == 2) {
            iVar7 = ((uint)bVar3 * 0x100 + uVar15) * 0x100 + (uint)bVar2;
          }
          local_1c = local_c;
          iVar13 = iVar8;
          if (local_c < local_20) {
            do {
              iVar13 = iVar13 + 0x10;
              iVar11 = *(int *)(in_ECX + 0x24);
              iVar12 = *(int *)(iVar13 + iVar11) * 0x58;
              iVar4 = *(int *)(in_ECX + 0xc);
              uVar15 = (uint)*(byte *)(iVar12 + 0x18 + iVar4);
              bVar2 = *(byte *)(iVar12 + 0x19 + iVar4);
              bVar3 = *(byte *)(iVar12 + 0x1a + iVar4);
              if (local_8 == 0) {
                local_28 = (uVar15 * 0x100 + (uint)bVar2) * 0x100 + (uint)bVar3;
              }
              else if (local_8 == 1) {
                local_28 = (uint)CONCAT11(bVar2,bVar3) * 0x100 + uVar15;
              }
              else if (local_8 == 2) {
                local_28 = ((uint)bVar3 * 0x100 + uVar15) * 0x100 + (uint)bVar2;
              }
              if (local_28 < iVar7) {
                uVar5 = *(undefined4 *)(iVar11 + iVar8);
                *(int *)(iVar11 + iVar8) = *(int *)(iVar13 + iVar11);
                *(undefined4 *)(iVar13 + *(int *)(in_ECX + 0x24)) = uVar5;
              }
              local_20 = *(int *)(in_ECX + 0x18);
              local_1c = local_1c + 1;
            } while (local_1c < local_20);
          }
          iVar8 = iVar8 + 0x10;
          bVar6 = local_c < local_20 + -1;
          local_10 = iVar7;
          local_c = local_c + 1;
        } while (bVar6);
      }
      local_8 = local_8 + 1;
    } while (local_8 < 3);
    iVar7 = 0;
    if (0 < local_20) {
      local_18 = 0;
      do {
        iVar8 = *(int *)(in_ECX + 0x24);
        iVar13 = *(int *)(in_ECX + 0xc);
        uVar15 = (uint)*(byte *)(*(int *)(local_18 + iVar8) * 0x58 + 0x18 + iVar13);
        uVar14 = (uint)*(byte *)(*(int *)(local_18 + 4 + iVar8) * 0x58 + 0x19 + iVar13);
        uVar10 = (uint)*(byte *)(*(int *)(local_18 + 8 + iVar8) * 0x58 + 0x1a + iVar13);
        if (iVar7 < *(int *)(in_ECX + 0x28 + uVar15 * 4)) {
          *(int *)(in_ECX + 0x28 + uVar15 * 4) = iVar7;
        }
        if (iVar7 < *(int *)(in_ECX + 0x428 + uVar14 * 4)) {
          *(int *)(in_ECX + 0x428 + uVar14 * 4) = iVar7;
        }
        if (iVar7 < *(int *)(in_ECX + 0x828 + uVar10 * 4)) {
          *(int *)(in_ECX + 0x828 + uVar10 * 4) = iVar7;
        }
        if (*(int *)(in_ECX + 0xc28 + uVar15 * 4) < iVar7) {
          *(int *)(in_ECX + 0xc28 + uVar15 * 4) = iVar7;
        }
        if (*(int *)(in_ECX + 0x1028 + uVar14 * 4) < iVar7) {
          *(int *)(in_ECX + 0x1028 + uVar14 * 4) = iVar7;
        }
        if (*(int *)(in_ECX + 0x1428 + uVar10 * 4) < iVar7) {
          *(int *)(in_ECX + 0x1428 + uVar10 * 4) = iVar7;
        }
        iVar7 = iVar7 + 1;
        local_18 = local_18 + 0x10;
      } while (iVar7 < *(int *)(in_ECX + 0x18));
    }
    _memset((void *)(in_ECX + 0x187c),0,0x800);
    return;
  }
  (*DAT_1022303c)(2,"Couldn\'t allocated node ordering array.\n");
  return;
}

