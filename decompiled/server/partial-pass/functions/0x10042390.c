// rea decompile_all
// name: FUN_10042390
// address: 0x10042390
// body: available
// range: 0x10042390-0x100424b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10042390(int *param_1)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  undefined1 local_4c [56];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar2 = (float10)(*DAT_102230b4)(0x42b40000,0x42dc0000);
  local_8 = (float)fVar2;
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,"flygare/flygare_acid_hit.wav",
               0x3f800000,0x3f4ccccd,0,(int)fVar2);
  iVar1 = *(int *)(in_ECX + 4);
  if (*(float *)(param_1[1] + 0x170) == 0.0) {
    local_10 = *(float *)(iVar1 + 0x24) * 10.0 + *(float *)(iVar1 + 0xc);
    local_c = *(float *)(iVar1 + 0x28) * 10.0 + *(float *)(iVar1 + 0x10);
    local_14 = *(float *)(iVar1 + 0x20) * 10.0 + *(float *)(iVar1 + 8);
    FUN_1011a800((float *)(iVar1 + 8),&local_14,0,*(undefined4 *)(iVar1 + 0x20c),local_4c);
    iVar1 = (*DAT_102230b0)(0,5);
    FUN_101180b0(local_4c,iVar1 + 0xd);
  }
  else {
    (**(code **)(*param_1 + 100))(iVar1,iVar1,DAT_102267c4,0);
  }
  *(code **)(in_ECX + 0x78) = CBaseEntity::SUB_Remove;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x104) = *DAT_10223188;
  return;
}

