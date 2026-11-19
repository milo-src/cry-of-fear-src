// rea decompile_all
// name: FUN_1002aa40
// address: 0x1002aa40
// body: available
// range: 0x1002aa40-0x1002acd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002aa40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  iVar2 = *param_1;
  if (iVar2 == 1) {
    piVar1 = (int *)FUN_10087950(0x425c0000,(int)_DAT_1022681c,4,0,0);
    if (piVar1 == (int *)0x0) goto LAB_1002ac6d;
    if ((*(byte *)(piVar1[1] + 0x1a8) & 0x28) != 0) {
      *(undefined4 *)(piVar1[1] + 0x70) = 0xc1900000;
      *(undefined4 *)(piVar1[1] + 0x68) = 0x40a00000;
      iVar2 = piVar1[1];
      fVar6 = *(float *)(DAT_10223188 + 0x48);
      fVar7 = *(float *)(iVar2 + 0x20) - *(float *)(DAT_10223188 + 0x40) * 100.0;
      fVar5 = *(float *)(DAT_10223188 + 0x44);
LAB_1002aadd:
      fVar6 = *(float *)(iVar2 + 0x28) - fVar6 * 100.0;
      *(ulonglong *)(iVar2 + 0x20) = CONCAT44(*(float *)(iVar2 + 0x24) - fVar5 * 100.0,fVar7);
LAB_1002aaff:
      *(float *)(iVar2 + 0x28) = fVar6;
    }
  }
  else if (iVar2 == 2) {
    piVar1 = (int *)FUN_10087950(0x425c0000,(int)_DAT_1022681c,4,0,0);
    if (piVar1 == (int *)0x0) goto LAB_1002ac6d;
    if ((*(byte *)(piVar1[1] + 0x1a8) & 0x28) != 0) {
      *(undefined4 *)(piVar1[1] + 0x70) = 0x41900000;
      *(undefined4 *)(piVar1[1] + 0x68) = 0x40a00000;
      iVar2 = piVar1[1];
      fVar6 = *(float *)(DAT_10223188 + 0x48) * 100.0 + *(float *)(iVar2 + 0x28);
      *(ulonglong *)(iVar2 + 0x20) =
           CONCAT44(*(float *)(DAT_10223188 + 0x44) * 100.0 + *(float *)(iVar2 + 0x24),
                    *(float *)(DAT_10223188 + 0x40) * 100.0 + *(float *)(iVar2 + 0x20));
      goto LAB_1002aaff;
    }
  }
  else {
    if (iVar2 != 3) {
      FUN_100bf310(param_1);
      return;
    }
    piVar1 = (int *)FUN_10087950(0x425c0000,(int)_DAT_10226820,4,0,0);
    if (piVar1 == (int *)0x0) {
LAB_1002ac6d:
      iVar2 = (*DAT_102230b0)(0xfffffffb,5);
      iVar2 = iVar2 + 100;
      iVar3 = (*DAT_102230b0)(0,1);
      puVar4 = (&PTR_s_slower_hammer_miss1_wav_102120d0)[iVar3];
      goto LAB_1002ac8b;
    }
    if ((*(byte *)(piVar1[1] + 0x1a8) & 0x28) != 0) {
      *(undefined4 *)(piVar1[1] + 0x68) = 0x40a00000;
      iVar2 = piVar1[1];
      fVar6 = *(float *)(DAT_10223188 + 0x30);
      fVar7 = *(float *)(iVar2 + 0x20) - *(float *)(DAT_10223188 + 0x28) * 100.0;
      fVar5 = *(float *)(DAT_10223188 + 0x2c);
      goto LAB_1002aadd;
    }
  }
  iVar2 = (**(code **)(*piVar1 + 0x50))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x50))();
    if (iVar2 != 1) {
      iVar2 = (*DAT_102230b0)(0xfffffffb,5);
      iVar2 = iVar2 + 100;
      iVar3 = (*DAT_102230b0)(0,2);
      puVar4 = (&PTR_s_slower_hammer_strike1_wav_102120b8)[iVar3];
      goto LAB_1002ac8b;
    }
  }
  iVar2 = (*DAT_102230b0)(0xfffffffb,5);
  iVar2 = iVar2 + 100;
  iVar3 = (*DAT_102230b0)(0,2);
  puVar4 = (&PTR_s_slower_hammer_strike_wall1_wav_102120c4)[iVar3];
LAB_1002ac8b:
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,puVar4,0x3f800000,0x3f4ccccd,0,iVar2)
  ;
  iVar2 = (*DAT_102230b0)(0,1);
  if (iVar2 != 0) {
    FUN_1002a9a0();
  }
  return;
}

