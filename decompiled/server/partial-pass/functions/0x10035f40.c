// rea decompile_all
// name: FUN_10035f40
// address: 0x10035f40
// body: available
// range: 0x10035f40-0x100360eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035f40(char param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (param_1 == '\0') {
    fVar4 = (float)in_ECX[0x74];
  }
  else {
    fVar4 = (float)in_ECX[0x73];
  }
  if (*DAT_10223188 <= fVar4 && fVar4 != *DAT_10223188) {
    return;
  }
  uVar1 = *(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8);
  if ((uVar1 & 0x40000) != 0) {
    return;
  }
  if ((uVar1 & 0x200) == 0) {
    return;
  }
  if (in_ECX[0x4a] != 0) {
    return;
  }
  if (DAT_102119d0 != 0) {
    return;
  }
  iVar2 = (*DAT_102230b0)(0,2);
  if (param_1 == '\0') {
    if (iVar2 == 0) {
      uVar5 = 8;
    }
    else if (iVar2 == 1) {
      uVar5 = 0x12;
    }
    else {
      if (iVar2 != 2) goto LAB_10036017;
      uVar5 = 0x13;
    }
    (**(code **)(*in_ECX + 0x198))(uVar5,1,0);
  }
  else {
    if (iVar2 == 0) {
      uVar5 = 8;
    }
    else if (iVar2 == 1) {
      uVar5 = 0x12;
    }
    else {
      if (iVar2 != 2) goto LAB_10036017;
      uVar5 = 0x13;
    }
    FUN_10038f10(in_ECX[0x58],uVar5);
  }
LAB_10036017:
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),0,
               "weapons/switchblade/switchblade_swing.wav",0x3f800000,0x3f4ccccd,0,100);
  (**(code **)(*(int *)in_ECX[0x58] + 8))(0x3e23d70a);
  *(code **)(in_ECX[0x58] + 0x78) = CBasePlayer::MeleeHitThinkSwitchblade;
  if (param_1 == '\0') {
    fVar3 = (float10)FUN_10031dd0(in_ECX[0x80]);
    in_ECX[0x74] = (int)(float)(fVar3 + (float10)*DAT_10223188);
    in_ECX[0x76] = (int)(*DAT_10223188 + 1.2);
    return;
  }
  fVar3 = (float10)FUN_10031dd0(in_ECX[0x81]);
  in_ECX[0x73] = (int)(float)(fVar3 + (float10)*DAT_10223188);
  _DAT_102119b0 = *DAT_10223188 + 1.2;
  return;
}

