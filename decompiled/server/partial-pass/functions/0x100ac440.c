// rea decompile_all
// name: CBreakable::Die
// address: 0x100ac440
// body: available
// range: 0x100ac440-0x100acb2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBreakable::Die(void) */

void __thiscall CBreakable::Die(CBreakable *this)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fVar7;
  char *pcVar8;
  undefined4 local_440;
  undefined4 local_43c;
  float local_438;
  undefined4 local_434;
  undefined4 local_430;
  float local_42c;
  float local_428;
  float local_424;
  float local_420;
  undefined1 local_41c [4];
  undefined8 local_418;
  float local_410;
  float local_40c;
  int local_408 [256];
  uint local_8;
  
                    /* 0xac440  85  ?Die@CBreakable@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar3 = (*DAT_102230b0)(0,0x1d);
  iVar4 = iVar3 + 0x5f;
  if (iVar3 - 3U < 5) {
    iVar4 = 100;
  }
  local_410 = *(float *)(this + 4);
  fVar6 = (float10)(*DAT_102230b4)(0x3f59999a,0x3f800000);
  local_418 = (double)fVar6;
  fVar7 = (float)(ABS((double)*(float *)((int)local_410 + 0x164)) / 100.0 + local_418);
  local_40c = 1.0;
  if (fVar7 <= 1.0) {
    local_40c = fVar7;
  }
  switch(*(undefined4 *)(this + 0xec)) {
  case 0:
    iVar3 = (*DAT_102230b0)(0,1);
    if (iVar3 == 0) {
      pcVar8 = "debris/bustglass1.wav";
LAB_100ac547:
      FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,pcVar8,local_40c,0x3f4ccccd,0,iVar4
                  );
    }
    else if (iVar3 == 1) {
      pcVar8 = "debris/bustglass2.wav";
      goto LAB_100ac547;
    }
    uVar5 = 1;
    break;
  case 1:
    iVar3 = (*DAT_102230b0)(0,1);
    if (iVar3 == 0) {
      pcVar8 = "debris/bustcrate1.wav";
LAB_100ac5bc:
      FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,pcVar8,local_40c,0x3f4ccccd,0,iVar4
                  );
    }
    else if (iVar3 == 1) {
      pcVar8 = "debris/bustcrate2.wav";
      goto LAB_100ac5bc;
    }
    uVar5 = 8;
    break;
  case 2:
  case 6:
    iVar3 = (*DAT_102230b0)(0,1);
    if (iVar3 == 0) {
      pcVar8 = "debris/bustmetal1.wav";
LAB_100ac631:
      FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,pcVar8,local_40c,0x3f4ccccd,0,iVar4
                  );
    }
    else if (iVar3 == 1) {
      pcVar8 = "debris/bustmetal2.wav";
      goto LAB_100ac631;
    }
    uVar5 = 2;
    break;
  case 3:
    iVar3 = (*DAT_102230b0)(0,1);
    if (iVar3 == 0) {
      pcVar8 = "debris/bustflesh1.wav";
LAB_100ac6a6:
      FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,pcVar8,local_40c,0x3f4ccccd,0,iVar4
                  );
    }
    else if (iVar3 == 1) {
      pcVar8 = "debris/bustflesh2.wav";
      goto LAB_100ac6a6;
    }
    uVar5 = 4;
    break;
  case 4:
  case 8:
    iVar3 = (*DAT_102230b0)(0,1);
    if (iVar3 == 0) {
      pcVar8 = "debris/bustconcrete1.wav";
LAB_100ac71b:
      FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,pcVar8,local_40c,0x3f4ccccd,0,iVar4
                  );
    }
    else if (iVar3 == 1) {
      pcVar8 = "debris/bustconcrete2.wav";
      goto LAB_100ac71b;
    }
    uVar5 = 0x40;
    break;
  case 5:
    FUN_100fc9f0(*(undefined4 *)((int)local_410 + 0x20c),2,"debris/bustceiling.wav",local_40c,
                 0x3f4ccccd,0,iVar4);
  default:
    uVar5 = 0;
  }
  local_40c = 0.0;
  if (*(int *)(this + 0xf0) == 1) {
    local_40c = DAT_10222f28 * 200.0;
    local_418 = (double)CONCAT44(DAT_10222f2c * 200.0,(undefined4)local_418);
    local_410 = DAT_10222f30 * 200.0;
  }
  else {
    local_418 = (double)((ulonglong)local_418 & 0xffffffff);
    local_410 = 0.0;
  }
  iVar4 = *(int *)(this + 4);
  local_428 = (*(float *)(iVar4 + 0xe8) + *(float *)(iVar4 + 0xdc)) * 0.5 + *(float *)(iVar4 + 8);
  local_424 = (*(float *)(iVar4 + 0xe0) + *(float *)(iVar4 + 0xec)) * 0.5 + *(float *)(iVar4 + 0xc);
  local_420 = (*(float *)(iVar4 + 0xe4) + *(float *)(iVar4 + 0xf0)) * 0.5 + *(float *)(iVar4 + 0x10)
  ;
  (*DAT_10223000)(4,0x17,&local_428,0);
  (*DAT_10223008)(0x6c);
  (*DAT_1022301c)(local_428);
  (*DAT_1022301c)(local_424);
  (*DAT_1022301c)(local_420);
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(this + 4) + 0xf4));
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(this + 4) + 0xf8));
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(this + 4) + 0xfc));
  (*DAT_1022301c)(local_40c);
  (*DAT_1022301c)(local_418._4_4_);
  (*DAT_1022301c)(local_410);
  (*DAT_10223008)(10);
  (*DAT_10223010)(*(undefined4 *)(this + 0xf4));
  (*DAT_10223008)(0);
  (*DAT_10223008)(0x19);
  (*DAT_10223008)(uVar5);
  (*DAT_10223004)();
  iVar4 = *(int *)(this + 4);
  local_440 = *(undefined4 *)(iVar4 + 0xc4);
  local_43c = *(undefined4 *)(iVar4 + 200);
  local_434 = *(undefined4 *)(iVar4 + 0xd0);
  local_430 = *(undefined4 *)(iVar4 + 0xd4);
  local_438 = *(float *)(iVar4 + 0xd8);
  local_42c = local_438 + 8.0;
  iVar4 = FUN_10118390(local_408,0x100,&local_440,&local_434,0x200);
  if ((iVar4 != 0) && (iVar3 = 0, 0 < iVar4)) {
    do {
      puVar1 = (uint *)(*(int *)(local_408[iVar3] + 4) + 0x1a8);
      *puVar1 = *puVar1 & 0xfffffdff;
      piVar2 = local_408 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*piVar2 + 4) + 0x1a0) = 0;
    } while (iVar3 < iVar4);
  }
  if (*(int *)(this + 0x104) == 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x1d0) = 0;
  }
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x80;
  *(undefined4 *)(*(int *)(this + 4) + 0x170) = 0;
  FUN_10102930(0,3,0);
  iVar4 = *(int *)(this + 0x104);
  if (iVar4 == -1) {
    *(code **)(this + 0x80) = RespawnUse;
  }
  else {
    if (iVar4 == 0) {
      *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
      fVar7 = 0.1;
    }
    else {
      fVar7 = (float)iVar4;
      *(code **)(this + 0x78) = RespawnThink;
    }
    (**(code **)(*(int *)this + 8))(fVar7);
  }
  if (*(int *)(this + 0x100) != 0) {
    iVar4 = *(int *)(this + 4);
    uVar5 = FUN_10012420(local_41c,iVar4,iVar4 + 0x50,*(undefined4 *)(iVar4 + 0x20c));
    FUN_10017950(*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x100),uVar5);
  }
  iVar4 = *(int *)(this + 4);
  if (0 < *(int *)(iVar4 + 0x188)) {
    uVar5 = (**(code **)(*(int *)this + 0xfc))
                      (local_41c,iVar4 + 0x50,*(undefined4 *)(iVar4 + 0x20c),*(int *)(iVar4 + 0x188)
                       ,1);
    FUN_100aa9a0(uVar5);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

