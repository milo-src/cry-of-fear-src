// rea decompile_all
// name: FUN_10018d60
// address: 0x10018d60
// body: available
// range: 0x10018d60-0x1001cc50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10018d60(float param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  CBasePlayer *this;
  int iVar13;
  undefined4 uVar14;
  undefined *puVar15;
  int iVar16;
  float fVar17;
  float *pfVar18;
  char *pcVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  bool bVar23;
  char cVar24;
  float10 fVar25;
  float fVar26;
  char *pcVar27;
  size_t sVar28;
  undefined1 local_128 [20];
  undefined1 local_114 [36];
  undefined1 local_f0 [20];
  undefined1 local_dc [28];
  int local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  char local_88 [127];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_90 = param_1;
  pbVar3 = (byte *)(*DAT_10223094)(0);
  if ((DAT_10222ee4 != (int *)0x0) && ((char)DAT_10222ee4[0x2a] != '\0')) {
    pcVar19 = "readylobby";
    pbVar4 = pbVar3;
    do {
      bVar2 = *pbVar4;
      bVar23 = bVar2 < (byte)*pcVar19;
      if (bVar2 != *pcVar19) {
LAB_10018dc5:
        uVar5 = -(uint)bVar23 | 1;
        goto LAB_10018dca;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar23 = bVar2 < (byte)pcVar19[1];
      if (bVar2 != pcVar19[1]) goto LAB_10018dc5;
      pbVar4 = pbVar4 + 2;
      pcVar19 = pcVar19 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_10018dca:
    if ((uVar5 != 0) && (iVar6 = FUN_1000aba0(pbVar3,"nerdip"), iVar6 == 0))
    goto switchD_1001c843_default;
  }
  pcVar19 = "c_server_settings";
  pbVar4 = (byte *)((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
  do {
    bVar2 = *pbVar4;
    bVar23 = bVar2 < (byte)*pcVar19;
    if (bVar2 != *pcVar19) {
LAB_10018e18:
      uVar5 = -(uint)bVar23 | 1;
      goto LAB_10018e1d;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    bVar23 = bVar2 < (byte)pcVar19[1];
    if (bVar2 != pcVar19[1]) goto LAB_10018e18;
    pbVar4 = pbVar4 + 2;
    pcVar19 = pcVar19 + 2;
  } while (bVar2 != 0);
  uVar5 = 0;
LAB_10018e1d:
  if ((((uVar5 != 0) || (iVar6 = FUN_1013f5f0(pbVar3,"closegame"), iVar6 != 0)) ||
      (iVar6 = FUN_1013f5f0(pbVar3,"buildcoopsettings"), iVar6 != 0)) ||
     (iVar6 = FUN_1013f5f0(pbVar3,"freeze"), iVar6 != 0)) {
    pcVar19 = "c_difficulty_settings";
    pbVar4 = (byte *)((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
    do {
      bVar2 = *pbVar4;
      bVar23 = bVar2 < (byte)*pcVar19;
      if (bVar2 != *pcVar19) {
LAB_10018e90:
        uVar5 = -(uint)bVar23 | 1;
        goto LAB_10018e95;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar23 = bVar2 < (byte)pcVar19[1];
      if (bVar2 != pcVar19[1]) goto LAB_10018e90;
      pbVar4 = pbVar4 + 2;
      pcVar19 = pcVar19 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_10018e95:
    if (((uVar5 == 0) && (iVar6 = FUN_1013f5f0(pbVar3,"closegame"), iVar6 == 0)) &&
       ((iVar6 = FUN_1013f5f0(pbVar3,"campaign"), iVar6 == 0 &&
        ((iVar6 = FUN_1013f5f0(pbVar3,"skillset"), iVar6 == 0 &&
         (iVar6 = FUN_1013f5f0(pbVar3,"freeze"), iVar6 == 0)))))) goto switchD_1001c843_default;
    pcVar19 = "c_video_stress_test";
    pbVar4 = (byte *)((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
    do {
      bVar2 = *pbVar4;
      bVar23 = bVar2 < (byte)*pcVar19;
      if (bVar2 != *pcVar19) {
LAB_10018f20:
        uVar5 = -(uint)bVar23 | 1;
        goto LAB_10018f25;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar23 = bVar2 < (byte)pcVar19[1];
      if (bVar2 != pcVar19[1]) goto LAB_10018f20;
      pbVar4 = pbVar4 + 2;
      pcVar19 = pcVar19 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_10018f25:
    if ((((uVar5 == 0) && (iVar6 = FUN_1013f5f0(pbVar3,"stresscontinue"), iVar6 == 0)) &&
        (iVar6 = FUN_1013f5f0(pbVar3,"yesnoactivate"), iVar6 == 0)) &&
       (iVar6 = FUN_1013f5f0(pbVar3,"freeze"), iVar6 == 0)) goto switchD_1001c843_default;
    pcVar19 = "c_loadgame";
    pbVar4 = (byte *)((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
    do {
      bVar2 = *pbVar4;
      bVar23 = bVar2 < (byte)*pcVar19;
      if (bVar2 != *pcVar19) {
LAB_10018f97:
        uVar5 = -(uint)bVar23 | 1;
        goto LAB_10018f9c;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar23 = bVar2 < (byte)pcVar19[1];
      if (bVar2 != pcVar19[1]) goto LAB_10018f97;
      pbVar4 = pbVar4 + 2;
      pcVar19 = pcVar19 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_10018f9c:
    if ((((uVar5 == 0) && (iVar6 = FUN_1013f5f0(pbVar3,"closegame"), iVar6 == 0)) &&
        (((iVar6 = FUN_1013f5f0(pbVar3,"loadgamemenu"), iVar6 == 0 &&
          ((iVar6 = FUN_1013f5f0(pbVar3,"cofload"), iVar6 == 0 &&
           (iVar6 = FUN_1013f5f0(pbVar3,"freeze"), iVar6 == 0)))) &&
         (iVar6 = FUN_1013f5f0(pbVar3,"closegame"), iVar6 == 0)))) ||
       (((((iVar6 = FUN_1013f5f0((int)DAT_10223188[0x26] + (int)DAT_10223188[3],"c_game_menu"),
           iVar6 != 0 && (iVar6 = FUN_1013f5f0(pbVar3,"closegame"), iVar6 == 0)) &&
          (iVar6 = FUN_1013f5f0(pbVar3,"freeze"), iVar6 == 0)) &&
         (((iVar6 = FUN_1013f5f0(pbVar3,"campaign"), iVar6 == 0 &&
           (iVar6 = FUN_1013f5f0(pbVar3,"gamemenucmd"), iVar6 == 0)) &&
          ((iVar6 = FUN_1013f5f0(pbVar3,"skillset"), iVar6 == 0 &&
           ((iVar6 = FUN_1013f5f0(pbVar3,"cofload"), iVar6 == 0 &&
            (iVar6 = FUN_1013f5f0(pbVar3,"subtitleset"), iVar6 == 0)))))))) ||
        (*(int *)((int)param_1 + 0x7c) == 0)))) goto switchD_1001c843_default;
    iVar6 = (int)param_1 + 0x80;
    iVar7 = FUN_100125e0(iVar6);
    if ((*(char *)(iVar7 + 0x1ee8) != '\0') ||
       (((((iVar7 = FUN_100125e0(iVar6), *(int *)(iVar7 + 0x1ea0) == 1 &&
           (iVar7 = FUN_1013f5f0(pbVar3,"freeze"), iVar7 == 0)) &&
          (iVar7 = FUN_1013f5f0(pbVar3,"stopcomputer"), iVar7 == 0)) &&
         ((iVar7 = FUN_1013f5f0(pbVar3,"unfreeze"), iVar7 == 0 &&
          (iVar7 = FUN_1013f5f0(pbVar3,"computercheck"), iVar7 == 0)))) ||
        (((iVar7 = FUN_100125e0(iVar6), *(int *)(iVar7 + 0x1ea0) == 2 &&
          ((iVar7 = FUN_1013f5f0(pbVar3,"freeze"), iVar7 == 0 &&
           (iVar7 = FUN_1013f5f0(pbVar3,"unfreeze"), iVar7 == 0)))) &&
         (iVar7 = FUN_1013f5f0(pbVar3,"phonenumber"), iVar7 == 0))))))
    goto switchD_1001c843_default;
    pcVar19 = "VModEnable";
    pbVar4 = pbVar3;
    do {
      bVar2 = *pbVar4;
      bVar23 = bVar2 < (byte)*pcVar19;
      if (bVar2 != *pcVar19) {
LAB_100191a0:
        uVar5 = -(uint)bVar23 | 1;
        goto LAB_100191a5;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar23 = bVar2 < (byte)pcVar19[1];
      if (bVar2 != pcVar19[1]) goto LAB_100191a0;
      pbVar4 = pbVar4 + 2;
      pcVar19 = pcVar19 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_100191a5:
    if (uVar5 == 0) goto switchD_1001c843_default;
    iVar7 = FUN_1000aba0(pbVar3,"hud_color");
    if (iVar7 != 0) {
      iVar6 = (*DAT_10223098)();
      if (iVar6 != 4) {
        (*DAT_1022303c)(1,"Syntax: hud_color RRR GGG BBB\n");
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      pcVar19 = (char *)(*DAT_10223094)(1);
      uVar5 = _atoi(pcVar19);
      pcVar19 = (char *)(*DAT_10223094)(2);
      uVar8 = _atoi(pcVar19);
      pcVar19 = (char *)(*DAT_10223094)(3);
      uVar9 = _atoi(pcVar19);
      (*DAT_10223000)(1,DAT_102264bc,0,*(undefined4 *)((int)local_90 + 0x28c));
      (*DAT_10223014)((uVar5 & 0xff) * 0x10000 + (uVar8 & 0xff) * 0x100 + (uVar9 & 0xff));
      (*DAT_10223004)();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar7 = FUN_1000aba0(pbVar3,&DAT_101a866c);
    if (iVar7 != 0) goto switchD_1001c843_default;
    iVar7 = FUN_1000aba0(pbVar3,"stopcomputer");
    if (iVar7 != 0) {
      iVar6 = FUN_100125e0(iVar6);
      if ((iVar6 != 0) && (*(int *)(iVar6 + 0x1ea0) == 1)) {
        *(undefined4 *)(iVar6 + 0x1ea0) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto switchD_1001c843_default;
    }
    iVar7 = FUN_1000aba0(pbVar3,"aitest");
    if (iVar7 != 0) {
      iVar6 = (*DAT_10223068)(1);
      if ((iVar6 != 0) && (iVar7 = 1, 1 < (int)DAT_10223188[0x25])) {
        piVar12 = (int *)(iVar6 + 0x7c);
        do {
          if ((((piVar12[-0x1f] == 0) && ((*(byte *)(piVar12 + 0x6b) & 0x20) != 0)) &&
              ((int *)*piVar12 != (int *)0x0)) &&
             (piVar10 = (int *)(**(code **)(*(int *)*piVar12 + 0x78))(), piVar10 != (int *)0x0)) {
            (**(code **)(*piVar10 + 0x16c))();
            FUN_100c1a70();
            uVar11 = (**(code **)(*piVar10 + 0x18c))(6);
            FUN_1000aa50(uVar11);
          }
          iVar7 = iVar7 + 1;
          piVar12 = piVar12 + 0xcb;
        } while (iVar7 < (int)DAT_10223188[0x25]);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto switchD_1001c843_default;
    }
    iVar7 = FUN_1000aba0(pbVar3,&DAT_101a8498);
    if (iVar7 != 0) {
      FUN_1001e130(param_1,0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar7 = FUN_1000aba0(pbVar3,"say_team");
    if (iVar7 != 0) {
      FUN_1001e130(param_1,1);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar7 = FUN_1000aba0(pbVar3,"fullupdate");
    if (iVar7 != 0) {
      FUN_100125e0(iVar6);
      FUN_100dfb80();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar7 = FUN_1000aba0(pbVar3,"keypadnumber");
    if (iVar7 != 0) {
      pcVar19 = (char *)(*DAT_10223094)(1);
      iVar7 = _atoi(pcVar19);
      FUN_100125e0(iVar6,iVar7);
      FUN_100e5890(iVar7);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar7 = FUN_1000aba0(pbVar3,"puzzlebara");
    if (iVar7 == 0) {
      iVar7 = FUN_1000aba0(pbVar3,"puzzlebarb");
      if (iVar7 == 0) {
        iVar7 = FUN_1000aba0(pbVar3,"puzzlebarc");
        if (iVar7 == 0) {
          iVar7 = FUN_1000aba0(pbVar3,"freeze");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x400) {
              uVar11 = 0;
              FUN_100125e0(iVar6,0);
              FUN_100deff0(uVar11);
            }
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x200) {
              uVar11 = 0;
              FUN_100125e0(iVar6,0);
              FUN_100deff0(uVar11);
              iVar7 = FUN_100125e0(iVar6);
              *(undefined4 *)(iVar7 + 0x1ea0) = 1;
            }
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x300) {
              uVar11 = 0;
              FUN_100125e0(iVar6,0);
              FUN_100deff0(uVar11);
              iVar6 = FUN_100125e0(iVar6);
              *(undefined4 *)(iVar6 + 0x1ea0) = 2;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"unfreeze");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x400) {
              uVar11 = 1;
              FUN_100125e0(iVar6,1);
              FUN_100deff0(uVar11);
            }
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x200) {
              uVar11 = 1;
              FUN_100125e0(iVar6,1);
              FUN_100deff0(uVar11);
              iVar7 = FUN_100125e0(iVar6);
              *(undefined4 *)(iVar7 + 0x1ea0) = 0;
            }
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x29a) {
              uVar11 = 1;
              FUN_100125e0(iVar6,1);
              FUN_100deff0(uVar11);
              local_ac = 0.0;
              local_a8 = 0.0;
              local_a4 = 0.0;
              uVar11 = FUN_100125e0(iVar6,&local_ac,0x3f800000,0,0xff,0);
              FUN_10119c00(uVar11);
            }
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x300) {
              uVar11 = 1;
              FUN_100125e0(iVar6,1);
              FUN_100deff0(uVar11);
              iVar6 = FUN_100125e0(iVar6);
              *(undefined4 *)(iVar6 + 0x1ea0) = 0;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"closegame");
          if (iVar7 != 0) {
            if ((DAT_10222ee4 != (int *)0x0) &&
               (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 == 0)) {
              (*DAT_102230cc)("_oem_end_training");
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"unfreezesave");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            if (iVar7 == 0x400) {
              pcVar19 = (char *)(*DAT_10223094)(2);
              iVar7 = _atoi(pcVar19);
              this = (CBasePlayer *)FUN_100125e0(iVar6);
              CBasePlayer::PreSave(this,iVar7);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"phonenumber");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            FUN_100125e0(iVar6,iVar7);
            FUN_100e9ff0(iVar7);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar7 = FUN_1000aba0(pbVar3,"dodgeforward");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              FUN_100dde70(1);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"dodgebackward");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              FUN_100dde70(2);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"dodgeleft");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              FUN_100dde70(3);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"dodgeright");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              FUN_100dde70(4);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"hinttoggle");
          if (iVar7 != 0) {
            fVar25 = (float10)(*DAT_1022302c)("sv_disablehints");
            local_90 = (float)fVar25;
            if (local_90 != 0.0) {
              (*DAT_10223034)("sv_disablehints",0);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            (*DAT_10223034)("sv_disablehints",0x3f800000);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar7 = FUN_1000aba0(pbVar3,"quicksel");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (((iVar6 != 0) &&
                (*(float *)(iVar6 + 0x1ee4) <= *DAT_10223188 &&
                 *DAT_10223188 != *(float *)(iVar6 + 0x1ee4))) &&
               ((iVar7 = FUN_100e4ed0(), iVar7 == 0 && (*(char *)(iVar6 + 0x1ee8) == '\0')))) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar6 = _atoi(pcVar19);
              FUN_100f07f0(iVar6);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"quickselset1");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              *(int *)(iVar6 + 0x3dc) = iVar7;
              sVar28 = 7;
              pcVar27 = "weapon_";
              pcVar19 = (char *)FUN_100dff70("classname",
                                             (int)DAT_10223188[0x26] +
                                             *(int *)(iVar6 + 0x21fc + iVar7 * 4));
              iVar13 = _strncmp(pcVar19,pcVar27,sVar28);
              if (iVar13 == 0) {
                pcVar27 = (char *)FUN_100dff70("classname",
                                               (int)DAT_10223188[0x26] +
                                               *(int *)(iVar6 + 0x21fc + iVar7 * 4));
                pcVar19 = pcVar27;
                do {
                  cVar24 = *pcVar19;
                  pcVar19[(iVar6 - (int)pcVar27) + 0x204c] = cVar24;
                  pcVar19 = pcVar19 + 1;
                } while (cVar24 != '\0');
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
LAB_10019ad4:
              FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c),0,
                           "inventory/inventory_no.wav",0x3f800000,0x3f4ccccd,0,100);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"quickselset2");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              *(int *)(iVar6 + 0x3e0) = iVar7;
              sVar28 = 7;
              pcVar27 = "weapon_";
              pcVar19 = (char *)FUN_100dff70("classname",
                                             (int)DAT_10223188[0x26] +
                                             *(int *)(iVar6 + 0x21fc + iVar7 * 4));
              iVar13 = _strncmp(pcVar19,pcVar27,sVar28);
              if (iVar13 == 0) {
                pcVar27 = (char *)FUN_100dff70("classname",
                                               (int)DAT_10223188[0x26] +
                                               *(int *)(iVar6 + 0x21fc + iVar7 * 4));
                pcVar19 = pcVar27;
                do {
                  cVar24 = *pcVar19;
                  pcVar19[(iVar6 - (int)pcVar27) + 0x20cc] = cVar24;
                  pcVar19 = pcVar19 + 1;
                } while (cVar24 != '\0');
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto LAB_10019ad4;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"quickselset3");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              *(int *)(iVar6 + 0x3e4) = iVar7;
              sVar28 = 7;
              pcVar27 = "weapon_";
              pcVar19 = (char *)FUN_100dff70("classname",
                                             (int)DAT_10223188[0x26] +
                                             *(int *)(iVar6 + 0x21fc + iVar7 * 4));
              iVar13 = _strncmp(pcVar19,pcVar27,sVar28);
              if (iVar13 == 0) {
                pcVar19 = (char *)FUN_100dff70("classname",
                                               (int)DAT_10223188[0x26] +
                                               *(int *)(iVar6 + 0x21fc + iVar7 * 4));
                iVar6 = iVar6 - (int)pcVar19;
                do {
                  cVar24 = *pcVar19;
                  pcVar19 = pcVar19 + 1;
                  pcVar19[iVar6 + 0x214b] = cVar24;
                } while (cVar24 != '\0');
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto LAB_10019ad4;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"campaign");
          if (iVar7 != 0) {
            uVar11 = (*DAT_10223094)(1);
            iVar6 = (*DAT_10223054)(uVar11);
            DAT_10226470 = (int)DAT_10223188[0x26] + iVar6;
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar7 = FUN_1000aba0(pbVar3,"laugh");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (iVar13 = FUN_100e4c30(), iVar13 != 0)) {
              if (iVar7 == 1) {
                pcVar19 = "ambience/laugh1.wav";
              }
              else if (iVar7 == 2) {
                pcVar19 = "ambience/laugh2.wav";
              }
              else {
                if (iVar7 != 3) goto switchD_1001c843_default;
                pcVar19 = "ambience/laugh3.wav";
              }
              FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c),0,pcVar19,0x3f800000,0,0,100
                          );
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"skillset");
          if (iVar7 != 0) {
            if ((DAT_10222ee4 != (int *)0x0) &&
               (iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar7 == 0)) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              if (iVar7 != 4) {
                iVar13 = FUN_100125e0(iVar6);
                *(undefined1 *)(iVar13 + 0x1ee0) = 0;
                pcVar19 = (char *)(*DAT_10223094)(1);
                iVar13 = _atoi(pcVar19);
                (*DAT_10223034)("difficulty",(float)iVar13);
              }
              else {
                iVar13 = FUN_100125e0(iVar6);
                *(undefined1 *)(iVar13 + 0x1ee0) = 1;
                (*DAT_10223034)("difficulty",0x40800000);
              }
              _DAT_10222f08 = (uint)(iVar7 == 4);
              piVar12 = (int *)FUN_100125e0(iVar6);
              FUN_100fc9f0(*(undefined4 *)(piVar12[1] + 0x20c),0,"inventory/game_start.wav",
                           0x3f800000,0x3f4ccccd,0,100);
              local_ac = 255.0;
              local_a8 = 255.0;
              local_a4 = 255.0;
              FUN_10119c00(piVar12,&local_ac,0x40a00000,0x40a00000,0xff,5);
              (**(code **)(*piVar12 + 8))(0x40a00000);
              piVar12[0x1e] = (int)CBasePlayer::GameStart;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"computercheck");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (iVar7 = FUN_10118460(0,"cof_computer"), iVar7 != 0)) {
              uVar11 = (*DAT_10223094)(2);
              uVar14 = (*DAT_10223094)(1,uVar11);
              FUN_100185c0(*(undefined4 *)(iVar7 + 4),iVar6,uVar14);
              FUN_100934a0(iVar6,uVar14,uVar11);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"dodgetoggle");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            cVar24 = *(char *)(iVar6 + 0x1ee9);
            if (iVar6 != 0) {
              cVar24 = cVar24 == '\0';
              *(char *)(iVar6 + 0x1ee9) = cVar24;
            }
            pcVar19 = "Dodge enabled";
            if (cVar24 == '\0') {
              pcVar19 = "Dodge disabled";
            }
            FUN_10119810(iVar6,pcVar19,1,0);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar7 = FUN_1000aba0(pbVar3,"inventoryequip");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            FUN_100125e0(iVar6,iVar7);
            FUN_100e40e0(iVar7);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar7 = FUN_1000aba0(pbVar3,"recalldocument");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            FUN_100125e0(iVar6,iVar7);
            FUN_100f0aa0(iVar7);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          iVar7 = FUN_1000aba0(pbVar3,"closedocument");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
              iVar6 = FUN_100177a0();
              uVar11 = FUN_10018560(*(undefined4 *)(iVar6 + 4));
              FUN_100da6d0(uVar11);
              FUN_10017740(0);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"attack1pressed");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 | 1;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"attack1released");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 & 0xfffffffe;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"attack2pressed");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 | 0x800;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"attack2released");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 & 0xfffff7ff;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"forwardpressed");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 | 8;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"forwardreleased");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 & 0xfffffff7;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"backpressed");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 | 0x10;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"backreleased");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x5ac) != 0)) {
              puVar1 = (uint *)(*(int *)(*(int *)(iVar6 + 0x5ac) + 4) + 0x184);
              *puVar1 = *puVar1 & 0xffffffef;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"tapgetup");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (*(float *)(*(int *)(iVar6 + 4) + 0x260) != 0.0)) {
              *(float *)(iVar6 + 0x1ecc) = *DAT_10223188;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"muschi");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if (((iVar6 != 0) && (iVar7 = FUN_100e4c30(), iVar7 != 0)) &&
               (*(float *)(iVar6 + 0x4f4) <= *DAT_10223188 &&
                *DAT_10223188 != *(float *)(iVar6 + 0x4f4))) {
              FUN_100ea240(&DAT_101a893c,0);
              FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c),0,
                           "ambience/really_muschi.wav",0x3f800000,0,0,100);
              iVar6 = SteamUserStats();
              if (iVar6 != 0) {
                local_8c = 0.0;
                piVar12 = (int *)SteamUserStats();
                (**(code **)(*piVar12 + 8))("stat_muschi",&local_8c);
                local_8c = (float)((int)local_8c + 1);
                piVar12 = (int *)SteamUserStats();
                (**(code **)(*piVar12 + 0x10))("stat_muschi",local_8c);
                piVar12 = (int *)SteamUserStats();
                (**(code **)(*piVar12 + 0x28))();
                (*DAT_1022303c)(1,"You have muschied %i times\n",local_8c);
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"muschi2");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            if ((iVar6 != 0) && (iVar7 = FUN_100e4c30(), iVar7 != 0)) {
              *(bool *)(iVar6 + 0x398) = *(char *)(iVar6 + 0x398) == '\0';
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"knockout");
          if (iVar7 != 0) {
            piVar12 = (int *)FUN_100125e0(iVar6);
            if (((piVar12 != (int *)0x0) && (iVar6 = FUN_100e4c30(), iVar6 != 0)) &&
               ((float)piVar12[0x13d] <= *DAT_10223188 && *DAT_10223188 != (float)piVar12[0x13d])) {
              FUN_10119320(piVar12[1] + 0x74);
              (**(code **)(*piVar12 + 0x228))(&local_ac);
              local_a0 = DAT_10223188[10] * 72.0 + local_ac;
              local_9c = DAT_10223188[0xb] * 72.0 + local_a8;
              local_98 = DAT_10223188[0xc] * 72.0 + local_a4;
              FUN_1011a800(&local_ac,&local_a0,0,*(undefined4 *)(piVar12[1] + 0x20c),local_f0);
              if ((((local_c0 != 0) && (piVar10 = *(int **)(local_c0 + 0x7c), piVar10 != (int *)0x0)
                   ) && (iVar6 = (**(code **)(*piVar10 + 0xd0))(), iVar6 != 0)) &&
                 (iVar6 = FUN_100125e0(piVar10[1]), iVar6 != 0)) {
                FUN_100ea240("knockout",0);
                iVar7 = (*DAT_102230b0)(0xfffffffb,5);
                FUN_100fc9f0(*(undefined4 *)(piVar12[1] + 0x20c),0,"weapons/mobile/punch_smack.wav",
                             0x3f800000,0x3f4ccccd,0,iVar7 + 100);
                FUN_10119320((int)param_1 + 0xd0);
                *(undefined4 *)(*(int *)(iVar6 + 4) + 0x68) = 0x40a00000;
                *(float *)(*(int *)(iVar6 + 4) + 0x10) =
                     *(float *)(*(int *)(iVar6 + 4) + 0x10) + 2.0;
                iVar7 = *(int *)(iVar6 + 4);
                local_b0 = DAT_10223188[0xc] * 250.0 + *(float *)(iVar7 + 0x28) +
                           DAT_10223188[0xf] * 200.0;
                *(ulonglong *)(iVar7 + 0x20) =
                     CONCAT44(DAT_10223188[0xb] * 250.0 + *(float *)(iVar7 + 0x24) +
                              DAT_10223188[0xe] * 200.0,
                              DAT_10223188[10] * 250.0 + *(float *)(iVar7 + 0x20) +
                              DAT_10223188[0xd] * 200.0);
                *(float *)(iVar7 + 0x28) = local_b0;
                *(undefined1 *)(iVar6 + 0x50c) = 1;
                FUN_100f91b0(0xc1200000,0x41a00000,0x41a00000);
                *(float *)(iVar6 + 0x4f4) = *DAT_10223188;
                *(undefined1 *)(iVar6 + 0x500) = 0;
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"closeclothes");
          if (iVar7 != 0) {
            iVar6 = FUN_100125e0(iVar6);
            piVar12 = (int *)FUN_10118460(0,"cof_clothesmenu");
            if ((piVar12 != (int *)0x0) && (iVar6 != 0)) {
              (**(code **)(*piVar12 + 0xe8))(iVar6,iVar6,0,0x3f800000);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"setclothes");
          if (iVar7 != 0) {
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            iVar6 = FUN_100125e0(iVar6);
            if (iVar6 != 0) {
              *(int *)(iVar6 + 0x424) = iVar7;
            }
            iVar6 = (*DAT_10223094)(2);
            if (iVar6 != 0) {
              uVar11 = (*DAT_10223094)(2);
              (*DAT_10223038)("sv_custom_hoodie",uVar11);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            goto switchD_1001c843_default;
          }
          iVar7 = FUN_1000aba0(pbVar3,"adlib");
          if (iVar7 == 0) {
            iVar7 = FUN_1000aba0(pbVar3,"inventoryuse");
            if (iVar7 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              FUN_100125e0(iVar6,iVar7);
              FUN_100e4410(iVar7);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            iVar7 = FUN_1000aba0(pbVar3,"querydonators");
            if (iVar7 != 0) {
              iVar6 = FUN_100125e0(iVar6);
              if ((iVar6 != 0) && (iVar6 = FUN_100e4c30(), iVar6 != 0)) {
                (*DAT_1022303c)(1,"Querying donator statuses: \n");
                iVar6 = 1;
                if (0 < (int)DAT_10223188[0x24]) {
                  do {
                    iVar7 = FUN_10119680(iVar6);
                    if (iVar7 != 0) {
                      (*DAT_1022303c)(1,"Donator status: %s | %i \n",
                                      *(int *)(*(int *)(iVar7 + 4) + 0x1d4) +
                                      (int)DAT_10223188[0x26],*(undefined4 *)(iVar7 + 0xc4));
                    }
                    iVar6 = iVar6 + 1;
                  } while (iVar6 <= (int)DAT_10223188[0x24]);
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return;
                }
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"simonmode");
            if (iVar7 != 0) {
              if (DAT_10222f20 == 0) {
                if (DAT_10222ee4 != (int *)0x0) {
                  DAT_102231a2 = 1;
                  _DAT_102231a4 = *DAT_10223188;
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return;
                }
              }
              else {
                piVar12 = (int *)FUN_10118460(0,"monster_booksimon");
                if (piVar12 != (int *)0x0) {
                  (**(code **)(*piVar12 + 100))(0,0,*(undefined4 *)(piVar12[1] + 0x164),1);
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return;
                }
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"wheelchairendvec");
            if (iVar7 != 0) {
              local_8c = (float)FUN_100125e0(iVar6);
              if ((((local_8c != 0.0) && (iVar6 = *(int *)((int)local_8c + 0x252c), iVar6 != 0)) &&
                  (*(int *)(iVar6 + 0x168) == 0x14)) &&
                 (iVar6 = FUN_10018440(*(undefined4 *)(iVar6 + 4)), iVar6 != 0)) {
                pcVar19 = (char *)(*DAT_10223094)(1);
                iVar6 = _atoi(pcVar19);
                pcVar19 = (char *)(*DAT_10223094)(2);
                iVar7 = _atoi(pcVar19);
                pcVar19 = (char *)(*DAT_10223094)(3);
                iVar13 = _atoi(pcVar19);
                iVar16 = FUN_10018500(*(undefined4 *)(*(int *)((int)local_8c + 0x252c) + 4));
                fVar17 = local_8c;
                *(float *)(iVar16 + 0x20c) = (float)iVar6;
                iVar6 = FUN_10018500(*(undefined4 *)(*(int *)((int)local_8c + 0x252c) + 4));
                *(float *)(iVar6 + 0x210) = (float)iVar7;
                iVar6 = FUN_10018500(*(undefined4 *)(*(int *)((int)fVar17 + 0x252c) + 4));
                *(float *)(iVar6 + 0x214) = (float)iVar13;
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"wheelchairfire1");
            if (iVar7 != 0) {
              fVar17 = (float)FUN_100125e0(iVar6);
              local_8c = fVar17;
              if ((((fVar17 != 0.0) && (iVar6 = *(int *)((int)fVar17 + 0x252c), iVar6 != 0)) &&
                  (*(int *)(iVar6 + 0x168) == 0x14)) &&
                 ((piVar12 = (int *)FUN_10018440(*(undefined4 *)(iVar6 + 4)), piVar12 != (int *)0x0
                  && (iVar6 = FUN_100e4ed0(), iVar6 == 0)))) {
                uVar11 = (**(code **)(*piVar12 + 0x1d0))();
                iVar6 = FUN_1011bfc0(piVar12[0x73],*DAT_10223188,uVar11);
                if (iVar6 != 0) {
                  if (((piVar12[0x79] == 0) && ((&DAT_10231890)[piVar12[0x5a] * 0xb] != 0)) ||
                     ((*(int *)(&DAT_102318a4 + piVar12[0x5a] * 0x2c) == -1 &&
                      (iVar6 = (**(code **)(*piVar12 + 0x168))(),
                      *(int *)((int)fVar17 + 0x2540 + iVar6 * 4) == 0)))) {
                    piVar12[0x6e] = 1;
                  }
                  pcVar19 = (char *)(*DAT_10223094)(1);
                  iVar6 = _atoi(pcVar19);
                  pcVar19 = (char *)(*DAT_10223094)(2);
                  iVar7 = _atoi(pcVar19);
                  pcVar19 = (char *)(*DAT_10223094)(3);
                  iVar13 = _atoi(pcVar19);
                  iVar16 = FUN_10018500(*(undefined4 *)(*(int *)((int)local_8c + 0x252c) + 4));
                  fVar17 = local_8c;
                  *(float *)(iVar16 + 0x200) = (float)iVar6;
                  iVar6 = FUN_10018500(*(undefined4 *)(*(int *)((int)local_8c + 0x252c) + 4));
                  *(float *)(iVar6 + 0x204) = (float)iVar7;
                  iVar6 = FUN_10018500(*(undefined4 *)(*(int *)((int)fVar17 + 0x252c) + 4));
                  *(float *)(iVar6 + 0x208) = (float)iVar13;
                  FUN_100f5eb0();
                  piVar12 = (int *)FUN_10018500(*(undefined4 *)(*(int *)((int)fVar17 + 0x252c) + 4))
                  ;
                  (**(code **)(*piVar12 + 0x1a4))();
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return;
                }
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"wheelchairreload");
            if (iVar7 != 0) {
              iVar6 = FUN_100125e0(iVar6);
              if (((iVar6 != 0) && (iVar7 = *(int *)(iVar6 + 0x252c), iVar7 != 0)) &&
                 ((*(int *)(iVar7 + 0x168) == 0x14 &&
                  (iVar7 = FUN_10018440(*(undefined4 *)(iVar7 + 4)), iVar7 != 0)))) {
                piVar12 = (int *)FUN_10018500(*(undefined4 *)(*(int *)(iVar6 + 0x252c) + 4));
                (**(code **)(*piVar12 + 0x1c0))();
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"zoominmdl");
            if (iVar7 != 0) {
              iVar6 = FUN_100125e0(iVar6);
              if (iVar6 != 0) {
                pcVar19 = (char *)(*DAT_10223094)(1);
                iVar7 = _atoi(pcVar19);
                (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
                (*DAT_1022301c)(0x42480000);
                (*DAT_10223008)(0);
                (*DAT_10223008)(0);
                (*DAT_10223004)();
                *(float *)(*(int *)(iVar6 + 4) + 0x274) = (float)iVar7;
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"throwflare");
            if (iVar7 != 0) {
              piVar12 = (int *)FUN_100125e0(iVar6);
              if (piVar12 != (int *)0x0) {
                iVar6 = piVar12[0x94b];
                if (((iVar6 != 0) && (*(int *)(iVar6 + 0x168) == 0xd)) &&
                   (iVar6 = FUN_100186e0(*(undefined4 *)(iVar6 + 4)), iVar6 != 0)) {
                  iVar7 = piVar12[1];
                  local_9c = *(float *)(iVar7 + 0x6c) + *(float *)(iVar7 + 0x78);
                  local_98 = *(float *)(iVar7 + 0x70) + *(float *)(iVar7 + 0x7c);
                  local_a0 = *(float *)(iVar7 + 0x68) + *(float *)(iVar7 + 0x74);
                  FUN_10119320(&local_a0);
                  local_94 = DAT_10223188[10];
                  local_90 = DAT_10223188[0xb];
                  local_8c = DAT_10223188[0xc];
                  pfVar18 = (float *)(**(code **)(*piVar12 + 0x100))(&local_b8);
                  local_a8 = local_90 * 10.0 + pfVar18[1];
                  local_a4 = local_8c * 10.0 + pfVar18[2];
                  local_ac = local_94 * 10.0 + *pfVar18;
                  uVar11 = (**(code **)(*piVar12 + 0x100))
                                     (&local_b8,&local_ac,0,*(undefined4 *)(piVar12[1] + 0x20c),
                                      local_128);
                  FUN_1011a800(uVar11);
                  piVar10 = (int *)FUN_10017950("weapon_flare",local_114,piVar12[1] + 0x74,
                                                *(undefined4 *)(piVar12[1] + 0x20c));
                  if (piVar10 != (int *)0x0) {
                    FUN_10119320(piVar12[1] + 0x74);
                    FUN_10119fe0(piVar10,local_114);
                    iVar7 = *(int *)(*(int *)(iVar6 + 4) + 0x248);
                    if (0 < iVar7) {
                      *(int *)(piVar10[1] + 0x248) = iVar7;
                      *(uint *)(piVar10[1] + 0x114) = (uint)(*(int *)(piVar10[1] + 0x248) == 1);
                      *(float *)(piVar10[1] + 0x1b8) = *DAT_10223188;
                      *(undefined4 *)(piVar10[1] + 0x19c) = 0;
                      (**(code **)(*piVar10 + 0x2c))();
                      *(undefined4 *)(piVar10[1] + 0x208) =
                           *(undefined4 *)(*(int *)(iVar6 + 4) + 0x208);
                    }
                    if (*(char *)((int)piVar12 + 0x21ea) == '\0') {
                      piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] =
                           piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] + -1;
                    }
                    if (piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] < 0) {
                      piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] = 0;
                    }
                    (*DAT_10223000)(1,DAT_102265b8,0,*(undefined4 *)(piVar12[1] + 0x20c));
                    (*DAT_10223008)(*(undefined4 *)(iVar6 + 0x168));
                    (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + *(int *)(iVar6 + 0x168) * 0x2c))
                    ;
                    (*DAT_10223010)(piVar12[*(int *)(iVar6 + 0x1dc) + 0x950]);
                    (*DAT_10223004)();
                    *(int *)(iVar6 + 0x120) = piVar12[*(int *)(iVar6 + 0x1dc) + 0x950];
                    piVar12[0x174] = piVar12[0x174] & 0xffffffef;
                    FUN_1001e990(*(undefined4 *)(piVar12[1] + 0x20c),1,
                                 "weapons/flare/flare_burn.wav");
                    if (*(int *)(*(int *)(iVar6 + 4) + 0x248) == 1) {
                      iVar6 = (*DAT_102230b0)(0,1);
                      if (iVar6 == 0) {
                        pcVar19 = "weapons/flare/flare_movement2.wav";
                      }
                      else {
                        pcVar19 = "weapons/flare/flare_movement1.wav";
                      }
                      FUN_100fc9f0(*(undefined4 *)(piVar12[1] + 0x20c),0,pcVar19,0x3f800000,
                                   0x3f4ccccd,0,100);
                    }
                    iVar6 = piVar10[1];
                    iVar7 = piVar12[1];
                    local_98 = DAT_10223188[0xc] * 300.0 + *(float *)(iVar7 + 0x28) +
                               DAT_10223188[0xc] * 100.0;
                    *(ulonglong *)(iVar6 + 0x20) =
                         CONCAT44(DAT_10223188[0xb] * 300.0 + *(float *)(iVar7 + 0x24) +
                                  DAT_10223188[0xb] * 100.0,
                                  DAT_10223188[10] * 300.0 + *(float *)(iVar7 + 0x20) +
                                  DAT_10223188[10] * 100.0);
                    *(float *)(iVar6 + 0x28) = local_98;
                  }
                }
                if ((((piVar12[0x94b] != 0) && (*(int *)(piVar12[0x94b] + 0x168) == 0xf)) &&
                    (piVar12[0x79d] == 0xd)) && (iVar6 = FUN_100e0310(0xd), iVar6 != 0)) {
                  pcVar19 = (char *)(*DAT_10223094)(1);
                  _atoi(pcVar19);
                  pcVar19 = (char *)(*DAT_10223094)(2);
                  _atoi(pcVar19);
                  pcVar19 = (char *)(*DAT_10223094)(3);
                  _atoi(pcVar19);
                  iVar7 = piVar12[1];
                  local_9c = *(float *)(iVar7 + 0x6c) + *(float *)(iVar7 + 0x78);
                  local_98 = *(float *)(iVar7 + 0x70) + *(float *)(iVar7 + 0x7c);
                  local_a0 = *(float *)(iVar7 + 0x68) + *(float *)(iVar7 + 0x74);
                  FUN_10119320(&local_a0);
                  local_8c = DAT_10223188[10];
                  local_94 = DAT_10223188[0xb];
                  local_90 = DAT_10223188[0xc];
                  pfVar18 = (float *)(**(code **)(*piVar12 + 0x100))(&local_a0);
                  local_b4 = local_94 * 10.0 + pfVar18[1];
                  local_b0 = local_90 * 10.0 + pfVar18[2];
                  local_b8 = local_8c * 10.0 + *pfVar18;
                  uVar11 = (**(code **)(*piVar12 + 0x100))
                                     (&local_a0,&local_b8,0,*(undefined4 *)(piVar12[1] + 0x20c),
                                      local_f0);
                  FUN_1011a800(uVar11);
                  piVar10 = (int *)FUN_10017950("weapon_flare",local_dc,piVar12[1] + 0x74,
                                                *(undefined4 *)(piVar12[1] + 0x20c));
                  if (piVar10 != (int *)0x0) {
                    FUN_10119320(piVar12[1] + 0x74);
                    FUN_10119fe0(piVar10,local_dc);
                    iVar7 = *(int *)(*(int *)(iVar6 + 4) + 0x248);
                    if (0 < iVar7) {
                      *(int *)(piVar10[1] + 0x248) = iVar7;
                      *(uint *)(piVar10[1] + 0x114) = (uint)(*(int *)(piVar10[1] + 0x248) == 1);
                      *(float *)(piVar10[1] + 0x1b8) = *DAT_10223188;
                      *(undefined4 *)(piVar10[1] + 0x19c) = 0;
                      (**(code **)(*piVar10 + 0x2c))();
                      *(undefined4 *)(piVar10[1] + 0x208) =
                           *(undefined4 *)(*(int *)(iVar6 + 4) + 0x208);
                    }
                    if (*(char *)((int)piVar12 + 0x21ea) == '\0') {
                      piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] =
                           piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] + -1;
                    }
                    if (piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] < 0) {
                      piVar12[*(int *)(iVar6 + 0x1dc) + 0x950] = 0;
                    }
                    (*DAT_10223000)(1,DAT_102265b8,0,*(undefined4 *)(piVar12[1] + 0x20c));
                    (*DAT_10223008)(*(undefined4 *)(iVar6 + 0x168));
                    (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + *(int *)(iVar6 + 0x168) * 0x2c))
                    ;
                    (*DAT_10223010)(piVar12[*(int *)(iVar6 + 0x1dc) + 0x950]);
                    (*DAT_10223004)();
                    *(int *)(iVar6 + 0x120) = piVar12[*(int *)(iVar6 + 0x1dc) + 0x950];
                    *(undefined1 *)(iVar6 + 0x1f9) = 1;
                    piVar12[0x174] = piVar12[0x174] & 0xffffffef;
                    FUN_1001e990(*(undefined4 *)(piVar12[1] + 0x20c),1,
                                 "weapons/flare/flare_burn.wav");
                    if (*(int *)(*(int *)(iVar6 + 4) + 0x248) == 1) {
                      iVar7 = (*DAT_102230b0)(0,1);
                      if (iVar7 == 0) {
                        pcVar19 = "weapons/flare/flare_movement2.wav";
                      }
                      else {
                        pcVar19 = "weapons/flare/flare_movement1.wav";
                      }
                      FUN_100fc9f0(*(undefined4 *)(piVar12[1] + 0x20c),0,pcVar19,0x3f800000,
                                   0x3f4ccccd,0,100);
                    }
                    if (*(int *)(*(int *)(iVar6 + 4) + 0x248) == 2) {
                      FUN_100fc9f0(*(undefined4 *)(piVar12[1] + 0x20c),0,
                                   "weapons/mobile/punch_swing.wav",0x3f800000,0x3f4ccccd,0,100);
                    }
                    iVar6 = piVar10[1];
                    iVar7 = piVar12[1];
                    local_98 = DAT_10223188[0xc] * 300.0 + *(float *)(iVar7 + 0x28) +
                               DAT_10223188[0xc] * 100.0;
                    *(ulonglong *)(iVar6 + 0x20) =
                         CONCAT44(DAT_10223188[0xb] * 300.0 + *(float *)(iVar7 + 0x24) +
                                  DAT_10223188[0xb] * 100.0,
                                  DAT_10223188[10] * 300.0 + *(float *)(iVar7 + 0x20) +
                                  DAT_10223188[10] * 100.0);
                    *(float *)(iVar6 + 0x28) = local_98;
                    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                    return;
                  }
                }
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"inventorydualwield");
            if (iVar7 != 0) {
              if (((DAT_10222ee4 != (int *)0x0) &&
                  (iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar7 == 0)) &&
                 (iVar6 = FUN_100125e0(iVar6), iVar6 != 0)) {
                pcVar19 = (char *)(*DAT_10223094)(2);
                iVar6 = _atoi(pcVar19);
                pcVar19 = (char *)(*DAT_10223094)(1,iVar6);
                iVar7 = _atoi(pcVar19);
                FUN_100de990(iVar7,iVar6);
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"inventorydrop");
            if (iVar7 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              FUN_100125e0(iVar6,iVar7);
              FUN_100e3460(iVar7);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            iVar7 = FUN_1000aba0(pbVar3,"inventorycombine");
            if (iVar7 != 0) {
              uVar11 = (*DAT_10223094)(3);
              pcVar19 = (char *)(*DAT_10223094)(2,uVar11);
              iVar7 = _atoi(pcVar19);
              pcVar19 = (char *)(*DAT_10223094)(1,iVar7);
              iVar13 = _atoi(pcVar19);
              FUN_100125e0(iVar6,iVar13);
              FUN_100e3020(iVar13,iVar7,uVar11);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            iVar7 = FUN_1000aba0(pbVar3,"inventorycheck");
            if (iVar7 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              FUN_100125e0(iVar6,iVar7);
              FUN_100e3010(iVar7);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            iVar7 = FUN_1000aba0(pbVar3,"inventorydeletenamed");
            if (iVar7 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(2);
              iVar7 = _atoi(pcVar19);
              if (iVar7 == 0) {
                iVar13 = (*DAT_10223094)(1);
                iVar13 = iVar13 - (int)DAT_10223188[0x26];
              }
              else {
                iVar13 = (*DAT_10223094)();
                iVar13 = iVar13 - (int)DAT_10223188[0x26];
              }
              FUN_100125e0(iVar6);
              FUN_100dda70(iVar13,iVar7 != 0);
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            iVar7 = FUN_1000aba0(pbVar3,"boilercheck");
            if (iVar7 != 0) {
              iVar6 = FUN_100125e0(iVar6);
              if ((iVar6 != 0) && (iVar7 = FUN_10017780(), iVar7 != 0)) {
                pcVar19 = (char *)(*DAT_10223094)(1);
                iVar7 = _atoi(pcVar19);
                if (iVar7 != 5) {
                  iVar13 = FUN_100177a0(iVar7,iVar6);
                  FUN_100187a0(*(undefined4 *)(iVar13 + 4));
                  FUN_10063460(iVar7,iVar6);
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return;
                }
                uVar11 = *(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c);
                FUN_10117180(uVar11,uVar11);
                FUN_10017740(0);
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"subtitleset");
            if (iVar7 != 0) {
              pcVar19 = (char *)(*DAT_10223094)(1);
              iVar7 = _atoi(pcVar19);
              (*DAT_10223034)("cof_subtitlelanguage",(float)iVar7);
              iVar6 = FUN_100125e0(iVar6);
              if (iVar6 != 0) {
                *(int *)(iVar6 + 0x684) = iVar7;
                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                return;
              }
              goto switchD_1001c843_default;
            }
            iVar7 = FUN_1000aba0(pbVar3,"gamemenucmd");
            if (iVar7 == 0) {
              iVar7 = FUN_1000aba0(pbVar3,"readylobby");
              if (iVar7 == 0) {
                iVar7 = FUN_1000aba0(pbVar3,"loadgamemenu");
                if (iVar7 == 0) {
                  iVar7 = FUN_1000aba0(pbVar3,"swimboost");
                  if (iVar7 == 0) {
                    iVar7 = FUN_1000aba0(pbVar3,"swimbubbles");
                    if (iVar7 != 0) {
                      pcVar19 = (char *)(*DAT_10223094)(1);
                      iVar6 = _atoi(pcVar19);
                      pcVar19 = (char *)(*DAT_10223094)(2);
                      iVar7 = _atoi(pcVar19);
                      pcVar19 = (char *)(*DAT_10223094)(3);
                      iVar13 = _atoi(pcVar19);
                      FUN_10094060((int)"aurora/bubbles.aur" - (int)DAT_10223188[0x26],1,
                                   (float)iVar6,(float)iVar7,(float)iVar13,0,0x3f800000,0,0,0,0);
                      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                      return;
                    }
                    iVar7 = FUN_1000aba0(pbVar3,"boatdisembark");
                    if (iVar7 == 0) {
                      iVar7 = FUN_1000aba0(pbVar3,"boatup");
                      if (iVar7 == 0) {
                        iVar7 = FUN_1000aba0(pbVar3,"boatdown");
                        if (iVar7 == 0) {
                          iVar7 = FUN_1000aba0(pbVar3,"boatleft");
                          if (iVar7 == 0) {
                            iVar7 = FUN_1000aba0(pbVar3,"boatright");
                            if (iVar7 == 0) {
                              iVar7 = FUN_1000aba0(pbVar3,"wheelchairup");
                              if (iVar7 == 0) {
                                iVar7 = FUN_1000aba0(pbVar3,"wheelchairdown");
                                if (iVar7 == 0) {
                                  iVar7 = FUN_1000aba0(pbVar3,"wheelchairleft");
                                  if (iVar7 == 0) {
                                    iVar7 = FUN_1000aba0(pbVar3,"wheelchairright");
                                    if (iVar7 == 0) {
                                      iVar7 = FUN_1000aba0(pbVar3,"telescopecancel");
                                      if (iVar7 == 0) {
                                        iVar7 = FUN_1000aba0(pbVar3,"flashlight");
                                        if (iVar7 == 0) {
                                          iVar7 = FUN_1000aba0(pbVar3,"weapontoggle");
                                          if (iVar7 == 0) {
                                            iVar7 = FUN_1000aba0(pbVar3,"telescopefinish");
                                            if (iVar7 == 0) {
                                              iVar7 = FUN_1000aba0(pbVar3,"telephoneright");
                                              if (iVar7 == 0) {
                                                iVar7 = FUN_1000aba0(pbVar3,"telephonewrong");
                                                if (iVar7 == 0) {
                                                  iVar7 = FUN_1000aba0(pbVar3,"cofload");
                                                  if (iVar7 == 0) {
                                                    iVar7 = FUN_1000aba0(pbVar3,"padlockrotate");
                                                    if (iVar7 == 0) {
                                                      iVar7 = FUN_1000aba0(pbVar3,"padlockcancel");
                                                      if (iVar7 == 0) {
                                                        iVar7 = FUN_1000aba0(pbVar3,"yesnoactivate")
                                                        ;
                                                        if (iVar7 == 0) {
                                                          iVar7 = FUN_1000aba0(pbVar3,"yesnono");
                                                          if (iVar7 == 0) {
                                                            iVar7 = FUN_1000aba0(pbVar3,"movestatue"
                                                                                );
                                                            if (iVar7 != 0) {
                                                              pcVar19 = (char *)(*DAT_10223094)(2);
                                                              iVar7 = _atoi(pcVar19);
                                                              pcVar19 = (char *)(*DAT_10223094)(1,
                                                  iVar7);
                                                  iVar13 = _atoi(pcVar19);
                                                  FUN_100125e0(iVar6,iVar13);
                                                  FUN_100e8eb0(iVar13,iVar7);
                                                  __security_check_cookie
                                                            (local_8 ^ (uint)&stack0xfffffffc);
                                                  return;
                                                  }
                                                  if (DAT_10222ee4 != (int *)0x0) {
                                                    iVar7 = *DAT_10222ee4;
                                                    uVar11 = FUN_100125e0(iVar6,pbVar3);
                                                    iVar7 = (**(code **)(iVar7 + 0x68))(uVar11);
                                                    if (iVar7 != 0) goto switchD_1001c843_default;
                                                  }
                                                  _strncpy(local_88,(char *)pbVar3,0x7f);
                                                  local_9 = 0;
                                                  uVar11 = FUN_1011a8a0("Unknown command: %s\n",
                                                                        local_88,0,0,0,0);
                                                  FUN_101163a0(iVar6,2,uVar11);
                                                  }
                                                  else {
                                                    iVar6 = FUN_100125e0(iVar6);
                                                    if (iVar6 != 0) {
                                                      pcVar19 = (char *)(*DAT_10223094)(1);
                                                      iVar7 = _atoi(pcVar19);
                                                      iVar7 = (*DAT_10223068)(iVar7);
                                                      if (((iVar7 != 0) ||
                                                          (iVar7 = (*DAT_1022305c)(0), iVar7 != 0))
                                                         && (*(int *)(iVar7 + 0x7c) != 0)) {
                                                        iVar7 = *(int *)(*(int *)(iVar7 + 0x7c) + 4)
                                                        ;
                                                        pcVar19 = "cof_yesno";
                                                        iVar13 = *(int *)(iVar7 + 0x20c);
                                                        pbVar3 = (byte *)(*(int *)(-(uint)(iVar13 !=
                                                                                          0) &
                                                                                  iVar13 + 0x80U) +
                                                                         (int)DAT_10223188[0x26]);
                                                        do {
                                                          bVar2 = *pbVar3;
                                                          bVar23 = bVar2 < (byte)*pcVar19;
                                                          if (bVar2 != *pcVar19) {
LAB_1001cb58:
                                                            uVar5 = -(uint)bVar23 | 1;
                                                            goto LAB_1001cb5d;
                                                          }
                                                          if (bVar2 == 0) break;
                                                          bVar2 = pbVar3[1];
                                                          bVar23 = bVar2 < (byte)pcVar19[1];
                                                          if (bVar2 != pcVar19[1])
                                                          goto LAB_1001cb58;
                                                          pbVar3 = pbVar3 + 2;
                                                          pcVar19 = pcVar19 + 2;
                                                        } while (bVar2 != 0);
                                                        uVar5 = 0;
LAB_1001cb5d:
                                                        if (uVar5 == 0) {
                                                          FUN_10018680(iVar7,iVar6);
                                                          FUN_10098750(iVar6);
                                                          __security_check_cookie
                                                                    (local_8 ^ (uint)&
                                                  stack0xfffffffc);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = FUN_100125e0(iVar6);
                                                    if (iVar6 != 0) {
                                                      pcVar19 = (char *)(*DAT_10223094)(1);
                                                      iVar7 = _atoi(pcVar19);
                                                      iVar7 = (*DAT_10223068)(iVar7);
                                                      if (((iVar7 != 0) ||
                                                          (iVar7 = (*DAT_1022305c)(0), iVar7 != 0))
                                                         && (*(int *)(iVar7 + 0x7c) != 0)) {
                                                        iVar7 = *(int *)(*(int *)(iVar7 + 0x7c) + 4)
                                                        ;
                                                        pcVar19 = "cof_yesno";
                                                        iVar13 = *(int *)(iVar7 + 0x20c);
                                                        pbVar3 = (byte *)(*(int *)(-(uint)(iVar13 !=
                                                                                          0) &
                                                                                  iVar13 + 0x80U) +
                                                                         (int)DAT_10223188[0x26]);
                                                        do {
                                                          bVar2 = *pbVar3;
                                                          bVar23 = bVar2 < (byte)*pcVar19;
                                                          if (bVar2 != *pcVar19) {
LAB_1001ca80:
                                                            uVar5 = -(uint)bVar23 | 1;
                                                            goto LAB_1001ca85;
                                                          }
                                                          if (bVar2 == 0) break;
                                                          bVar2 = pbVar3[1];
                                                          bVar23 = bVar2 < (byte)pcVar19[1];
                                                          if (bVar2 != pcVar19[1])
                                                          goto LAB_1001ca80;
                                                          pbVar3 = pbVar3 + 2;
                                                          pcVar19 = pcVar19 + 2;
                                                        } while (bVar2 != 0);
                                                        uVar5 = 0;
LAB_1001ca85:
                                                        if (uVar5 == 0) {
                                                          FUN_10018680(iVar7,iVar6);
                                                          FUN_100a9e30(iVar6);
                                                          __security_check_cookie
                                                                    (local_8 ^ (uint)&
                                                  stack0xfffffffc);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = FUN_100125e0(iVar6);
                                                    if ((iVar6 != 0) &&
                                                       (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                                      iVar6 = FUN_100177a0();
                                                      iVar6 = FUN_10018740(*(undefined4 *)
                                                                            (iVar6 + 4));
                                                      if (iVar6 != 0) {
                                                        FUN_100b5ea0();
                                                        __security_check_cookie
                                                                  (local_8 ^ (uint)&stack0xfffffffc)
                                                        ;
                                                        return;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  else {
                                                    iVar6 = FUN_100125e0(iVar6);
                                                    if (iVar6 != 0) {
                                                      pcVar19 = (char *)(*DAT_10223094)(1);
                                                      iVar6 = _atoi(pcVar19);
                                                      iVar7 = FUN_10017780();
                                                      if (iVar7 != 0) {
                                                        iVar7 = FUN_100177a0();
                                                        iVar7 = FUN_10018740(*(undefined4 *)
                                                                              (iVar7 + 4));
                                                        if (iVar7 != 0) {
                                                          FUN_100b6280(iVar6);
                                                          __security_check_cookie
                                                                    (local_8 ^ (uint)&
                                                  stack0xfffffffc);
                                                  return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  else if ((DAT_10222ee4 != (int *)0x0) &&
                                                          (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20
                                                                               ))(), iVar6 == 0)) {
                                                    pcVar19 = (char *)(*DAT_10223094)(1);
                                                    iVar6 = _atoi(pcVar19);
                                                    switch(iVar6) {
                                                    case 1:
                                                      (*DAT_10222fe4)("load cofsave1\n");
                                                      __security_check_cookie
                                                                (local_8 ^ (uint)&stack0xfffffffc);
                                                      return;
                                                    case 2:
                                                      (*DAT_10222fe4)("load cofsave2\n");
                                                      __security_check_cookie
                                                                (local_8 ^ (uint)&stack0xfffffffc);
                                                      return;
                                                    case 3:
                                                      (*DAT_10222fe4)("load cofsave3\n");
                                                      __security_check_cookie
                                                                (local_8 ^ (uint)&stack0xfffffffc);
                                                      return;
                                                    case 4:
                                                      (*DAT_10222fe4)("load cofsave4\n");
                                                      __security_check_cookie
                                                                (local_8 ^ (uint)&stack0xfffffffc);
                                                      return;
                                                    case 5:
                                                      (*DAT_10222fe4)("load cofsave5\n");
                                                      __security_check_cookie
                                                                (local_8 ^ (uint)&stack0xfffffffc);
                                                      return;
                                                    }
                                                  }
                                                }
                                                else {
                                                  iVar6 = FUN_100125e0(iVar6);
                                                  if ((iVar6 != 0) &&
                                                     (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                                    iVar6 = FUN_100177a0();
                                                    FUN_10018620(*(undefined4 *)(iVar6 + 4));
                                                    FUN_1007ceb0();
                                                    __security_check_cookie
                                                              (local_8 ^ (uint)&stack0xfffffffc);
                                                    return;
                                                  }
                                                }
                                              }
                                              else {
                                                iVar6 = FUN_100125e0(iVar6);
                                                if ((iVar6 != 0) &&
                                                   (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                                  iVar6 = FUN_100177a0();
                                                  FUN_10018620(*(undefined4 *)(iVar6 + 4));
                                                  FUN_1007cdf0();
                                                  __security_check_cookie
                                                            (local_8 ^ (uint)&stack0xfffffffc);
                                                  return;
                                                }
                                              }
                                            }
                                            else {
                                              local_8c = (float)FUN_100125e0(iVar6);
                                              if (local_8c != 0.0) {
                                                pcVar19 = (char *)((int)local_8c + 0x7e8);
                                                local_90 = 1.4013e-45;
                                                do {
                                                  pcVar27 = pcVar19;
                                                  do {
                                                    cVar24 = *pcVar27;
                                                    pcVar27 = pcVar27 + 1;
                                                  } while (cVar24 != '\0');
                                                  if (pcVar27 == pcVar19 + 1) {
                                                    local_94 = (float)((int)local_90 * 0x120);
                                                    puVar21 = (undefined4 *)
                                                              ((int)local_8c + 0x6c8 + (int)local_94
                                                              );
                                                    puVar22 = (undefined4 *)
                                                              ((int)local_8c + 0x688 + (int)local_94
                                                              );
                                                    *puVar21 = 0x6472656e;
                                                    *(undefined2 *)(puVar21 + 1) = 0x73;
                                                    *puVar22 = 0x6472656e;
                                                    *(undefined2 *)(puVar22 + 1) = 0x73;
                                                    *(undefined4 *)
                                                     ((int)local_94 + (int)local_8c + 0x708) =
                                                         0x6472656e;
                                                    *(undefined2 *)
                                                     ((int)local_94 + (int)local_8c + 0x70c) = 0x73;
                                                    *(undefined4 *)
                                                     ((int)local_94 + (int)local_8c + 0x738) =
                                                         0x6472656e;
                                                    puVar20 = (undefined4 *)
                                                              ((int)local_8c + 0x778 + (int)local_94
                                                              );
                                                    *(undefined2 *)
                                                     ((int)local_94 + (int)local_8c + 0x73c) = 0x73;
                                                    *puVar20 = 0x6472656e;
                                                    *(undefined2 *)(puVar20 + 1) = 0x73;
                                                    (*DAT_10223000)(1,DAT_10226648,0,
                                                                    *(undefined4 *)
                                                                     (*(int *)((int)local_8c + 4) +
                                                                     0x20c));
                                                    (*DAT_10223008)(local_90);
                                                    (*DAT_10223008)(1);
                                                    (*DAT_10223010)(*(undefined4 *)
                                                                     ((int)local_8c + 0x2040));
                                                    (*DAT_10223008)(3);
                                                    (*DAT_10223020)(puVar21);
                                                    fVar17 = local_94;
                                                    (*DAT_10223020)((int)local_8c + 0x6d8 +
                                                                    (int)local_94);
                                                    (*DAT_10223020)((int)local_8c + 0x6e8 +
                                                                    (int)fVar17);
                                                    (*DAT_10223020)((int)local_8c + 0x6f8 +
                                                                    (int)fVar17);
                                                    (*DAT_10223020)(puVar22);
                                                    fVar26 = local_8c;
                                                    (*DAT_10223020)((int)local_8c + 0x698 +
                                                                    (int)fVar17);
                                                    (*DAT_10223020)((int)fVar26 + 0x6a8 +
                                                                    (int)fVar17);
                                                    (*DAT_10223020)((int)fVar26 + 0x6b8 +
                                                                    (int)fVar17);
                                                    (*DAT_10223020)((int)fVar26 + 0x708 +
                                                                    (int)fVar17);
                                                    (*DAT_10223020)((int)fVar26 + 0x738 +
                                                                    (int)fVar17);
                                                    (*DAT_10223020)(puVar20);
                                                    (*DAT_10223004)();
                                                    break;
                                                  }
                                                  local_90 = (float)((int)local_90 + 1);
                                                  pcVar19 = pcVar19 + 0x120;
                                                } while ((int)local_90 < 0x11);
                                                iVar6 = FUN_10017780();
                                                if ((iVar6 != 0) &&
                                                   (iVar6 = FUN_100177a0(),
                                                   *(float *)(*(int *)(iVar6 + 4) + 0x164) != 0.0))
                                                {
                                                  iVar6 = FUN_100177a0();
                                                  *(undefined4 *)(*(int *)(iVar6 + 4) + 0x168) =
                                                       0x3f800000;
                                                  __security_check_cookie
                                                            (local_8 ^ (uint)&stack0xfffffffc);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                          else {
                                            iVar6 = FUN_100125e0(iVar6);
                                            if ((iVar6 != 0) && (*(int *)(iVar6 + 0x252c) != 0)) {
                                              piVar12 = (int *)FUN_10018440(*(undefined4 *)
                                                                             (*(int *)(iVar6 + 
                                                  0x252c) + 4));
                                              (**(code **)(*piVar12 + 0x1b0))();
                                              __security_check_cookie
                                                        (local_8 ^ (uint)&stack0xfffffffc);
                                              return;
                                            }
                                          }
                                        }
                                        else {
                                          iVar7 = FUN_100125e0(iVar6);
                                          if ((iVar7 == 0) ||
                                             (((cVar24 = FUN_100e4e00(), cVar24 == '\0' &&
                                               (iVar13 = FUN_10017780(), iVar13 == 0)) &&
                                              (iVar13 = FUN_10017780(), iVar13 == 0)))) {
                                            if (DAT_10222f10 == 0) {
                                              if (DAT_10222ee4 != (int *)0x0) {
                                                iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))();
                                                if (((((iVar7 == 0) &&
                                                      (iVar7 = FUN_100125e0(iVar6), iVar7 != 0)) &&
                                                     ((iVar13 = FUN_10017780(), iVar13 == 0 &&
                                                      ((cVar24 = FUN_100dd000(0x1000000,0,0),
                                                       cVar24 != '\0' &&
                                                       (*(char *)(iVar7 + 0x434) != '\0')))))) &&
                                                    (*(float *)(iVar7 + 0x3ec) < *DAT_10223188)) &&
                                                   (*(float *)(iVar7 + 0x3ec) != 666.0)) {
                                                  if (*(int *)(iVar7 + 0x2300) == 1) {
                                                    *(undefined4 *)(iVar7 + 0x2300) = 100;
                                                  }
                                                  else if (*(int *)(iVar7 + 0x2300) == 0) {
                                                    *(undefined4 *)(iVar7 + 0x2300) = 0x65;
                                                  }
                                                }
                                                if ((((DAT_10222ee4 != (int *)0x0) &&
                                                     (iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))(),
                                                     iVar7 != 0)) &&
                                                    (piVar12 = (int *)FUN_100125e0(iVar6),
                                                    piVar12 != (int *)0x0)) &&
                                                   (iVar6 = (**(code **)(*piVar12 + 0xbc))(),
                                                   iVar6 != 0)) {
                                                  uVar11 = 0;
                                                  if (*(float *)(piVar12[1] + 0x168) == 0.0) {
                                                    uVar11 = 0x42000000;
                                                  }
                                                  *(undefined4 *)(piVar12[1] + 0x168) = uVar11;
                                                  FUN_100fc9f0(*(undefined4 *)((int)param_1 + 0x28c)
                                                               ,1,"items/flashlight1.wav",0x3f800000
                                                               ,0x3f4ccccd,0,100);
                                                  (*DAT_10223000)(2,DAT_102264f0,0,0);
                                                  uVar11 = (*DAT_10223064)(*(undefined4 *)
                                                                            (piVar12[1] + 0x20c));
                                                  (*DAT_10223008)(uVar11);
                                                  (*DAT_10223010)((int)*(float *)(piVar12[1] + 0x168
                                                                                 ));
                                                  (*DAT_10223010)(piVar12[0x994]);
                                                  (*DAT_10223010)(0);
                                                  iVar6 = (**(code **)(*DAT_10222ee4 + 0xd4))
                                                                    (piVar12 + 0x99a);
                                                  (*DAT_10223010)(iVar6 + 1);
                                                  (*DAT_10223004)();
                                                  __security_check_cookie
                                                            (local_8 ^ (uint)&stack0xfffffffc);
                                                  return;
                                                }
                                              }
                                            }
                                            else if (((iVar7 != 0) &&
                                                     (*(float *)(iVar7 + 0x3ec) < *DAT_10223188)) &&
                                                    (*(float *)(iVar7 + 0x3ec) != 666.0)) {
                                              if (*(int *)(iVar7 + 0x2300) == 1) {
                                                *(undefined4 *)(iVar7 + 0x2300) = 100;
                                                __security_check_cookie
                                                          (local_8 ^ (uint)&stack0xfffffffc);
                                                return;
                                              }
                                              if (*(int *)(iVar7 + 0x2300) == 0) {
                                                *(undefined4 *)(iVar7 + 0x2300) = 0x65;
                                                __security_check_cookie
                                                          (local_8 ^ (uint)&stack0xfffffffc);
                                                return;
                                              }
                                            }
                                          }
                                        }
                                      }
                                      else {
                                        iVar6 = FUN_100125e0(iVar6);
                                        if (((iVar6 != 0) && (iVar7 = FUN_10017780(), iVar7 != 0))
                                           && (iVar7 = FUN_100177a0(),
                                              *(float *)(*(int *)(iVar7 + 4) + 0x164) != 0.0)) {
                                          piVar12 = (int *)FUN_100177a0();
                                          (**(code **)(*piVar12 + 0xe8))(iVar6,iVar6,3,0);
                                          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                                          return;
                                        }
                                      }
                                    }
                                    else {
                                      iVar6 = FUN_100125e0(iVar6);
                                      if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                        iVar6 = FUN_100177a0();
                                        FUN_10018800(*(undefined4 *)(iVar6 + 4));
                                        FUN_10087210();
                                        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                                        return;
                                      }
                                    }
                                  }
                                  else {
                                    iVar6 = FUN_100125e0(iVar6);
                                    if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                      iVar6 = FUN_100177a0();
                                      FUN_10018800(*(undefined4 *)(iVar6 + 4));
                                      FUN_100870b0();
                                      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                                      return;
                                    }
                                  }
                                }
                                else {
                                  iVar6 = FUN_100125e0(iVar6);
                                  if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                    iVar6 = FUN_100177a0();
                                    FUN_10018800(*(undefined4 *)(iVar6 + 4));
                                    FUN_10086860();
                                    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                                    return;
                                  }
                                }
                              }
                              else {
                                iVar6 = FUN_100125e0(iVar6);
                                if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                  iVar6 = FUN_100177a0();
                                  FUN_10018800(*(undefined4 *)(iVar6 + 4));
                                  FUN_100869a0();
                                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                                  return;
                                }
                              }
                            }
                            else {
                              iVar6 = FUN_100125e0(iVar6);
                              if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                                iVar6 = FUN_100177a0();
                                FUN_100184a0(*(undefined4 *)(iVar6 + 4));
                                FUN_10023490();
                                __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                                return;
                              }
                            }
                          }
                          else {
                            iVar6 = FUN_100125e0(iVar6);
                            if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                              iVar6 = FUN_100177a0();
                              FUN_100184a0(*(undefined4 *)(iVar6 + 4));
                              FUN_10023340();
                              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                              return;
                            }
                          }
                        }
                        else {
                          iVar6 = FUN_100125e0(iVar6);
                          if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                            iVar6 = FUN_100177a0();
                            FUN_100184a0(*(undefined4 *)(iVar6 + 4));
                            FUN_10022cd0();
                            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                            return;
                          }
                        }
                      }
                      else {
                        iVar6 = FUN_100125e0(iVar6);
                        if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                          iVar6 = FUN_100177a0();
                          FUN_100184a0(*(undefined4 *)(iVar6 + 4));
                          FUN_10022e60();
                          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                          return;
                        }
                      }
                    }
                    else {
                      iVar6 = FUN_100125e0(iVar6);
                      if ((iVar6 != 0) && (iVar6 = FUN_10017780(), iVar6 != 0)) {
                        iVar6 = FUN_100177a0();
                        FUN_100184a0(*(undefined4 *)(iVar6 + 4));
                        FUN_10022b20();
                        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                        return;
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_100125e0(iVar6);
                    if ((iVar6 != 0) && (iVar7 = *(int *)(iVar6 + 4), 2 < *(int *)(iVar7 + 0x1c4)))
                    {
                      fVar17 = *(float *)(iVar7 + 0x28);
                      if ((*(uint *)(iVar7 + 0x1a8) & 0x40000) == 0) {
                        fVar26 = 3.0;
                      }
                      else {
                        fVar26 = 5.0;
                      }
                      local_b0 = *(float *)(iVar7 + 0x28) * fVar26;
                      *(ulonglong *)(iVar7 + 0x20) =
                           CONCAT44(*(float *)(iVar7 + 0x24) * fVar26,
                                    *(float *)(iVar7 + 0x20) * fVar26);
                      *(float *)(iVar7 + 0x28) = local_b0;
                      *(float *)(*(int *)(iVar6 + 4) + 0x28) = (float)(int)fVar17;
                      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                      return;
                    }
                  }
                }
                else if (((DAT_10222ee4 != (int *)0x0) &&
                         (iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar7 == 0)) &&
                        (iVar6 = FUN_100125e0(iVar6), iVar6 != 0)) {
                  (*DAT_10223000)(1,DAT_102265d4,0,*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
                  (*DAT_10223008)(1);
                  (*DAT_10223020)("nothing");
                  (*DAT_10223004)();
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return;
                }
              }
              else {
                iVar6 = FUN_100125e0(iVar6);
                if (((iVar6 != 0) && (DAT_10222ee4 != (int *)0x0)) &&
                   ((iVar7 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar7 != 0 &&
                    ((char)DAT_10222ee4[0x2a] != '\0')))) {
                  iVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
                  bVar23 = *(char *)(iVar7 + 0xa9 + (int)DAT_10222ee4) == '\0';
                  if (bVar23) {
                    iVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
                    *(undefined1 *)(iVar7 + 0xa9 + (int)DAT_10222ee4) = 1;
                    (*DAT_10223000)(2,DAT_102266b0,0,0);
                    uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
                    (*DAT_10223008)(uVar11);
                  }
                  else {
                    iVar7 = (*DAT_10223064)();
                    *(undefined1 *)(iVar7 + 0xa9 + (int)DAT_10222ee4) = 0;
                    (*DAT_10223000)(2,DAT_102266b0,0,0);
                    uVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar6 + 4) + 0x20c));
                    (*DAT_10223008)(uVar11);
                  }
                  (*DAT_10223008)(bVar23);
                  (*DAT_10223008)(0);
                  (*DAT_10223004)();
                  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
                  return;
                }
              }
              goto switchD_1001c843_default;
            }
            iVar6 = FUN_100125e0(iVar6);
            iVar7 = FUN_1013f5f0((int)DAT_10223188[0x26] + (int)DAT_10223188[3],"game_menu");
            if (iVar7 == 0) goto switchD_1001c843_default;
            pcVar19 = (char *)(*DAT_10223094)(1);
            iVar7 = _atoi(pcVar19);
            piVar12 = (int *)FUN_10118460(0,"cof_gamemenu");
            if ((piVar12 == (int *)0x0) || (iVar6 == 0)) goto switchD_1001c843_default;
            if (iVar7 == 1) {
              uVar11 = 0x3f800000;
              *(undefined4 *)(piVar12[1] + 0x248) = 1;
            }
            else {
              if (iVar7 != 2) goto LAB_1001ba63;
              uVar11 = 0x40000000;
              *(undefined4 *)(piVar12[1] + 0x248) = 2;
            }
            (**(code **)(*piVar12 + 8))(uVar11);
LAB_1001ba63:
            local_b8 = 255.0;
            local_b4 = 255.0;
            local_b0 = 255.0;
            FUN_10119c00(iVar6,&local_b8,0x3f800000,0x41200000,0xff,1);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          piVar12 = (int *)FUN_100125e0(iVar6);
          if (((((piVar12 == (int *)0x0) || (cVar24 = FUN_100e4e00(), cVar24 != '\0')) ||
               (iVar6 = (**(code **)(*piVar12 + 0xbc))(), iVar6 == 0)) ||
              ((*DAT_10223188 < (float)piVar12[0xfa] || *DAT_10223188 == (float)piVar12[0xfa] ||
               (DAT_10222ee4 == (int *)0x0)))) ||
             (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 == 0))
          goto switchD_1001c843_default;
          pcVar19 = (char *)(*DAT_10223094)(1);
          iVar6 = _atoi(pcVar19);
          if (iVar6 == 0) {
            iVar7 = (*DAT_102230b0)(0,6,0x3f800000,0x3f4ccccd,0,100);
            puVar15 = (&PTR_s_player_police_adlib_follow_1_wav_10211c0c)[iVar7];
          }
          else if (iVar6 == 1) {
            iVar7 = (*DAT_102230b0)(0,4,0x3f800000,0x3f4ccccd,0,100);
            puVar15 = (&PTR_s_player_police_adlib_help_1_wav_10211c28)[iVar7];
          }
          else {
            if (iVar6 != 2) goto LAB_1001a963;
            iVar7 = (*DAT_102230b0)(0,8,0x3f800000,0x3f4ccccd,0,100);
            puVar15 = (&PTR_s_player_police_adlib_something_1__10211c3c)[iVar7];
          }
          FUN_100fc9f0(*(undefined4 *)(piVar12[1] + 0x20c),2,puVar15);
LAB_1001a963:
          piVar12[0xfa] = (int)(*DAT_10223188 + 1.0);
          (*DAT_10223000)(2,DAT_102266ac,0,0);
          (*DAT_1022301c)(0x3f800000);
          uVar11 = (*DAT_10223064)(*(undefined4 *)(piVar12[1] + 0x20c));
          (*DAT_10223008)(uVar11);
          (*DAT_10223008)(iVar6);
          (*DAT_10223004)();
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        piVar12 = (int *)FUN_10118460(0,"cof_puzzlebar3");
        pcVar19 = "cof_puzzlebar4";
      }
      else {
        piVar12 = (int *)FUN_10118460(0,"cof_puzzlebar2");
        pcVar19 = "cof_puzzlebar3";
      }
    }
    else {
      piVar12 = (int *)FUN_10118460(0,"cof_puzzlebar");
      pcVar19 = "cof_puzzlebar2";
    }
    piVar10 = (int *)FUN_10118460(0,pcVar19);
    if (piVar12 != (int *)0x0) {
      (**(code **)(*piVar12 + 0xe8))(0,0,3,0);
    }
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0xe8))(0,0,3,0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
switchD_1001c843_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

