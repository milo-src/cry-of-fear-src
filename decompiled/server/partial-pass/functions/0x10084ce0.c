// rea decompile_all
// name: CVP70::Shoot
// address: 0x10084ce0
// body: available
// range: 0x10084ce0-0x10085290 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CVP70::Shoot(void) */

void __thiscall CVP70::Shoot(CVP70 *this)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_54 [12];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
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
  
                    /* 0x84ce0  269  ?Shoot@CVP70@@QAEXXZ */
  if (*(int *)(this + 0x128) != 0) {
    return;
  }
  if (*(int *)(this + 0x140) != 0) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x1c4) == 3) {
LAB_10084d15:
    if (*DAT_10223188 < *(float *)(this + 0x1b0) || *DAT_10223188 == *(float *)(this + 0x1b0)) {
      return;
    }
    if (this[0x178] == (CVP70)0x0) {
      uVar5 = 5;
    }
    else {
      uVar5 = 0xb;
    }
    (**(code **)(*(int *)this + 0x198))(uVar5,1,0);
    (**(code **)(*(int *)this + 400))();
    *(float *)(this + 0x1b0) = *DAT_10223188 + 0.25;
    return;
  }
  if (*(int *)(this + 0x1e4) < 1) {
    if (*(int *)(this + 0x1b8) == 0) {
      (**(code **)(*(int *)this + 0x1c0))();
      return;
    }
    goto LAB_10084d15;
  }
  local_8 = DAT_10223188[10] * 40.0;
  local_14 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
  local_10 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + DAT_10223188[0xc] * 40.0;
  local_18 = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + local_8;
  local_c = DAT_10223188[0x10] * 20.0;
  iVar2 = *(int *)(this + 4);
  local_24 = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 8) + DAT_10223188[10] * 80.0 + local_c;
  local_20 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0xc) + DAT_10223188[0xb] * 80.0 +
             DAT_10223188[0x11] * 20.0;
  local_1c = *(float *)(iVar2 + 0x180) + *(float *)(iVar2 + 0x10) + DAT_10223188[0xc] * 80.0 +
             DAT_10223188[0x12] * 20.0;
  FUN_1011cf70(&local_24,&local_18,*(undefined4 *)(iVar2 + 0x54),*(undefined4 *)(this + 0x1fc),1);
  (*DAT_10223000)(1,DAT_10226490,0,*(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c));
  uVar5 = (*DAT_10223064)(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
  (*DAT_10223010)(uVar5);
  (*DAT_10223020)("aurora/gunsmoke.aur");
  (*DAT_10223008)(1);
  (*DAT_10223020)("models/weapons/vp70/v_vp70.mdl");
  (*DAT_10223010)(0);
  (*DAT_10223004)();
  if (*(char *)(*(int *)(this + 0x160) + 0x21ea) == '\0') {
    *(int *)(this + 0x1e4) = *(int *)(this + 0x1e4) + -1;
  }
  FUN_10119320(*(int *)(*(int *)(this + 0x160) + 4) + 0x74);
  (**(code **)(**(int **)(this + 0x160) + 0x228))(local_54);
  FUN_100ea240("vp70_shoot",0);
  iVar2 = (*DAT_102230b0)(0,2);
  if (iVar2 == 0) {
    uVar5 = 0x3f800000;
LAB_10084ff0:
    uVar4 = 0x3f800000;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 != 2) goto LAB_1008500a;
      uVar5 = 0xbf800000;
      goto LAB_10084ff0;
    }
    uVar5 = 0x3f800000;
    uVar4 = 0xbf800000;
  }
  FUN_100f91b0(uVar4,0x3f800000,uVar5);
LAB_1008500a:
  uVar5 = 0x40000000;
  if ((*(uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x1a8) & 0x4000) == 0) {
    uVar5 = 0x40a00000;
    uVar3 = 0x3e800000;
    uVar4 = 0x3e19999a;
  }
  else {
    uVar3 = 0x3dcccccd;
    uVar4 = 0x3dcccccd;
  }
  FUN_10119de0(*(int *)(*(int *)(this + 0x160) + 4) + 8,uVar5,uVar3,uVar4,0x40000000);
  if (this[0x178] == (CVP70)0x0) {
    uVar5 = 4;
  }
  else {
    uVar5 = 10;
  }
  (**(code **)(*(int *)this + 0x198))(uVar5,1,0);
  FUN_100f2a50(5);
  puVar1 = (uint *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x118);
  *puVar1 = *puVar1 | 2;
  iVar2 = *(int *)(*(int *)(this + 0x160) + 4);
  local_30 = *(float *)(iVar2 + 0x68) + *(float *)(iVar2 + 0x74);
  local_2c = *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x78);
  local_28 = *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x7c);
  FUN_10119320(&local_30);
  (**(code **)(**(int **)(this + 0x160) + 0x228))(&local_48);
  FUN_100dfea0(&local_3c,0x3e31d0d4);
  *(float *)(this + 0x19c) = *(float *)(this + 0x198) + *(float *)(this + 0x19c);
  *(float *)(this + 0x1a0) = *DAT_10223188 + 0.35;
  FUN_10088ca0(&local_30,1,local_48,local_44,local_40,local_3c,local_38,local_34,
               *(undefined4 *)(this + 0x18c),*(undefined4 *)(this + 400),
               *(undefined4 *)(this + 0x194),0x46000000,3,2,(int)_DAT_10226858,
               *(undefined4 *)(*(int *)(this + 0x160) + 4),
               *(undefined4 *)(*(int *)(this + 0x160) + 0x2288));
  FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x20c),1,
               "weapons/vp70/vp70_fire.wav",0x3f800000,0x3f4ccccd,0,100);
  FUN_100f9100(0x40400000);
  *(undefined4 *)(*(int *)(this + 0x160) + 0x2298) = 1;
  *(float *)(*(int *)(this + 0x160) + 0x22a0) = *DAT_10223188 + 0.2;
  *(int *)(this + 0x1f8) = *(int *)(this + 0x1f8) + 1;
  if (2 < *(int *)(this + 0x1f8)) {
    return;
  }
  (**(code **)(*(int *)this + 8))(0x3cdd2f1b);
  *(code **)(this + 0x78) = Shoot;
  return;
}

