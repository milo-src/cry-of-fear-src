// rea decompile_all
// name: FUN_1007b970
// address: 0x1007b970
// body: available
// range: 0x1007b970-0x1007be0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007b970(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int in_ECX;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 local_8c [48];
  int local_5c;
  undefined1 local_54 [48];
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar9 = *param_1;
  if (iVar9 == 1) {
    piVar1 = (int *)FUN_10087950(0x42b40000,(int)_DAT_102267c0,0x80,1,0);
    if (piVar1 != (int *)0x0) {
      iVar9 = (**(code **)(*piVar1 + 0xd0))();
      if ((iVar9 != 0) && (iVar9 = FUN_100125e0(piVar1[1]), iVar9 != 0)) {
        FUN_10119320(*(int *)(in_ECX + 4) + 0x50);
        *(undefined4 *)(*(int *)(iVar9 + 4) + 0x68) = 0x40a00000;
        *(float *)(*(int *)(iVar9 + 4) + 0x10) = *(float *)(*(int *)(iVar9 + 4) + 0x10) + 2.0;
        iVar2 = *(int *)(iVar9 + 4);
        local_8 = (float)DAT_10223188[0xc] * 250.0 + *(float *)(iVar2 + 0x28) +
                  (float)DAT_10223188[0xf] * 200.0;
        *(ulonglong *)(iVar2 + 0x20) =
             CONCAT44((float)DAT_10223188[0xb] * 250.0 + *(float *)(iVar2 + 0x24) +
                      (float)DAT_10223188[0xe] * 200.0,
                      (float)DAT_10223188[10] * 250.0 + *(float *)(iVar2 + 0x20) +
                      (float)DAT_10223188[0xd] * 200.0);
        *(float *)(iVar2 + 0x28) = local_8;
        *(undefined1 *)(iVar9 + 0x50c) = 1;
        FUN_100f91b0(0xc1200000,0x41a00000,0x41a00000);
        *(undefined4 *)(iVar9 + 0x4f4) = *DAT_10223188;
        *(undefined1 *)(iVar9 + 0x500) = 0;
      }
      iVar9 = (**(code **)(*piVar1 + 0x50))();
      if ((iVar9 == 0) || (iVar9 = (**(code **)(*piVar1 + 0x50))(), iVar9 == 1)) {
        iVar9 = (*DAT_102230b0)(0xfffffffb,5);
        iVar9 = (*DAT_102230b0)(0,0,0x3f800000,0x3f4ccccd,0,iVar9 + 100);
        puVar3 = (&PTR_s_taller_taller_wall_punch_wav_10212f04)[iVar9];
      }
      else {
        iVar9 = (*DAT_102230b0)(0xfffffffb,5);
        iVar9 = (*DAT_102230b0)(0,0,0x3f800000,0x3f4ccccd,0,iVar9 + 100);
        puVar3 = (&PTR_s_taller_taller_player_punch_wav_101bbecf_1_10212f00)[iVar9];
      }
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,puVar3);
    }
    iVar9 = (*DAT_102230b0)(0xfffffffb,5);
    iVar9 = (*DAT_102230b0)(0,0,0x3f800000,0x3f4ccccd,0,iVar9 + 100);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,
                 (&PTR_s_taller_taller_swing_wav_10212f08)[iVar9]);
    iVar9 = (*DAT_102230b0)(0,1);
    if (iVar9 != 0) {
      FUN_1007b870();
    }
    return;
  }
  if (iVar9 == 2) {
    FUN_10119240(*(int *)(in_ECX + 4) + 0x50);
    iVar9 = *(int *)(in_ECX + 4);
    local_10 = *(float *)(iVar9 + 8);
    local_c = *(float *)(iVar9 + 0xc);
    local_8 = *(float *)(iVar9 + 0xfc) * 0.25 + *(float *)(iVar9 + 0x10);
    local_1c = (float)DAT_10223188[10] * 90.0 + local_10;
    local_18 = (float)DAT_10223188[0xb] * 90.0 + local_c;
    local_14 = (float)DAT_10223188[0xc] * 90.0 + local_8;
    FUN_1011a7e0(&local_10,&local_1c,0,3,*(undefined4 *)(iVar9 + 0x20c),local_54);
    if (((DAT_10222ee4 != (int *)0x0) && (iVar9 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar9 != 0)
        ) && (iVar9 = 1, 0 < (int)DAT_10223188[0x24])) {
      do {
        piVar1 = (int *)FUN_10119680(iVar9);
        if (((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0xbc))(), iVar2 != 0)) &&
           (FUN_1011a860(&local_10,&local_1c,3,*(undefined4 *)(piVar1[1] + 0x20c),local_8c),
           local_5c != 0)) {
          local_24 = local_5c;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 <= (int)DAT_10223188[0x24]);
    }
    if (local_24 == 0) {
      return;
    }
    piVar1 = *(int **)(local_24 + 0x7c);
    iVar9 = (**(code **)(*piVar1 + 0xd0))();
    if ((iVar9 == 0) || (piVar1 = (int *)FUN_100125e0(piVar1[1]), piVar1 == (int *)0x0)) {
      iVar9 = (*DAT_102230b0)(0xfffffffb,5);
      iVar9 = iVar9 + 100;
      uVar8 = 0;
      uVar7 = 0x3f4ccccd;
      uVar6 = 0x3f800000;
      iVar2 = (*DAT_102230b0)(0,0,0x3f800000,0x3f4ccccd,0,iVar9);
      pcVar5 = (&PTR_s_taller_taller_wall_punch_wav_10212f04)[iVar2];
      uVar4 = 0;
    }
    else {
      piVar1[0x16d] = piVar1[0x16d] | 6;
      *(undefined1 *)(piVar1 + 0xea) = 1;
      *(undefined4 *)(piVar1[1] + 0x164) = 0;
      (**(code **)(*piVar1 + 0x6c))(piVar1[1],1);
      iVar9 = (*DAT_102230b0)(0xfffffffb,5);
      iVar9 = iVar9 + 100;
      uVar8 = 0;
      uVar7 = 0x3f4ccccd;
      uVar6 = 0x3f800000;
      pcVar5 = "taller/taller_stamp.wav";
      uVar4 = 1;
    }
  }
  else {
    if (iVar9 != 3) {
      FUN_100bf310(param_1);
      return;
    }
    iVar9 = 100;
    uVar8 = 0;
    uVar7 = 0x3f4ccccd;
    uVar6 = 0x3f800000;
    pcVar5 = "taller/taller_step.wav";
    uVar4 = 4;
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),uVar4,pcVar5,uVar6,uVar7,uVar8,iVar9);
  return;
}

