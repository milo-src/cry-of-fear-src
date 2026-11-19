// rea decompile_all
// name: FUN_1004f780
// address: 0x1004f780
// body: available
// range: 0x1004f780-0x1004fb48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f780(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  float10 fVar7;
  
  iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0x19c);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = *(int *)(iVar3 + 0x7c);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_100125e0(*(undefined4 *)(iVar3 + 4));
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x5ac) == 0) {
    return;
  }
  *(int *)(in_ECX + 0x1b0) = *(int *)(in_ECX + 0x1b0) + -1;
  iVar6 = *(int *)(in_ECX + 0x1b0);
  *(undefined1 *)(in_ECX + 0x1a8) = 0;
  if (*(char *)(in_ECX + 0x121) != '\0') {
    *(undefined1 *)(in_ECX + 0x121) = 0;
    iVar6 = *(int *)(*(int *)(iVar3 + 0x5ac) + 4);
    *(float *)(iVar6 + 0x10) = *(float *)(iVar6 + 0x10) - 48.0;
    iVar6 = *(int *)(in_ECX + 0x1b0);
  }
  iVar6 = *(int *)(in_ECX + 0x124 + iVar6 * 4) + (int)DAT_10223188[0x26];
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    iVar6 = FUN_1013f5f0(iVar6,"climb_end");
    if (iVar6 != 0) {
      iVar6 = *(int *)(in_ECX + 0xec);
      goto LAB_1004f851;
    }
  }
  else {
    iVar6 = FUN_1013f5f0(iVar6,"climb_end");
    if (iVar6 != 0) {
      iVar6 = *(int *)(in_ECX + 0xf4);
LAB_1004f851:
      if (iVar6 != 0) {
        *(int *)(in_ECX + 0x124 + *(int *)(in_ECX + 0x1b0) * 4) = iVar6;
      }
    }
  }
  iVar6 = (int)DAT_10223188[0x26] + *(int *)(in_ECX + 0xe8);
  if (1 < *(int *)(in_ECX + 0x1b0)) {
    iVar6 = FUN_1013f5f0(iVar6,"climb_loop_down");
    if (iVar6 != 0) {
      iVar6 = *(int *)(*(int *)(iVar3 + 0x5ac) + 4);
      *(float *)(iVar6 + 0x10) = *(float *)(iVar6 + 0x10) - 48.0;
    }
    FUN_100c20c0("climb_loop_down");
    uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x5ac) + 4) + 0x20c),
                            "climb_loop_down");
    fVar7 = (float10)FUN_1000f3e0(uVar5);
    fVar2 = (float)fVar7;
    *(int *)(in_ECX + 0xe8) = (int)"climb_loop_down" - (int)DAT_10223188[0x26];
    if (fVar2 == 0.0) {
      (*DAT_1022303c)(1,"Unable to find delay\n");
      return;
    }
    if (*(int *)(in_ECX + 0x1b0) == *(int *)(in_ECX + 0x1ac)) {
      *(undefined1 *)(in_ECX + 0xdd) = 1;
      *(float *)(in_ECX + 0xe0) = *DAT_10223188 + fVar2;
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x1b8) = *DAT_10223188 + fVar2;
    return;
  }
  iVar6 = FUN_1013f5f0(iVar6,"climb_loop_down");
  if (iVar6 != 0) {
    iVar6 = *(int *)(*(int *)(iVar3 + 0x5ac) + 4);
    *(float *)(iVar6 + 0x10) = *(float *)(iVar6 + 0x10) - 48.0;
  }
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    if (*(int *)(in_ECX + 0xec) == 0) {
      pcVar4 = "climb_end_down";
    }
    else {
      pcVar4 = (char *)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0xec));
    }
  }
  else if (*(int *)(in_ECX + 0xf4) == 0) {
    pcVar4 = "climb_end_down";
  }
  else {
    pcVar4 = (char *)((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0xf4));
  }
  FUN_100c20c0(pcVar4);
  if (*(char *)(in_ECX + 0xe4) == '\0') {
    if (*(int *)(in_ECX + 0xec) != 0) {
      uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x5ac) + 4) + 0x20c),
                              (int)DAT_10223188[0x26] + *(int *)(in_ECX + 0xec));
      fVar7 = (float10)FUN_1000f3e0(uVar5);
      iVar3 = *(int *)(in_ECX + 0xec);
      goto LAB_1004f9cd;
    }
  }
  else if (*(int *)(in_ECX + 0xf4) != 0) {
    uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x5ac) + 4) + 0x20c),
                            (int)DAT_10223188[0x26] + *(int *)(in_ECX + 0xf4));
    fVar7 = (float10)FUN_1000f3e0(uVar5);
    iVar3 = *(int *)(in_ECX + 0xf4);
    goto LAB_1004f9cd;
  }
  uVar5 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x5ac) + 4) + 0x20c),
                          "climb_end_down");
  fVar7 = (float10)FUN_1000f3e0(uVar5);
  iVar3 = (int)"climb_end_down" - (int)DAT_10223188[0x26];
LAB_1004f9cd:
  fVar2 = (float)fVar7;
  *(int *)(in_ECX + 0xe8) = iVar3;
  if (fVar2 == 0.0) {
    (*DAT_1022303c)(1,"Unable to find delay\n");
  }
  else {
    if (*(int *)(in_ECX + 0x1b0) == *(int *)(in_ECX + 0x1ac)) {
      *(undefined1 *)(in_ECX + 0xdd) = 1;
      *(float *)(in_ECX + 0xe0) = *DAT_10223188 + fVar2;
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x1b8) = *DAT_10223188 + fVar2;
  }
  fVar1 = *DAT_10223188;
  *(undefined1 *)(in_ECX + 0xdd) = 1;
  *(float *)(in_ECX + 0xe0) = fVar1 + fVar2;
  return;
}

