// rea decompile_all
// name: FUN_100b2ee0
// address: 0x100b2ee0
// body: available
// range: 0x100b2ee0-0x100b316a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b2ee0(int param_1)

{
  float *pfVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  CRecharge *in_ECX;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  
  pcVar7 = "player";
  pbVar6 = (byte *)((int)DAT_10223188[0x26] + **(int **)(param_1 + 4));
  do {
    bVar2 = *pbVar6;
    bVar8 = bVar2 < (byte)*pcVar7;
    if (bVar2 != *pcVar7) {
LAB_100b2f21:
      uVar3 = -(uint)bVar8 | 1;
      goto LAB_100b2f26;
    }
    if (bVar2 == 0) break;
    bVar2 = pbVar6[1];
    bVar8 = bVar2 < (byte)pcVar7[1];
    if (bVar2 != pcVar7[1]) goto LAB_100b2f21;
    pbVar6 = pbVar6 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar2 != 0);
  uVar3 = 0;
LAB_100b2f26:
  if (uVar3 != 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x188) < 1) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134) = 0x3f800000;
    CRecharge::Off(in_ECX);
    if (*(int *)(in_ECX + 0x188) < 1) goto LAB_100b3112;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0x16c) < 0) {
    (**(code **)(*(int *)in_ECX + 8))(0x3e800000);
    *(code **)(in_ECX + 0x78) = CRecharge::Off;
    if (*DAT_10223188 <= *(float *)(in_ECX + 0x180)) {
      return;
    }
    FUN_10017740(param_1);
    piVar4 = (int *)FUN_100177a0();
    iVar5 = (**(code **)(*piVar4 + 0xd0))();
    if (iVar5 == 0) {
      return;
    }
    iVar5 = *(int *)(in_ECX + 0x18c);
    if (iVar5 == 0) {
      *(undefined4 *)(in_ECX + 0x18c) = 1;
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"items/suitchargeok1.wav",
                   0x3f59999a,0x3f4ccccd,0,100);
      iVar5 = *(int *)(in_ECX + 0x18c);
      *(float *)(in_ECX + 400) = *DAT_10223188 + 0.56;
    }
    if ((iVar5 == 1) && (*(float *)(in_ECX + 400) <= *DAT_10223188)) {
      *(undefined4 *)(in_ECX + 0x18c) = 2;
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),6,"items/suitcharge1.wav",
                   0x3f59999a,0x3f4ccccd,0,100);
    }
    iVar5 = FUN_100177a0();
    pfVar1 = (float *)(*(int *)(iVar5 + 4) + 0x1c0);
    if (*pfVar1 <= 100.0 && *pfVar1 != 100.0) {
      *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + -1;
      iVar5 = FUN_100177a0();
      *(float *)(*(int *)(iVar5 + 4) + 0x1c0) = *(float *)(*(int *)(iVar5 + 4) + 0x1c0) + 1.0;
      iVar5 = FUN_100177a0();
      if (100.0 < *(float *)(*(int *)(iVar5 + 4) + 0x1c0)) {
        iVar5 = FUN_100177a0();
        *(undefined4 *)(*(int *)(iVar5 + 4) + 0x1c0) = 0x42c80000;
      }
    }
    *(float *)(in_ECX + 0x180) = *DAT_10223188 + 0.1;
    return;
  }
LAB_100b3112:
  if (*(float *)(in_ECX + 400) <= *DAT_10223188) {
    *(float *)(in_ECX + 400) = *DAT_10223188 + 0.62;
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),3,"items/suitchargeno1.wav",
                 0x3f59999a,0x3f4ccccd,0,100);
  }
  return;
}

