// rea decompile_all
// name: FUN_1006af00
// address: 0x1006af00
// body: available
// range: 0x1006af00-0x1006b153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006af00(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  char *pcVar4;
  
  iVar2 = in_ECX[1];
  if (*(float *)(iVar2 + 0x260) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar2 + 0x260)) {
    FUN_100fc9f0(*(undefined4 *)(iVar2 + 0x20c),0,"sawcrazy/dblsawloop.wav",0x3f800000,0x3f4ccccd,0,
                 100);
    *(float *)(in_ECX[1] + 0x260) = *DAT_10223188 + 7.0;
    iVar2 = in_ECX[1];
  }
  if (*(float *)(iVar2 + 0x25c) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar2 + 0x25c)) {
    iVar2 = (**(code **)(*in_ECX + 0xbc))();
    if (iVar2 != 0) {
      piVar3 = (int *)FUN_10087950(0x425c0000,200,4,0,0);
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar3 + 0xd0))();
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*piVar3 + 0xbc))();
          if (iVar2 != 0) {
            iVar2 = (**(code **)(*piVar3 + 0xd0))();
            if (iVar2 != 0) {
              *(undefined4 *)(piVar3[1] + 0x70) = 0xc1900000;
              *(undefined4 *)(piVar3[1] + 0x68) = 0x40a00000;
              iVar2 = piVar3[1];
              fVar1 = DAT_10223188[0x12];
              *(ulonglong *)(iVar2 + 0x20) =
                   CONCAT44(*(float *)(iVar2 + 0x24) - DAT_10223188[0x11] * 100.0,
                            *(float *)(iVar2 + 0x20) - DAT_10223188[0x10] * 100.0);
              *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) - fVar1 * 100.0;
            }
            FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"sawrunner/chainsaw_attack_hit.wav",
                         0x3f800000,0x3f4ccccd,0,100);
          }
        }
      }
      *(float *)(in_ECX[1] + 600) = *DAT_10223188 + 0.25;
    }
  }
  if (*DAT_10223188 < *(float *)(in_ECX[1] + 600) || *DAT_10223188 == *(float *)(in_ECX[1] + 600))
  goto LAB_1006b148;
  iVar2 = (*DAT_102230b0)(0,1);
  if (iVar2 == 0) {
    pcVar4 = "sawcrazy/random1.wav";
LAB_1006b10d:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
  }
  else if (iVar2 == 1) {
    pcVar4 = "sawcrazy/random2.wav";
    goto LAB_1006b10d;
  }
  iVar2 = (*DAT_102230b0)(10,0x32);
  *(float *)(in_ECX[1] + 600) = (float)iVar2 + *DAT_10223188;
LAB_1006b148:
  FUN_100c0430();
  return;
}

