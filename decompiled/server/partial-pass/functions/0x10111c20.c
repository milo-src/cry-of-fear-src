// rea decompile_all
// name: FUN_10111c20
// address: 0x10111c20
// body: available
// range: 0x10111c20-0x1011271c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10111c20(void)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  int *in_ECX;
  undefined1 local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  undefined4 local_14;
  int *local_10;
  float local_c;
  int *local_8;
  
  local_10 = in_ECX + 0x3b;
  local_8 = in_ECX;
  iVar3 = FUN_10017780();
  if ((iVar3 == 0) || (iVar3 = FUN_10017780(), iVar3 == 0)) {
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      (*DAT_1022303c)();
    }
    in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*in_ECX + 8))();
    return;
  }
  (**(code **)(*in_ECX + 8))();
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
    FUN_100177a0();
    FUN_100177a0();
    (*DAT_1022303c)(1);
  }
  iVar3 = in_ECX[0x37];
  if (iVar3 == 0) goto switchD_10111cd9_default;
  switch(in_ECX[0x38]) {
  case 0:
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0xc));
      (*DAT_1022303c)(1,"DEBUG: Set origin from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 8));
      iVar3 = in_ECX[0x37];
    }
    FUN_10017790(*(int *)(DAT_10223188 + 0x98) + iVar3);
    FUN_100b8110(&stack0xffffffb0);
    goto LAB_10111d79;
  case 1:
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0xc));
      (*DAT_1022303c)(1,"DEBUG: Offset origin from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 8));
    }
    FUN_10017790();
    pfVar4 = (float *)FUN_100b8240(local_34);
    local_c = *(float *)(DAT_10223188 + 4);
    local_10 = (int *)(*pfVar4 * local_c);
    local_8 = (int *)(pfVar4[1] * local_c);
    local_c = pfVar4[2] * local_c;
    FUN_100177a0();
LAB_10111d79:
    uVar5 = FUN_10017790();
    FUN_100c4550(uVar5);
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0xc));
      (*DAT_1022303c)(1,"to %f %f %f\n",(double)*(float *)(*(int *)(iVar3 + 4) + 8));
    }
    iVar3 = FUN_100177a0();
    puVar1 = (uint *)(*(int *)(iVar3 + 4) + 0x1a8);
    *puVar1 = *puVar1 & 0xfffffdff;
    goto switchD_10111cd9_default;
  case 2:
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x24));
      (*DAT_1022303c)(1,"DEBUG: Set velocity from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 0x20));
      iVar3 = in_ECX[0x37];
    }
    FUN_10017790(*(int *)(DAT_10223188 + 0x98) + iVar3);
    FUN_100b8240(&stack0xffffffb0);
    uVar5 = FUN_10017790();
    FUN_100c4ed0(uVar5);
    break;
  case 3:
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x24));
      (*DAT_1022303c)(1,"DEBUG: Accelerate from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 0x20));
    }
    FUN_10017790();
    pfVar4 = (float *)FUN_100b8240(local_34);
    local_c = *(float *)(DAT_10223188 + 4);
    local_8 = (int *)(*pfVar4 * local_c);
    local_10 = (int *)(pfVar4[1] * local_c);
    local_c = pfVar4[2] * local_c;
    FUN_100177a0();
    uVar5 = FUN_10017790();
    FUN_100c4ed0(uVar5);
    break;
  case 4:
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x24));
      (*DAT_1022303c)(1,"DEBUG: Set velocity (path) from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 0x20));
    }
    FUN_100177a0();
    uVar5 = FUN_10017790(*(int *)(DAT_10223188 + 0x98) + local_8[0x37]);
    FUN_100b8110(local_34,local_8,uVar5);
    uVar5 = FUN_10017790();
    FUN_100c4ed0(uVar5);
    in_ECX = local_8;
    break;
  default:
    goto switchD_10111cd9_default;
  }
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
    FUN_100177a0();
    iVar3 = FUN_100177a0();
    iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x24));
    (*DAT_1022303c)(1,"to %f %f %f\n",(double)*(float *)(*(int *)(iVar3 + 4) + 0x20));
  }
switchD_10111cd9_default:
  if (in_ECX[0x39] == 0) {
    return;
  }
  switch(in_ECX[0x3a]) {
  case 0:
    FUN_10017790();
    puVar6 = (undefined8 *)FUN_100b8240(local_34);
    local_1c = *puVar6;
    local_14 = *(undefined4 *)(puVar6 + 1);
    local_8 = *(int **)(in_ECX[1] + 0x1a4);
    iVar3 = FUN_10108b60();
    if (iVar3 == 0) {
LAB_10112310:
      if (((byte)local_8 & 1) == 0) {
        return;
      }
      (*DAT_1022303c)();
      return;
    }
    if (((uint)local_8 & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x54));
      (*DAT_1022303c)(1,"DEBUG: Set angles from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 0x50));
    }
    FUN_1011a8d0();
    break;
  case 1:
    FUN_10017790();
    puVar6 = (undefined8 *)FUN_100b8240(local_34);
    local_1c = *puVar6;
    local_14 = *(undefined4 *)(puVar6 + 1);
    local_8 = *(int **)(in_ECX[1] + 0x1a4);
    iVar3 = FUN_10108b60();
    if (iVar3 == 0) goto LAB_10112310;
    if (((uint)local_8 & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x54));
      (*DAT_1022303c)(1,"DEBUG: Offset angles from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 0x50));
    }
    pfVar4 = (float *)FUN_1011a8d0();
    local_c = *(float *)(DAT_10223188 + 4);
    local_8 = (int *)(*pfVar4 * local_c);
    local_10 = (int *)(pfVar4[1] * local_c);
    local_c = pfVar4[2] * local_c;
    FUN_100177a0();
    break;
  case 2:
    FUN_1011a590();
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x54));
      (*DAT_1022303c)(1,"DEBUG: Rotate angles from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 0x50));
    }
    local_c = *(float *)(DAT_10223188 + 4);
    local_8 = (int *)(local_28 * local_c);
    local_10 = (int *)(local_24 * local_c);
    local_c = local_20 * local_c;
    FUN_100177a0();
    break;
  case 3:
    FUN_1011a590();
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      FUN_100177a0();
      iVar3 = FUN_100177a0();
      iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x60));
      (*DAT_1022303c)(1,"DEBUG: Set avelocity from %f %f %f ",
                      (double)*(float *)(*(int *)(iVar3 + 4) + 0x5c));
    }
    uVar5 = FUN_10017790();
    FUN_100c4b90(uVar5);
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) == 0) {
      return;
    }
    FUN_100177a0();
    iVar3 = FUN_100177a0();
    iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x60));
    fVar2 = *(float *)(*(int *)(iVar3 + 4) + 0x5c);
    goto LAB_101125b8;
  default:
    goto switchD_10112237_default;
  }
  uVar5 = FUN_10017790();
  FUN_100c48e0(uVar5);
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
    FUN_100177a0();
    iVar3 = FUN_100177a0();
    iVar3 = FUN_100177a0((double)*(float *)(*(int *)(iVar3 + 4) + 0x54));
    fVar2 = *(float *)(*(int *)(iVar3 + 4) + 0x50);
LAB_101125b8:
    (*DAT_1022303c)(1,"to %f %f %f\n",(double)fVar2);
    return;
  }
switchD_10112237_default:
  return;
}

