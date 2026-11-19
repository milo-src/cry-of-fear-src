// rea decompile_all
// name: FUN_10120eb0
// address: 0x10120eb0
// body: available
// range: 0x10120eb0-0x10121514 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10120eb0(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019e1a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_1013f5f0((int)DAT_10223188[0x26] + (int)DAT_10223188[3],&DAT_101a924c,
                       DAT_1021baf4 ^ (uint)&stack0xfffffffc);
  DAT_10222f14 = 0;
  DAT_10222f10 = (uint)(iVar2 != 0);
  DAT_10223190 = in_ECX;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  DAT_10222f20 = 0;
  DAT_10226714 = 0;
  (*DAT_10223038)("sv_gravity",&DAT_101e6f4c);
  (*DAT_10223038)("sv_stepsize",&DAT_101e6f50);
  (*DAT_10223038)("room_type",&DAT_101a1234);
  if (DAT_10222ee4 != (int *)0x0) {
    FUN_1013dba5(DAT_10222ee4,0xdc);
  }
  if (DAT_10223188[3] != 0.0) {
    pcVar8 = "c_doc_city";
    pbVar3 = (byte *)((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_10120fb3:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_10120fb8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_10120fb3;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_10120fb8:
    if (uVar4 == 0) {
      (*DAT_10223034)("difficulty",0x40000000);
    }
  }
  DAT_10222ee4 = (int *)FUN_100af710();
  if (DAT_10222ee4 != (int *)0x0) {
    *(undefined1 *)(DAT_10222ee4 + 0x2a) = 0;
    *(undefined1 *)(DAT_10222ee4 + 0x35) = 0;
    DAT_10222ee4[0x34] = 0;
    DAT_10222ee4[0x33] = 0;
    *(undefined1 *)(DAT_10222ee4 + 0x35) = 0;
    DAT_10222ee4[0x36] = 0;
    if ((DAT_10222ee4 != (int *)0x0) && (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0))
    {
      if (*(int *)(*(int *)(in_ECX + 4) + 0x248) != 0) {
        *(undefined1 *)(DAT_10222ee4 + 0x2a) = 1;
        if (DAT_10222e10 != 0) {
          _memset((void *)(DAT_10222e10 + 4),0,0x10f38);
        }
        fVar10 = (float10)(*DAT_1022302c)("mp_footsteps");
        if ((float)fVar10 <= 1.0) {
          DAT_10222ee4[0x36] = 0;
        }
        else {
          fVar10 = (float10)(*DAT_1022302c)("mp_footsteps");
          DAT_10222ee4[0x36] = (int)(float)(fVar10 + (float10)*DAT_10223188);
        }
        iVar2 = 1;
        do {
          *(undefined1 *)((int)DAT_10222ee4 + iVar2 + 0xa9) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x21);
      }
      if (DAT_10222e10 == 0) {
        iVar2 = FUN_1013e1e9(0x10f3c);
        local_8 = 0;
        if (iVar2 == 0) {
          local_8 = 0xffffffff;
          DAT_10222e10 = 0;
        }
        else {
          DAT_10222e10 = FUN_10029070();
          local_8 = 0xffffffff;
        }
      }
      goto LAB_10121155;
    }
  }
  if (DAT_10222e10 != 0) {
    FUN_1013dba5(DAT_10222e10,0x10f3c);
  }
LAB_10121155:
  DAT_10230d70 = (int *)FUN_101004f0(0);
  (**(code **)(*DAT_10230d70 + 0x2c))();
  if (DAT_10230d70 == (int *)0x0) {
    (*DAT_1022303c)(1,"**COULD NOT CREATE SOUNDENT**\n");
  }
  FUN_101207e0();
  FUN_100fdf70();
  FUN_100fef60();
  FUN_1011fd90();
  FUN_1001cf70();
  FUN_10116a30("common/null.wav");
  FUN_10116a30("common/bodydrop1.wav");
  FUN_10116a30("common/bodydrop2.wav");
  FUN_10116a30("common/bodydrop3.wav");
  FUN_10116a30("common/bodydrop4.wav");
  DAT_10222eec = 0;
  FUN_10116990("models/hgibs.mdl");
  FUN_10116990("models/agibs.mdl");
  FUN_10116a30("common/npc_step1.wav");
  FUN_10116a30("common/npc_step2.wav");
  FUN_10116a30("common/npc_step3.wav");
  FUN_10116a30("common/npc_step4.wav");
  FUN_10116a30("weapons/ric1.wav");
  FUN_10116a30("weapons/ric2.wav");
  FUN_10116a30("weapons/ric3.wav");
  FUN_10116a30("weapons/ric4.wav");
  FUN_10116a30("weapons/ric5.wav");
  FUN_10116990("sprites/null.spr");
  FUN_10116990("sprites/muzzleflash.spr");
  FUN_101218a0(1);
  if (DAT_10223188[3] != 0.0) {
    pcVar8 = "c_start";
    pbVar3 = (byte *)((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
    do {
      bVar1 = *pbVar3;
      bVar9 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_101212a1:
        uVar4 = -(uint)bVar9 | 1;
        goto LAB_101212a6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar9 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_101212a1;
      pbVar3 = pbVar3 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_101212a6:
    if (uVar4 == 0) {
      FUN_10119790("dave_benson_phillips");
    }
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
    FUN_10119790("monster_booksimon");
  }
  iVar2 = 0;
  do {
    iVar5 = FUN_100b6a00(iVar2);
    (*DAT_10222ff4)(iVar2,iVar5 + (int)DAT_10223188[0x26]);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xe);
  (*DAT_10222ff4)(0x3f,&DAT_101cb218);
  (*DAT_10222ff4)(0x3e,&DAT_101cb218);
  (*DAT_10222ff4)(0x3d,&DAT_101cb218);
  uVar4 = 0;
  do {
    uVar6 = (*DAT_10222ff8)(*(undefined4 *)((int)&PTR_s__shot1_1021b940 + uVar4));
    *(undefined4 *)((int)&DAT_1021b944 + uVar4) = uVar6;
    uVar4 = uVar4 + 8;
  } while (uVar4 < 0x160);
  FUN_100cdf20();
  iVar2 = FUN_100cbbf0((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
  if (iVar2 == 0) {
    FUN_100ca780();
  }
  else {
    iVar2 = FUN_100cc810((int)DAT_10223188[0x26] + (int)DAT_10223188[3]);
    if (iVar2 == 0) {
      (*DAT_1022303c)(1,"*Error opening .NOD file\n");
      FUN_100ca780();
    }
    else {
      (*DAT_1022303c)(1,"\n*Graph Loaded!\n");
    }
  }
  fVar11 = *(float *)(*(int *)(in_ECX + 4) + 0x1fc);
  if (fVar11 <= 0.0) {
    fVar11 = 4096.0;
  }
  (*DAT_10223034)("sv_zmax",fVar11);
  iVar2 = *(int *)(*(int *)(in_ECX + 4) + 0x1d4);
  if (iVar2 != 0) {
    (*DAT_1022303c)(2,"Chapter title: %s\n",(int)DAT_10223188[0x26] + iVar2);
    piVar7 = (int *)FUN_10017950("env_message",&DAT_10222f34,&DAT_10222f34,0);
    if (piVar7 != (int *)0x0) {
      piVar7[0x1e] = (int)CBaseEntity::SUB_CallUseToggle;
      *(undefined4 *)(piVar7[1] + 0x1d8) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1d4);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1d4) = 0;
      (**(code **)(*piVar7 + 8))(0x3e99999a);
      *(undefined4 *)(piVar7[1] + 0x1a4) = 1;
    }
  }
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  (*DAT_10223034)("v_dark",uVar6);
  DAT_10222f00 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) >> 1 & 1;
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3f800000;
  }
  (*DAT_10223034)("mp_defaultteam",uVar6);
  _memset((void *)(in_ECX + 0x100),0,0x400);
  ExceptionList = local_10;
  return;
}

