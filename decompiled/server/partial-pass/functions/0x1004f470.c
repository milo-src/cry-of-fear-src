// rea decompile_all
// name: FUN_1004f470
// address: 0x1004f470
// body: available
// range: 0x1004f470-0x1004f77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004f470(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  float10 fVar7;
  
  iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0x19c);
  if ((((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x7c), iVar3 != 0)) &&
      (iVar3 = FUN_100125e0(*(undefined4 *)(iVar3 + 4)), iVar3 != 0)) &&
     (*(int *)(iVar3 + 0x5ac) != 0)) {
    if (*(char *)(in_ECX + 0x122) != '\0') {
      *(undefined1 *)(in_ECX + 0x122) = 0;
      DAT_10222e4c = '\x01';
      iVar4 = *(int *)(*(int *)(iVar3 + 0x5ac) + 4);
      *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - 48.0;
    }
    if (((1 < *(int *)(in_ECX + 0x1b0)) && (*(char *)(in_ECX + 0xe4) == '\0')) &&
       (iVar4 = FUN_1013f5f0((int)DAT_10223188[0x26] + *(int *)(in_ECX + 0xe8),"climb_loop_down"),
       iVar4 == 0)) {
      if (DAT_10222e4c == '\0') {
        if (*(char *)(in_ECX + 0x1a8) == '\0') {
          iVar4 = *(int *)(*(int *)(iVar3 + 0x5ac) + 4);
          *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) + 48.0;
        }
      }
      else {
        DAT_10222e4c = '\0';
      }
    }
    iVar4 = *(int *)(in_ECX + 0x124 + *(int *)(in_ECX + 0x1b0) * 4);
    if (*(char *)(in_ECX + 0xe4) == '\0') {
      iVar5 = FUN_1013f5f0((int)DAT_10223188[0x26] + iVar4,"climb_end");
      if (((iVar5 != 0) &&
          (iVar5 = FUN_1013f5f0(*(int *)(in_ECX + 0x124 + *(int *)(in_ECX + 0x1b0) * 4) +
                                (int)DAT_10223188[0x26],&DAT_101afe5c), iVar5 != 0)) &&
         ((*(int *)(in_ECX + 0xec) != 0 && (*(char *)(in_ECX + 0xe4) == '\0')))) {
        iVar4 = *(int *)(in_ECX + 0xec);
      }
    }
    else {
      iVar5 = FUN_1013f5f0((int)DAT_10223188[0x26] + iVar4,"climb_end");
      if ((((iVar5 != 0) &&
           (iVar5 = FUN_1013f5f0(*(int *)(in_ECX + 0x124 + *(int *)(in_ECX + 0x1b0) * 4) +
                                 (int)DAT_10223188[0x26],&DAT_101afe5c), iVar5 != 0)) &&
          (*(int *)(in_ECX + 0xf0) != 0)) && (*(char *)(in_ECX + 0xe4) == '\0')) {
        iVar4 = *(int *)(in_ECX + 0xf0);
      }
      iVar5 = FUN_1013f5f0(*(int *)(in_ECX + 0x124 + *(int *)(in_ECX + 0x1b0) * 4) +
                           (int)DAT_10223188[0x26],"climb_end");
      if (((iVar5 != 0) &&
          (iVar5 = FUN_1013f5f0(*(int *)(in_ECX + 0x124 + *(int *)(in_ECX + 0x1b0) * 4) +
                                (int)DAT_10223188[0x26],&DAT_101afe5c), iVar5 != 0)) &&
         ((*(int *)(in_ECX + 0xf8) != 0 && (*(char *)(in_ECX + 0xe4) == '\x01')))) {
        iVar4 = *(int *)(in_ECX + 0xf8);
      }
    }
    FUN_100c20c0((int)DAT_10223188[0x26] + iVar4);
    cVar2 = *(char *)(in_ECX + 0xe4);
    *(int *)(in_ECX + 0xe8) = iVar4;
    uVar6 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x5ac) + 4) + 0x20c),
                            (int)DAT_10223188[0x26] + iVar4);
    fVar7 = (float10)FUN_1000f3e0(uVar6);
    fVar1 = (float)fVar7;
    if (*(char *)(in_ECX + 0xe4) != '\0') {
      *(undefined1 *)(in_ECX + 0x1a8) = 1;
      *(undefined1 *)(in_ECX + 0xe4) = 0;
      *(undefined1 *)(in_ECX + 0x121) = 1;
    }
    if (fVar1 == 0.0) {
      (*DAT_1022303c)(1,"Unable to find delay\n");
    }
    else {
      if ((*(int *)(in_ECX + 0x1b0) == *(int *)(in_ECX + 0x1ac)) && (cVar2 == '\0')) {
        *(undefined1 *)(in_ECX + 0xdd) = 1;
        *(float *)(in_ECX + 0xe0) = *DAT_10223188 + fVar1;
      }
      *(float *)(*(int *)(in_ECX + 4) + 0x1b8) = *DAT_10223188 + fVar1;
    }
    if (cVar2 == '\0') {
      *(int *)(in_ECX + 0x1b0) = *(int *)(in_ECX + 0x1b0) + 1;
    }
  }
  return;
}

