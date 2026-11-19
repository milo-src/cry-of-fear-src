// rea decompile_all
// name: FUN_100e3460
// address: 0x100e3460
// body: available
// range: 0x100e3460-0x100e40de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e3460(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *in_ECX;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  size_t _MaxCount;
  int local_c;
  
  if ((char)in_ECX[0x7ba] != '\0') {
    return;
  }
  iVar3 = FUN_100e4ed0();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = (**(code **)(*in_ECX + 0xbc))();
  if (iVar3 == 0) {
    return;
  }
  pcVar11 = (char *)((int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
  pcVar10 = pcVar11;
  do {
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar1 != '\0');
  if (1 < (uint)((int)pcVar10 - (int)(pcVar11 + 1))) {
    pbVar4 = (byte *)FUN_100dff70("classname",pcVar11);
    pcVar10 = "weapon_mobile";
    do {
      bVar2 = *pcVar10;
      bVar12 = bVar2 < *pbVar4;
      if (bVar2 != *pbVar4) {
LAB_100e34f5:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_100e34fa;
      }
      if (bVar2 == 0) break;
      bVar2 = pcVar10[1];
      bVar12 = bVar2 < pbVar4[1];
      if (bVar2 != pbVar4[1]) goto LAB_100e34f5;
      pcVar10 = pcVar10 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_100e34fa:
    if (((uVar5 == 0) && (DAT_10223190 != 0)) && (*(int *)(*(int *)(DAT_10223190 + 4) + 0x24c) != 1)
       ) {
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"inventory/inventory_no.wav",0x3f800000,
                   0x3f4ccccd,0,100);
      FUN_10119810();
      return;
    }
    pbVar4 = (byte *)FUN_100dff70("classname",(int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
    pcVar10 = "weapon_syringe";
    do {
      bVar2 = *pcVar10;
      bVar12 = bVar2 < *pbVar4;
      if (bVar2 != *pbVar4) {
LAB_100e35a0:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_100e35a5;
      }
      if (bVar2 == 0) break;
      bVar2 = pcVar10[1];
      bVar12 = bVar2 < pbVar4[1];
      if (bVar2 != pbVar4[1]) goto LAB_100e35a0;
      pcVar10 = pcVar10 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_100e35a5:
    if ((uVar5 == 0) && (iVar3 = in_ECX[0x94b], iVar3 != 0)) {
      pcVar10 = "weapon_syringe";
      iVar8 = *(int *)(*(int *)(iVar3 + 4) + 0x20c);
      pbVar4 = (byte *)(*(int *)(-(uint)(iVar8 != 0) & iVar8 + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar4;
        bVar12 = bVar2 < (byte)*pcVar10;
        if (bVar2 != *pcVar10) {
LAB_100e3600:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_100e3605;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar12 = bVar2 < (byte)pcVar10[1];
        if (bVar2 != pcVar10[1]) goto LAB_100e3600;
        pbVar4 = pbVar4 + 2;
        pcVar10 = pcVar10 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100e3605:
      if ((uVar5 == 0) &&
         (*DAT_10223188 <= *(float *)(iVar3 + 0x1cc) && *(float *)(iVar3 + 0x1cc) != *DAT_10223188))
      goto LAB_100e370a;
    }
    pbVar4 = (byte *)FUN_100dff70("classname",(int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
    pcVar10 = "weapon_radio";
    do {
      bVar2 = *pcVar10;
      bVar12 = bVar2 < *pbVar4;
      if (bVar2 != *pbVar4) {
LAB_100e3660:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_100e3665;
      }
      if (bVar2 == 0) break;
      bVar2 = pcVar10[1];
      bVar12 = bVar2 < pbVar4[1];
      if (bVar2 != pbVar4[1]) goto LAB_100e3660;
      pcVar10 = pcVar10 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_100e3665:
    if (uVar5 == 0) {
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"inventory/inventory_no.wav",0x3f800000,
                   0x3f4ccccd,0,100);
      FUN_10119810();
      return;
    }
    iVar3 = (*DAT_10223068)(0);
    if ((((iVar3 == 0) && (iVar3 = (*DAT_1022305c)(0), iVar3 == 0)) || (*(int *)(iVar3 + 0x7c) == 0)
        ) || ((*(byte *)(*(int *)(*(int *)(iVar3 + 0x7c) + 4) + 0x1a4) & 8) == 0)) {
      pbVar4 = (byte *)FUN_100dff70("classname",(int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
      pcVar10 = "item_key";
      do {
        bVar2 = *pcVar10;
        bVar12 = bVar2 < *pbVar4;
        if (bVar2 != *pbVar4) {
LAB_100e3785:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_100e378a;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar10[1];
        bVar12 = bVar2 < pbVar4[1];
        if (bVar2 != pbVar4[1]) goto LAB_100e3785;
        pcVar10 = pcVar10 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100e378a:
      if (uVar5 == 0) {
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"inventory/inventory_click.wav",0x3f800000
                     ,0x3f4ccccd,0,100);
        FUN_100de090(param_1);
        return;
      }
      pbVar4 = (byte *)FUN_100dff70("classname",(int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
      pcVar10 = "item_glocktaclight";
      do {
        bVar2 = *pcVar10;
        bVar12 = bVar2 < *pbVar4;
        if (bVar2 != *pbVar4) {
LAB_100e3810:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_100e3815;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar10[1];
        bVar12 = bVar2 < pbVar4[1];
        if (bVar2 != pbVar4[1]) goto LAB_100e3810;
        pcVar10 = pcVar10 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100e3815:
      if (uVar5 == 0) {
        FUN_100dd990(param_1,0);
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"inventory/inventory_click.wav",0x3f800000
                     ,0x3f4ccccd,0,100);
        iVar3 = in_ECX[1];
        FUN_10017950("item_glocktaclight",iVar3 + 8,iVar3 + 0x50,*(undefined4 *)(iVar3 + 0x20c));
        return;
      }
      pbVar4 = (byte *)FUN_100dff70("classname",(int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
      pcVar10 = "item_phonebattery";
      do {
        bVar2 = *pcVar10;
        bVar12 = bVar2 < *pbVar4;
        if (bVar2 != *pbVar4) {
LAB_100e38b6:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_100e38bb;
        }
        if (bVar2 == 0) break;
        bVar2 = pcVar10[1];
        bVar12 = bVar2 < pbVar4[1];
        if (bVar2 != pbVar4[1]) goto LAB_100e38b6;
        pcVar10 = pcVar10 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100e38bb:
      if (uVar5 == 0) {
        FUN_100dd990(param_1,0);
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,"inventory/inventory_click.wav",0x3f800000
                     ,0x3f4ccccd,0,100);
        iVar3 = in_ECX[1];
        FUN_10017950("item_phonebattery",iVar3 + 8,iVar3 + 0x50,*(undefined4 *)(iVar3 + 0x20c));
        return;
      }
      _MaxCount = 7;
      pcVar11 = "weapon_";
      pcVar10 = (char *)FUN_100dff70("classname",(int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
      iVar3 = _strncmp(pcVar10,pcVar11,_MaxCount);
      if (iVar3 == 0) {
        iVar3 = FUN_1013f5f0((int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f],"weapon_syringe");
        if ((iVar3 == 0) &&
           (iVar3 = FUN_1013f5f0((int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f],"weapon_flare"),
           iVar3 == 0)) {
          pbVar6 = (byte *)FUN_100dff70("classname",
                                        (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
          pbVar4 = (byte *)(in_ECX + 0x813);
          do {
            bVar2 = *pbVar4;
            bVar12 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_100e39e4:
              uVar5 = -(uint)bVar12 | 1;
              goto LAB_100e39e9;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar12 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_100e39e4;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_100e39e9:
          if (uVar5 == 0) {
            *(undefined1 *)(in_ECX + 0x813) = 0;
            (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
            (*DAT_10223008)(1);
            (*DAT_10223008)(0);
            (*DAT_10223004)();
            in_ECX[0xf7] = 0;
          }
          pbVar6 = (byte *)FUN_100dff70("classname",
                                        (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
          pbVar4 = (byte *)(in_ECX + 0x833);
          do {
            bVar2 = *pbVar4;
            bVar12 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_100e3a74:
              uVar5 = -(uint)bVar12 | 1;
              goto LAB_100e3a79;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar12 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_100e3a74;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_100e3a79:
          if (uVar5 == 0) {
            *(undefined1 *)(in_ECX + 0x833) = 0;
            (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
            (*DAT_10223008)(2);
            (*DAT_10223008)(0);
            (*DAT_10223004)();
            in_ECX[0xf8] = 0;
          }
          pbVar6 = (byte *)FUN_100dff70("classname",
                                        (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
          pbVar4 = (byte *)(in_ECX + 0x853);
          do {
            bVar2 = *pbVar4;
            bVar12 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_100e3b04:
              uVar5 = -(uint)bVar12 | 1;
              goto LAB_100e3b09;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar4[1];
            bVar12 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_100e3b04;
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          uVar5 = 0;
LAB_100e3b09:
          if (uVar5 == 0) {
            *(undefined1 *)(in_ECX + 0x853) = 0;
            (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
            (*DAT_10223008)(3);
            (*DAT_10223008)(0);
            (*DAT_10223004)();
            in_ECX[0xf9] = 0;
          }
        }
        else {
          piVar7 = in_ECX + 0x945;
          local_c = 6;
          do {
            for (iVar3 = *piVar7; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x164)) {
              iVar8 = FUN_1013f5f0((int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f],
                                   "weapon_syringe");
              if (iVar8 != 0) {
                pcVar10 = "weapon_syringe";
                iVar8 = *(int *)(*(int *)(iVar3 + 4) + 0x20c);
                pbVar4 = (byte *)(*(int *)(-(uint)(iVar8 != 0) & iVar8 + 0x80U) +
                                 (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar4;
                  bVar12 = bVar2 < (byte)*pcVar10;
                  if (bVar2 != *pcVar10) {
LAB_100e3bf0:
                    uVar5 = -(uint)bVar12 | 1;
                    goto LAB_100e3bf5;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar4[1];
                  bVar12 = bVar2 < (byte)pcVar10[1];
                  if (bVar2 != pcVar10[1]) goto LAB_100e3bf0;
                  pbVar4 = pbVar4 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar2 != 0);
                uVar5 = 0;
LAB_100e3bf5:
                if ((uVar5 == 0) && (iVar8 = FUN_100dfe60("syringe"), in_ECX[iVar8 + 0x950] < 2)) {
                  if ((DAT_10222ee4 != (int *)0x0) &&
                     (iVar8 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar8 != 0)) {
                    (*DAT_10223000)(2,DAT_102266dc,0,0);
                    uVar9 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
                    (*DAT_10223008)(uVar9);
                    (*DAT_10223008)(0);
                    (*DAT_10223004)();
                  }
                  pbVar6 = (byte *)FUN_100dff70("classname",
                                                (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
                  pbVar4 = (byte *)(in_ECX + 0x813);
                  do {
                    bVar2 = *pbVar4;
                    bVar12 = bVar2 < *pbVar6;
                    if (bVar2 != *pbVar6) {
LAB_100e3cb0:
                      uVar5 = -(uint)bVar12 | 1;
                      goto LAB_100e3cb5;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar4[1];
                    bVar12 = bVar2 < pbVar6[1];
                    if (bVar2 != pbVar6[1]) goto LAB_100e3cb0;
                    pbVar4 = pbVar4 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100e3cb5:
                  if (uVar5 == 0) {
                    *(undefined1 *)(in_ECX + 0x813) = 0;
                    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                    (*DAT_10223008)(1);
                    (*DAT_10223008)(0);
                    (*DAT_10223004)();
                    in_ECX[0xf7] = 0;
                  }
                  pbVar6 = (byte *)FUN_100dff70("classname",
                                                (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
                  pbVar4 = (byte *)(in_ECX + 0x833);
                  do {
                    bVar2 = *pbVar4;
                    bVar12 = bVar2 < *pbVar6;
                    if (bVar2 != *pbVar6) {
LAB_100e3d40:
                      uVar5 = -(uint)bVar12 | 1;
                      goto LAB_100e3d45;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar4[1];
                    bVar12 = bVar2 < pbVar6[1];
                    if (bVar2 != pbVar6[1]) goto LAB_100e3d40;
                    pbVar4 = pbVar4 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100e3d45:
                  if (uVar5 == 0) {
                    *(undefined1 *)(in_ECX + 0x833) = 0;
                    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                    (*DAT_10223008)(2);
                    (*DAT_10223008)(0);
                    (*DAT_10223004)();
                    in_ECX[0xf8] = 0;
                  }
                  pbVar6 = (byte *)FUN_100dff70("classname",
                                                (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
                  pbVar4 = (byte *)(in_ECX + 0x853);
                  do {
                    bVar2 = *pbVar4;
                    bVar12 = bVar2 < *pbVar6;
                    if (bVar2 != *pbVar6) {
LAB_100e3dd0:
                      uVar5 = -(uint)bVar12 | 1;
                      goto LAB_100e3dd5;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar4[1];
                    bVar12 = bVar2 < pbVar6[1];
                    if (bVar2 != pbVar6[1]) goto LAB_100e3dd0;
                    pbVar4 = pbVar4 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100e3dd5:
                  if (uVar5 == 0) {
                    *(undefined1 *)(in_ECX + 0x853) = 0;
                    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                    (*DAT_10223008)(3);
                    (*DAT_10223008)(0);
                    (*DAT_10223004)();
                    in_ECX[0xf9] = 0;
                  }
                }
              }
              iVar8 = FUN_1013f5f0((int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f],"weapon_flare")
              ;
              if (iVar8 != 0) {
                pcVar10 = "weapon_flare";
                iVar8 = *(int *)(*(int *)(iVar3 + 4) + 0x20c);
                pbVar4 = (byte *)(*(int *)(-(uint)(iVar8 != 0) & iVar8 + 0x80U) +
                                 (int)DAT_10223188[0x26]);
                do {
                  bVar2 = *pbVar4;
                  bVar12 = bVar2 < (byte)*pcVar10;
                  if (bVar2 != *pcVar10) {
LAB_100e3e90:
                    uVar5 = -(uint)bVar12 | 1;
                    goto LAB_100e3e95;
                  }
                  if (bVar2 == 0) break;
                  bVar2 = pbVar4[1];
                  bVar12 = bVar2 < (byte)pcVar10[1];
                  if (bVar2 != pcVar10[1]) goto LAB_100e3e90;
                  pbVar4 = pbVar4 + 2;
                  pcVar10 = pcVar10 + 2;
                } while (bVar2 != 0);
                uVar5 = 0;
LAB_100e3e95:
                if ((uVar5 == 0) && (iVar8 = FUN_100dfe60("flares"), in_ECX[iVar8 + 0x950] < 2)) {
                  pbVar6 = (byte *)FUN_100dff70("classname",
                                                (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
                  pbVar4 = (byte *)(in_ECX + 0x813);
                  do {
                    bVar2 = *pbVar4;
                    bVar12 = bVar2 < *pbVar6;
                    if (bVar2 != *pbVar6) {
LAB_100e3f00:
                      uVar5 = -(uint)bVar12 | 1;
                      goto LAB_100e3f05;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar4[1];
                    bVar12 = bVar2 < pbVar6[1];
                    if (bVar2 != pbVar6[1]) goto LAB_100e3f00;
                    pbVar4 = pbVar4 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100e3f05:
                  if (uVar5 == 0) {
                    *(undefined1 *)(in_ECX + 0x813) = 0;
                    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                    (*DAT_10223008)(1);
                    (*DAT_10223008)(0);
                    (*DAT_10223004)();
                    in_ECX[0xf7] = 0;
                  }
                  pbVar6 = (byte *)FUN_100dff70("classname",
                                                (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
                  pbVar4 = (byte *)(in_ECX + 0x833);
                  do {
                    bVar2 = *pbVar4;
                    bVar12 = bVar2 < *pbVar6;
                    if (bVar2 != *pbVar6) {
LAB_100e3f90:
                      uVar5 = -(uint)bVar12 | 1;
                      goto LAB_100e3f95;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar4[1];
                    bVar12 = bVar2 < pbVar6[1];
                    if (bVar2 != pbVar6[1]) goto LAB_100e3f90;
                    pbVar4 = pbVar4 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100e3f95:
                  if (uVar5 == 0) {
                    *(undefined1 *)(in_ECX + 0x833) = 0;
                    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                    (*DAT_10223008)(2);
                    (*DAT_10223008)(0);
                    (*DAT_10223004)();
                    in_ECX[0xf8] = 0;
                  }
                  pbVar6 = (byte *)FUN_100dff70("classname",
                                                (int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
                  pbVar4 = (byte *)(in_ECX + 0x853);
                  do {
                    bVar2 = *pbVar4;
                    bVar12 = bVar2 < *pbVar6;
                    if (bVar2 != *pbVar6) {
LAB_100e4020:
                      uVar5 = -(uint)bVar12 | 1;
                      goto LAB_100e4025;
                    }
                    if (bVar2 == 0) break;
                    bVar2 = pbVar4[1];
                    bVar12 = bVar2 < pbVar6[1];
                    if (bVar2 != pbVar6[1]) goto LAB_100e4020;
                    pbVar4 = pbVar4 + 2;
                    pbVar6 = pbVar6 + 2;
                  } while (bVar2 != 0);
                  uVar5 = 0;
LAB_100e4025:
                  if (uVar5 == 0) {
                    *(undefined1 *)(in_ECX + 0x853) = 0;
                    (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(in_ECX[1] + 0x20c));
                    (*DAT_10223008)(3);
                    (*DAT_10223008)(0);
                    (*DAT_10223004)();
                    in_ECX[0xf9] = 0;
                  }
                }
              }
            }
            piVar7 = piVar7 + 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        uVar9 = FUN_100dff70("classname",(int)DAT_10223188[0x26] + in_ECX[param_1 + 0x87f]);
        FUN_100de170(uVar9,param_1);
        pcVar10 = "inventory/inventory_click.wav";
        goto LAB_100e3725;
      }
    }
    else {
      FUN_10119810();
    }
  }
LAB_100e370a:
  pcVar10 = "inventory/inventory_no.wav";
LAB_100e3725:
  FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),3,pcVar10,0x3f800000,0x3f4ccccd,0,100);
  return;
}

