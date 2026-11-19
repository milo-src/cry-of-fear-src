// rea decompile_all
// name: FUN_1004d610
// address: 0x1004d610
// body: available
// range: 0x1004d610-0x1004d6de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004d610(void)

{
  uint uVar1;
  undefined2 *puVar2;
  byte bVar3;
  int in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  char local_50 [64];
  char local_10;
  undefined1 local_f;
  undefined2 local_e;
  byte abStack_c [4];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar1 = *(uint *)(in_stack_00000010 + 0x14);
  local_10 = '%';
  puVar2 = (undefined2 *)&local_f;
  if ((uVar1 & 0x20) != 0) {
    puVar2 = &local_e;
    local_f = 0x2b;
  }
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)puVar2 = 0x23;
    puVar2 = (undefined2 *)((int)puVar2 + 1);
  }
  *puVar2 = 0x3649;
  *(undefined1 *)(puVar2 + 1) = 0x34;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar3 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar3 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar3 = 100;
  }
  *(byte *)((int)puVar2 + 3) = bVar3;
  *(undefined1 *)(puVar2 + 2) = 0;
  _sprintf_s(local_50,0x40,&local_10,in_stack_00000018,in_stack_0000001c);
  FUN_1004ca10();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

