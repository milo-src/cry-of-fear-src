// rea decompile_all
// name: FUN_10036e00
// address: 0x10036e00
// body: available
// range: 0x10036e00-0x10036fb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036e00(void)

{
  int iVar1;
  int *in_ECX;
  code *pcVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined1 local_14 [12];
  float local_8;
  
  FUN_100dfea0(local_14,0x3db27eb6);
  if (*DAT_10223188 <= (float)in_ECX[0x76] && (float)in_ECX[0x76] != *DAT_10223188) {
    return;
  }
  if (in_ECX[0x4a] != 0) {
    return;
  }
  if (in_ECX[0x50] != 0) {
    return;
  }
  if (DAT_102119d0 != 0) {
    return;
  }
  fVar3 = (float10)FUN_1011ab20();
  local_8 = (float)fVar3;
  if (local_8 < (float)in_ECX[0x76]) {
    return;
  }
  if (*DAT_10223188 < (float)in_ECX[0x73]) {
    return;
  }
  if (*DAT_10223188 < (float)in_ECX[0x74]) {
    return;
  }
  switch(in_ECX[0x80]) {
  case 1:
  case 0xc:
  case 0x13:
  case 0x15:
    uVar4 = 0;
    break;
  case 2:
    pcVar2 = *(code **)(*in_ECX + 0x198);
    if (*(int *)(in_ECX[0x58] + 0x1e98) != 0) {
      (*pcVar2)(5);
      goto switchD_10036eb9_caseD_5;
    }
    goto LAB_10036eeb;
  case 3:
  case 7:
    pcVar2 = *(code **)(*in_ECX + 0x198);
    if (*(int *)(in_ECX[0x58] + 0x5e0) == 0) {
      (*pcVar2)(1,1,0);
      goto switchD_10036eb9_caseD_5;
    }
LAB_10036eeb:
    (*pcVar2)(0,1,0);
    goto switchD_10036eb9_caseD_5;
  default:
    return;
  case 5:
  case 0xe:
    goto switchD_10036eb9_caseD_5;
  case 6:
    uVar4 = 5;
    break;
  case 10:
    (**(code **)(*in_ECX + 0x198))(2,1,0);
    return;
  case 0xd:
    iVar1 = FUN_100e0310(0xd);
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(*(int *)(iVar1 + 4) + 0x248) != 1) {
      (**(code **)(*in_ECX + 0x198))(2,1,0);
      return;
    }
    (**(code **)(*in_ECX + 0x198))(5,1,0);
    return;
  case 0x10:
    uVar4 = 0xf;
  }
  (**(code **)(*in_ECX + 0x198))(uVar4,1,0);
switchD_10036eb9_caseD_5:
  uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                          *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
  fVar3 = (float10)FUN_1000f390(uVar4);
  in_ECX[0x76] = (int)(float)(fVar3 + (float10)*DAT_10223188);
  return;
}

