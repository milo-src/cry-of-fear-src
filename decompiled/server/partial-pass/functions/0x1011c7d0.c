// rea decompile_all
// name: CBasePlayerItem::DefaultTouch
// address: 0x1011c7d0
// body: available
// range: 0x1011c7d0-0x1011cce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBasePlayerItem::DefaultTouch(class CBaseEntity *) */

void __thiscall CBasePlayerItem::DefaultTouch(CBasePlayerItem *this,CBaseEntity *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  bool bVar12;
  
                    /* 0x11c7d0  71  ?DefaultTouch@CBasePlayerItem@@QAEXPAVCBaseEntity@@@Z */
  if ((param_1 != (CBaseEntity *)0x0) &&
     (iVar3 = (**(code **)(*(int *)param_1 + 0xd0))(), iVar3 != 0)) {
    iVar3 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
    if (iVar3 != 0) {
      pcVar10 = "weapon_tmp";
      pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(this + 4));
      do {
        bVar1 = *pbVar7;
        bVar12 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_1011c846:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_1011c84b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar12 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_1011c846;
        pbVar7 = pbVar7 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_1011c84b:
      if ((uVar4 == 0) && (iVar5 = FUN_100e4d60(), iVar5 == 0)) {
        FUN_10119810(iVar3,&DAT_101e65dc,5,0);
        return;
      }
      pcVar10 = "weapon_mp5";
      pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(this + 4));
      do {
        bVar1 = *pbVar7;
        bVar12 = bVar1 < (byte)*pcVar10;
        if (bVar1 != *pcVar10) {
LAB_1011c8b0:
          uVar4 = -(uint)bVar12 | 1;
          goto LAB_1011c8b5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar12 = bVar1 < (byte)pcVar10[1];
        if (bVar1 != pcVar10[1]) goto LAB_1011c8b0;
        pbVar7 = pbVar7 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_1011c8b5:
      if (((((uVar4 == 0) && (iVar5 = FUN_100e4c30(), iVar5 == 0)) &&
           (iVar5 = *(int *)(iVar3 + 0xc4), iVar5 != 2)) && ((iVar5 != 3 && (iVar5 != 4)))) &&
         ((DAT_10222ee4 != (int *)0x0 && (cVar2 = FUN_100af7e0(), cVar2 == '\0')))) {
        FUN_10119810(iVar3,"This is for mappers only.",5,0);
        return;
      }
    }
    pcVar10 = "weapon_lantern";
    pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(this + 4));
    do {
      bVar1 = *pbVar7;
      bVar12 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_1011c940:
        uVar4 = -(uint)bVar12 | 1;
        goto LAB_1011c945;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar7[1];
      bVar12 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_1011c940;
      pbVar7 = pbVar7 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1011c945:
    if ((uVar4 != 0) || (iVar5 = FUN_100e2380("weapon_lantern"), iVar5 == 0)) {
      if ((DAT_10222ee4 == (int *)0x0) ||
         (iVar5 = (**(code **)(*DAT_10222ee4 + 0x7c))(iVar3,this), iVar5 != 0)) {
        piVar8 = *(int **)(this + 4);
        if (piVar8[0x95] == 1) {
          piVar8[0x95] = 0;
          piVar8 = *(int **)(this + 4);
        }
        pbVar9 = (byte *)(*(int *)(DAT_10223188 + 0x98) +
                         *(int *)(-(uint)(piVar8[0x83] != 0) & piVar8[0x83] + 0x80U));
        pcVar10 = "weapon_flare";
        pbVar7 = pbVar9;
        do {
          bVar1 = *pbVar7;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_1011ca65:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_1011ca6a;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_1011ca65;
          pbVar7 = pbVar7 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_1011ca6a:
        if ((uVar4 == 0) && (piVar8[0x92] == 1)) {
          FUN_10119810(iVar3,&DAT_101e663c,5,0);
          return;
        }
        pcVar10 = "weapon_flare";
        do {
          bVar1 = *pbVar9;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_1011cab6:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_1011cabb;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar9[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_1011cab6;
          pbVar9 = pbVar9 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_1011cabb:
        if ((uVar4 == 0) && (piVar8[0x92] == 2)) {
          FUN_10119810(iVar3,&DAT_101e6654,5,0);
          return;
        }
        if (((*(int *)(this + 0x110) != 0) && (piVar8[0x2e] != 0)) && (*piVar8 != 0)) {
          iVar11 = *(int *)(DAT_10223188 + 0x98) + *piVar8;
          iVar5 = FUN_1000aba0(iVar11,"weapon_dualweapon");
          if (((iVar5 == 0) && (iVar5 = FUN_1000aba0(iVar11,"weapon_action"), iVar5 == 0)) &&
             ((iVar5 = FUN_100e2380(iVar11), iVar5 == 0 &&
              (iVar5 = FUN_100dad40(*(undefined4 *)(this + 0x110),(*(undefined4 **)(this + 4))[0x2e]
                                    ,**(undefined4 **)(this + 4)), iVar5 == 0)))) {
            FUN_10119810(iVar3,&DAT_101c4ad0,2,0);
            return;
          }
        }
        iVar5 = (**(code **)(*(int *)param_1 + 0x8c))(this);
        if (iVar5 != 0) {
          (**(code **)(*(int *)this + 0x164))(iVar3);
          pcVar10 = "weapon_action";
          pbVar9 = (byte *)(*(int *)(-(uint)(*(int *)(*(int *)(this + 4) + 0x20c) != 0) &
                                    *(int *)(*(int *)(this + 4) + 0x20c) + 0x80U) +
                           *(int *)(DAT_10223188 + 0x98));
          pbVar7 = pbVar9;
          do {
            bVar1 = *pbVar7;
            bVar12 = bVar1 < (byte)*pcVar10;
            if (bVar1 != *pcVar10) {
LAB_1011cbd2:
              uVar4 = -(uint)bVar12 | 1;
              goto LAB_1011cbd7;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar12 = bVar1 < (byte)pcVar10[1];
            if (bVar1 != pcVar10[1]) goto LAB_1011cbd2;
            pbVar7 = pbVar7 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar1 != 0);
          uVar4 = 0;
LAB_1011cbd7:
          if (uVar4 != 0) {
            pcVar10 = "weapon_dualweapon";
            do {
              bVar1 = *pbVar9;
              bVar12 = bVar1 < (byte)*pcVar10;
              if (bVar1 != *pcVar10) {
LAB_1011cc00:
                uVar4 = -(uint)bVar12 | 1;
                goto LAB_1011cc05;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar9[1];
              bVar12 = bVar1 < (byte)pcVar10[1];
              if (bVar1 != pcVar10[1]) goto LAB_1011cc00;
              pbVar9 = pbVar9 + 2;
              pcVar10 = pcVar10 + 2;
            } while (bVar1 != 0);
            uVar4 = 0;
LAB_1011cc05:
            if (uVar4 != 0) {
              piVar8 = (int *)(iVar3 + 0x448);
              iVar5 = 1;
              piVar6 = piVar8;
              do {
                if (*piVar6 == *(int *)(this + 0x168)) goto LAB_1011cc54;
                iVar5 = iVar5 + 1;
                piVar6 = piVar6 + 1;
              } while (iVar5 < 0x21);
              iVar5 = 1;
              do {
                if (*piVar8 == 0) {
                  *(int *)(iVar3 + 0x444 + iVar5 * 4) = *(int *)(this + 0x168);
                  *(int *)(iVar3 + 0x654) = *(int *)(iVar3 + 0x654) + 1;
                  break;
                }
                iVar5 = iVar5 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar5 < 0x21);
            }
          }
LAB_1011cc54:
          if (DAT_10226480 == 0) {
            piVar8 = *(int **)(this + 4);
            iVar5 = FUN_1000aba0(*(int *)(DAT_10223188 + 0x98) + *piVar8,"weapon_dualweapon");
            if (((iVar5 == 0) && ((float)piVar8[0x6d] != 1.0)) && (iVar3 != 0)) {
              FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c),3,"weapons/weapon_get.wav",
                           0x3f800000,0x3f4ccccd,0,100);
            }
          }
        }
        FUN_10102930(param_1,3,0);
      }
      else {
        pcVar10 = "weapon_flare";
        pbVar7 = (byte *)(*(int *)(-(uint)(*(int *)(*(int *)(this + 4) + 0x20c) != 0) &
                                  *(int *)(*(int *)(this + 4) + 0x20c) + 0x80U) +
                         *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar7;
          bVar12 = bVar1 < (byte)*pcVar10;
          if (bVar1 != *pcVar10) {
LAB_1011c9c1:
            uVar4 = -(uint)bVar12 | 1;
            goto LAB_1011c9c6;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar12 = bVar1 < (byte)pcVar10[1];
          if (bVar1 != pcVar10[1]) goto LAB_1011c9c1;
          pbVar7 = pbVar7 + 2;
          pcVar10 = pcVar10 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_1011c9c6:
        if (uVar4 == 0) {
          FUN_10119810(iVar3,&DAT_101e6618,5,0);
        }
        if ((DAT_1022647c != 0) || (DAT_10226480 != 0)) {
          FUN_10119900(this);
          return;
        }
      }
    }
  }
  return;
}

