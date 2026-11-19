// rea decompile_all
// name: FUN_100fccc0
// address: 0x100fccc0
// body: available
// range: 0x100fccc0-0x100fceed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fccc0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_c;
  int local_8;
  
  iVar2 = (int)(*(float *)(*(int *)(in_ECX + 4) + 0x164) * 10.0);
  *(int *)(in_ECX + 0xf4) = iVar2;
  if (iVar2 < 0x65) {
    if (iVar2 < 0) {
      *(undefined4 *)(in_ECX + 0xf4) = 0;
      iVar2 = 0;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0xf4) = 100;
    iVar2 = 100;
  }
  iVar1 = *(int *)(in_ECX + 0xe0);
  if ((iVar1 != 0) && (iVar1 < 0x1c)) {
    puVar5 = (undefined4 *)(&DAT_10218e84 + iVar1 * 100);
    puVar6 = (undefined4 *)(in_ECX + 0xe0);
    for (iVar2 = 0x19; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    local_c = *(int *)(in_ECX + 0xf0);
    if (0 < local_c) {
      local_c = (0x65 - local_c) * 0x40;
    }
    iVar1 = *(int *)(in_ECX + 0xec);
    if (0 < iVar1) {
      iVar1 = (0x65 - iVar1) * 0x40;
    }
    *(int *)(in_ECX + 0xf8) = *(int *)(in_ECX + 0xf8) * 10;
    local_8 = *(int *)(in_ECX + 0xfc);
    iVar2 = *(int *)(in_ECX + 0xf4) * 10;
    *(int *)(in_ECX + 0xf4) = iVar2;
    if (0 < local_8) {
      local_8 = (0x65 - *(int *)(in_ECX + 0xfc)) * 0x40;
    }
    iVar3 = *(int *)(in_ECX + 0x100);
    if (0 < iVar3) {
      iVar3 = (0x65 - iVar3) * 0x40;
    }
    *(int *)(in_ECX + 0x108) = *(int *)(in_ECX + 0x108) << 8;
    *(int *)(in_ECX + 0x130) = local_8;
    *(int *)(in_ECX + 0x134) = iVar3;
    *(int *)(in_ECX + 0x120) = iVar1;
    *(int *)(in_ECX + 0x124) = local_c;
  }
  *(int *)(in_ECX + 0xfc) = *(int *)(in_ECX + 0x130);
  *(undefined4 *)(in_ECX + 0x100) = 0;
  if (*(int *)(in_ECX + 0x130) != 0) {
    iVar2 = *(int *)(in_ECX + 0xf8);
  }
  *(int *)(in_ECX + 300) = iVar2;
  iVar1 = *(int *)(in_ECX + 0x120);
  *(int *)(in_ECX + 0xec) = iVar1;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  if (iVar1 == 0) {
    iVar3 = *(int *)(in_ECX + 0xe4);
  }
  else {
    iVar3 = *(int *)(in_ECX + 0xe8);
  }
  *(int *)(in_ECX + 0x11c) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(in_ECX + 0x11c) = 100;
    iVar3 = 100;
  }
  *(undefined4 *)(in_ECX + 0x13c) = 0;
  *(int *)(in_ECX + 0x128) = iVar3 << 8;
  *(int *)(in_ECX + 0x138) = iVar2 << 8;
  uVar4 = (int)*(uint *)(in_ECX + 0x108) >> 0x1f;
  *(undefined4 *)(in_ECX + 0x118) = 1;
  *(uint *)(in_ECX + 0x108) = (*(uint *)(in_ECX + 0x108) ^ uVar4) - uVar4;
  if (*(int *)(in_ECX + 0x114) != 0) {
    iVar2 = (0xff - *(int *)(in_ECX + 0xe8)) / *(int *)(in_ECX + 0x114) + *(int *)(in_ECX + 0xe8);
    if (0xff < iVar2) {
      iVar2 = 0xff;
    }
    *(int *)(in_ECX + 0xe4) = iVar2;
  }
  if ((((iVar1 != 0) || (*(int *)(in_ECX + 0x124) != 0)) ||
      ((*(int *)(in_ECX + 0x104) != 0 && (*(int *)(in_ECX + 0x10c) != 0)))) && (iVar3 == 100)) {
    *(undefined4 *)(in_ECX + 0x11c) = 0x65;
  }
  return;
}

