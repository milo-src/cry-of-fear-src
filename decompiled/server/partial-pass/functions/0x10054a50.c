// rea decompile_all
// name: FUN_10054a50
// address: 0x10054a50
// body: available
// range: 0x10054a50-0x10054bf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10054a50(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  int in_ECX;
  
  iVar3 = *param_1;
  fVar1 = _DAT_102267f8;
  if (((iVar3 != 1) && (iVar3 != 2)) && (fVar1 = _DAT_102267fc, iVar3 != 3)) {
    FUN_100bf310(param_1);
    return;
  }
  piVar2 = (int *)FUN_10087950(0x425c0000,(int)fVar1,4,0,0);
  if (piVar2 == (int *)0x0) {
    iVar3 = (*DAT_102230b0)(0xfffffff1,0xf);
    iVar3 = (*DAT_102230b0)(0,0,0x3f800000,0x3f4ccccd,0,iVar3 + 100);
    puVar4 = (&PTR_s_children_child_slash_wav_102127f4)[iVar3];
  }
  else {
    if ((*(byte *)(piVar2[1] + 0x1a8) & 0x28) != 0) {
      *(undefined4 *)(piVar2[1] + 0x70) = 0xc1900000;
      *(undefined4 *)(piVar2[1] + 0x68) = 0x40a00000;
      iVar3 = piVar2[1];
      fVar1 = *(float *)(DAT_10223188 + 0x48);
      *(ulonglong *)(iVar3 + 0x20) =
           CONCAT44(*(float *)(iVar3 + 0x24) - *(float *)(DAT_10223188 + 0x44) * 100.0,
                    *(float *)(iVar3 + 0x20) - *(float *)(DAT_10223188 + 0x40) * 100.0);
      *(float *)(iVar3 + 0x28) = *(float *)(iVar3 + 0x28) - fVar1 * 100.0;
    }
    iVar3 = (**(code **)(*piVar2 + 0x50))();
    if ((iVar3 == 0) || (iVar3 = (**(code **)(*piVar2 + 0x50))(), iVar3 == 1)) goto LAB_10054bd5;
    iVar3 = (*DAT_102230b0)(0xfffffff1,0xf);
    iVar3 = (*DAT_102230b0)(0,0,0x3f800000,0x3f4ccccd,0,iVar3 + 100);
    puVar4 = (&PTR_s_children_child_slice_wav_102127f0)[iVar3];
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,puVar4);
LAB_10054bd5:
  iVar3 = (*DAT_102230b0)(0,1);
  if (iVar3 != 0) {
    FUN_100549b0();
  }
  return;
}

