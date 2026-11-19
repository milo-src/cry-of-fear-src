// rea decompile_all
// name: FUN_100f9b70
// address: 0x100f9b70
// body: available
// range: 0x100f9b70-0x100f9cee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f9b70(long param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  undefined1 local_1d8 [175];
  char cStack_129;
  char local_128 [4];
  char local_124 [256];
  char local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019e0a0;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FID_conflict___ltoa(param_1,local_24,10);
  (*DAT_102230d4)(local_128);
  pcVar4 = &cStack_129;
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (pcVar6[1] != '\0');
  builtin_strncpy(pcVar6 + 1,"/sound/ambience/windy",0x16);
  pcVar4 = local_24;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)local_24;
  pcVar4 = &cStack_129;
  do {
    pcVar6 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = local_24;
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar4 = pcVar4 + 1;
  }
  pcVar4 = &cStack_129;
  do {
    pcVar6 = pcVar4;
    pcVar4 = pcVar6 + 1;
  } while (pcVar6[1] != '\0');
  builtin_strncpy(pcVar6 + 1,".wav",5);
  FUN_10049b60(local_128,2,0x40,1);
  local_8 = 0;
  FUN_100493b0(local_1d8,"Beaten Ending",param_1,&DAT_101dcc60,param_2);
  uVar2 = FUN_1004a1a0(param_1);
  FUN_100493b0(uVar2);
  FUN_1004a1a0(param_2);
  FUN_100497e0(local_1d8);
  FUN_100f9db0();
  FUN_1004a510();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

