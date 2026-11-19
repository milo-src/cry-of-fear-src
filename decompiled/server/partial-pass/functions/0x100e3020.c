// rea decompile_all
// name: FUN_100e3020
// address: 0x100e3020
// body: available
// range: 0x100e3020-0x100e3451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e3020(int param_1,int param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  uint uVar5;
  int in_ECX;
  byte *pbVar6;
  bool bVar7;
  char *pcVar8;
  byte local_108 [128];
  byte local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((*(char *)(in_ECX + 0x1ee8) != '\0') || (iVar2 = FUN_100e4ed0(), iVar2 != 0))
  goto LAB_100e343f;
  pbVar6 = param_3;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
  } while (bVar1 != 0);
  if ((uint)((int)pbVar6 - (int)(param_3 + 1)) < 2) {
    (*DAT_1022303c)(1,"COMBINE ERROR: No combine result\n");
LAB_100e3411:
    pcVar8 = "inventory/inventory_no.wav";
  }
  else {
    iVar2 = FUN_100e4ee0(*(undefined4 *)(in_ECX + 0x21fc + param_1 * 4));
    if ((iVar2 != 0) ||
       (iVar2 = FUN_100e4ee0(*(undefined4 *)(in_ECX + 0x21fc + param_2 * 4)), iVar2 != 0)) {
      pcVar8 = "COMBINE ERROR: There\'s nothing in one or both slots: %i %i\n";
LAB_100e3406:
      (*DAT_1022303c)(1,pcVar8,param_1,param_2);
      goto LAB_100e3411;
    }
    if (((5 < param_1 - 1U) || (5 < param_2 - 1U)) || (param_1 == param_2)) {
      pcVar8 = "COMBINE ERROR: Wrong slots: %i %i\n";
      goto LAB_100e3406;
    }
    uVar3 = FUN_100dff70("combined_result",
                         *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x21fc + param_1 * 4));
    FUN_1001f160(local_108,&DAT_101a124c,uVar3);
    uVar3 = FUN_100dff70("combined_result",
                         *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0x21fc + param_2 * 4));
    FUN_1001f160(local_88,&DAT_101a124c,uVar3);
    pbVar6 = local_88;
    pbVar4 = local_108;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_100e3173:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_100e3178;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_100e3173;
      pbVar4 = pbVar4 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_100e3178:
    if (uVar5 != 0) goto LAB_100e3411;
    pcVar8 = "glockwithtaclight";
    pbVar6 = param_3;
    do {
      bVar1 = *pbVar6;
      bVar7 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_100e31b0:
        uVar5 = -(uint)bVar7 | 1;
        goto LAB_100e31b5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar7 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_100e31b0;
      pbVar6 = pbVar6 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_100e31b5:
    if (uVar5 == 0) {
      pcVar8 = "inventoryitems/taclight.txt";
      pbVar6 = (byte *)(*(int *)(in_ECX + 0x21fc + param_1 * 4) + *(int *)(DAT_10223188 + 0x98));
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_100e3200:
          uVar5 = -(uint)bVar7 | 1;
          goto LAB_100e3205;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_100e3200;
        pbVar6 = pbVar6 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_100e3205:
      if (uVar5 == 0) {
        FUN_100ddc40();
        FUN_100dd990(param_1,0);
        uVar3 = 3;
LAB_100e321c:
        iVar2 = FUN_100e0310(uVar3);
        if (iVar2 != 0) {
          *(undefined1 *)(iVar2 + 0x1f8) = 1;
        }
        uVar3 = *(undefined4 *)(in_ECX + 0x21fc + param_1 * 4);
        param_2 = param_1;
      }
      else {
        pcVar8 = "inventoryitems/taclight.txt";
        pbVar6 = (byte *)(*(int *)(in_ECX + 0x21fc + param_2 * 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar6;
          bVar7 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_100e3291:
            uVar5 = -(uint)bVar7 | 1;
            goto LAB_100e3296;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar7 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_100e3291;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_100e3296:
        if (uVar5 != 0) goto LAB_100e3411;
        FUN_100ddc40();
        FUN_100dd990(param_2,0);
        uVar3 = 3;
LAB_100e32b1:
        iVar2 = FUN_100e0310(uVar3);
        if (iVar2 != 0) {
          *(undefined1 *)(iVar2 + 0x1f8) = 1;
        }
        uVar3 = *(undefined4 *)(in_ECX + 0x21fc + param_2 * 4);
      }
    }
    else {
      pcVar8 = "phonewithbattery";
      pbVar6 = param_3;
      do {
        bVar1 = *pbVar6;
        bVar7 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_100e3300:
          uVar5 = -(uint)bVar7 | 1;
          goto LAB_100e3305;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar6[1];
        bVar7 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_100e3300;
        pbVar6 = pbVar6 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_100e3305:
      if (uVar5 == 0) {
        pcVar8 = "inventoryitems/mobile_battery.txt";
        pbVar6 = (byte *)(*(int *)(in_ECX + 0x21fc + param_1 * 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar1 = *pbVar6;
          bVar7 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_100e3350:
            uVar5 = -(uint)bVar7 | 1;
            goto LAB_100e3355;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar6[1];
          bVar7 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_100e3350;
          pbVar6 = pbVar6 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        uVar5 = 0;
LAB_100e3355:
        if (uVar5 != 0) {
          pcVar8 = "inventoryitems/mobile_battery.txt";
          pbVar6 = (byte *)(*(int *)(in_ECX + 0x21fc + param_2 * 4) + *(int *)(DAT_10223188 + 0x98))
          ;
          do {
            bVar1 = *pbVar6;
            bVar7 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_100e33a3:
              uVar5 = -(uint)bVar7 | 1;
              goto LAB_100e33a8;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar7 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_100e33a3;
            pbVar6 = pbVar6 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_100e33a8:
          if (uVar5 == 0) {
            FUN_100ddc40();
            FUN_100dd990(param_2,0);
            uVar3 = 2;
            goto LAB_100e32b1;
          }
          goto LAB_100e3411;
        }
        FUN_100ddc40();
        FUN_100dd990(param_1,0);
        uVar3 = 2;
        goto LAB_100e321c;
      }
      FUN_100dd990(param_1,0);
      FUN_100dd990(param_2,0);
      uVar3 = (*DAT_10223054)(param_3);
      *(undefined4 *)(in_ECX + 0x21fc + param_1 * 4) = uVar3;
      param_2 = param_1;
    }
    FUN_100e4360(param_2,uVar3,0);
    pcVar8 = "weapons/item_get.wav";
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,pcVar8,0x3f800000,0x3f4ccccd,0,100);
LAB_100e343f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

