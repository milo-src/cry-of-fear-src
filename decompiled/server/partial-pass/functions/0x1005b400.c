// rea decompile_all
// name: FUN_1005b400
// address: 0x1005b400
// body: available
// range: 0x1005b400-0x1005bb5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005b400(void)

{
  uint *puVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int iStack_90;
  int iStack_8c;
  float *pfStack_88;
  int *piStack_84;
  int iStack_80;
  float *pfStack_7c;
  float *pfStack_78;
  char *local_74;
  int iStack_70;
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
  
  fVar2 = *DAT_10223188;
  if (fVar2 < (float)in_ECX[0x73]) {
    return;
  }
  if (in_ECX[0x4a] != 0) {
    return;
  }
  if (in_ECX[0x50] != 0) {
    return;
  }
  if (*(int *)(*(int *)(in_ECX[0x58] + 4) + 0x1c4) == 3) {
    if (fVar2 < (float)in_ECX[0x6c] || fVar2 == (float)in_ECX[0x6c]) {
      return;
    }
    if ((char)in_ECX[0x5e] != '\0') goto LAB_1005b477;
    iVar4 = *in_ECX;
LAB_1005b46f:
    local_74 = (char *)0x7;
  }
  else {
    if (0 < in_ECX[0x79]) {
      local_8 = DAT_10223188[10] * 40.0;
      iVar4 = in_ECX[1];
      pfStack_6c = (float *)0x1;
      iStack_70 = in_ECX[0x7e];
      local_14 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
      local_10 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + DAT_10223188[0xc] * 40.0;
      local_18 = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + local_8;
      local_c = DAT_10223188[0x10] * 20.0;
      local_24 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8) + DAT_10223188[10] * 80.0 +
                 local_c;
      local_20 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc) + DAT_10223188[0xb] * 80.0 +
                 DAT_10223188[0x11] * 20.0;
      local_1c = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10) + DAT_10223188[0xc] * 80.0 +
                 DAT_10223188[0x12] * 20.0;
      local_74 = *(char **)(iVar4 + 0x54);
      pfStack_78 = &local_18;
      pfStack_7c = &local_24;
      iStack_80 = 0x1005b644;
      FUN_1011cf70();
      iStack_80 = *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
      piStack_84 = (int *)0x0;
      pfStack_88 = (float *)DAT_10226660;
      iStack_8c = 8;
      iStack_90 = 0x1005b663;
      (*DAT_10223000)();
      iStack_90 = 1;
      (*DAT_10223008)();
      (*DAT_10223004)();
      (*DAT_10223000)(1,DAT_10226490,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
      uVar3 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223010)(uVar3);
      pfStack_6c = (float *)0x101ab5e4;
      iStack_70 = 0x1005b6b4;
      (*DAT_10223020)();
      iStack_70 = 1;
      local_74 = (char *)0x1005b6bc;
      (*DAT_10223008)();
      local_74 = "models/weapons/mp5/v_mp5.mdl";
      pfStack_78 = (float *)0x1005b6c7;
      (*DAT_10223020)();
      pfStack_78 = (float *)0x0;
      pfStack_7c = (float *)0x1005b6cf;
      (*DAT_10223010)();
      pfStack_6c = (float *)0x1005b6d8;
      (*DAT_10223004)();
      iVar4 = in_ECX[0x58];
      if (*(char *)(iVar4 + 0x21ea) == '\0') {
        in_ECX[0x79] = in_ECX[0x79] + -1;
      }
      iVar5 = *(int *)(iVar4 + 0x2814);
      pfStack_6c = (float *)(*(int *)(iVar4 + 4) + 0x74);
      iStack_70 = 0x1005b6ff;
      FUN_10119320();
      pfStack_6c = &local_30;
      iStack_70 = 0x1005b714;
      (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
      iStack_70 = 0;
      local_74 = (char *)0x0;
      pfStack_78 = (float *)0x0;
      pfStack_7c = (float *)in_ECX[0x5a];
      local_3c = local_30 + DAT_10223188[0x10] * 32.0;
      local_38 = local_2c + DAT_10223188[0x11] * 32.0;
      local_34 = local_28 + DAT_10223188[0x12] * 32.0;
      iStack_80 = 0;
      piStack_84 = (int *)0x0;
      pfStack_88 = &local_3c;
      iStack_8c = *(int *)(in_ECX[0x58] + 4) + 8;
      iStack_90 = 0;
      (*DAT_10223134)(iVar5 != 1,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),DAT_10231f50);
      iStack_70 = 0;
      local_74 = "mp5_shoot";
      pfStack_78 = (float *)0x1005b7cf;
      FUN_100ea240();
      iStack_70 = 0x3f800000;
      local_74 = (char *)0x3f800000;
      pfStack_78 = (float *)0x2;
      pfStack_7c = (float *)0xfffffffe;
      iStack_80 = 0x1005b7eb;
      iVar4 = (*DAT_102230b0)();
      pfStack_78 = (float *)(float)iVar4;
      pfStack_7c = (float *)0x1005b805;
      FUN_100f91b0();
      pfStack_7c = (float *)0x40000000;
      if ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x4000) == 0) {
        pfStack_7c = (float *)0x40a00000;
        pfStack_78 = (float *)0x3e800000;
        local_74 = (char *)0x3e19999a;
      }
      else {
        pfStack_78 = (float *)0x3dcccccd;
        local_74 = (char *)0x3dcccccd;
      }
      iStack_80 = *(int *)(in_ECX[0x58] + 4) + 8;
      iStack_70 = 0x40000000;
      piStack_84 = (int *)0x1005b86c;
      FUN_10119de0();
      iVar4 = *in_ECX;
      iStack_70 = 0;
      local_74 = (char *)0x1;
      if ((char)in_ECX[0x5e] == '\0') {
        pfStack_78 = (float *)0x2;
        pfStack_7c = (float *)0x0;
        iStack_80 = 0x1005b88c;
        iVar5 = (*DAT_102230b0)();
        pfStack_78 = (float *)(iVar5 + 4);
      }
      else {
        pfStack_78 = (float *)0xa;
      }
      pfStack_7c = (float *)0x1005b89b;
      (**(code **)(iVar4 + 0x198))();
      pfStack_7c = (float *)0x5;
      iStack_80 = 0x1005b8a8;
      FUN_100f2a50();
      puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
      *puVar1 = *puVar1 | 2;
      iVar4 = *(int *)(in_ECX[0x58] + 4);
      local_48 = *(float *)(iVar4 + 0x74) + *(float *)(iVar4 + 0x68);
      local_44 = *(float *)(iVar4 + 0x6c) + *(float *)(iVar4 + 0x78);
      local_40 = *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x7c);
      pfStack_7c = &local_48;
      iStack_80 = 0x1005b8f7;
      FUN_10119320();
      pfStack_7c = (float *)&local_60;
      iStack_80 = 0x1005b90c;
      (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
      piStack_84 = &local_54;
      iStack_80 = 0x3e31d0d4;
      pfStack_88 = (float *)0x1005b923;
      FUN_100dfea0();
      fVar2 = DAT_10226850;
      in_ECX[0x67] = (int)((float)in_ECX[0x66] + (float)in_ECX[0x67]);
      in_ECX[0x68] = (int)(*DAT_10223188 + 0.35);
      iStack_80 = *(undefined4 *)(in_ECX[0x58] + 0x2288);
      piStack_84 = *(int **)(in_ECX[0x58] + 4);
      pfStack_88 = (float *)(int)fVar2;
      iStack_8c = 2;
      iStack_90 = 3;
      FUN_10088ca0(&local_48,1,local_60,local_5c,local_58,local_54,local_50,local_4c,in_ECX[99],
                   in_ECX[100],in_ECX[0x65],0x46000000);
      iStack_80 = 0x3f800000;
      in_ECX[0x76] = (int)(*DAT_10223188 + 1.0);
      piStack_84 = (int *)0x1005ba23;
      FUN_100f9100();
      if ((*(char *)((int)in_ECX + 0x1a5) == '\0') && (in_ECX[0x6a] != 0)) {
        *(undefined1 *)((int)in_ECX + 0x1a5) = 1;
        iStack_80 = 0x1005ba4f;
        iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))();
        if (iVar4 == 0) {
          piStack_84 = (int *)in_ECX[0x58];
          iStack_80 = 1;
          (**(code **)(*piStack_84 + 0x104))(&iStack_90);
          FUN_10116a40((int)DAT_10223188[0x26] + in_ECX[0x6a],1,1);
        }
        else {
          iStack_80 = 100;
          piStack_84 = (int *)0x0;
          iStack_90 = (int)DAT_10223188[0x26] + in_ECX[0x6a];
          pfStack_88 = (float *)0x3f4ccccd;
          iStack_8c = 0x3f800000;
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1);
        }
      }
      *(undefined4 *)(in_ECX[0x58] + 0x2298) = 1;
      *(float *)(in_ECX[0x58] + 0x22a0) = *DAT_10223188 + 0.2;
      in_ECX[0x73] = (int)(*DAT_10223188 + 0.06);
      in_ECX[0x74] = (int)(*DAT_10223188 + 1.0);
      if (in_ECX[0x79] < 1) {
        in_ECX[0x73] = (int)(*DAT_10223188 + 1.0);
      }
      return;
    }
    if (in_ECX[0x6e] == 0) {
      pfStack_6c = (float *)0x1005b4c3;
      (**(code **)(*in_ECX + 0x1c0))();
      return;
    }
    if (fVar2 < (float)in_ECX[0x6c] || fVar2 == (float)in_ECX[0x6c]) {
      return;
    }
    iVar4 = *in_ECX;
    if ((char)in_ECX[0x5e] == '\0') goto LAB_1005b46f;
    local_74 = (char *)0x14;
  }
  pfStack_6c = (float *)0x0;
  iStack_70 = 1;
  pfStack_78 = (float *)0x1005b477;
  (**(code **)(iVar4 + 0x198))();
LAB_1005b477:
  pfStack_6c = (float *)0x1005b481;
  (**(code **)(*in_ECX + 400))();
  in_ECX[0x6c] = (int)(*DAT_10223188 + 0.25);
  return;
}

