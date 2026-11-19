// rea decompile_all
// name: FUN_10046dc0
// address: 0x10046dc0
// body: available
// range: 0x10046dc0-0x100475a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10046dc0(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iStack_8c;
  char *pcStack_88;
  float *pfStack_84;
  float *pfStack_80;
  float *pfStack_7c;
  float fStack_78;
  undefined4 *puStack_74;
  char *pcStack_70;
  float *pfStack_6c;
  float *pfStack_68;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
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
  
  if (((((float)in_ECX[0x73] < *DAT_10223188 || (float)in_ECX[0x73] == *DAT_10223188) &&
       (in_ECX[0x4a] == 0)) && (in_ECX[0x50] == 0)) && ((*(byte *)(in_ECX[0x58] + 0x22b0) & 1) != 0)
     ) {
    iVar3 = *(int *)(in_ECX[0x58] + 4);
    if (*(int *)(iVar3 + 0x1c4) == 3) {
      pfStack_68 = (float *)0x0;
      pfStack_6c = (float *)0x1;
      if ((char)in_ECX[0x5e] == '\0') {
        pcStack_70 = (char *)0x14;
      }
      else {
        pcStack_70 = (char *)0x23;
      }
      puStack_74 = (undefined4 *)0x10046e3a;
      (**(code **)(*in_ECX + 0x198))();
      if ((float)in_ECX[0x6c] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x6c]) {
        puStack_74 = (undefined4 *)0x10046e5e;
        (**(code **)(*in_ECX + 400))();
        in_ECX[0x6c] = (int)(*DAT_10223188 + 0.5);
      }
      in_ECX[0x73] = (int)(*DAT_10223188 + 0.5);
      in_ECX[0x74] = (int)(*DAT_10223188 + 0.5);
      return;
    }
    if (in_ECX[0x79] < 1) {
      if (in_ECX[0x6e] == 0) {
        pfStack_68 = (float *)0x10046ede;
        (**(code **)(*in_ECX + 0x1c0))();
      }
      else {
        pfStack_68 = (float *)0x0;
        pfStack_6c = (float *)0x1;
        if ((char)in_ECX[0x5e] == '\0') {
          pcStack_70 = (char *)0x14;
        }
        else {
          pcStack_70 = (char *)0x23;
        }
        puStack_74 = (undefined4 *)0x10046f3f;
        (**(code **)(*in_ECX + 0x198))();
        if ((float)in_ECX[0x6c] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x6c]) {
          puStack_74 = (undefined4 *)0x10046f5b;
          (**(code **)(*in_ECX + 400))();
          in_ECX[0x6c] = (int)(*DAT_10223188 + 0.5);
        }
      }
      in_ECX[0x73] = (int)(*DAT_10223188 + 0.5);
      in_ECX[0x74] = (int)(*DAT_10223188 + 0.5);
      return;
    }
    pfStack_68 = *(float **)(iVar3 + 0x20c);
    pfStack_6c = (float *)0x0;
    pcStack_70 = (char *)DAT_10226490;
    puStack_74 = (undefined4 *)0x1;
    fStack_78 = 2.6118385e-29;
    (*DAT_10223000)();
    fStack_78 = *(float *)(in_ECX[1] + 0x20c);
    pfStack_7c = (float *)0x10046fa9;
    pfStack_7c = (float *)(*DAT_10223064)();
    pfStack_80 = (float *)0x10046fb0;
    (*DAT_10223010)();
    pfStack_80 = (float *)0x101ab5e4;
    pfStack_84 = (float *)0x10046fbb;
    (*DAT_10223020)();
    pfStack_84 = (float *)0x1;
    pcStack_88 = (char *)0x10046fc3;
    (*DAT_10223008)();
    pcStack_88 = "models/weapons/glock/v_glock.mdl";
    iStack_8c = 0x10046fce;
    (*DAT_10223020)();
    iStack_8c = 0;
    (*DAT_10223010)();
    pfStack_68 = (float *)0x10046fdf;
    (*DAT_10223004)();
    iVar3 = in_ECX[0x58];
    if (*(char *)(iVar3 + 0x21ea) == '\0') {
      in_ECX[0x79] = in_ECX[0x79] + -1;
    }
    iVar2 = *(int *)(iVar3 + 0x2814);
    pfStack_68 = (float *)(*(int *)(iVar3 + 4) + 0x74);
    pfStack_6c = (float *)0x10047006;
    FUN_10119320();
    pfStack_68 = &local_20;
    pfStack_6c = (float *)0x1004701b;
    (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
    pfStack_6c = (float *)0x0;
    pcStack_70 = (char *)0x0;
    puStack_74 = (undefined4 *)0x0;
    fStack_78 = (float)in_ECX[0x5a];
    local_2c = local_20 + DAT_10223188[0x10] * 32.0;
    local_28 = local_1c + DAT_10223188[0x11] * 32.0;
    local_24 = local_18 + DAT_10223188[0x12] * 32.0;
    pfStack_7c = (float *)0x0;
    pfStack_80 = (float *)0x0;
    pfStack_84 = &local_2c;
    pcStack_88 = (char *)(*(int *)(in_ECX[0x58] + 4) + 8);
    iStack_8c = 0;
    (*DAT_10223134)(iVar2 != 1,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),DAT_10231f50);
    pfStack_6c = (float *)0x0;
    pcStack_70 = "pistol_shoot";
    puStack_74 = (undefined4 *)0x100470d6;
    FUN_100ea240();
    pfStack_6c = (float *)0x5;
    pcStack_70 = (char *)0x100470e3;
    FUN_100f2a50();
    puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
    *puVar1 = *puVar1 | 2;
    iVar3 = *(int *)(in_ECX[0x58] + 4);
    local_38 = *(float *)(iVar3 + 0x74) + *(float *)(iVar3 + 0x68);
    local_34 = *(float *)(iVar3 + 0x6c) + *(float *)(iVar3 + 0x78);
    local_30 = *(float *)(iVar3 + 0x70) + *(float *)(iVar3 + 0x7c);
    pfStack_6c = &local_38;
    pcStack_70 = (char *)0x10047132;
    FUN_10119320();
    pfStack_6c = (float *)&local_50;
    pcStack_70 = (char *)0x10047147;
    (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
    puStack_74 = &local_44;
    pcStack_70 = (char *)0x3e31d0d4;
    fStack_78 = 2.6119745e-29;
    FUN_100dfea0();
    in_ECX[0x67] = (int)((float)in_ECX[0x66] + (float)in_ECX[0x67]);
    in_ECX[0x68] = (int)(*DAT_10223188 + 0.55);
    pcStack_70 = *(char **)(in_ECX[0x58] + 0x2288);
    puStack_74 = *(undefined4 **)(in_ECX[0x58] + 4);
    fStack_78 = (float)(int)DAT_10226850;
    pfStack_7c = (float *)0x2;
    pfStack_80 = (float *)0x3;
    pfStack_84 = (float *)0x46000000;
    iStack_8c = in_ECX[100];
    pcStack_88 = (char *)in_ECX[0x65];
    FUN_10088ca0(&local_5c,1,local_50,local_4c,local_48,local_44,local_40,local_3c,in_ECX[99]);
    pcStack_70 = (char *)0x3f800000;
    puStack_74 = (undefined4 *)0x3f800000;
    fStack_78 = 2.8026e-45;
    pfStack_7c = (float *)0xfffffffe;
    in_ECX[0x76] = (int)(*DAT_10223188 + 1.0);
    pfStack_80 = (float *)0x10047263;
    iVar3 = (*DAT_102230b0)();
    fStack_78 = (float)iVar3;
    pfStack_7c = (float *)0x1004727d;
    FUN_100f91b0();
    if (DAT_10222ee4 != (int *)0x0) {
      pcStack_70 = (char *)0x10047290;
      iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))();
      if (iVar3 == 0) {
        iVar3 = in_ECX[1];
        pcStack_70 = (char *)0x1;
        local_38 = DAT_10223188[0xd] * 200.0 + DAT_10223188[0x10] * 220.0 + DAT_10223188[10] * 40.0;
        puStack_74 = (undefined4 *)in_ECX[0x7f];
        local_34 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0
        ;
        local_30 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + DAT_10223188[0xc] * 40.0
        ;
        local_c = DAT_10223188[0x11];
        local_14 = DAT_10223188[0x12];
        local_10 = DAT_10223188[0xb];
        local_8 = DAT_10223188[0xc];
        local_5c = *(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 8) + DAT_10223188[10] * 80.0 +
                   DAT_10223188[0x10] * 20.0;
        local_58 = *(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0xc) + local_10 * 80.0 +
                   local_c * 20.0;
        local_54 = *(float *)(iVar3 + 0x10) + *(float *)(iVar3 + 0x180) + local_8 * 80.0 +
                   local_14 * 20.0;
        fStack_78 = *(float *)(iVar3 + 0x54);
        pfStack_7c = &local_38;
        pfStack_80 = &local_5c;
        pfStack_84 = (float *)0x10047433;
        FUN_1011cf70();
      }
    }
    pfStack_7c = (float *)0x40000000;
    if ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x4000) == 0) {
      pfStack_7c = (float *)0x40a00000;
      fStack_78 = 0.25;
      puStack_74 = (undefined4 *)0x3e19999a;
    }
    else {
      fStack_78 = 0.1;
      puStack_74 = (undefined4 *)0x3dcccccd;
    }
    pfStack_80 = (float *)(*(int *)(in_ECX[0x58] + 4) + 8);
    pcStack_70 = (char *)0x40000000;
    pfStack_84 = (float *)0x1004749d;
    FUN_10119de0();
    pcStack_70 = (char *)0x0;
    puStack_74 = (undefined4 *)0x1;
    if ((char)in_ECX[0x5e] == '\0') {
      if (in_ECX[0x79] == 0) {
        fStack_78 = 4.2039e-45;
      }
      else {
        fStack_78 = 2.8026e-45;
      }
    }
    else if (in_ECX[0x79] == 0) {
      fStack_78 = 5.32493e-44;
    }
    else {
      fStack_78 = 4.76441e-44;
    }
    pfStack_7c = (float *)0x100474d7;
    (**(code **)(*in_ECX + 0x198))();
    pfStack_7c = (float *)0x40400000;
    pfStack_80 = (float *)0x100474ea;
    FUN_100f9100();
    pfStack_80 = (float *)in_ECX[0x58];
    pfStack_7c = (float *)0x1;
    (**(code **)((int)*pfStack_80 + 0x104))(&iStack_8c);
    FUN_10116a40("weapons_new/glock/glock_fire.wav",0,1);
    *(undefined4 *)(in_ECX[0x58] + 0x2298) = 1;
    *(float *)(in_ECX[0x58] + 0x22a0) = *DAT_10223188 + 0.2;
    in_ECX[0x73] = (int)(*DAT_10223188 + 0.1);
    in_ECX[0x74] = (int)(*DAT_10223188 + 1.0);
    if (in_ECX[0x79] < 1) {
      in_ECX[0x73] = (int)(*DAT_10223188 + 1.0);
    }
  }
  return;
}

