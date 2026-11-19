// rea decompile_all
// name: FUN_10094060
// address: 0x10094060
// body: available
// range: 0x10094060-0x10094175 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10094060(undefined4 param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_stack_00000018;
  float in_stack_0000001c;
  float in_stack_00000024;
  float in_stack_00000028;
  float in_stack_0000002c;
  
  piVar1 = (int *)FUN_10092020(0);
  FUN_10119fe0(piVar1,&stack0x0000000c);
  *(uint *)(piVar1[1] + 0x1a4) = (uint)(param_2 != '\0');
  *(undefined4 *)(piVar1[1] + 0x110) = in_stack_00000018;
  if (((in_stack_00000024 != 0.0) || (in_stack_00000028 != 0.0)) || (in_stack_0000002c != 0.0)) {
    *(undefined4 *)(piVar1[1] + 0x110) = 0x29a;
    *(undefined4 *)(piVar1[1] + 0x108) = 5;
    *(float *)(piVar1[1] + 0x20) = in_stack_00000024;
    *(float *)(piVar1[1] + 0x24) = in_stack_00000028;
    *(float *)(piVar1[1] + 0x28) = in_stack_0000002c;
  }
  *(undefined4 *)(piVar1[1] + 0x1d8) = param_1;
  (**(code **)(*piVar1 + 0x2c))();
  iVar2 = FUN_10118460(0,"player");
  if (iVar2 != 0) {
    iVar2 = FUN_100125e0(*(undefined4 *)(iVar2 + 4));
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x118))(iVar2);
    }
  }
  if (0.1 <= in_stack_0000001c) {
    (**(code **)(*piVar1 + 8))(in_stack_0000001c);
    piVar1[0x1e] = (int)CParticle::KillParticle;
  }
  *(int *)piVar1[1] = (int)"env_particle" - *(int *)(DAT_10223188 + 0x98);
  return piVar1;
}

