// rea decompile_all
// name: FUN_10069950
// address: 0x10069950
// body: available
// range: 0x10069950-0x10069ab9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069950(void)

{
  float fVar1;
  int *in_ECX;
  float10 fVar2;
  char *pcVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
  (**(code **)(*in_ECX + 0x30))();
  *(undefined4 *)(in_ECX[1] + 0x108) = 5;
  *(undefined4 *)(in_ECX[1] + 0x10c) = 2;
  *(undefined4 *)(in_ECX[1] + 0x170) = 0x40000000;
  *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) | 0x20;
  *(undefined4 *)(in_ECX[1] + 0x164) = DAT_1022679c;
  fVar1 = *DAT_10223188;
  in_ECX[0x82] = 0x3f666666;
  in_ECX[0xdb] = 0x43c80000;
  in_ECX[199] = 0xf7;
  in_ECX[0xda] = (int)(fVar1 + 5.0);
  fVar2 = (float10)(*DAT_1022302c)("sv_joebiden");
  local_8 = (float)fVar2;
  if (local_8 == 0.0) {
    pcVar3 = "models/hookedhead.mdl";
  }
  else {
    pcVar3 = "models/biden_box.mdl";
  }
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),pcVar3);
  local_14 = 0x42040000;
  local_10 = 0x42240000;
  local_c = 0x41500000;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_1011a030(in_ECX[1],&local_20,&local_14);
  in_ECX[0x1f] = (int)CRoofBossHead::DieTouch;
  in_ECX[0x1e] = (int)CRoofBossHead::StartTrack;
  *(undefined4 *)(in_ECX[1] + 0x160) = 0x65;
  *(undefined4 *)(in_ECX[1] + 0x1e4) = DAT_10226798;
  *(float *)(in_ECX[1] + 0x104) = *DAT_10223188 + 0.1;
  FUN_1000e9e0();
  return;
}

