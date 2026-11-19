// rea decompile_all
// name: FUN_1007b110
// address: 0x1007b110
// body: available
// range: 0x1007b110-0x1007b5e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007b110(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  undefined1 local_94 [48];
  int local_64;
  undefined1 local_5c [16];
  float local_4c;
  undefined1 local_48 [28];
  int local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  int *local_8;
  
  if (*DAT_10223188 <= (float)in_ECX[0x74] && (float)in_ECX[0x74] != *DAT_10223188) {
    return;
  }
  local_8 = in_ECX;
  if ((DAT_10222ee4 != (int *)0x0) && (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 == 0)) {
    return;
  }
  iVar2 = in_ECX[0x58];
  in_ECX[0x7e] = 0;
  iVar4 = *(int *)(iVar2 + 4);
  local_24 = *(float *)(iVar4 + 0x178) + *(float *)(iVar4 + 8);
  local_1c = *(float *)(iVar4 + 0x180) + *(float *)(iVar4 + 0x10);
  local_20 = *(float *)(iVar4 + 0x17c) + *(float *)(iVar4 + 0xc);
  iVar4 = *(int *)(iVar2 + 4);
  local_c = DAT_10223188[0xc];
  local_18 = *(float *)(iVar4 + 8) + *(float *)(iVar4 + 0x178) + DAT_10223188[10] * 48.0;
  local_14 = *(float *)(iVar4 + 0xc) + *(float *)(iVar4 + 0x17c) + DAT_10223188[0xb] * 48.0;
  local_10 = *(float *)(iVar4 + 0x10) + *(float *)(iVar4 + 0x180) + local_c * 48.0;
  FUN_10119320(*(int *)(iVar2 + 4) + 0x50);
  FUN_10119320(*(int *)(in_ECX[0x58] + 4) + 0x74);
  FUN_1011a800(&local_24,&local_18,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),local_5c);
  piVar5 = (int *)0x0;
  if (((DAT_10222ee4 != (int *)0x0) && (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0))
     && (0 < (int)DAT_10223188[0x24])) {
    iVar2 = 1;
    do {
      piVar3 = (int *)FUN_10119680(iVar2);
      if ((((piVar3 != (int *)0x0) && (iVar4 = (**(code **)(*piVar3 + 0xbc))(), iVar4 != 0)) &&
          ((FUN_1011a860(&local_24,&local_18,3,*(undefined4 *)(piVar3[1] + 0x20c),local_94),
           local_64 != 0 &&
           ((iVar4 = local_2c, local_2c != 0 || (iVar4 = (*DAT_1022305c)(0), iVar4 != 0)))))) &&
         (*(int **)(iVar4 + 0x7c) != (int *)0x0)) {
        piVar5 = *(int **)(iVar4 + 0x7c);
      }
      iVar2 = iVar2 + 1;
      in_ECX = local_8;
    } while (iVar2 <= (int)DAT_10223188[0x24]);
  }
  if (local_4c == 1.0) {
joined_r0x1007b38f:
    if (piVar5 == (int *)0x0) goto LAB_1007b319;
  }
  else if (piVar5 == (int *)0x0) {
    if ((local_2c != 0) || (local_2c = (*DAT_1022305c)(0), local_2c != 0)) {
      piVar5 = *(int **)(local_2c + 0x7c);
    }
    goto joined_r0x1007b38f;
  }
  iVar2 = (**(code **)(*piVar5 + 0xd0))();
  if (iVar2 == 0) {
    for (piVar3 = (int *)FUN_101186b0(0,local_48,0x42800000); piVar3 != (int *)0x0;
        piVar3 = (int *)FUN_101186b0(piVar3,local_48,0x42800000)) {
      iVar2 = (**(code **)(*piVar3 + 0xd0))();
      if ((((iVar2 != 0) && (iVar2 = (**(code **)(*piVar3 + 0xbc))(), iVar2 == 0)) &&
          (local_8 = (int *)FUN_100125e0(piVar3[1]), local_8 != (int *)0x0)) &&
         (*(char *)((int)local_8 + 0x501) == '\0')) {
        (**(code **)(*in_ECX + 0x198))(4,1,0);
        *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x260) = 0x41c80000;
        FUN_100f9140(1,0x44268000);
        fVar1 = *DAT_10223188;
        in_ECX[0x74] = (int)(fVar1 + 8.0);
        in_ECX[0x73] = (int)(fVar1 + 8.0);
        in_ECX[0x76] = (int)(*DAT_10223188 + 2.8);
        FUN_100ea240("syringe_heal_player_hit",0);
        in_ECX[0x7e] = (int)local_8;
        (**(code **)(*in_ECX + 8))(0x400a3d71);
        in_ECX[0x1e] = (int)CSyringe::BladeRetract;
        return;
      }
    }
  }
  iVar2 = (**(code **)(*piVar5 + 0xd0))();
  if (iVar2 != 0) {
    piVar5 = (int *)FUN_100125e0(piVar5[1]);
    if (piVar5 == (int *)0x0) {
      return;
    }
    iVar2 = (**(code **)(*piVar5 + 0xbc))();
    if (iVar2 == 0) {
      return;
    }
    if (100.0 < *(float *)(piVar5[1] + 0x164) || *(float *)(piVar5[1] + 0x164) == 100.0) {
      return;
    }
    *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x260) = 0x41c80000;
    FUN_100f9140(1,0x44268000);
    (**(code **)(*in_ECX + 0x198))(4,1,0);
    fVar1 = *DAT_10223188;
    in_ECX[0x74] = (int)(fVar1 + 8.0);
    in_ECX[0x73] = (int)(fVar1 + 8.0);
    in_ECX[0x76] = (int)(*DAT_10223188 + 2.8);
    FUN_100ea240("syringe_heal_player_hit",0);
    in_ECX[0x7e] = (int)piVar5;
    *(undefined4 *)(piVar5[1] + 0x260) = 0x41c80000;
    FUN_100f9140(1,0x44268000);
    (**(code **)(*in_ECX + 8))(0x3fc00000);
    in_ECX[0x1e] = (int)CSyringe::BladeRetract;
    return;
  }
LAB_1007b319:
  (**(code **)(*in_ECX + 0x198))(5,1,0);
  fVar1 = *DAT_10223188;
  in_ECX[0x74] = (int)(fVar1 + 1.0);
  in_ECX[0x73] = (int)(fVar1 + 1.0);
  in_ECX[0x76] = (int)(*DAT_10223188 + 1.5);
  return;
}

