// rea decompile_all
// name: FUN_10027b60
// address: 0x10027b60
// body: available
// range: 0x10027b60-0x10027cb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027b60(int *param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  iVar1 = *param_1;
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) {
    FUN_100bf310(param_1);
    return;
  }
  iVar1 = FUN_10087950(0x428c0000,0,4,0,0);
  if (iVar1 == 0) {
    iVar1 = (*DAT_102230b0)(0xfffffffb,5);
    iVar1 = (*DAT_102230b0)(0,0,0x3f800000,0x3f4ccccd,0,iVar1 + 100);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,
                 (&PTR_s_boss_sawer_chainsaw_attack_wav_10212038)[iVar1]);
  }
  else {
    piVar2 = (int *)FUN_10017950("third_person_interaction",*(int *)(in_ECX + 4) + 8,&DAT_10222f34,
                                 *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    if (piVar2 != (int *)0x0) {
      *(int *)(piVar2[1] + 0xb8) = (int)"models/chainsawguy2.mdl" - *(int *)(DAT_10223188 + 0x98);
      *(int *)(piVar2[1] + 0x1d8) = (int)"action" - *(int *)(DAT_10223188 + 0x98);
      FUN_10027a20(piVar2[1],iVar1);
      FUN_10017740(iVar1);
      FUN_10027a20(piVar2[1]);
      FUN_10017740(in_ECX);
      (**(code **)(*piVar2 + 0x2c))();
      FUN_10119900();
    }
  }
  iVar1 = (*DAT_102230b0)(0,1);
  if (iVar1 != 0) {
    FUN_10027ac0();
  }
  return;
}

