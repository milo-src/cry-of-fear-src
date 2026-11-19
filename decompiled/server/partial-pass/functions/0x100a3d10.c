// rea decompile_all
// name: FUN_100a3d10
// address: 0x100a3d10
// body: available
// range: 0x100a3d10-0x100a400c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a3d10(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  char *pcVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  bool bVar13;
  int local_8;
  
  if ((param_1 != 0) && (iVar4 = FUN_100125e0(*(undefined4 *)(param_1 + 4)), iVar4 != 0)) {
    piVar12 = (int *)(iVar4 + 0x1cdc);
    puVar11 = (undefined8 *)(iVar4 + 0x1a80);
    if (*(int *)(*(int *)(in_ECX + 4) + 0x188) != 0) {
      local_8 = 0x32;
      do {
        if (piVar12[-0xcc] != 0) {
          pcVar9 = "item_key";
          pbVar5 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar12);
          do {
            bVar1 = *pbVar5;
            bVar13 = bVar1 < (byte)*pcVar9;
            if (bVar1 != *pcVar9) {
LAB_100a3da2:
              uVar6 = -(uint)bVar13 | 1;
              goto LAB_100a3da7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar5[1];
            bVar13 = bVar1 < (byte)pcVar9[1];
            if (bVar1 != pcVar9[1]) goto LAB_100a3da2;
            pbVar5 = pbVar5 + 2;
            pcVar9 = pcVar9 + 2;
          } while (bVar1 != 0);
          uVar6 = 0;
LAB_100a3da7:
          if (uVar6 == 0) {
            FUN_100179f0("item_key",piVar12[-0xcc],puVar11,&DAT_10222f34,
                         *(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),0);
          }
          iVar7 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *piVar12,"weapon_");
          if ((iVar7 != 0) &&
             (piVar8 = (int *)FUN_10017950(*(int *)(DAT_10223188 + 0x98) + *piVar12,puVar11,
                                           &DAT_10222f34,
                                           *(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c)),
             piVar8 != (int *)0x0)) {
            *(int *)(piVar8[1] + 0x1d8) = piVar12[-0xcc];
            piVar8[0x79] = piVar12[0x33];
            (**(code **)(*piVar8 + 0x2c))();
          }
        }
        piVar12[-0xcc] = 0;
        *puVar11 = CONCAT44(DAT_10222f34._4_4_,(undefined4)DAT_10222f34);
        *(undefined4 *)(puVar11 + 1) = DAT_10222f3c;
        puVar11 = (undefined8 *)((int)puVar11 + 0xc);
        *piVar12 = 0;
        piVar12[0x33] = 0;
        piVar12 = piVar12 + 1;
        local_8 = local_8 + -1;
        if (local_8 == 0) {
          return;
        }
      } while( true );
    }
    iVar4 = 0x32;
    piVar8 = piVar12;
    puVar10 = puVar11;
    do {
      piVar8[-0xcc] = 0;
      uVar3 = DAT_10222f34._4_4_;
      *(undefined4 *)puVar10 = (undefined4)DAT_10222f34;
      *(undefined4 *)((int)puVar10 + 4) = uVar3;
      *(undefined4 *)(puVar10 + 1) = DAT_10222f3c;
      *piVar8 = 0;
      piVar8[0x33] = 0;
      iVar4 = iVar4 + -1;
      piVar8 = piVar8 + 1;
      puVar10 = (undefined8 *)((int)puVar10 + 0xc);
    } while (iVar4 != 0);
    piVar8 = (int *)(*DAT_10223068)(1);
    iVar7 = 1;
    param_1 = 1;
    local_8 = 1;
    iVar4 = DAT_10223188;
    if (1 < *(int *)(DAT_10223188 + 0x94)) {
      do {
        if (((((piVar8 != (int *)0x0) && (*piVar8 == 0)) &&
             (iVar4 = DAT_10223188, piVar8 != *(int **)(*(int *)(in_ECX + 4) + 0x20c))) &&
            (((float)piVar8[0x90] == 666.0 && (iVar7 < 0x33)))) &&
           (iVar2 = piVar8[0x1f], iVar7 = param_1, iVar2 != 0)) {
          piVar12[-0xcc] = *(int *)(*(int *)(iVar2 + 4) + 0x1d8);
          iVar4 = *(int *)(iVar2 + 4);
          uVar3 = *(undefined4 *)(iVar4 + 0xc);
          *(undefined4 *)puVar11 = *(undefined4 *)(iVar4 + 8);
          *(undefined4 *)((int)puVar11 + 4) = uVar3;
          *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(iVar4 + 0x10);
          *piVar12 = **(int **)(iVar2 + 4);
          iVar4 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar2 + 4),"weapon_");
          if (iVar4 == 0) {
            piVar12[0x33] = 0;
          }
          else {
            iVar4 = *(int *)(iVar2 + 0x1e4);
            if ((iVar4 == 0) && (*(int *)(&DAT_102318a4 + *(int *)(iVar2 + 0x168) * 0x2c) != 0)) {
              iVar4 = -0x29a;
            }
            piVar12[0x33] = iVar4;
          }
          piVar12 = piVar12 + 1;
          param_1 = param_1 + 1;
          puVar11 = (undefined8 *)((int)puVar11 + 0xc);
          iVar4 = DAT_10223188;
          iVar7 = param_1;
        }
        local_8 = local_8 + 1;
        piVar8 = piVar8 + 0xcb;
      } while (local_8 < *(int *)(iVar4 + 0x94));
    }
  }
  return;
}

