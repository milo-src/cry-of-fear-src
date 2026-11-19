// rea decompile_all
// name: FUN_100db780
// address: 0x100db780
// body: available
// range: 0x100db780-0x100dbf40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100db780(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  double dVar3;
  char *pcVar4;
  
  iVar1 = in_ECX[1];
  if (2 < *(int *)(iVar1 + 0x1c4)) {
    return;
  }
  if (((float)in_ECX[0x87c] < 1.0) || ((*(uint *)(iVar1 + 0x1a8) & 0x40000) == 0)) {
LAB_100dbdc9:
    iVar1 = (**(code **)(*in_ECX + 0xbc))();
    if (iVar1 == 0) {
      return;
    }
    if (*(char *)((int)in_ECX + 0x1eea) == '\0') {
      return;
    }
    if (*DAT_10223188 < (float)in_ECX[0x7bb] || *DAT_10223188 == (float)in_ECX[0x7bb]) {
      return;
    }
    if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x80000) != 0) {
      return;
    }
    uVar2 = (*DAT_102230b0)(0,5);
    switch(uVar2) {
    case 0:
      pcVar4 = "player/vocal/breathing/breathing_1.wav";
      goto LAB_100dbe49;
    case 1:
      pcVar4 = "player/vocal/breathing/breathing_2.wav";
LAB_100dbe49:
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
      in_ECX[0x7bb] = (int)(*DAT_10223188 + 4.5);
      return;
    case 2:
      pcVar4 = "player/vocal/breathing/breathing_3.wav";
      break;
    case 3:
      pcVar4 = "player/vocal/breathing/breathing_4.wav";
      break;
    case 4:
      pcVar4 = "player/vocal/breathing/breathing_5.wav";
      break;
    case 5:
      pcVar4 = "player/vocal/breathing/breathing_6.wav";
      break;
    default:
      goto switchD_100dbe27_default;
    }
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
    goto switchD_100db847_default;
  }
  dVar3 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                  *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24));
  if (dVar3 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar3 = SQRT(dVar3);
  }
  if ((float)dVar3 == 0.0) goto LAB_100dbdc9;
  if (*DAT_10223188 < (float)in_ECX[0x87e] || *DAT_10223188 == (float)in_ECX[0x87e]) {
    return;
  }
  if ((DAT_10222ee4 == (int *)0x0) || (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 == 0)) {
    if (*(float *)(in_ECX[1] + 0x268) == 0.0) {
      uVar2 = (*DAT_102230b0)(0,4);
      switch(uVar2) {
      case 0:
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/sprint/sprint_breathe1.wav",
                     0x3f800000,0x3f4ccccd,0,100);
        in_ECX[0x87e] = (int)(*DAT_10223188 + 1.4);
        break;
      case 1:
        pcVar4 = "player/sprint/sprint_breathe2.wav";
        goto LAB_100dbcd4;
      case 2:
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/sprint/sprint_breathe3.wav",
                     0x3f800000,0x3f4ccccd,0,100);
        in_ECX[0x87e] = (int)(*DAT_10223188 + 1.15);
        break;
      case 3:
        pcVar4 = "player/sprint/sprint_breathe4.wav";
LAB_100dbcd4:
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
        in_ECX[0x87e] = (int)(*DAT_10223188 + 1.5);
        break;
      case 4:
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/sprint/sprint_breathe5.wav",
                     0x3f800000,0x3f4ccccd,0,100);
        in_ECX[0x87e] = (int)(*DAT_10223188 + 1.27);
      }
      goto switchD_100db847_default;
    }
    uVar2 = (*DAT_102230b0)();
    switch(uVar2) {
    case 0:
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/doctor/sprint_breathe1.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      in_ECX[0x87e] = (int)(*DAT_10223188 + 1.64);
      break;
    case 1:
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/doctor/sprint_breathe2.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      in_ECX[0x87e] = (int)(*DAT_10223188 + 1.17);
      break;
    case 2:
      pcVar4 = "player/doctor/sprint_breathe3.wav";
      goto LAB_100dbbae;
    case 3:
      pcVar4 = "player/doctor/sprint_breathe4.wav";
LAB_100dbbae:
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
      in_ECX[0x87e] = (int)(*DAT_10223188 + 1.45);
      break;
    case 4:
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/doctor/sprint_breathe5.wav",
                   0x3f800000,0x3f4ccccd,0,100);
      in_ECX[0x87e] = (int)(*DAT_10223188 + 1.6);
    }
    goto switchD_100db847_default;
  }
  uVar2 = (*DAT_102230b0)(0,8);
  switch(uVar2) {
  case 0:
    pcVar4 = "player/police/sprint_breathe1.wav";
    goto LAB_100db869;
  case 1:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/police/sprint_breathe2.wav",0x3f800000
                 ,0x3f4ccccd,0,100);
    in_ECX[0x87e] = (int)(*DAT_10223188 + 0.81);
    break;
  case 2:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/police/sprint_breathe3.wav",0x3f800000
                 ,0x3f4ccccd,0,100);
    in_ECX[0x87e] = (int)(*DAT_10223188 + 0.93);
    break;
  case 3:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/police/sprint_breathe4.wav",0x3f800000
                 ,0x3f4ccccd,0,100);
    in_ECX[0x87e] = (int)(*DAT_10223188 + 0.95);
    break;
  case 4:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/police/sprint_breathe5.wav",0x3f800000
                 ,0x3f4ccccd,0,100);
    in_ECX[0x87e] = (int)(*DAT_10223188 + 0.92);
    break;
  case 5:
    pcVar4 = "player/police/sprint_breathe6.wav";
LAB_100db869:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
    in_ECX[0x87e] = (int)(*DAT_10223188 + 1.02);
    break;
  case 6:
    pcVar4 = "player/police/sprint_breathe7.wav";
    goto LAB_100dba19;
  case 7:
    pcVar4 = "player/police/sprint_breathe8.wav";
LAB_100dba19:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar4,0x3f800000,0x3f4ccccd,0,100);
    in_ECX[0x87e] = (int)(*DAT_10223188 + 1.05);
    break;
  case 8:
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"player/police/sprint_breathe9.wav",0x3f800000
                 ,0x3f4ccccd,0,100);
    in_ECX[0x87e] = (int)(*DAT_10223188 + 1.09);
  }
switchD_100db847_default:
  in_ECX[0x7bb] = (int)(*DAT_10223188 + 4.0);
switchD_100dbe27_default:
  return;
}

