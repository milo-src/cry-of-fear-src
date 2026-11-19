// rea decompile_all
// name: FUN_100cf310
// address: 0x100cf310
// body: available
// range: 0x100cf310-0x100cf54e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cf310(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  undefined4 *puVar30;
  int in_ECX;
  int iVar31;
  int iVar32;
  undefined4 uStack_4c;
  undefined4 local_14;
  int local_c;
  int local_8;
  
  iVar31 = 1;
  iVar32 = 1;
  *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x4c) = 0;
  iVar29 = *(int *)(in_ECX + 0x18);
  if (1 < iVar29) {
    iVar28 = 0x58;
    do {
      iVar32 = iVar32 + 1;
      *(undefined4 *)(iVar28 + 0x4c + *(int *)(in_ECX + 0xc)) = 0xffffffff;
      iVar29 = *(int *)(in_ECX + 0x18);
      iVar28 = iVar28 + 0x58;
    } while (iVar32 < iVar29);
  }
  local_8 = 0;
  if (0 < iVar29) {
    local_c = 0;
    do {
      iVar29 = *(int *)(in_ECX + 0xc);
      iVar32 = 0;
      if (0 < *(int *)(local_c + 0x20 + iVar29)) {
        do {
          iVar28 = *(int *)(*(int *)(in_ECX + 0x10) + 4 +
                           (*(int *)(local_c + 0x24 + iVar29) + iVar32) * 0x18) * 0x58;
          if (*(int *)(iVar28 + 0x4c + iVar29) == -1) {
            *(int *)(iVar28 + 0x4c + iVar29) = iVar31;
            iVar31 = iVar31 + 1;
          }
          iVar29 = *(int *)(in_ECX + 0xc);
          iVar32 = iVar32 + 1;
        } while (iVar32 < *(int *)(local_c + 0x20 + iVar29));
      }
      local_c = local_c + 0x58;
      iVar29 = *(int *)(in_ECX + 0x18);
      local_8 = local_8 + 1;
    } while (local_8 < iVar29);
  }
  iVar32 = 0;
  if (0 < iVar29) {
    iVar28 = 0;
    do {
      if (*(int *)(iVar28 + 0x4c + *(int *)(in_ECX + 0xc)) == -1) {
        *(int *)(iVar28 + 0x4c + *(int *)(in_ECX + 0xc)) = iVar31;
        iVar31 = iVar31 + 1;
      }
      iVar29 = *(int *)(in_ECX + 0x18);
      iVar32 = iVar32 + 1;
      iVar28 = iVar28 + 0x58;
    } while (iVar32 < iVar29);
  }
  iVar31 = 0;
  if (0 < *(int *)(in_ECX + 0x1c)) {
    iVar29 = 0;
    do {
      iVar31 = iVar31 + 1;
      *(undefined4 *)(iVar29 + *(int *)(in_ECX + 0x10)) =
           *(undefined4 *)
            (*(int *)(iVar29 + *(int *)(in_ECX + 0x10)) * 0x58 + 0x4c + *(int *)(in_ECX + 0xc));
      *(undefined4 *)(iVar29 + 4 + *(int *)(in_ECX + 0x10)) =
           *(undefined4 *)
            (*(int *)(iVar29 + 4 + *(int *)(in_ECX + 0x10)) * 0x58 + 0x4c + *(int *)(in_ECX + 0xc));
      iVar29 = iVar29 + 0x18;
    } while (iVar31 < *(int *)(in_ECX + 0x1c));
    iVar29 = *(int *)(in_ECX + 0x18);
  }
  iVar31 = 0;
  if (0 < iVar29) {
    iVar29 = *(int *)(in_ECX + 0xc);
    iVar32 = 0;
    do {
      iVar28 = *(int *)(iVar32 + 0x4c + iVar29);
      while (iVar28 != iVar31) {
        iVar29 = *(int *)(in_ECX + 0xc);
        iVar28 = *(int *)(iVar32 + 0x4c + iVar29) * 0x58;
        puVar30 = (undefined4 *)(iVar28 + iVar29);
        uVar12 = *puVar30;
        uVar13 = puVar30[1];
        uVar14 = puVar30[2];
        uVar15 = puVar30[3];
        uVar27 = (uint)uStack_4c >> 0x18;
        uStack_4c._3_1_ = (undefined1)uVar27;
        uStack_4c._0_3_ =
             CONCAT12(*(undefined1 *)(iVar28 + 0x1a + iVar29),
                      *(undefined2 *)(iVar28 + 0x18 + iVar29));
        uVar2 = *(undefined4 *)(iVar28 + 0x10 + iVar29);
        uVar8 = *(undefined4 *)(iVar28 + 0x1c + iVar29);
        uVar3 = *(undefined4 *)(iVar28 + 0x14 + iVar29);
        puVar30 = (undefined4 *)(iVar28 + 0x28 + iVar29);
        uVar16 = *puVar30;
        uVar17 = puVar30[1];
        uVar18 = puVar30[2];
        uVar19 = puVar30[3];
        uVar9 = *(undefined4 *)(iVar28 + 0x20 + iVar29);
        puVar30 = (undefined4 *)(iVar28 + 0x38 + iVar29);
        uVar20 = *puVar30;
        uVar21 = puVar30[1];
        uVar22 = puVar30[2];
        uVar23 = puVar30[3];
        uVar10 = *(undefined4 *)(iVar28 + 0x24 + iVar29);
        uVar11 = *(undefined4 *)(iVar28 + 0x4c + iVar29);
        uVar4 = *(undefined4 *)(iVar28 + 0x48 + iVar29);
        uVar6 = *(undefined2 *)(iVar28 + 0x50 + iVar29);
        uVar5 = *(undefined4 *)(iVar28 + 0x54 + iVar29);
        puVar30 = (undefined4 *)(iVar32 + iVar29);
        uVar24 = puVar30[1];
        uVar25 = puVar30[2];
        uVar26 = puVar30[3];
        uVar7 = *(undefined2 *)(iVar28 + 0x52 + iVar29);
        puVar1 = (undefined4 *)(iVar28 + iVar29);
        *puVar1 = *puVar30;
        puVar1[1] = uVar24;
        puVar1[2] = uVar25;
        puVar1[3] = uVar26;
        local_14 = CONCAT22(uVar7,uVar6);
        puVar30 = (undefined4 *)(iVar32 + 0x10 + iVar29);
        uVar24 = puVar30[1];
        uVar25 = puVar30[2];
        uVar26 = puVar30[3];
        puVar1 = (undefined4 *)(iVar28 + 0x10 + iVar29);
        *puVar1 = *puVar30;
        puVar1[1] = uVar24;
        puVar1[2] = uVar25;
        puVar1[3] = uVar26;
        puVar30 = (undefined4 *)(iVar32 + 0x20 + iVar29);
        uVar24 = puVar30[1];
        uVar25 = puVar30[2];
        uVar26 = puVar30[3];
        puVar1 = (undefined4 *)(iVar28 + 0x20 + iVar29);
        *puVar1 = *puVar30;
        puVar1[1] = uVar24;
        puVar1[2] = uVar25;
        puVar1[3] = uVar26;
        puVar30 = (undefined4 *)(iVar32 + 0x30 + iVar29);
        uVar24 = puVar30[1];
        uVar25 = puVar30[2];
        uVar26 = puVar30[3];
        puVar1 = (undefined4 *)(iVar28 + 0x30 + iVar29);
        *puVar1 = *puVar30;
        puVar1[1] = uVar24;
        puVar1[2] = uVar25;
        puVar1[3] = uVar26;
        puVar30 = (undefined4 *)(iVar32 + 0x40 + iVar29);
        uVar24 = puVar30[1];
        uVar25 = puVar30[2];
        uVar26 = puVar30[3];
        puVar1 = (undefined4 *)(iVar28 + 0x40 + iVar29);
        *puVar1 = *puVar30;
        puVar1[1] = uVar24;
        puVar1[2] = uVar25;
        puVar1[3] = uVar26;
        *(undefined8 *)(iVar28 + 0x50 + iVar29) = *(undefined8 *)(iVar32 + 0x50 + iVar29);
        puVar30 = (undefined4 *)(*(int *)(in_ECX + 0xc) + iVar32);
        *puVar30 = uVar12;
        puVar30[1] = uVar13;
        puVar30[2] = uVar14;
        puVar30[3] = uVar15;
        puVar30[4] = uVar2;
        puVar30[5] = uVar3;
        puVar30[6] = uStack_4c;
        puVar30[7] = uVar8;
        puVar30[8] = uVar9;
        puVar30[9] = uVar10;
        puVar30[10] = uVar16;
        puVar30[0xb] = uVar17;
        puVar30[0xc] = uVar18;
        puVar30[0xd] = uVar19;
        puVar30[0xe] = uVar20;
        puVar30[0xf] = uVar21;
        puVar30[0x10] = uVar22;
        puVar30[0x11] = uVar23;
        puVar30[0x12] = uVar4;
        puVar30[0x13] = uVar11;
        puVar30[0x14] = local_14;
        puVar30[0x15] = uVar5;
        iVar29 = *(int *)(in_ECX + 0xc);
        iVar28 = *(int *)(iVar32 + 0x4c + iVar29);
      }
      iVar31 = iVar31 + 1;
      iVar32 = iVar32 + 0x58;
    } while (iVar31 < *(int *)(in_ECX + 0x18));
  }
  return;
}

