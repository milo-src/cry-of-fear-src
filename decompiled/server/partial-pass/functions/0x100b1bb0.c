// rea decompile_all
// name: FUN_100b1bb0
// address: 0x100b1bb0
// body: available
// range: 0x100b1bb0-0x100b1c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_100b1bb0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  float10 fVar4;
  undefined8 in_stack_00000014;
  undefined4 in_stack_0000001c;
  undefined1 local_10 [12];
  
  piVar2 = (int *)FUN_100b0f50(0);
  (**(code **)(*piVar2 + 0x2c))();
  *(undefined4 *)(piVar2[1] + 0x11c) = 0x3f000000;
  FUN_10119fe0(piVar2,&stack0x00000008);
  iVar1 = piVar2[1];
  *(undefined8 *)(iVar1 + 0x20) = in_stack_00000014;
  *(undefined4 *)(iVar1 + 0x28) = in_stack_0000001c;
  puVar3 = (undefined8 *)FUN_1011a8d0(local_10,piVar2[1] + 0x20);
  iVar1 = piVar2[1];
  *(undefined8 *)(iVar1 + 0x50) = *puVar3;
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(puVar3 + 1);
  *(undefined4 *)(piVar2[1] + 0x19c) = *(undefined4 *)(param_1 + 0x20c);
  piVar2[0x1e] = (int)CGrenade::DangerSoundThink;
  (**(code **)(*piVar2 + 8))(0);
  fVar4 = (float10)(*DAT_102230b4)(0xc2c80000,0xc3fa0000);
  *(float *)(piVar2[1] + 0x5c) = (float)fVar4;
  piVar2[0x1f] = (int)CGrenade::ExplodeTouch;
  *(undefined4 *)(piVar2[1] + 0x1e4) = 0x42c80000;
  return piVar2;
}

