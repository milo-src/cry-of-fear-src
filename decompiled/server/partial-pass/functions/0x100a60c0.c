// rea decompile_all
// name: FUN_100a60c0
// address: 0x100a60c0
// body: available
// range: 0x100a60c0-0x100a6788 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a60c0(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 uVar8;
  int in_ECX;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  CBasePlayerItem *pCVar14;
  CBasePlayerItem *this;
  bool bVar15;
  int local_c;
  
  iVar2 = (**(code **)(*param_1 + 0xd0))();
  if ((iVar2 != 0) && (iVar2 = FUN_100125e0(param_1[1]), iVar2 != 0)) {
    iVar3 = FUN_100e2240("inventoryitems/cassettetape.txt",0);
    iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1d8);
    if (iVar4 != 0) {
      iVar4 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + iVar4,"weapon_");
      if (iVar4 != 0) {
        piVar5 = (int *)(iVar2 + 0x2514);
        local_c = 0;
        pCVar14 = (CBasePlayerItem *)0x0;
LAB_100a6163:
        this = (CBasePlayerItem *)*piVar5;
        if (this == (CBasePlayerItem *)0x0) goto LAB_100a6475;
        do {
          param_1 = (int *)**(int **)(this + 4);
          pbVar10 = (byte *)(*(int *)(DAT_10223188 + 0x98) + (int)param_1);
          pbVar6 = (byte *)(*(int *)(*(int *)(in_ECX + 4) + 0x1d8) + *(int *)(DAT_10223188 + 0x98));
          pbVar9 = pbVar10;
          do {
            bVar1 = *pbVar9;
            bVar15 = bVar1 < *pbVar6;
            if (bVar1 != *pbVar6) {
LAB_100a61c0:
              uVar7 = -(uint)bVar15 | 1;
              goto LAB_100a61c5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar9[1];
            bVar15 = bVar1 < pbVar6[1];
            if (bVar1 != pbVar6[1]) goto LAB_100a61c0;
            pbVar9 = pbVar9 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_100a61c5:
          if (uVar7 == 0) {
            pbVar6 = (byte *)(iVar2 + 0x204c);
            goto LAB_100a61e7;
          }
          this = *(CBasePlayerItem **)(this + 0x164);
        } while (this != (CBasePlayerItem *)0x0);
        goto LAB_100a6479;
      }
      FUN_100dda70(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x1d8),0);
    }
LAB_100a64a6:
    iVar4 = *(int *)(in_ECX + 4);
    if (((byte)*(undefined4 *)(iVar4 + 0x1a4) & 3) == 1) {
      FUN_100dd990(1,1);
      FUN_100f0ba0(0);
      FUN_100f2e10(0);
      *(undefined4 *)(iVar2 + 0x5dc) = 0xfffffffe;
      puVar12 = (undefined4 *)(iVar2 + 0x3dc);
      *(undefined4 *)(iVar2 + 0x5e0) = 0xfffffffe;
      iVar4 = 1;
      *(undefined1 *)(iVar2 + 0x204c) = 0;
      *(undefined1 *)(iVar2 + 0x20cc) = 0;
      *(undefined1 *)(iVar2 + 0x214c) = 0;
      do {
        (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
        (*DAT_10223008)(iVar4);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        iVar4 = iVar4 + 1;
        *puVar12 = 0;
        puVar12 = puVar12 + 1;
      } while (iVar4 < 4);
      iVar4 = *(int *)(in_ECX + 4);
    }
    if ((((byte)*(undefined4 *)(iVar4 + 0x1a4) & 3) == 3) &&
       (param_1 = (int *)0x1, 0 < *(int *)(DAT_10223188 + 0x90))) {
      do {
        iVar4 = FUN_10119680(param_1);
        if (iVar4 != 0) {
          FUN_100dd990(1,1);
          FUN_100f0ba0(0);
          FUN_100f2e10(0);
          *(undefined4 *)(iVar4 + 0x5dc) = 0xfffffffe;
          iVar13 = 1;
          *(undefined4 *)(iVar4 + 0x5e0) = 0xfffffffe;
          puVar12 = (undefined4 *)(iVar2 + 0x3dc);
          *(undefined1 *)(iVar4 + 0x204c) = 0;
          *(undefined1 *)(iVar4 + 0x20cc) = 0;
          *(undefined1 *)(iVar4 + 0x214c) = 0;
          do {
            (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
            (*DAT_10223008)(iVar13);
            (*DAT_10223008)(0);
            (*DAT_10223004)();
            iVar13 = iVar13 + 1;
            *puVar12 = 0;
            puVar12 = puVar12 + 1;
          } while (iVar13 < 4);
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 <= *(int *)(DAT_10223188 + 0x90));
      iVar4 = *(int *)(in_ECX + 4);
    }
    if ((*(uint *)(iVar4 + 0x1a4) & 4) != 0) {
      if ((*(uint *)(iVar4 + 0x1a4) & 2) == 0) {
        *(undefined1 *)(iVar2 + 0x1e9c) = 1;
        puVar12 = (undefined4 *)(iVar2 + 0x2200);
        iVar4 = 1;
        do {
          FUN_100e4360(iVar4,*puVar12,0);
          iVar4 = iVar4 + 1;
          puVar12 = puVar12 + 1;
        } while (iVar4 < 4);
      }
      else {
        param_1 = (int *)0x1;
        if (0 < *(int *)(DAT_10223188 + 0x90)) {
          do {
            iVar4 = FUN_10119680(param_1);
            if (iVar4 != 0) {
              *(undefined1 *)(iVar4 + 0x1e9c) = 1;
              puVar12 = (undefined4 *)(iVar4 + 0x2200);
              iVar4 = 1;
              do {
                FUN_100e4360(iVar4,*puVar12,0);
                iVar4 = iVar4 + 1;
                puVar12 = puVar12 + 1;
              } while (iVar4 < 4);
            }
            param_1 = (int *)((int)param_1 + 1);
          } while ((int)param_1 <= *(int *)(DAT_10223188 + 0x90));
        }
      }
    }
    if ((*(int *)(iVar2 + 0x1ef4) != 0) && (iVar3 != 0)) {
      pcVar11 = "bagremove";
      pbVar10 = (byte *)(*(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
      do {
        bVar1 = *pbVar10;
        bVar15 = bVar1 < (byte)*pcVar11;
        if (bVar1 != *pcVar11) {
LAB_100a6740:
          uVar7 = -(uint)bVar15 | 1;
          goto LAB_100a6745;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar10[1];
        bVar15 = bVar1 < (byte)pcVar11[1];
        if (bVar1 != pcVar11[1]) goto LAB_100a6740;
        pbVar10 = pbVar10 + 2;
        pcVar11 = pcVar11 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_100a6745:
      if (uVar7 == 0) {
        *(undefined1 *)(iVar2 + 0x1ef8) = 1;
        iVar4 = *(int *)(DAT_10223188 + 0x98);
        FUN_100dad40((int)"inventoryitems/cassettetape.txt" - iVar4,
                     (int)"models/items/cassette_tape.mdl" - iVar4,(int)"item_key" - iVar4);
        *(undefined1 *)(iVar2 + 0x1ef8) = 0;
      }
    }
  }
  return;
  while( true ) {
    bVar1 = pbVar6[1];
    bVar15 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_100a6207;
    pbVar6 = pbVar6 + 2;
    pbVar10 = pbVar10 + 2;
    if (bVar1 == 0) break;
LAB_100a61e7:
    bVar1 = *pbVar6;
    bVar15 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_100a6207:
      uVar7 = -(uint)bVar15 | 1;
      goto LAB_100a620c;
    }
    if (bVar1 == 0) break;
  }
  uVar7 = 0;
LAB_100a620c:
  if (uVar7 == 0) {
    *(undefined1 *)(iVar2 + 0x204c) = 0;
    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    (*DAT_10223008)(1);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(iVar2 + 0x3dc) = 0;
    param_1 = (int *)**(int **)(this + 4);
  }
  pbVar10 = (byte *)(iVar2 + 0x20cc);
  pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + (int)param_1);
  do {
    bVar1 = *pbVar10;
    bVar15 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100a6290:
      uVar7 = -(uint)bVar15 | 1;
      goto LAB_100a6295;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar10[1];
    bVar15 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100a6290;
    pbVar10 = pbVar10 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  uVar7 = 0;
LAB_100a6295:
  if (uVar7 == 0) {
    *(undefined1 *)(iVar2 + 0x20cc) = 0;
    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    (*DAT_10223008)(2);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(iVar2 + 0x3e0) = 0;
    param_1 = (int *)**(int **)(this + 4);
  }
  pbVar10 = (byte *)(iVar2 + 0x214c);
  pbVar6 = (byte *)(*(int *)(DAT_10223188 + 0x98) + (int)param_1);
  do {
    bVar1 = *pbVar10;
    bVar15 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100a6317:
      uVar7 = -(uint)bVar15 | 1;
      goto LAB_100a631c;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar10[1];
    bVar15 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100a6317;
    pbVar10 = pbVar10 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  uVar7 = 0;
LAB_100a631c:
  if (uVar7 == 0) {
    *(undefined1 *)(iVar2 + 0x214c) = 0;
    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    (*DAT_10223008)(3);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    *(undefined4 *)(iVar2 + 0x3e4) = 0;
  }
  if ((((*(int *)(iVar2 + 0x1e70) == *(int *)(this + 0x168)) &&
       (*(int *)(&DAT_1021b8c0 + *(int *)(iVar2 + 0x1e74) * 4) != 0)) &&
      (iVar4 = FUN_100e2380(*(int *)(&DAT_1021b8c0 + *(int *)(iVar2 + 0x1e74) * 4)), iVar4 != 0)) &&
     (*(int *)(iVar2 + 0x2514 + *(int *)(iVar2 + 0x1e74) * 4) != 0)) {
    uVar8 = FUN_100e0310(*(int *)(iVar2 + 0x1e74));
    FUN_100f5e50(uVar8);
    FUN_100f2e10(0);
    *(undefined4 *)(iVar2 + 0x5dc) = 0xfffffffe;
    *(undefined4 *)(iVar2 + 0x5e0) = 0xfffffffe;
  }
  if (((*(int *)(iVar2 + 0x1e74) == *(int *)(this + 0x168)) &&
      (*(int *)(&DAT_1021b8c0 + *(int *)(iVar2 + 0x1e70) * 4) != 0)) &&
     ((iVar4 = FUN_100e2380(*(int *)(&DAT_1021b8c0 + *(int *)(iVar2 + 0x1e70) * 4)), iVar4 != 0 &&
      (*(int *)(iVar2 + 0x2514 + *(int *)(iVar2 + 0x1e70) * 4) != 0)))) {
    uVar8 = FUN_100e0310(*(int *)(iVar2 + 0x1e70));
    FUN_100f5e50(uVar8);
    FUN_100f2e10(0);
    *(undefined4 *)(iVar2 + 0x5dc) = 0xfffffffe;
    *(undefined4 *)(iVar2 + 0x5e0) = 0xfffffffe;
  }
  FUN_100dda70(*(undefined4 *)(this + 0x110),0);
  *(uint *)(*(int *)(iVar2 + 4) + 0x16c) =
       *(uint *)(*(int *)(iVar2 + 4) + 0x16c) & ~(1 << (*(uint *)(this + 0x168) & 0x1f));
  FUN_100dda70(*(undefined4 *)(*(int *)(this + 4) + 0x1d8),0);
  CBasePlayerItem::DestroyItem(this);
  pCVar14 = this;
LAB_100a6475:
  this = pCVar14;
  if (this != (CBasePlayerItem *)0x0) goto LAB_100a64a6;
LAB_100a6479:
  local_c = local_c + 1;
  piVar5 = piVar5 + 1;
  pCVar14 = this;
  if (5 < local_c) goto LAB_100a64a6;
  goto LAB_100a6163;
}

