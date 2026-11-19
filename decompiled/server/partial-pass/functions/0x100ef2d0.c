// rea decompile_all
// name: FUN_100ef2d0
// address: 0x100ef2d0
// body: available
// range: 0x100ef2d0-0x100f0511 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ef2d0(void)

{
  float fVar1;
  byte bVar2;
  CBasePlayer CVar3;
  CBasePlayer CVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  CBasePlayer *pCVar8;
  CWheelchair *this;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  CBasePlayer *in_ECX;
  byte *pbVar12;
  uint uVar13;
  char *pcVar14;
  bool bVar15;
  float10 fVar16;
  undefined1 local_4c [16];
  float local_3c;
  int local_1c;
  float local_14;
  float local_10;
  float local_c;
  CBasePlayer *local_8;
  
  if (in_ECX[0x3bc] != (CBasePlayer)0x0) {
    if (*(int *)(in_ECX + 0x252c) != 0) {
      iVar6 = *(int *)(*(int *)(in_ECX + 0x252c) + 4);
      pcVar14 = "weapon_rifle";
      iVar11 = *(int *)(iVar6 + 0x20c);
      pbVar12 = (byte *)(*(int *)(-(uint)(iVar11 != 0) & iVar11 + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar12;
        bVar15 = bVar2 < (byte)*pcVar14;
        if (bVar2 != *pcVar14) {
LAB_100ef340:
          uVar5 = -(uint)bVar15 | 1;
          goto LAB_100ef345;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar12[1];
        bVar15 = bVar2 < (byte)pcVar14[1];
        if (bVar2 != pcVar14[1]) goto LAB_100ef340;
        pbVar12 = pbVar12 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100ef345:
      if ((uVar5 == 0) &&
         (((iVar6 = FUN_10065db0(iVar6), *(char *)(iVar6 + 0x106) == '\0' ||
           (*(int *)(*(int *)(in_ECX + 0x252c) + 0x140) != 0)) ||
          (*(int *)(*(int *)(in_ECX + 0x252c) + 0x128) != 0)))) {
        (*DAT_10223000)(8,DAT_102266c4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,
                     "player/vocal/breathing/release_breath.wav",0x3f800000,0x3f4ccccd,0,100);
      }
    }
    if ((in_ECX[0x3bc] != (CBasePlayer)0x0) &&
       ((*(uint *)(*(int *)(in_ECX + 4) + 0x184) & 0x1000) == 0)) {
      in_ECX[0x3bc] = (CBasePlayer)0x0;
      (*DAT_10223000)(8,DAT_102266c4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,
                   "player/vocal/breathing/release_breath.wav",0x3f800000,0x3f4ccccd,0,100);
    }
    if (*(int *)(in_ECX + 0x252c) == 0) {
LAB_100ef49d:
      if (in_ECX[0x3bc] != (CBasePlayer)0x0) {
        in_ECX[0x3bc] = (CBasePlayer)0x0;
        (*DAT_10223000)(8,DAT_102266c4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,
                     "player/vocal/breathing/release_breath.wav",0x3f800000,0x3f4ccccd,0,100);
      }
    }
    else {
      pcVar14 = "weapon_rifle";
      iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 0x252c) + 4) + 0x20c);
      pbVar12 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26]);
      do {
        bVar2 = *pbVar12;
        bVar15 = bVar2 < (byte)*pcVar14;
        if (bVar2 != *pcVar14) {
LAB_100ef494:
          uVar5 = -(uint)bVar15 | 1;
          goto LAB_100ef499;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar12[1];
        bVar15 = bVar2 < (byte)pcVar14[1];
        if (bVar2 != pcVar14[1]) goto LAB_100ef494;
        pbVar12 = pbVar12 + 2;
        pcVar14 = pcVar14 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_100ef499:
      if (uVar5 != 0) goto LAB_100ef49d;
    }
    if ((*(float *)(in_ECX + 0x21f0) <= 0.0) && (in_ECX[0x3bc] != (CBasePlayer)0x0)) {
      in_ECX[0x3bc] = (CBasePlayer)0x0;
      (*DAT_10223000)(8,DAT_102266c4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      FUN_100f91b0(0xc1700000,0x3f000000,0x3f000000);
    }
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 != 0)) {
    iVar6 = (**(code **)(*(int *)in_ECX + 0xbc))();
    if ((iVar6 == 0) &&
       ((in_ECX[0x4e8] == (CBasePlayer)0x0 &&
        (*(float *)(in_ECX + 0x3d0) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x3d0))
        ))) {
      FUN_10119810();
      *(float *)(in_ECX + 0x3d0) = *DAT_10223188 + 12.0;
    }
    iVar6 = (**(code **)(*(int *)in_ECX + 0xbc))();
    if (((iVar6 != 0) ||
        (*DAT_10223188 < *(float *)(in_ECX + 0x3d4) || *DAT_10223188 == *(float *)(in_ECX + 0x3d4)))
       || ((*(byte *)(*(int *)(in_ECX + 4) + 0x184) & 2) == 0)) {
      pfVar7 = (float *)(**(code **)(*(int *)in_ECX + 0xbc))();
      if ((pfVar7 == (float *)0x0) && (in_ECX[0x4e8] == (CBasePlayer)0x0)) {
        fVar1 = *(float *)(in_ECX + 0x1f2c);
        pfVar7 = (float *)((uint)(byte)((fVar1 == 0.0) << 6 | NAN(fVar1) << 2 | 2U | fVar1 < 0.0) <<
                          8);
        if ((fVar1 != 0.0) && (pfVar7 = DAT_10223188, fVar1 < *DAT_10223188)) goto LAB_100ef654;
      }
    }
    else {
LAB_100ef654:
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x184) = 0;
      *(undefined4 *)(in_ECX + 0x2654) = 0;
      FUN_100dd990(1,1);
      FUN_100f0ba0(0);
      FUN_100f2e10(0);
      local_8 = in_ECX + 0x3dc;
      *(undefined4 *)(in_ECX + 0x5dc) = 0xfffffffe;
      *(undefined4 *)(in_ECX + 0x5e0) = 0xfffffffe;
      iVar6 = 1;
      in_ECX[0x204c] = (CBasePlayer)0x0;
      in_ECX[0x20cc] = (CBasePlayer)0x0;
      in_ECX[0x214c] = (CBasePlayer)0x0;
      do {
        (*DAT_10223000)(1,DAT_10226634,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223008)(iVar6);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        iVar6 = iVar6 + 1;
        *(undefined4 *)local_8 = 0;
        local_8 = local_8 + 4;
      } while (iVar6 < 4);
      FUN_100f67f0();
      FUN_1001f0a0(*(undefined4 *)(in_ECX + 4),~(*(uint *)(in_ECX + 0x22e4) >> 5) & 1);
      pfVar7 = (float *)FUN_10017ad0();
      *(undefined4 *)(in_ECX + 0x1f2c) = 0;
    }
    local_8 = (CBasePlayer *)((uint)pfVar7 & 0xffffff00);
    pCVar8 = (CBasePlayer *)FUN_10118460(0,"player");
    if (pCVar8 != (CBasePlayer *)0x0) {
      do {
        iVar6 = FUN_10017d80(pCVar8);
        if ((iVar6 != 0) && (local_8 = (CBasePlayer *)((uint)local_8 & 0xff), pCVar8 != in_ECX)) {
          local_8 = (CBasePlayer *)0x1;
        }
        pCVar8 = (CBasePlayer *)FUN_10118460(pCVar8,"player");
      } while (pCVar8 != (CBasePlayer *)0x0);
      if ((char)local_8 != '\0') {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 0;
        goto LAB_100ef7b2;
      }
    }
    iVar6 = (**(code **)(*(int *)in_ECX + 0xbc))();
    if (iVar6 != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 3;
    }
  }
LAB_100ef7b2:
  if (*(int *)(in_ECX + 0x252c) != 0) {
    FUN_1011bb50();
  }
  CVar3 = in_ECX[0x2278];
  CVar4 = CVar3;
  if (CVar3 != DAT_10226489) {
    CVar4 = in_ECX[0x2278];
    DAT_10226489 = CVar3;
  }
  if (((CVar4 != (CBasePlayer)0x0) && (in_ECX[0x2280] == (CBasePlayer)0x0)) &&
     (*(float *)(in_ECX + 0x2270) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x2270)))
  {
    FUN_100f92a0();
  }
  if ((in_ECX[0x4e8] != (CBasePlayer)0x0) &&
     (*(float *)(in_ECX + 0x4ec) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x4ec))) {
    iVar6 = *(int *)(in_ECX + 0x4f0);
    if ((-1 < iVar6) && (iVar6 < 6)) {
      FUN_1011a8a0(&DAT_101db304,iVar6,5,0);
      FUN_10119810();
      iVar6 = *(int *)(in_ECX + 0x4f0);
    }
    fVar1 = *DAT_10223188;
    *(int *)(in_ECX + 0x4f0) = iVar6 + -1;
    *(float *)(in_ECX + 0x4ec) = fVar1 + 1.0;
  }
  if (in_ECX[0x2278] != (CBasePlayer)0x0) {
    fVar16 = (float10)(*DAT_1022302c)("room_type");
    local_8 = (CBasePlayer *)(float)fVar16;
    if ((int)fVar16 != 0x10) {
      (*DAT_10223034)("room_type",0x41800000);
    }
  }
  uVar5 = *(uint *)(in_ECX + 0x5d0);
  iVar6 = *(int *)(in_ECX + 0x2300);
  if ((uVar5 & 0x40) == 0) {
    if (iVar6 == 1) {
      if (*(float *)(in_ECX + 0x3ec) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x3ec)
         ) {
        *(uint *)(in_ECX + 0x5d0) = uVar5 | 0x40;
      }
LAB_100ef8f1:
      fVar16 = (float10)(*DAT_1022302c)("room_type");
      local_8 = (CBasePlayer *)(float)fVar16;
      if ((int)fVar16 != 0xe) {
        (*DAT_10223034)("room_type",0x41600000);
      }
    }
  }
  else if (iVar6 == 0) {
    *(uint *)(in_ECX + 0x5d0) = uVar5 & 0xffffffbf;
  }
  else if (iVar6 == 1) goto LAB_100ef8f1;
  if (*(int *)(in_ECX + 0x2300) == 0) {
    fVar16 = (float10)(*DAT_1022302c)("room_type");
    local_8 = (CBasePlayer *)(float)fVar16;
    if ((int)fVar16 != *(int *)(in_ECX + 0x2284)) {
      (*DAT_10223034)("room_type",(float)*(int *)(in_ECX + 0x2284));
    }
  }
  if ((25.0 < *(float *)(*(int *)(in_ECX + 4) + 0x164) ||
       *(float *)(*(int *)(in_ECX + 4) + 0x164) == 25.0) || (in_ECX[0x435] != (CBasePlayer)0x0)) {
    if ((in_ECX[0x43c] != (CBasePlayer)0x0) &&
       ((in_ECX[0x43c] = (CBasePlayer)0x0, DAT_10222ee4 != (int *)0x0 &&
        (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 == 0)))) {
      (*DAT_10223128)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),&DAT_101a1470,&DAT_101a1234);
    }
  }
  else {
    iVar6 = FUN_10017780();
    if ((iVar6 == 0) || (iVar6 = FUN_100177a0(), *(int *)(*(int *)(iVar6 + 4) + 0x24c) != 1)) {
      if ((in_ECX[0x43c] == (CBasePlayer)0x0) &&
         ((in_ECX[0x43c] = (CBasePlayer)0x1, DAT_10222ee4 != (int *)0x0 &&
          (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 == 0)))) {
        (*DAT_10223128)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),&DAT_101a1470,&DAT_101be9f4);
      }
      if ((((*(float *)(in_ECX + 0x4d4) <= *DAT_10223188 &&
             *DAT_10223188 != *(float *)(in_ECX + 0x4d4)) &&
           (iVar6 = (**(code **)(*(int *)in_ECX + 0xbc))(), iVar6 != 0)) && (DAT_10226477 == '\0'))
         && ((iVar6 = FUN_10017780(), iVar6 == 0 && (*(int *)(*(int *)(in_ECX + 4) + 0x1c4) < 3))))
      {
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,"player/heartbeat1.wav",
                     0x3e800000,0x3f4ccccd,0,100);
        *(float *)(in_ECX + 0x4d4) = *DAT_10223188 + 1.0;
      }
      if (((*(float *)(in_ECX + 0x21cc) <= *DAT_10223188 &&
            *DAT_10223188 != *(float *)(in_ECX + 0x21cc)) &&
          (iVar6 = (**(code **)(*(int *)in_ECX + 0xbc))(), iVar6 != 0)) &&
         ((DAT_10226477 == '\0' &&
          ((iVar6 = FUN_10017780(), iVar6 == 0 && (*(int *)(*(int *)(in_ECX + 4) + 0x1c4) < 3))))))
      {
        FUN_100e6b20();
        iVar6 = (*DAT_102230b0)(10,0x1e);
        *(float *)(in_ECX + 0x21cc) = (float)iVar6 + *DAT_10223188;
      }
    }
  }
  if (*(int *)(in_ECX + 0x252c) != 0) {
    pcVar14 = "weapon_revolver";
    iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 0x252c) + 4) + 0x20c);
    pbVar12 = (byte *)(*(int *)(-(uint)(iVar6 != 0) & iVar6 + 0x80U) + (int)DAT_10223188[0x26]);
    do {
      bVar2 = *pbVar12;
      bVar15 = bVar2 < (byte)*pcVar14;
      if (bVar2 != *pcVar14) {
LAB_100efb96:
        uVar5 = -(uint)bVar15 | 1;
        goto LAB_100efb9b;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar12[1];
      bVar15 = bVar2 < (byte)pcVar14[1];
      if (bVar2 != pcVar14[1]) goto LAB_100efb96;
      pbVar12 = pbVar12 + 2;
      pcVar14 = pcVar14 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_100efb9b:
    if (((uVar5 == 0) && (iVar6 = FUN_100e0310(0x15), iVar6 != 0)) &&
       (*(float *)(in_ECX + 0x4d0) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x4d0)))
    {
      fVar1 = *(float *)(*(int *)(in_ECX + 4) + 0x294);
      if (fVar1 != (float)*(int *)(iVar6 + 0x1f8)) {
        *(float *)(*(int *)(in_ECX + 4) + 0x294) = fVar1 - 12.0;
        iVar6 = *(int *)(in_ECX + 4);
        if (*(float *)(iVar6 + 0x294) < 0.0) {
          *(float *)(iVar6 + 0x294) = *(float *)(iVar6 + 0x294) + 360.0;
          iVar6 = *(int *)(in_ECX + 4);
        }
        if (360.0 < *(float *)(iVar6 + 0x294)) {
          *(float *)(iVar6 + 0x294) = *(float *)(iVar6 + 0x294) - 360.0;
        }
      }
      *(float *)(in_ECX + 0x4d0) = *DAT_10223188 + 0.05;
    }
  }
  iVar6 = FUN_10017780();
  if ((iVar6 != 0) && ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x1000) == 0)) {
    FUN_100deff0(0);
  }
  iVar6 = FUN_10017780();
  if (iVar6 != 0) {
    iVar6 = FUN_100177a0();
    this = (CWheelchair *)FUN_10018800(*(undefined4 *)(iVar6 + 4));
    CWheelchair::WheelchairThink(this);
  }
  uVar5 = *(uint *)(*(int *)(in_ECX + 4) + 0x184);
  uVar13 = *(uint *)(in_ECX + 0x22ac) ^ uVar5;
  *(uint *)(in_ECX + 0x22b0) = uVar5 & uVar13;
  *(uint *)(in_ECX + 0x22b4) = ~*(uint *)(*(int *)(in_ECX + 4) + 0x184) & uVar13;
  iVar6 = FUN_10017780();
  if ((iVar6 != 0) && (*(float *)(*(int *)(in_ECX + 4) + 0x260) != 2.0)) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x260) = 0x40000000;
  }
  iVar6 = FUN_10017780();
  if ((iVar6 != 0) && (*(float *)(in_ECX + 0x4f4) <= *DAT_10223188)) {
    pcVar14 = "cpr_idle";
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x4000) != 0) {
      pcVar14 = "crouch_cpr_idle";
    }
    local_8 = (CBasePlayer *)FUN_1000e9b0(pcVar14);
    if (local_8 == (CBasePlayer *)0xffffffff) {
      local_8 = (CBasePlayer *)0x0;
    }
    iVar6 = *(int *)(in_ECX + 4);
    if (((CBasePlayer *)*(float *)(iVar6 + 300) != local_8) || (*(int *)(in_ECX + 0xfc) == 0)) {
      *(undefined4 *)(iVar6 + 0x134) = 0;
      iVar6 = *(int *)(in_ECX + 4);
    }
    *(undefined4 *)(iVar6 + 0x130) = 0;
    uVar9 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_8);
    fVar16 = (float10)FUN_1000f390(uVar9);
    *(float *)(in_ECX + 0x4f4) = (float)(fVar16 + (float10)*DAT_10223188);
    if ((CBasePlayer *)*(float *)(*(int *)(in_ECX + 4) + 300) != local_8) {
      *(CBasePlayer **)(*(int *)(in_ECX + 4) + 300) = local_8;
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134) = 0;
      FUN_1000e9e0();
    }
  }
  iVar6 = FUN_10017780();
  if ((iVar6 != 0) && (((byte)in_ECX[0x22b4] & 0x20) != 0)) {
    piVar10 = (int *)FUN_100177a0();
    iVar6 = (**(code **)(*piVar10 + 0xd0))();
    if (iVar6 != 0) {
      iVar6 = FUN_100177a0();
      iVar6 = *(int *)(*(int *)(iVar6 + 4) + 0x20c);
      if (((iVar6 != 0) || (iVar6 = (*DAT_1022305c)(0), iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x7c) != 0)) {
        uVar9 = 0;
        FUN_100125e0(*(undefined4 *)(*(int *)(iVar6 + 0x7c) + 4),0);
        FUN_10017740(uVar9);
      }
    }
    FUN_10017740(0);
    *(float *)(in_ECX + 0x26ac) = *DAT_10223188;
    pcVar14 = "cpr_up";
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x4000) != 0) {
      pcVar14 = "crouch_cpr_up";
    }
    local_8 = (CBasePlayer *)FUN_1000e9b0(pcVar14);
    if (local_8 == (CBasePlayer *)0xffffffff) {
      local_8 = (CBasePlayer *)0x0;
    }
    iVar6 = *(int *)(in_ECX + 4);
    if (((CBasePlayer *)*(float *)(iVar6 + 300) != local_8) || (*(int *)(in_ECX + 0xfc) == 0)) {
      *(undefined4 *)(iVar6 + 0x134) = 0;
      iVar6 = *(int *)(in_ECX + 4);
    }
    *(undefined4 *)(iVar6 + 0x130) = 0;
    uVar9 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_8);
    fVar16 = (float10)FUN_1000f390(uVar9);
    *(float *)(in_ECX + 0x4f4) = (float)(fVar16 + (float10)*DAT_10223188);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x260) = 0x40800000;
    *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(in_ECX + 0x4f4);
    if ((CBasePlayer *)*(float *)(*(int *)(in_ECX + 4) + 300) != local_8) {
      *(CBasePlayer **)(*(int *)(in_ECX + 4) + 300) = local_8;
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134) = 0;
      FUN_1000e9e0();
    }
  }
  iVar6 = FUN_10017780();
  if (iVar6 != 0) {
    piVar10 = (int *)FUN_100177a0();
    iVar6 = (**(code **)(*piVar10 + 0xbc))();
    if (iVar6 == 0) {
      iVar6 = FUN_100177a0();
      FUN_100125e0(*(undefined4 *)(iVar6 + 4));
      pCVar8 = (CBasePlayer *)FUN_10017790();
      if (pCVar8 == in_ECX) goto LAB_100f004b;
    }
    FUN_10017740(0);
    *(float *)(in_ECX + 0x26ac) = *DAT_10223188;
    pcVar14 = "cpr_up";
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x4000) != 0) {
      pcVar14 = "crouch_cpr_up";
    }
    local_8 = (CBasePlayer *)FUN_1000e9b0(pcVar14);
    if (local_8 == (CBasePlayer *)0xffffffff) {
      local_8 = (CBasePlayer *)0x0;
    }
    iVar6 = *(int *)(in_ECX + 4);
    if (((CBasePlayer *)*(float *)(iVar6 + 300) != local_8) || (*(int *)(in_ECX + 0xfc) == 0)) {
      *(undefined4 *)(iVar6 + 0x134) = 0;
      iVar6 = *(int *)(in_ECX + 4);
    }
    *(undefined4 *)(iVar6 + 0x130) = 0;
    uVar9 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_8);
    fVar16 = (float10)FUN_1000f390(uVar9);
    *(float *)(in_ECX + 0x4f4) = (float)(fVar16 + (float10)*DAT_10223188);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x260) = 0x40800000;
    *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(in_ECX + 0x4f4);
    if ((CBasePlayer *)*(float *)(*(int *)(in_ECX + 4) + 300) != local_8) {
      *(CBasePlayer **)(*(int *)(in_ECX + 4) + 300) = local_8;
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134) = 0;
      FUN_1000e9e0();
    }
  }
LAB_100f004b:
  if (((*(float *)(*(int *)(in_ECX + 4) + 0x260) == 4.0) &&
      (*(float *)(in_ECX + 0x4fc) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x4fc)))
     && (iVar6 = FUN_10017780(), iVar6 == 0)) {
    FUN_100f67f0();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x260) = 0;
    fVar1 = *DAT_10223188;
    *(float *)(in_ECX + 0x4f4) = fVar1;
    *(float *)(in_ECX + 0x504) = fVar1;
    FUN_100f2a50(1);
  }
  iVar6 = FUN_10017780();
  if (((iVar6 != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x184) & 0x20) != 0)) &&
     (*(float *)(in_ECX + 0x26ac) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x26ac)))
  {
    iVar6 = FUN_100177a0();
    local_8 = (CBasePlayer *)FUN_100125e0(*(undefined4 *)(iVar6 + 4));
    if (local_8 != (CBasePlayer *)0x0) {
      FUN_100f1860();
      FUN_10017740(0);
      FUN_10017740(0);
      *(float *)(in_ECX + 0x26ac) = *DAT_10223188;
      pcVar14 = "cpr_up";
      if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x4000) != 0) {
        pcVar14 = "crouch_cpr_up";
      }
      iVar11 = FUN_1000e9b0(pcVar14);
      iVar6 = *(int *)(in_ECX + 4);
      if (iVar11 == -1) {
        iVar11 = 0;
      }
      if ((*(int *)(iVar6 + 300) != iVar11) || (*(int *)(in_ECX + 0xfc) == 0)) {
        *(undefined4 *)(iVar6 + 0x134) = 0;
        iVar6 = *(int *)(in_ECX + 4);
      }
      *(undefined4 *)(iVar6 + 0x130) = 0;
      uVar9 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),iVar11);
      fVar16 = (float10)FUN_1000f390(uVar9);
      *(float *)(in_ECX + 0x4f4) = (float)(fVar16 + (float10)*DAT_10223188);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x260) = 0x40800000;
      *(undefined4 *)(in_ECX + 0x4fc) = *(undefined4 *)(in_ECX + 0x4f4);
      if (*(int *)(*(int *)(in_ECX + 4) + 300) != iVar11) {
        *(int *)(*(int *)(in_ECX + 4) + 300) = iVar11;
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134) = 0;
        FUN_1000e9e0();
      }
    }
  }
  (**(code **)(*DAT_10222ee4 + 0x54))();
  if (DAT_10222f04 != 0) {
    return;
  }
  FUN_10119320(*(int *)(in_ECX + 4) + 0x74);
  FUN_100e5000();
  FUN_100f9370();
  if ((DAT_10222ee4 == (int *)0x0) || (iVar6 = (**(code **)(*DAT_10222ee4 + 0x14))(), iVar6 == 0)) {
    *(uint *)(in_ECX + 0x2500) = *(uint *)(in_ECX + 0x2500) | 2;
  }
  else {
    *(uint *)(in_ECX + 0x2500) = *(uint *)(in_ECX + 0x2500) & 0xfffffffd;
  }
  (**(code **)(*(int *)in_ECX + 600))();
  FUN_100dce80();
  FUN_100dce60();
  FUN_100dca10();
  if (0 < *(int *)(*(int *)(in_ECX + 4) + 0x174)) {
    if ((DAT_10222ee4 != (int *)0x0) && (iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar6 != 0))
    {
      CBasePlayer::MultiplayerPlayerDeathThink(in_ECX);
      return;
    }
    CBasePlayer::PlayerDeathThink(in_ECX);
    return;
  }
  iVar11 = FUN_10017780();
  iVar6 = *(int *)(in_ECX + 4);
  if (iVar11 != 0) {
    if ((*(uint *)(iVar6 + 0x1a8) & 0x1000) != 0) {
      return;
    }
    FUN_100deff0(0);
    return;
  }
  uVar5 = *(uint *)(iVar6 + 0x1a8) | 0x1000000;
  if ((*(uint *)(in_ECX + 0x22e4) & 2) == 0) {
    uVar5 = *(uint *)(iVar6 + 0x1a8) & 0xfeffffff;
  }
  *(uint *)(iVar6 + 0x1a8) = uVar5;
  if (((byte)in_ECX[0x22e4] & 2) == 0) {
    if (((byte)in_ECX[0x24d4] & 0x80) != 0) {
      *(undefined4 *)(in_ECX + 0x24d4) = 0xc0;
    }
    goto LAB_100f047a;
  }
  iVar6 = *(int *)(*(int *)(in_ECX + 4) + 0x1a0);
  if ((iVar6 == 0) && (iVar6 = (*DAT_1022305c)(0), iVar6 == 0)) {
    iVar6 = *(int *)(in_ECX + 4);
LAB_100f0331:
    local_c = *(float *)(iVar6 + 0x10) - 38.0;
    local_10 = *(float *)(iVar6 + 0xc) + 0.0;
    local_14 = *(float *)(iVar6 + 8) + 0.0;
    FUN_1011a800((float *)(iVar6 + 8),&local_14,1,*(undefined4 *)(iVar6 + 0x20c),local_4c);
    if (((local_3c == 1.0) || (local_1c == 0)) ||
       ((piVar10 = *(int **)(local_1c + 0x7c), piVar10 == (int *)0x0 ||
        ((uVar5 = (**(code **)(*piVar10 + 0x40))(), (uVar5 & 0x40) == 0 ||
         (iVar6 = (**(code **)(*piVar10 + 0xb4))(*(undefined4 *)(in_ECX + 4)), iVar6 == 0)))))) {
LAB_100f03bd:
      *(uint *)(in_ECX + 0x22e4) = *(uint *)(in_ECX + 0x22e4) & 0xfffffffd;
      *(undefined4 *)(in_ECX + 0x24d4) = 0xc0;
      return;
    }
  }
  else {
    piVar10 = *(int **)(iVar6 + 0x7c);
    iVar6 = *(int *)(in_ECX + 4);
    if (piVar10 == (int *)0x0) goto LAB_100f0331;
    if ((((*(uint *)(iVar6 + 0x1a8) & 0x200) == 0) || ((*(byte *)(piVar10[1] + 0x1a4) & 2) != 0)) ||
       ((*(uint *)(iVar6 + 0x184) & 0x600) != 0)) goto LAB_100f03bd;
  }
  iVar6 = *(int *)(in_ECX + 4);
  *(undefined8 *)(iVar6 + 0x20) = DAT_10222f34;
  *(undefined4 *)(iVar6 + 0x28) = DAT_10222f3c;
  if (((*(uint *)(in_ECX + 0x22b0) & 8) != 0) || ((*(uint *)(in_ECX + 0x22b0) & 0x10) != 0)) {
    (**(code **)(*piVar10 + 0xe8))();
    uVar5 = FUN_100f6a40((int)*(float *)(piVar10[1] + 0x1fc),*(undefined4 *)(piVar10[1] + 0x188));
    *(uint *)(in_ECX + 0x24d4) = uVar5 | 0xc0;
  }
LAB_100f047a:
  iVar6 = *(int *)(in_ECX + 4);
  if ((*(byte *)(iVar6 + 0x184) & 2) != 0) {
    (**(code **)(*(int *)in_ECX + 0x244))();
    iVar6 = *(int *)(in_ECX + 4);
  }
  if ((((*(byte *)(iVar6 + 0x184) & 4) != 0) || ((*(uint *)(iVar6 + 0x1a8) & 0x4000) != 0)) ||
     (((byte)in_ECX[0x22e4] & 8) != 0)) {
    (**(code **)(*(int *)in_ECX + 0x248))();
    iVar6 = *(int *)(in_ECX + 4);
  }
  if ((*(uint *)(iVar6 + 0x1a8) & 0x200) == 0) {
    *(uint *)(in_ECX + 0x22c4) = *(uint *)(iVar6 + 0x28) ^ 0x80000000;
  }
  FUN_10017740(0);
  if (((byte)in_ECX[0x22e4] & 4) != 0) {
    iVar6 = *(int *)(in_ECX + 4);
    *(undefined8 *)(iVar6 + 0x20) = DAT_10222f34;
    *(undefined4 *)(iVar6 + 0x28) = DAT_10222f3c;
  }
  return;
}

