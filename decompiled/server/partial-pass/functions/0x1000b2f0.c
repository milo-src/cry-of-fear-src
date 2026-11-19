// rea decompile_all
// name: FUN_1000b2f0
// address: 0x1000b2f0
// body: available
// range: 0x1000b2f0-0x1000bb47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b2f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  CBaseEntity *in_ECX;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 uStack_14;
  float fStack_10;
  
  switch(*param_1) {
  case 2:
    FUN_100c00f0(*(undefined4 *)(in_ECX + 0x2f4),*(undefined4 *)(in_ECX + 0x2f8),
                 *(undefined4 *)(in_ECX + 0x2fc));
    (**(code **)(*(int *)in_ECX + 0x130))((int)*(float *)(*(int *)(in_ECX + 4) + 0xb0));
  case 1:
  case 0x55:
    if (*DAT_10223188 < *(float *)(in_ECX + 0x20c)) {
      return;
    }
    break;
  case 3:
    iVar1 = (*DAT_10222f8c)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    if (iVar1 == 0) {
      return;
    }
    iVar1 = (*DAT_10223060)(iVar1);
    goto LAB_1000b33a;
  default:
    goto switchD_1000b312_caseD_4;
  case 7:
    iVar1 = FUN_10017780();
    if (iVar1 == 0) {
LAB_1000b4a7:
      *(uint *)(in_ECX + 0x180) = *(uint *)(in_ECX + 0x180) | 0x40000000;
      return;
    }
    fVar6 = *(float *)(in_ECX + 0x2c8) - *(float *)(*(int *)(in_ECX + 4) + 0xc);
    fVar8 = *(float *)(in_ECX + 0x2c4) - *(float *)(*(int *)(in_ECX + 4) + 8);
    dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    local_28 = (float)dVar7;
    if ((float)param_1[1] <= local_28) {
      iVar1 = FUN_100177a0();
      iVar1 = *(int *)(iVar1 + 4);
      local_24 = (float)param_1[1];
      fVar9 = *(float *)(in_ECX + 0x2c8) - *(float *)(iVar1 + 0xc);
      fVar8 = *(float *)(in_ECX + 0x2c4) - *(float *)(iVar1 + 8);
      fVar6 = *(float *)(in_ECX + 0x2cc) - *(float *)(iVar1 + 0x10);
      dVar7 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      fVar6 = local_24;
      if ((float)dVar7 <= (float)param_1[1] * 0.5) goto LAB_1000b626;
    }
    iVar1 = FUN_100177a0();
    iVar1 = *(int *)(iVar1 + 4);
    *(undefined8 *)(in_ECX + 0x2c4) = *(undefined8 *)(iVar1 + 8);
    *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(iVar1 + 0x10);
    fVar6 = *(float *)(in_ECX + 0x2c8) - *(float *)(*(int *)(in_ECX + 4) + 0xc);
    fVar8 = *(float *)(in_ECX + 0x2c4) - *(float *)(*(int *)(in_ECX + 4) + 8);
    dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    local_28 = (float)dVar7;
    FUN_100bddb0();
    fVar6 = (float)param_1[1];
LAB_1000b626:
    if (local_28 < fVar6) {
      if ((*(uint *)(in_ECX + 0x180) & 0x40000000) == 0) {
        *(undefined4 *)(in_ECX + 0x22c) = 4;
      }
      FUN_100c1a70();
      return;
    }
    if ((local_28 < 190.0) && (*(int *)(in_ECX + 0x2d0) != 3)) {
      *(undefined4 *)(in_ECX + 0x2d0) = 3;
      return;
    }
    if (local_28 < 270.0) {
      return;
    }
    if (*(int *)(in_ECX + 0x2d0) == 4) {
      return;
    }
    *(undefined4 *)(in_ECX + 0x2d0) = 4;
    return;
  case 8:
    iVar1 = FUN_10017780();
    if (iVar1 == 0) goto LAB_1000b4a7;
    fVar6 = *(float *)(in_ECX + 0x2c8) - *(float *)(*(int *)(in_ECX + 4) + 0xc);
    fVar8 = *(float *)(in_ECX + 0x2c4) - *(float *)(*(int *)(in_ECX + 4) + 8);
    dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    local_28 = (float)dVar7;
    if (*(float *)(in_ECX + 0x360) <= local_28) {
      iVar1 = FUN_100177a0();
      iVar1 = *(int *)(iVar1 + 4);
      local_24 = *(float *)(in_ECX + 0x360);
      fVar9 = *(float *)(in_ECX + 0x2c8) - *(float *)(iVar1 + 0xc);
      fVar8 = *(float *)(in_ECX + 0x2c4) - *(float *)(iVar1 + 8);
      fVar6 = *(float *)(in_ECX + 0x2cc) - *(float *)(iVar1 + 0x10);
      dVar7 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      fVar6 = local_24;
      if ((float)dVar7 <= *(float *)(in_ECX + 0x360) * 0.5) goto LAB_1000b86c;
    }
    iVar1 = FUN_10118590(0,*(int *)(in_ECX + 0x358) + (int)DAT_10223188[0x26]);
    if (iVar1 != 0) {
      uVar2 = FUN_1010b540();
      FUN_10017740(uVar2);
    }
    iVar1 = FUN_100177a0();
    iVar1 = *(int *)(iVar1 + 4);
    *(undefined8 *)(in_ECX + 0x2c4) = *(undefined8 *)(iVar1 + 8);
    *(undefined4 *)(in_ECX + 0x2cc) = *(undefined4 *)(iVar1 + 0x10);
    fVar6 = *(float *)(in_ECX + 0x2c8) - *(float *)(*(int *)(in_ECX + 4) + 0xc);
    fVar8 = *(float *)(in_ECX + 0x2c4) - *(float *)(*(int *)(in_ECX + 4) + 8);
    dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    local_28 = (float)dVar7;
    FUN_100bddb0();
    fVar6 = *(float *)(in_ECX + 0x360);
LAB_1000b86c:
    if (fVar6 <= local_28) {
      return;
    }
    if ((*(uint *)(in_ECX + 0x180) & 0x40000000) == 0) {
      *(undefined4 *)(in_ECX + 0x22c) = 4;
    }
    FUN_100c1a70();
    iVar1 = FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x358));
    *(undefined4 *)(in_ECX + 0x358) = 0;
    FUN_10017740(0);
    if (iVar1 == 0) {
      (*DAT_1022303c)(1,"ERROR: reached target, but no rush entity!\n");
      return;
    }
    FUN_1010f330(in_ECX);
    return;
  case 0x1e:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x58:
  case 0x59:
    goto switchD_1000b312_caseD_1e;
  case 0x20:
    FUN_100c00f0(*(undefined4 *)(in_ECX + 0x2f4),*(undefined4 *)(in_ECX + 0x2f8),
                 *(undefined4 *)(in_ECX + 0x2fc));
    goto switchD_1000b312_caseD_1e;
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x2e:
  case 0x2f:
    FUN_100c00f0(*(undefined4 *)(in_ECX + 0x2f4),*(undefined4 *)(in_ECX + 0x2f8),
                 *(undefined4 *)(in_ECX + 0x2fc));
    (**(code **)(*(int *)in_ECX + 0x130))((int)*(float *)(*(int *)(in_ECX + 4) + 0xb0));
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
    if (*(int *)(in_ECX + 0xf8) == 0) {
      return;
    }
    *(undefined4 *)(in_ECX + 0x214) = 0;
    break;
  case 0x40:
  case 0x41:
    iVar1 = FUN_10017790();
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 4);
      iVar3 = *(int *)(in_ECX + 4);
      local_1c = *(float *)(iVar1 + 0xc) - *(float *)(iVar3 + 0xc);
      local_18 = *(float *)(iVar1 + 0x10) - *(float *)(iVar3 + 0x10);
      local_20 = *(float *)(iVar1 + 8) - *(float *)(iVar3 + 8);
      fVar5 = (float10)FUN_1011a930(&local_20);
      *(float *)(*(int *)(in_ECX + 4) + 0xac) = (float)fVar5;
      (**(code **)(*(int *)in_ECX + 0x130))((int)*(float *)(*(int *)(in_ECX + 4) + 0xb0));
    }
  case 0x1a:
  case 0x1d:
  case 0x3f:
    iVar1 = *(int *)(in_ECX + 0xf8);
LAB_1000b33a:
    if (iVar1 == 0) {
      return;
    }
    break;
  case 0x4e:
    if (*(int *)(in_ECX + 0xf8) == 0) {
      return;
    }
    if (*(float *)(*(int *)(in_ECX + 4) + 0x134) < 255.0) {
      return;
    }
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x174) = 2;
    *(code **)(in_ECX + 0x78) = CBaseEntity::DeadRemoveThink;
    (**(code **)(*(int *)in_ECX + 8))(0x41a00000);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x13c) = 0;
    iVar3 = FUN_100bc3f0();
    iVar1 = *(int *)(in_ECX + 4);
    if (iVar3 == 0) {
      pfVar10 = &local_24;
      local_24 = 4.0;
      pfVar4 = &local_18;
      local_20 = 4.0;
      local_1c = 1.0;
      local_18 = -4.0;
      uStack_14 = 0xc0800000;
      fStack_10 = 0.0;
    }
    else {
      pfVar10 = &local_18;
      uStack_14 = *(undefined4 *)(iVar1 + 0xec);
      local_18 = *(float *)(iVar1 + 0xe8);
      fStack_10 = *(float *)(iVar1 + 0xe4) + 1.0;
      pfVar4 = &local_24;
      local_20 = *(float *)(iVar1 + 0xe0);
      local_1c = *(float *)(iVar1 + 0xe4);
      local_24 = *(float *)(iVar1 + 0xdc);
    }
    FUN_1011a030(iVar1,pfVar4,pfVar10);
    iVar1 = (**(code **)(*(int *)in_ECX + 300))();
    if (iVar1 == 0) {
      FUN_10100820(8,*(int *)(in_ECX + 4) + 8,0x180,0x41f00000);
      return;
    }
    CBaseEntity::SUB_StartFadeOut(in_ECX);
    return;
  case 0x4f:
    if (0 < *(int *)(*(int *)(in_ECX + 0x34c) + 0x3a8)) {
      return;
    }
    if (*DAT_10223188 < *(float *)(*(int *)(in_ECX + 0x34c) + 0x3ac)) {
      return;
    }
    break;
  case 0x50:
    if (*(int *)(in_ECX + 0xf8) == 0) {
      return;
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x34c) + 0x39c);
    if (0 < iVar1) {
      *(int *)(*(int *)(in_ECX + 0x34c) + 0x39c) = iVar1 + -1;
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134) =
           *(undefined4 *)(*(int *)(in_ECX + 0x34c) + 0x3a0);
      FUN_1000e9e0();
      return;
    }
    break;
  case 0x5c:
    if (*(int *)(in_ECX + 0x2b8) != 0) {
      return;
    }
    if ((*(uint *)(in_ECX + 0x180) & 0x40000000) == 0) {
      *(undefined4 *)(in_ECX + 0x22c) = 4;
    }
    FUN_100c1a70();
    return;
  }
  if ((*(uint *)(in_ECX + 0x180) & 0x40000000) == 0) {
    *(undefined4 *)(in_ECX + 0x22c) = 4;
  }
switchD_1000b312_caseD_4:
  return;
switchD_1000b312_caseD_1e:
  (**(code **)(*(int *)in_ECX + 0x130))((int)*(float *)(*(int *)(in_ECX + 4) + 0xb0));
  iVar1 = FUN_100be5b0();
  goto LAB_1000b33a;
}

