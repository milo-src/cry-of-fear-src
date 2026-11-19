// rea decompile_all
// name: FUN_100f0ba0
// address: 0x100f0ba0
// body: available
// range: 0x100f0ba0-0x100f0f54 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f0ba0(int param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  uint uVar6;
  int *in_ECX;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  bool bVar10;
  int *local_10;
  int local_c;
  
  if (in_ECX[0x94b] != 0) {
    FUN_100f1440();
    (**(code **)(*(int *)in_ECX[0x94b] + 0x14c))();
    in_ECX[0x94b] = 0;
  }
  local_10 = in_ECX + 0x945;
  in_ECX[0x94d] = 0;
  local_c = 6;
  piVar4 = local_10;
  do {
    piVar9 = (int *)*piVar4;
    in_ECX[0x94b] = (int)piVar9;
    while (piVar9 != (int *)0x0) {
      pbVar7 = (byte *)(in_ECX + 0x813);
      pbVar5 = (byte *)(*(int *)piVar9[1] + *(int *)(DAT_10223188 + 0x98));
      do {
        bVar2 = *pbVar7;
        bVar10 = bVar2 < *pbVar5;
        if (bVar2 != *pbVar5) {
LAB_100f0c41:
          uVar6 = -(uint)bVar10 | 1;
          goto LAB_100f0c46;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar7[1];
        bVar10 = bVar2 < pbVar5[1];
        if (bVar2 != pbVar5[1]) goto LAB_100f0c41;
        pbVar7 = pbVar7 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100f0c46:
      if (uVar6 == 0) {
        *(undefined1 *)(in_ECX + 0x813) = 0;
        (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(1);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        in_ECX[0xf7] = 0;
        piVar9 = (int *)in_ECX[0x94b];
      }
      pbVar5 = (byte *)(in_ECX + 0x833);
      pbVar7 = (byte *)(*(int *)piVar9[1] + *(int *)(DAT_10223188 + 0x98));
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_100f0cd0:
          uVar6 = -(uint)bVar10 | 1;
          goto LAB_100f0cd5;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_100f0cd0;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100f0cd5:
      if (uVar6 == 0) {
        *(undefined1 *)(in_ECX + 0x833) = 0;
        (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(2);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        in_ECX[0xf8] = 0;
        piVar9 = (int *)in_ECX[0x94b];
      }
      pbVar5 = (byte *)(in_ECX + 0x853);
      pbVar7 = (byte *)(*(int *)piVar9[1] + *(int *)(DAT_10223188 + 0x98));
      do {
        bVar2 = *pbVar5;
        bVar10 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_100f0d58:
          uVar6 = -(uint)bVar10 | 1;
          goto LAB_100f0d5d;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar5[1];
        bVar10 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_100f0d58;
        pbVar5 = pbVar5 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_100f0d5d:
      if (uVar6 == 0) {
        *(undefined1 *)(in_ECX + 0x853) = 0;
        (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(3);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        in_ECX[0xf9] = 0;
        piVar9 = (int *)in_ECX[0x94b];
      }
      iVar8 = *piVar9;
      piVar9 = (int *)piVar9[0x59];
      (**(code **)(iVar8 + 0x15c))();
      in_ECX[0x94b] = (int)piVar9;
    }
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
    local_c = local_c + -1;
    if (local_c == 0) {
      in_ECX[0x94b] = 0;
      *(undefined4 *)(in_ECX[1] + 0xbc) = 0;
      *(undefined4 *)(in_ECX[1] + 0xc0) = 0;
      if (param_1 == 0) {
        puVar1 = (uint *)(in_ECX[1] + 0x16c);
        *puVar1 = *puVar1 & 0x80000000;
      }
      else {
        *(undefined4 *)(in_ECX[1] + 0x16c) = 0;
      }
      iVar8 = 0;
      piVar4 = in_ECX + 0x950;
      do {
        *piVar4 = 0;
        (*DAT_10223000)(1,DAT_102264e8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(iVar8);
        (*DAT_10223010)(*piVar4);
        (*DAT_10223004)();
        iVar8 = iVar8 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar8 < 0x20);
      iVar8 = 6;
      do {
        for (iVar3 = *local_10; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x164)) {
          (*DAT_10223000)(1,DAT_102265b8,0,*(undefined4 *)(in_ECX[1] + 0x20c));
          (*DAT_10223008)(*(undefined4 *)(iVar3 + 0x168));
          (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + *(int *)(iVar3 + 0x168) * 0x2c));
          (*DAT_10223010)(in_ECX[*(int *)(iVar3 + 0x1dc) + 0x950]);
          (*DAT_10223004)();
        }
        local_10 = local_10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      (**(code **)(*in_ECX + 600))();
      (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      return;
    }
  } while( true );
}

