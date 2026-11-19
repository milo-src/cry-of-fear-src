// rea decompile_all
// name: CDualWeapon::VP70Shoot
// address: 0x10036620
// body: available
// range: 0x10036620-0x10036dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDualWeapon::VP70Shoot(void) */

void __thiscall CDualWeapon::VP70Shoot(CDualWeapon *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uStack_58;
  float *pfStack_54;
  float *pfStack_50;
  int *local_4c;
  undefined4 uStack_48;
  float *pfStack_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
                    /* 0x36620  356  ?VP70Shoot@CDualWeapon@@QAEXXZ */
  if (*(int *)(this + 0x128) != 0) {
    return;
  }
  if (DAT_102119d0 != 0) {
    return;
  }
  iVar4 = *(int *)(this + 0x160);
  uVar2 = *(uint *)(*(int *)(iVar4 + 4) + 0x1a8);
  if ((uVar2 & 0x40000) != 0) {
    return;
  }
  if ((uVar2 & 0x200) == 0) {
    return;
  }
  if (this[0x1fc] == (CDualWeapon)0x0) {
    iVar3 = *(int *)(iVar4 + 0x5e0);
  }
  else {
    iVar3 = *(int *)(iVar4 + 0x5dc);
  }
  if (iVar3 < 1) {
    if (*DAT_10223188 <= _DAT_102119ac) {
      return;
    }
    pfStack_44 = (float *)0x1003669d;
    (**(code **)(*(int *)this + 400))();
    _DAT_102119ac = *DAT_10223188 + 0.25;
    return;
  }
  if (*(int *)(*(int *)(iVar4 + 4) + 0x1c4) == 3) {
    if (*DAT_10223188 < *(float *)(this + 0x1b0) || *DAT_10223188 == *(float *)(this + 0x1b0)) {
      return;
    }
    pfStack_44 = (float *)0x100366ef;
    (**(code **)(*(int *)this + 400))();
    *(float *)(this + 0x1b0) = *DAT_10223188 + 0.8;
    return;
  }
  fVar6 = DAT_10223188[10] * 40.0;
  if (this[0x1fc] == (CDualWeapon)0x0) {
    local_8 = DAT_10223188[0xc] * 40.0;
    uStack_48 = *(undefined4 *)(this + 0x21c);
    local_38 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
    local_34 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + local_8;
    local_3c = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + fVar6;
    local_c = DAT_10223188[0x10] * 20.0;
    iVar4 = *(int *)(this + 4);
    local_30 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8) + DAT_10223188[10] * 80.0 + local_c
    ;
    local_2c = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc) + DAT_10223188[0xb] * 80.0 +
               DAT_10223188[0x11] * 20.0;
    local_28 = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10) + DAT_10223188[0xc] * 80.0 +
               DAT_10223188[0x12] * 20.0;
    local_4c = *(int **)(iVar4 + 0x54);
    pfStack_50 = &local_3c;
    pfStack_54 = &local_30;
  }
  else {
    uStack_48 = *(undefined4 *)(this + 0x21c);
    local_2c = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
    local_28 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + DAT_10223188[0xc] * 40.0;
    local_30 = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + fVar6;
    local_c = DAT_10223188[0x10] * 20.0;
    iVar4 = *(int *)(this + 4);
    local_3c = (*(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8) + DAT_10223188[10] * 80.0) -
               local_c;
    local_38 = (*(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc) + DAT_10223188[0xb] * 80.0) -
               DAT_10223188[0x11] * 20.0;
    local_34 = (*(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10) + DAT_10223188[0xc] * 80.0) -
               DAT_10223188[0x12] * 20.0;
    local_4c = *(int **)(iVar4 + 0x54);
    pfStack_50 = &local_30;
    pfStack_54 = &local_3c;
    local_8 = fVar6;
  }
  pfStack_44 = (float *)0x1;
  uStack_58 = 0x1003699a;
  FUN_1011cf70();
  if (this[0x1fc] == (CDualWeapon)0x0) {
    pfStack_44 = *(float **)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c);
    uStack_48 = 0;
    local_4c = (int *)DAT_10226490;
    pfStack_50 = (float *)0x1;
    pfStack_54 = (float *)0x100369c5;
    (*DAT_10223000)();
    pfStack_54 = *(float **)(*(int *)(this + 4) + 0x20c);
    uStack_58 = 0x100369d4;
    uStack_58 = (*DAT_10223064)();
    (*DAT_10223010)();
    (*DAT_10223020)("aurora/gunsmoke.aur");
    (*DAT_10223008)(1);
    pfStack_44 = (float *)0x0;
    uStack_48 = *(undefined4 *)(this + 0x200);
    local_4c = (int *)0x10036a00;
    pfStack_44 = (float *)FUN_10031f00();
    uStack_48 = 0x10036a07;
    (*DAT_10223020)();
    uStack_48 = 0;
    local_4c = (int *)0x10036a0f;
    (*DAT_10223010)();
    pfStack_44 = (float *)0x10036a18;
    (*DAT_10223004)();
  }
  pfStack_44 = (float *)0x2;
  uStack_48 = 0;
  local_4c = (int *)0x10036a22;
  iVar4 = (*DAT_102230b0)();
  if (iVar4 == 0) {
    pfStack_44 = (float *)0x3f800000;
LAB_10036a68:
    local_4c = (int *)0x3f800000;
  }
  else {
    if (iVar4 != 1) {
      if (iVar4 != 2) goto LAB_10036a82;
      pfStack_44 = (float *)0xbf800000;
      goto LAB_10036a68;
    }
    pfStack_44 = (float *)0x3f800000;
    local_4c = (int *)0xbf800000;
  }
  uStack_48 = 0x3f800000;
  pfStack_50 = (float *)0x10036a82;
  FUN_100f91b0();
LAB_10036a82:
  if ((*(uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x1a8) & 0x4000) == 0) {
    pfStack_50 = (float *)0x40a00000;
    local_4c = (int *)0x3e800000;
    uStack_48 = 0x3e19999a;
  }
  else {
    local_4c = (int *)0x3dcccccd;
    uStack_48 = 0x3dcccccd;
    pfStack_50 = (float *)0x40000000;
  }
  pfStack_54 = (float *)(*(int *)(*(int *)(this + 0x160) + 4) + 8);
  pfStack_44 = (float *)0x40000000;
  uStack_58 = 0x10036ae9;
  FUN_10119de0();
  pfStack_44 = (float *)0x5;
  uStack_48 = 0x10036af9;
  FUN_100f2a50();
  puVar1 = (uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x118);
  *puVar1 = *puVar1 | 2;
  iVar4 = *(int *)(*(int *)(this + 0x160) + 4);
  local_3c = *(float *)(iVar4 + 0x68) + *(float *)(iVar4 + 0x74);
  local_38 = *(float *)(iVar4 + 0x6c) + *(float *)(iVar4 + 0x78);
  local_34 = *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x7c);
  pfStack_44 = &local_3c;
  uStack_48 = 0x10036b48;
  FUN_10119320();
  pfStack_44 = (float *)&local_24;
  uStack_48 = 0x10036b5d;
  (**(code **)(**(int **)(this + 0x160) + 0x228))();
  local_4c = &local_18;
  uStack_48 = 0x3e31d0d4;
  pfStack_50 = (float *)0x10036b74;
  FUN_100dfea0();
  *(undefined4 *)(this + 0x19c) = 0x40000000;
  uStack_48 = *(undefined4 *)(*(int *)(this + 0x160) + 0x2288);
  local_4c = *(int **)(*(int *)(this + 0x160) + 4);
  if (this[0x1fc] == (CDualWeapon)0x0) {
    pfStack_50 = *(float **)(this + 0x218);
  }
  else {
    pfStack_50 = *(float **)(this + 0x210);
  }
  pfStack_54 = (float *)0x2;
  uStack_58 = 3;
  FUN_10088ca0(&local_3c,1,local_24,local_20,local_1c,local_18,local_14,local_10,
               *(undefined4 *)(this + 0x18c),*(undefined4 *)(this + 400),
               *(undefined4 *)(this + 0x194),0x46000000);
  fVar6 = *DAT_10223188 + 2.0;
  if (this[0x1fc] == (CDualWeapon)0x0) {
    *(float *)(this + 0x1d8) = *DAT_10223188 + 2.0;
    fVar6 = _DAT_102119b0;
  }
  _DAT_102119b0 = fVar6;
  uStack_48 = 0x40400000;
  local_4c = (int *)0x10036c65;
  FUN_100f9100();
  uStack_48 = 10;
  local_4c = (int *)0x0;
  pfStack_50 = (float *)0x10036c6f;
  (*DAT_102230b0)();
  local_4c = *(int **)(this + 0x160);
  uStack_48 = 1;
  (**(code **)(*local_4c + 0x104))(&uStack_58);
  FUN_10116a40("weapons_new/vp70/vp70_fire.wav",0,1);
  *(undefined4 *)(*(int *)(this + 0x160) + 0x2298) = 1;
  *(float *)(*(int *)(this + 0x160) + 0x22a0) = *DAT_10223188 + 0.2;
  iVar4 = *(int *)(this + 0x160);
  if (this[0x1fc] == (CDualWeapon)0x0) {
    if (*(char *)(iVar4 + 0x21ea) == '\0') {
      *(int *)(iVar4 + 0x5e0) = *(int *)(iVar4 + 0x5e0) + -1;
    }
    local_4c = *(int **)(this + 0x200);
    pfStack_50 = (float *)0x10036d20;
    fVar5 = (float10)FUN_10031dd0();
    *(float *)(this + 0x1d0) = (float)(fVar5 + (float10)*DAT_10223188);
  }
  else {
    if (*(char *)(iVar4 + 0x21ea) == '\0') {
      *(int *)(iVar4 + 0x5dc) = *(int *)(iVar4 + 0x5dc) + -1;
    }
    local_4c = *(int **)(this + 0x204);
    pfStack_50 = (float *)0x10036cfa;
    fVar5 = (float10)FUN_10031dd0();
    *(float *)(this + 0x1cc) = (float)(fVar5 + (float10)*DAT_10223188);
  }
  local_4c = (int *)0x10036d34;
  FUN_10036540();
  if (this[0x1fc] == (CDualWeapon)0x0) {
    local_4c = (int *)0x0;
    pfStack_50 = (float *)0x1;
    pfStack_54 = (float *)0x4;
    uStack_58 = 0x10036d61;
    (**(code **)(*(int *)this + 0x198))();
  }
  else {
    local_4c = (int *)0x4;
    pfStack_50 = *(float **)(this + 0x160);
    pfStack_54 = (float *)0x10036d4f;
    FUN_10038f10();
  }
  if (this[0x1fc] != (CDualWeapon)0x0) {
    local_4c = *(int **)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c);
    pfStack_50 = (float *)0x0;
    pfStack_54 = (float *)DAT_10226614;
    uStack_58 = 1;
    (*DAT_10223000)();
    (*DAT_10223008)(0);
    local_4c = (int *)0x10036d9a;
    (*DAT_10223004)();
  }
  *(int *)(this + 0x1f8) = *(int *)(this + 0x1f8) + 1;
  if (*(int *)(this + 0x1f8) < 3) {
    if (this[0x1fc] == (CDualWeapon)0x0) {
      local_4c = (int *)0x3cdd2f1b;
      pfStack_50 = (float *)0x10036dc1;
      (**(code **)(*(int *)this + 8))();
      *(code **)(this + 0x78) = VP70Shoot;
      return;
    }
    _DAT_102119d8 = 0xb;
    _DAT_102119dc = *DAT_10223188 + 0.027;
  }
  return;
}

