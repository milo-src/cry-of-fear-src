// rea decompile_all
// name: FUN_1008bc50
// address: 0x1008bc50
// body: available
// range: 0x1008bc50-0x1008c332 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1008bc50(int param_1,int param_2,float param_3,uint param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  float *pfVar6;
  undefined8 *puVar7;
  int *in_ECX;
  float10 fVar8;
  float fVar9;
  int *piVar10;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_44 [12];
  undefined1 local_38 [12];
  undefined8 local_2c;
  float local_24;
  float local_1c;
  float local_18;
  int *local_14;
  
  if (*(float *)(in_ECX[1] + 0x170) == 0.0) {
    return 0;
  }
  iVar4 = (**(code **)(*in_ECX + 0xbc))();
  if (iVar4 == 0) {
    uVar5 = FUN_10087e10(param_1,param_2,param_3,param_4);
    return uVar5;
  }
  iVar4 = in_ECX[1];
  if ((*(int *)(iVar4 + 0x174) == 0) && ((char)in_ECX[0x7f] == '\0')) {
    (**(code **)(*in_ECX + 0x238))();
    iVar4 = in_ECX[1];
  }
  if (((((((*(byte *)(iVar4 + 0x1a8) & 0x20) != 0) &&
         (iVar4 = (**(code **)(*in_ECX + 0xbc))(), iVar4 != 0)) && (in_ECX[0xd3] == 0)) &&
       (((param_4 & 0x1000000) != 0 && (param_3 < *(float *)(in_ECX[1] + 0x164))))) &&
      (*(char *)((int)in_ECX + 10) == '\0')) && (*(int *)(in_ECX[1] + 0x174) == 0)) {
    (**(code **)(*in_ECX + 0x16c))();
    FUN_100c1a70();
    uVar5 = (**(code **)(*in_ECX + 0x18c))(6);
    FUN_1000aa50(uVar5);
  }
  if ((param_4 & 0x10000000) != 0) {
    if (*(char *)((int)in_ECX + 9) != '\0') {
      return 0;
    }
    if ((*(byte *)(in_ECX[1] + 0x1a8) & 0x20) == 0) {
      return 0;
    }
    if (*(float *)(in_ECX[1] + 0x170) != 2.0) {
      return 0;
    }
    iVar4 = (**(code **)(*in_ECX + 0xbc))();
    if (iVar4 == 0) {
      return 0;
    }
    if (in_ECX[0xd3] != 0) {
      return 0;
    }
    iVar4 = in_ECX[1];
    if (*(float *)(iVar4 + 0x164) <= param_3) {
      return 0;
    }
    if (*(char *)((int)in_ECX + 10) != '\0') {
      return 0;
    }
    if (*(int *)(iVar4 + 0x174) != 0) {
      return 0;
    }
    *(undefined1 *)((int)in_ECX + 9) = 1;
    *(undefined4 *)(iVar4 + 0x138) = 0;
    *(undefined4 *)(in_ECX[1] + 0x13c) = 0;
    in_ECX[0x1e] = 0;
    return 0;
  }
  in_ECX[0xc3] = in_ECX[0xc3] | param_4;
  in_ECX[0x80] = param_4;
  local_60 = 0.0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_18 = 0.0;
  local_1c = 0.0;
  if (((param_1 != 0) && (iVar4 = (*DAT_10223060)(*(undefined4 *)(param_1 + 0x20c)), iVar4 != 0)) &&
     (local_14 = (int *)FUN_1008a2e0(param_1), local_14 != (int *)0x0)) {
    iVar4 = (**(code **)(*local_14 + 0xd0))();
    if (iVar4 != 0) {
      piVar10 = in_ECX;
      FUN_100125e0(local_14[1]);
      FUN_10017740(piVar10);
    }
    pfVar6 = (float *)(**(code **)(*local_14 + 0xfc))(local_38);
    local_1c = *pfVar6;
    local_18 = pfVar6[1];
    local_14 = (int *)pfVar6[2];
    pfVar6 = (float *)(**(code **)(*in_ECX + 0xfc))(local_44);
    local_2c = CONCAT44((local_18 - 0.0) - pfVar6[1],(local_1c - 0.0) - *pfVar6);
    local_24 = ((float)local_14 - 10.0) - pfVar6[2];
    puVar7 = (undefined8 *)FUN_10017e70(&uStack_5c);
    local_2c = *puVar7;
    local_24 = *(float *)(puVar7 + 1);
    puVar7 = (undefined8 *)FUN_10017e70(&uStack_5c);
    _DAT_10222f28 = *puVar7;
    DAT_10222f30 = *(float *)(puVar7 + 1);
    uVar1 = *puVar7;
    local_24 = *(float *)(puVar7 + 1);
    local_2c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    local_18 = local_2c._4_4_;
    local_2c._0_4_ = (float)uVar1;
    local_60 = (float)local_2c;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    local_2c = uVar1;
    local_1c = local_24;
  }
  iVar4 = (**(code **)(*in_ECX + 0xd0))();
  if (iVar4 != 0) {
    if (param_1 != 0) {
      *(undefined4 *)(in_ECX[1] + 400) = *(undefined4 *)(param_1 + 0x20c);
    }
    *(float *)(in_ECX[1] + 0x1dc) = param_3 + *(float *)(in_ECX[1] + 0x1dc);
    if ((*(byte *)(in_ECX[1] + 0x1a8) & 0x40) != 0) {
      return 0;
    }
    iVar4 = FUN_100125e0(in_ECX[1]);
    if ((iVar4 != 0) && (*(char *)(iVar4 + 0x21e9) != '\0')) {
      return 0;
    }
  }
  if ((((param_1 != 0) && (iVar4 = (*DAT_10223060)(*(undefined4 *)(param_1 + 0x20c)), iVar4 != 0))
      && (*(int *)(in_ECX[1] + 0x108) == 3)) && ((param_2 == 0 || (*(int *)(param_2 + 0x10c) != 1)))
     ) {
    fVar8 = (float10)FUN_10087da0(param_3);
    iVar4 = in_ECX[1];
    local_14 = (int *)(float)fVar8;
    fVar9 = -(float)local_14;
    local_24 = local_1c * fVar9 + *(float *)(iVar4 + 0x28);
    *(ulonglong *)(iVar4 + 0x20) =
         CONCAT44(local_18 * fVar9 + *(float *)(iVar4 + 0x24),
                  local_60 * fVar9 + *(float *)(iVar4 + 0x20));
    *(float *)(iVar4 + 0x28) = local_24;
  }
  *(float *)(in_ECX[1] + 0x164) = *(float *)(in_ECX[1] + 0x164) - param_3;
  if (in_ECX[0x89] == 6) {
    in_ECX[0x60] = in_ECX[0x60] | 0x100;
    return 0;
  }
  FUN_100177b0();
  if (*(float *)(in_ECX[1] + 0x164) <= 0.0) {
    DAT_102266fc = param_1;
    if (*(char *)((int)in_ECX + 9) != '\0') {
      *(undefined1 *)((int)in_ECX + 9) = 0;
      in_ECX[0x1e] = (int)CBaseMonster::CallMonsterThink;
      (**(code **)(*in_ECX + 8))(0);
    }
    if ((param_4 & 0x2000) != 0) {
      (**(code **)(*in_ECX + 0x6c))(param_2,2);
      DAT_102266fc = 0;
      return 0;
    }
    pcVar2 = *(code **)(*in_ECX + 0x6c);
    if ((param_4 & 0x1004) == 0) {
      (*pcVar2)(param_2,0);
      DAT_102266fc = 0;
      return 0;
    }
    (*pcVar2)(param_2,1);
    DAT_102266fc = 0;
    return 0;
  }
  if ((((*(byte *)(in_ECX[1] + 0x1a8) & 0x20) == 0) || (param_2 == 0)) ||
     (iVar4 = (*DAT_10223060)(*(undefined4 *)(param_2 + 0x20c)), iVar4 == 0)) goto LAB_1008c2c7;
  if ((*(byte *)(param_2 + 0x1a8) & 8) != 0) {
    if (in_ECX[0xd5] == 2) {
      in_ECX[0xbb] = in_ECX[0xbb] | 1;
    }
    else if ((in_ECX[0xd5] == 3) && (iVar4 = FUN_10017780(), iVar4 == 0)) {
      if (((*(byte *)(in_ECX + 0xbb) & 4) == 0) &&
         (iVar4 = FUN_10118f30(param_2,in_ECX[1] + 8), iVar4 == 0)) {
        in_ECX[0xbb] = in_ECX[0xbb] | 4;
      }
      else {
        in_ECX[0xbb] = in_ECX[0xbb] | 1;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x1a8) & 0x28) == 0) goto LAB_1008c2c7;
  if (param_1 == 0) {
    iVar4 = in_ECX[1];
    fVar9 = DAT_10222f30 * 64.0 + *(float *)(iVar4 + 0x10);
    *(ulonglong *)(in_ECX + 0xbd) =
         CONCAT44(DAT_10222f2c * 64.0 + *(float *)(iVar4 + 0xc),
                  DAT_10222f28 * 64.0 + *(float *)(iVar4 + 8));
    local_24 = fVar9;
LAB_1008c270:
    in_ECX[0xbf] = (int)fVar9;
  }
  else {
    iVar4 = FUN_10017780();
    if (((iVar4 == 0) || (iVar4 = FUN_100177a0(), param_1 == *(int *)(iVar4 + 4))) ||
       ((*(byte *)(in_ECX + 0x60) & 0x10) == 0)) {
      *(undefined8 *)(in_ECX + 0xbd) = *(undefined8 *)(param_1 + 8);
      fVar9 = *(float *)(param_1 + 0x10);
      goto LAB_1008c270;
    }
  }
  FUN_100c00f0(in_ECX[0xbd],in_ECX[0xbe],in_ECX[0xbf]);
  if (0.0 < param_3) {
    in_ECX[0x60] = in_ECX[0x60] | 0x100;
  }
  if (20.0 <= param_3) {
    in_ECX[0x60] = in_ECX[0x60] | 0x200;
  }
LAB_1008c2c7:
  if ((((param_4 & 8) != 0) && (iVar4 = in_ECX[1], (*(byte *)(iVar4 + 0x1a8) & 0x20) != 0)) &&
     ((iVar3 = *(int *)(iVar4 + 0x160), iVar3 < 1 || ((0x1d < iVar3 && (iVar3 < 0x29)))))) {
    if (iVar3 < 0x1e) {
      *(undefined4 *)(iVar4 + 0x160) = 0x1e;
      iVar4 = in_ECX[1];
    }
    *(int *)(iVar4 + 0x160) = *(int *)(iVar4 + 0x160) + 1;
    if (40.0 < *(float *)(in_ECX[1] + 0x268)) {
      *(undefined4 *)(in_ECX[1] + 0x268) = 0x42200000;
    }
  }
  return 1;
}

