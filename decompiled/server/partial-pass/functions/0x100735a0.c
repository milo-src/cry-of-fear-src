// rea decompile_all
// name: FUN_100735a0
// address: 0x100735a0
// body: available
// range: 0x100735a0-0x100738ce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100735a0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float fVar4;
  undefined1 local_40 [12];
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
  
  iVar1 = FUN_10017780();
  if (iVar1 != 0) {
    iVar1 = FUN_10017780();
    if (iVar1 == 0) {
      FUN_1000eb70(1,0);
    }
    else {
      iVar1 = in_ECX[1];
      iVar2 = FUN_100177a0();
      iVar2 = *(int *)(iVar2 + 4);
      fVar3 = (float10)FUN_100c2760(*(float *)(iVar2 + 8) - *(float *)(iVar1 + 8),
                                    *(float *)(iVar2 + 0xc) - *(float *)(iVar1 + 0xc),
                                    *(float *)(iVar2 + 0x10) - *(float *)(iVar1 + 0x10));
      local_8 = (float)fVar3;
      fVar4 = local_8 - *(float *)(in_ECX[1] + 0x54);
      if (180.0 < fVar4) {
        fVar4 = fVar4 - 360.0;
      }
      if (fVar4 < -180.0) {
        fVar4 = fVar4 + 360.0;
      }
      FUN_1000eb70(1,fVar4);
    }
  }
  if (((float)in_ECX[0xda] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xda]) &&
     (iVar1 = (**(code **)(*in_ECX + 0xbc))(), iVar1 != 0)) {
    iVar1 = FUN_10017780();
    if ((iVar1 != 0) && ((*(byte *)(in_ECX + 0x60) & 0x10) != 0)) {
      FUN_10119320(in_ECX[1] + 0x50);
      FUN_1000e7c0(0,&local_1c,local_40);
      iVar1 = FUN_100177a0();
      iVar1 = *(int *)(iVar1 + 4);
      iVar2 = FUN_100177a0();
      iVar2 = *(int *)(iVar2 + 4);
      local_28 = (*(float *)(iVar1 + 0x178) + *(float *)(iVar2 + 8)) - local_1c;
      local_24 = (*(float *)(iVar1 + 0x17c) + *(float *)(iVar2 + 0xc)) - local_18;
      local_20 = (*(float *)(iVar1 + 0x180) + *(float *)(iVar2 + 0x10)) - local_14;
      FUN_10017e70(&local_34);
      fVar3 = (float10)(*DAT_102230b4)(0xbd4ccccd,0x3d4ccccd);
      local_8 = (float)(fVar3 + (float10)local_34);
      fVar3 = (float10)(*DAT_102230b4)(0xbd4ccccd,0x3d4ccccd);
      local_c = (float)(fVar3 + (float10)local_30);
      fVar3 = (float10)(*DAT_102230b4)(0xbd4ccccd,0);
      local_10 = (float)(fVar3 + (float10)local_2c);
      (*DAT_10223000)(4,0x17,&local_1c,0);
      (*DAT_10223008)(0x73);
      (*DAT_1022301c)(local_1c);
      (*DAT_1022301c)(local_18);
      (*DAT_1022301c)(local_14);
      (*DAT_10223010)((int)DAT_10231f28);
      (*DAT_10223010)((int)DAT_10231f20);
      (*DAT_10223008)(0xf7);
      (*DAT_10223008)(4);
      (*DAT_10223004)();
      FUN_100c20c0(&DAT_101ba29c);
      FUN_10041ce0(in_ECX[1],local_1c,local_18,local_14,local_8 * 900.0,local_c * 900.0,
                   local_10 * 900.0);
    }
    fVar3 = (float10)(*DAT_102230b4)(0,0x40000000);
    local_10 = *DAT_10223188 + 1.0;
    in_ECX[0xda] = (int)(float)(fVar3 + (float10)local_10);
  }
  FUN_100c0430();
  return;
}

