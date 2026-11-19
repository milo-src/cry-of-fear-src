// rea decompile_all
// name: CDoctorBoss::DecideWhatToDo
// address: 0x1002ca30
// body: available
// range: 0x1002ca30-0x1002cf0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CDoctorBoss::DecideWhatToDo(void) */

void __thiscall CDoctorBoss::DecideWhatToDo(CDoctorBoss *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  char *pcVar5;
  undefined1 *puVar6;
  
                    /* 0x2ca30  69  ?DecideWhatToDo@CDoctorBoss@@QAEXXZ */
  if (*DAT_10223188 < *(float *)(this + 0x388)) {
    return;
  }
  if (this[900] != (CDoctorBoss)0x0) {
    return;
  }
  if (*DAT_10223188 < *(float *)(this + 0x37c)) {
    return;
  }
  iVar2 = (*DAT_102230b0)(0,2);
  iVar3 = (*DAT_102230b0)(1,3);
  if (iVar3 == 1) {
    iVar2 = 1;
  }
  if (((this[0x3a4] != (CDoctorBoss)0x0) && (iVar2 == 1)) &&
     (iVar3 = (*DAT_102230b0)(0,1), iVar3 != 0)) {
    this[0x3a4] = (CDoctorBoss)0x0;
    iVar2 = 2;
  }
  if (*(int *)(this + 0x3a0) == 2) {
    if (*DAT_10223188 < *(float *)(this + 0x378)) {
      *(float *)(this + 0x37c) = *DAT_10223188 + 0.1;
      return;
    }
    switch(*(undefined4 *)(this + 0x370)) {
    case 1:
      puVar6 = &DAT_101acea8;
      break;
    case 2:
      puVar6 = &DAT_101acee8;
      break;
    case 3:
      puVar6 = &DAT_101acf38;
      break;
    case 4:
      puVar6 = &DAT_101acf88;
      break;
    default:
      goto switchD_1002cb03_default;
    }
    FUN_1002e8c0(puVar6);
switchD_1002cb03_default:
    *(undefined4 *)(this + 0x3a0) = 0;
    fVar4 = (float10)(*DAT_102230b4)(0x3f800000,0x40200000);
    *(float *)(this + 0x37c) = (float)(fVar4 + (float10)*DAT_10223188);
    return;
  }
  if ((iVar2 == 0) && (*(int *)(this + 0x3a0) == 0)) {
    DAT_10222e14 = DAT_10222e14 + 1;
  }
  if (DAT_10222e14 < 3) {
    if (iVar2 == 0) {
      if (*(int *)(this + 0x3a0) == 0) {
        fVar4 = (float10)(*DAT_102230b4)(0x3f800000,0x40200000);
        fVar1 = *DAT_10223188;
        *(undefined4 *)(this + 0x3a0) = 0;
        *(float *)(this + 0x37c) = (float)(fVar4 + (float10)fVar1);
        return;
      }
      if (*(int *)(this + 0x3a0) == 1) {
        switch(*(undefined4 *)(this + 0x370)) {
        case 1:
          FUN_1002e8c0("box1getback");
          *(undefined4 *)(this + 0x3a0) = 0;
          goto LAB_1002cc33;
        case 2:
          FUN_1002e8c0("box2getback");
          *(undefined4 *)(this + 0x3a0) = 0;
          fVar4 = (float10)(*DAT_102230b4)(0x3f800000,0x40200000);
          *(float *)(this + 0x37c) = (float)(fVar4 + (float10)*DAT_10223188);
          return;
        case 3:
          FUN_1002e8c0("box3getback");
          *(undefined4 *)(this + 0x3a0) = 0;
          fVar4 = (float10)(*DAT_102230b4)(0x3f800000,0x40200000);
          *(float *)(this + 0x37c) = (float)(fVar4 + (float10)*DAT_10223188);
          return;
        case 4:
          FUN_1002e8c0("box4getback");
          *(undefined4 *)(this + 0x3a0) = 0;
          fVar4 = (float10)(*DAT_102230b4)(0x3f800000,0x40200000);
          *(float *)(this + 0x37c) = (float)(fVar4 + (float10)*DAT_10223188);
          return;
        }
      }
    }
    else if (iVar2 != 1) {
      if (iVar2 != 2) {
        return;
      }
      goto switchD_1002cd52_default;
    }
    if (*(int *)(this + 0x3a0) == 0) {
      switch(*(undefined4 *)(this + 0x370)) {
      case 1:
        FUN_1002e8c0("box1getup");
        *(int *)(this + 0x3a0) = iVar2;
        break;
      case 2:
        FUN_1002e8c0("box2getup");
        *(int *)(this + 0x3a0) = iVar2;
        break;
      case 3:
        FUN_1002e8c0("box3getup");
        *(int *)(this + 0x3a0) = iVar2;
        break;
      case 4:
        FUN_1002e8c0("box4getup");
        *(int *)(this + 0x3a0) = iVar2;
        break;
      default:
        goto switchD_1002cd52_default;
      }
LAB_1002cc33:
      fVar4 = (float10)(*DAT_102230b4)(0x3f800000,0x40200000);
      *(float *)(this + 0x37c) = (float)(fVar4 + (float10)*DAT_10223188);
      return;
    }
    if (*(int *)(this + 0x3a0) == 1) goto LAB_1002cc33;
  }
  else {
    iVar2 = 2;
    *(float *)(this + 0x37c) = *DAT_10223188 + 0.1;
    DAT_10222e14 = 0;
  }
switchD_1002cd52_default:
  if (*(int *)(this + 0x3a0) == 2) {
switchD_1002cbcc_default:
    return;
  }
  switch(*(undefined4 *)(this + 0x370)) {
  case 1:
    FUN_1002e8c0("box1runtobox2");
    *(undefined4 *)(this + 0x370) = 2;
    goto LAB_1002cead;
  case 2:
    iVar3 = (*DAT_102230b0)(0,1);
    if (iVar3 == 1) {
      FUN_1002e8c0("box2runtobox1");
      *(undefined4 *)(this + 0x370) = 1;
      goto LAB_1002cead;
    }
    pcVar5 = "box2runtobox3";
    break;
  case 3:
    iVar3 = (*DAT_102230b0)(0,1);
    if (iVar3 == 1) {
      FUN_1002e8c0("box3runtobox2");
      *(int *)(this + 0x3a0) = iVar2;
      *(undefined4 *)(this + 0x370) = 2;
      *(float *)(this + 0x37c) = *DAT_10223188 + 0.1;
      return;
    }
    FUN_1002e8c0("box3runtobox4");
    *(int *)(this + 0x3a0) = iVar2;
    *(undefined4 *)(this + 0x370) = 4;
    *(float *)(this + 0x37c) = *DAT_10223188 + 0.1;
    return;
  case 4:
    pcVar5 = "box4runtobox3";
    break;
  default:
    goto switchD_1002cbcc_default;
  }
  FUN_1002e8c0(pcVar5);
  *(undefined4 *)(this + 0x370) = 3;
LAB_1002cead:
  *(int *)(this + 0x3a0) = iVar2;
  *(float *)(this + 0x37c) = *DAT_10223188 + 0.1;
  return;
}

