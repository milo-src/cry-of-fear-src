// rea decompile_all
// name: FUN_100bf310
// address: 0x100bf310
// body: available
// range: 0x100bf310-0x100bf791 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bf310(int *param_1)

{
  int iVar1;
  int in_ECX;
  char *pcVar2;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *param_1;
  if (iVar1 < 0x7d2) {
    if (iVar1 != 0x7d1) {
      switch(iVar1) {
      case 1000:
        if (*(int *)(in_ECX + 0x224) != 6) {
          return;
        }
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x174) = 1;
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x164) = 0;
        return;
      case 0x3e9:
        if (*(int *)(in_ECX + 0x34c) == 0) {
          return;
        }
        FUN_100fa450();
        return;
      case 0x3ea:
        if (*(int *)(in_ECX + 0x34c) == 0) {
          return;
        }
        FUN_100fa450();
        return;
      case 0x3eb:
        FUN_10101ff0(param_1[1]);
        return;
      case 0x3ec:
        if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) && (*(int *)(in_ECX + 0x224) == 1))
        {
          return;
        }
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),4,param_1[1],0x3f800000);
        return;
      case 0x3f0:
        if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) && (*(int *)(in_ECX + 0x224) == 1))
        {
          return;
        }
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),2,param_1[1],0x3f800000);
        return;
      case 0x3f1:
        iVar1 = (*DAT_102230b0)();
        if (iVar1 == 0) {
          return;
        }
      case 0x3ed:
        FUN_100fe450(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),param_1[1],0x3f800000,0x40000000)
        ;
        return;
      case 0x3f2:
        if (*(int *)(in_ECX + 0x224) != 6) {
          return;
        }
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x174) = 0;
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x164) =
             *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1b4);
        return;
      case 0x3f8:
        _atoi((char *)param_1[1]);
        FUN_1000e7c0();
        FUN_1011f900(local_10,local_c,local_8,0xf7,0x42700000);
        iVar1 = _atoi((char *)param_1[1]);
        *(int *)(*(int *)(in_ECX + 4) + 0x114) = iVar1;
        return;
      case 0x3fa:
        (*DAT_102230b0)();
        pcVar2 = "faster/faster_step.wav";
LAB_100bf6d6:
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),4,pcVar2,0x3f800000);
        return;
      case 0x3fb:
        FUN_1000e7c0();
        FUN_1011f900(local_1c,local_18,local_14,0xf7,0x42340000);
        return;
      case 0x3fc:
        pcVar2 = (char *)param_1[1];
        iVar1 = FUN_1000aaf0();
        if (iVar1 == 0) {
          _atoi(pcVar2);
          FUN_1000eb40();
          return;
        }
        iVar1 = _atoi(pcVar2);
        *(int *)(*(int *)(in_ECX + 4) + 0x114) = iVar1;
        return;
      case 0x3fd:
        iVar1 = _atoi((char *)param_1[1]);
        *(int *)(*(int *)(in_ECX + 4) + 0x110) = iVar1;
        return;
      }
switchD_100bf340_caseD_3ee:
      (*DAT_1022303c)(2);
      return;
    }
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x200) == 0) {
      return;
    }
    iVar1 = (*DAT_102230b0)();
  }
  else {
    if (iVar1 != 0x7d2) {
      if (iVar1 == 0x7da) {
        pcVar2 = "zombie/claw_miss2.wav";
        goto LAB_100bf6d6;
      }
      goto switchD_100bf340_caseD_3ee;
    }
    if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x200) == 0) {
      return;
    }
    iVar1 = (*DAT_102230b0)();
  }
  pcVar2 = "common/bodydrop3.wav";
  if (iVar1 != 0) {
    pcVar2 = "common/bodydrop4.wav";
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),4,pcVar2,0x3f800000);
  if (*(int *)(*(int *)(in_ECX + 4) + 0x1c4) != 0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,"player/water_splash.wav",
                 0x3f800000);
    FUN_1011a2f0();
  }
  return;
}

