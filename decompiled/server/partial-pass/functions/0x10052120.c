// rea decompile_all
// name: CM16::Shoot
// address: 0x10052120
// body: available
// range: 0x10052120-0x100527d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CM16::Shoot(void) */

void __thiscall CM16::Shoot(CM16 *this)

{
  uint *puVar1;
  CM16 CVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_90;
  int iStack_8c;
  float *pfStack_88;
  int *piStack_84;
  int iStack_80;
  float *pfStack_7c;
  float *pfStack_78;
  char *local_74;
  undefined4 uStack_70;
  float *pfStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0x52120  268  ?Shoot@CM16@@QAEXXZ */
  if (*(int *)(this + 0x128) != 0) {
    return;
  }
  if (*(int *)(this + 0x140) != 0) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x1c4) == 3) {
    if (*DAT_10223188 < *(float *)(this + 0x1b0) || *DAT_10223188 == *(float *)(this + 0x1b0)) {
      return;
    }
    CVar2 = this[0x178];
    iVar5 = *(int *)this;
joined_r0x10052209:
    if (CVar2 == (CM16)0x0) {
      pfStack_6c = (float *)0x0;
      uStack_70 = 1;
      if (this[0x200] == (CM16)0x0) {
        local_74 = (char *)0x17;
      }
      else {
        local_74 = (char *)0x18;
      }
      pfStack_78 = (float *)0x10052196;
      (**(code **)(iVar5 + 0x198))();
    }
    else {
      pfStack_6c = (float *)0x0;
      uStack_70 = 1;
      local_74 = (char *)0x19;
      pfStack_78 = (float *)0x10052217;
      (**(code **)(iVar5 + 0x198))();
    }
    pfStack_78 = (float *)0x100521a0;
    (**(code **)(*(int *)this + 400))();
    *(float *)(this + 0x1b0) = *DAT_10223188 + 0.25;
    return;
  }
  if (*(int *)(this + 0x1e4) < 1) {
    if (*(int *)(this + 0x1b8) == 0) {
      pfStack_6c = (float *)0x100521e0;
      (**(code **)(*(int *)this + 0x1c0))();
      return;
    }
    if (*DAT_10223188 < *(float *)(this + 0x1b0) || *DAT_10223188 == *(float *)(this + 0x1b0)) {
      return;
    }
    CVar2 = this[0x178];
    iVar5 = *(int *)this;
    goto joined_r0x10052209;
  }
  pfStack_6c = (float *)0x1;
  uStack_70 = *(undefined4 *)(this + 0x1fc);
  local_8 = DAT_10223188[10] * 40.0;
  local_14 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
  local_10 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + DAT_10223188[0xc] * 40.0;
  local_18 = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + local_8;
  local_c = DAT_10223188[0x10] * 20.0;
  iVar5 = *(int *)(this + 4);
  local_24 = *(float *)(iVar5 + 0x178) + *(float *)(iVar5 + 8) + DAT_10223188[10] * 80.0 + local_c;
  local_20 = *(float *)(iVar5 + 0x17c) + *(float *)(iVar5 + 0xc) + DAT_10223188[0xb] * 80.0 +
             DAT_10223188[0x11] * 20.0;
  local_1c = *(float *)(iVar5 + 0x180) + *(float *)(iVar5 + 0x10) + DAT_10223188[0xc] * 80.0 +
             DAT_10223188[0x12] * 20.0;
  local_74 = *(char **)(iVar5 + 0x54);
  pfStack_78 = &local_18;
  pfStack_7c = &local_24;
  iStack_80 = 0x1005237a;
  FUN_1011cf70();
  iStack_80 = *(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c);
  piStack_84 = (int *)0x0;
  pfStack_88 = (float *)DAT_10226490;
  iStack_8c = 1;
  uStack_90 = 0x10052399;
  (*DAT_10223000)();
  uStack_90 = *(undefined4 *)(*(int *)(this + 4) + 0x20c);
  uVar4 = (*DAT_10223064)();
  (*DAT_10223010)(uVar4);
  (*DAT_10223020)("aurora/gunsmoke.aur");
  (*DAT_10223008)(1);
  (*DAT_10223020)("models/weapons/m16/v_m16.mdl");
  (*DAT_10223010)(0);
  pfStack_6c = (float *)0x100523de;
  (*DAT_10223004)();
  iVar5 = *(int *)(this + 0x160);
  if (*(char *)(iVar5 + 0x21ea) == '\0') {
    *(int *)(this + 0x1e4) = *(int *)(this + 0x1e4) + -1;
  }
  iVar3 = *(int *)(iVar5 + 0x2814);
  pfStack_6c = (float *)(*(int *)(iVar5 + 4) + 0x74);
  uStack_70 = 0x1005240f;
  FUN_10119320();
  pfStack_6c = &local_30;
  uStack_70 = 0x10052424;
  (**(code **)(**(int **)(this + 0x160) + 0x228))();
  uStack_70 = 0;
  local_74 = (char *)0x0;
  pfStack_78 = (float *)0x0;
  pfStack_7c = *(float **)(this + 0x168);
  local_3c = local_30 + DAT_10223188[0x10] * 32.0;
  local_38 = local_2c + DAT_10223188[0x11] * 32.0;
  local_34 = local_28 + DAT_10223188[0x12] * 32.0;
  iStack_80 = 0;
  piStack_84 = (int *)0x0;
  pfStack_88 = &local_3c;
  iStack_8c = *(int *)(*(int *)(this + 0x160) + 4) + 8;
  uStack_90 = 0;
  (*DAT_10223134)(iVar3 != 1,*(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c),
                  DAT_10231f50);
  uStack_70 = 0;
  local_74 = "m16_shoot";
  pfStack_78 = (float *)0x100524d7;
  FUN_100ea240();
  uStack_70 = 2;
  local_74 = (char *)0x0;
  pfStack_78 = (float *)0x100524e1;
  iVar5 = (*DAT_102230b0)();
  if (iVar5 == 0) {
    uStack_70 = 0x3f800000;
LAB_10052527:
    pfStack_78 = (float *)0x3f800000;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 != 2) goto LAB_10052541;
      uStack_70 = 0xbf800000;
      goto LAB_10052527;
    }
    uStack_70 = 0x3f800000;
    pfStack_78 = (float *)0xbf800000;
  }
  local_74 = (char *)0x3f800000;
  pfStack_7c = (float *)0x10052541;
  FUN_100f91b0();
LAB_10052541:
  pfStack_7c = (float *)0x40000000;
  if ((*(uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x1a8) & 0x4000) == 0) {
    pfStack_7c = (float *)0x40a00000;
    pfStack_78 = (float *)0x3e800000;
    local_74 = (char *)0x3e19999a;
  }
  else {
    pfStack_78 = (float *)0x3dcccccd;
    local_74 = (char *)0x3dcccccd;
  }
  iStack_80 = *(int *)(*(int *)(this + 0x160) + 4) + 8;
  uStack_70 = 0x40000000;
  piStack_84 = (int *)0x100525a8;
  FUN_10119de0();
  uStack_70 = 0;
  local_74 = (char *)0x1;
  if (this[0x178] == (CM16)0x0) {
    if (this[0x200] == (CM16)0x0) {
      pfStack_78 = (float *)0x2;
    }
    else {
      pfStack_78 = (float *)0x9;
    }
    pfStack_7c = (float *)0x100525dd;
    (**(code **)(*(int *)this + 0x198))();
  }
  else {
    pfStack_78 = (float *)0x15;
    pfStack_7c = (float *)0x100525c4;
    (**(code **)(*(int *)this + 0x198))();
  }
  pfStack_7c = (float *)0x5;
  iStack_80 = 0x100525ea;
  FUN_100f2a50();
  puVar1 = (uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x118);
  *puVar1 = *puVar1 | 2;
  iVar5 = *(int *)(*(int *)(this + 0x160) + 4);
  local_48 = *(float *)(iVar5 + 0x68) + *(float *)(iVar5 + 0x74);
  local_44 = *(float *)(iVar5 + 0x6c) + *(float *)(iVar5 + 0x78);
  local_40 = *(float *)(iVar5 + 0x70) + *(float *)(iVar5 + 0x7c);
  pfStack_7c = &local_48;
  iStack_80 = 0x10052639;
  FUN_10119320();
  pfStack_7c = (float *)&local_60;
  iStack_80 = 0x1005264e;
  (**(code **)(**(int **)(this + 0x160) + 0x228))();
  piStack_84 = &local_54;
  iStack_80 = 0x3e31d0d4;
  pfStack_88 = (float *)0x10052665;
  FUN_100dfea0();
  *(float *)(this + 0x19c) = *(float *)(this + 0x198) + *(float *)(this + 0x19c);
  *(float *)(this + 0x1a0) = *DAT_10223188 + 0.35;
  iStack_80 = *(undefined4 *)(*(int *)(this + 0x160) + 0x2288);
  piStack_84 = *(int **)(*(int *)(this + 0x160) + 4);
  pfStack_88 = (float *)(int)_DAT_10226854;
  iStack_8c = 2;
  uStack_90 = 3;
  FUN_10088ca0(&local_48,1,local_60,local_5c,local_58,local_54,local_50,local_4c,
               *(undefined4 *)(this + 0x18c),*(undefined4 *)(this + 400),
               *(undefined4 *)(this + 0x194),0x46000000);
  iStack_80 = 0x40400000;
  piStack_84 = (int *)0x10052748;
  FUN_100f9100();
  piStack_84 = *(int **)(this + 0x160);
  iStack_80 = 1;
  (**(code **)(*piStack_84 + 0x104))(&uStack_90);
  FUN_10116a40("weapons_new/m16/m16_fire.wav",0,1);
  *(undefined4 *)(*(int *)(this + 0x160) + 0x2298) = 1;
  *(float *)(*(int *)(this + 0x160) + 0x22a0) = *DAT_10223188 + 0.2;
  if ((this[0x200] != (CM16)0x0) &&
     (*(int *)(this + 0x1f8) = *(int *)(this + 0x1f8) + 1, *(int *)(this + 0x1f8) < 3)) {
    piStack_84 = (int *)0x3d4ccccd;
    pfStack_88 = (float *)0x100527cb;
    (**(code **)(*(int *)this + 8))();
    *(code **)(this + 0x78) = Shoot;
  }
  return;
}

