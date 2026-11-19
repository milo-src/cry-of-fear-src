// rea decompile_all
// name: FUN_100c7290
// address: 0x100c7290
// body: available
// range: 0x100c7290-0x100c763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100c7290(int param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  
  cVar2 = FUN_10001170(param_1,param_2);
  if (cVar2 == '\0') {
    pcVar10 = "nerdrage";
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar13 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_100c72e0:
        uVar4 = -(uint)bVar13 | 1;
        goto LAB_100c72e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar13 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_100c72e0;
      pbVar3 = pbVar3 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100c72e5:
    if (uVar4 == 0) {
      if ((param_1 != 0) && (iVar5 = FUN_100e4c30(), iVar5 != 0)) {
        pbVar3 = (byte *)(*DAT_10223094)(1);
        iVar5 = 1;
        if (0 < *(int *)(DAT_10223188 + 0x90)) {
          do {
            iVar6 = FUN_10119680(iVar5);
            if ((iVar6 != 0) && (pbVar3 != (byte *)0x0)) {
              iVar9 = *(int *)(*(int *)(iVar6 + 4) + 0x1d4);
              if (iVar9 != 0) {
                pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + iVar9);
                pbVar11 = pbVar3;
                do {
                  bVar1 = *pbVar7;
                  bVar13 = bVar1 < *pbVar11;
                  if (bVar1 != *pbVar11) {
LAB_100c7388:
                    uVar4 = -(uint)bVar13 | 1;
                    goto LAB_100c738d;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar7[1];
                  bVar13 = bVar1 < pbVar11[1];
                  if (bVar1 != pbVar11[1]) goto LAB_100c7388;
                  pbVar7 = pbVar7 + 2;
                  pbVar11 = pbVar11 + 2;
                } while (bVar1 != 0);
                uVar4 = 0;
LAB_100c738d:
                if (uVar4 == 0) {
                  (*DAT_10223000)(1,DAT_10226650,0,*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
                  (*DAT_10223008)(1);
                  (*DAT_10223004)();
                  *(undefined4 *)(iVar6 + 0x3b8) = 1;
                  FUN_100deff0(0);
                }
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 <= *(int *)(DAT_10223188 + 0x90));
        }
      }
      return 0;
    }
    pbVar11 = &DAT_101d6230;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      bVar13 = bVar1 < *pbVar11;
      if (bVar1 != *pbVar11) {
LAB_100c7411:
        uVar4 = -(uint)bVar13 | 1;
        goto LAB_100c7416;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar13 = bVar1 < pbVar11[1];
      if (bVar1 != pbVar11[1]) goto LAB_100c7411;
      pbVar3 = pbVar3 + 2;
      pbVar11 = pbVar11 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100c7416:
    if (uVar4 == 0) {
      pcVar10 = (char *)(*DAT_10223094)(1);
      iVar5 = _atoi(pcVar10);
      bVar13 = false;
      if (((char)DAT_10222ee4[2] != '\0') && (DAT_10222ee4[1] != 0)) {
        puVar12 = (undefined4 *)(in_ECX + 0x20);
        param_2 = (byte *)0x20;
        do {
          pbVar3 = (byte *)*puVar12;
          if (pbVar3 != (byte *)0x0) {
            pbVar11 = (byte *)(*DAT_10223184)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
            do {
              bVar1 = *pbVar11;
              bVar14 = bVar1 < *pbVar3;
              if (bVar1 != *pbVar3) {
LAB_100c7493:
                uVar4 = -(uint)bVar14 | 1;
                goto LAB_100c7498;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar11[1];
              bVar14 = bVar1 < pbVar3[1];
              if (bVar1 != pbVar3[1]) goto LAB_100c7493;
              pbVar11 = pbVar11 + 2;
              pbVar3 = pbVar3 + 2;
            } while (bVar1 != 0);
            uVar4 = 0;
LAB_100c7498:
            if (uVar4 == 0) {
              bVar13 = true;
            }
          }
          puVar12 = puVar12 + 1;
          param_2 = (byte *)((int)param_2 + -1);
        } while (param_2 != (byte *)0x0);
        if (!bVar13) {
          iVar6 = 0x20;
          do {
            if (*(int *)(iVar6 + (int)DAT_10222ee4) == 0) {
              uVar8 = (*DAT_10223184)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
              *(undefined4 *)(iVar6 + (int)DAT_10222ee4) = uVar8;
              if (iVar5 == 0) {
                DAT_10222ee4[5] = DAT_10222ee4[5] + 1;
              }
              else {
                DAT_10222ee4[4] = DAT_10222ee4[4] + 1;
              }
            }
            iVar6 = iVar6 + 4;
          } while (iVar6 < 0x9d);
        }
      }
    }
    else {
      iVar5 = FUN_1000aba0(param_2,"votekick");
      if (iVar5 == 0) {
        return 0;
      }
      pbVar3 = (byte *)(*DAT_10223094)(1);
      iVar5 = 1;
      if (0 < *(int *)(DAT_10223188 + 0x90)) {
        do {
          iVar6 = FUN_10119680(iVar5);
          if (((iVar6 != 0) && (pbVar3 != (byte *)0x0)) &&
             (iVar9 = *(int *)(*(int *)(iVar6 + 4) + 0x1d4), iVar9 != 0)) {
            pbVar11 = (byte *)(*(int *)(DAT_10223188 + 0x98) + iVar9);
            if (pbVar11 != (byte *)0x0) {
              bVar1 = *pbVar11;
              pbVar7 = pbVar11;
              while (bVar1 != 0) {
                iVar9 = _tolower((int)(char)bVar1);
                *pbVar7 = (byte)iVar9;
                pbVar7 = pbVar7 + 1;
                bVar1 = *pbVar7;
              }
            }
            bVar1 = *pbVar3;
            pbVar7 = pbVar3;
            while (bVar1 != 0) {
              iVar9 = _tolower((int)(char)bVar1);
              *pbVar7 = (byte)iVar9;
              pbVar7 = pbVar7 + 1;
              bVar1 = *pbVar7;
            }
            pbVar7 = pbVar3;
            if (pbVar11 != (byte *)0x0) {
              do {
                bVar1 = *pbVar11;
                bVar13 = bVar1 < *pbVar7;
                if (bVar1 != *pbVar7) {
LAB_100c75f4:
                  uVar4 = -(uint)bVar13 | 1;
                  goto LAB_100c75f9;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar11[1];
                bVar13 = bVar1 < pbVar7[1];
                if (bVar1 != pbVar7[1]) goto LAB_100c75f4;
                pbVar11 = pbVar11 + 2;
                pbVar7 = pbVar7 + 2;
              } while (bVar1 != 0);
              uVar4 = 0;
LAB_100c75f9:
              if (uVar4 == 0) {
                (**(code **)(*DAT_10222ee4 + 0xc))(param_1,iVar6);
                return 1;
              }
            }
          }
          iVar5 = iVar5 + 1;
          if (*(int *)(DAT_10223188 + 0x90) < iVar5) {
            return 1;
          }
        } while( true );
      }
    }
  }
  return 1;
}

