// rea decompile_all
// name: FUN_1006b240
// address: 0x1006b240
// body: available
// range: 0x1006b240-0x1006b3b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b240(void)

{
  char *pcVar1;
  int *in_ECX;
  int iVar2;
  float10 fVar3;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  
  (**(code **)(*in_ECX + 0x30))();
  iVar2 = *(int *)(in_ECX[1] + 0xb8);
  if (iVar2 == 0) {
    pcVar1 = "models/sawcrazy.mdl";
  }
  else {
    pcVar1 = (char *)(DAT_10223188[0x26] + iVar2);
  }
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),pcVar1);
  fVar3 = (float10)(*DAT_1022302c)("cof_monsterhumanscale");
  local_14 = (float)fVar3;
  local_18 = 0x42900000;
  local_24 = 0;
  local_20 = (float)(int)fVar3;
  local_2c = (float)-(int)fVar3;
  local_28 = local_2c;
  local_1c = local_20;
  FUN_1011a030(in_ECX[1],&local_2c,&local_20);
  *(undefined4 *)(in_ECX[1] + 0x10c) = 3;
  *(undefined4 *)(in_ECX[1] + 0x108) = 4;
  iVar2 = in_ECX[1];
  in_ECX[199] = 0xf7;
  if (*(float *)(iVar2 + 0x164) == 0.0) {
    *(undefined4 *)(iVar2 + 0x164) = 0x43160000;
    iVar2 = in_ECX[1];
  }
  *(undefined8 *)(iVar2 + 0x178) = 0;
  local_24 = 0x41e00000;
  *(undefined4 *)(iVar2 + 0x180) = 0x41e00000;
  in_ECX[0x82] = 0x3f000000;
  in_ECX[0x89] = 0;
  in_ECX[0xc1] = 0x340;
  (**(code **)(*in_ECX + 0x13c))();
  *(undefined4 *)(in_ECX[1] + 0x260) = *DAT_10223188;
  *(undefined4 *)(in_ECX[1] + 0x25c) = *(undefined4 *)(in_ECX[1] + 0x260);
  *(undefined4 *)(in_ECX[1] + 600) = *(undefined4 *)(in_ECX[1] + 0x25c);
  return;
}

