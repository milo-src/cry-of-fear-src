// rea decompile_all
// name: FUN_100d7130
// address: 0x100d7130
// body: available
// range: 0x100d7130-0x100d7254 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d7130(void)

{
  undefined2 uVar1;
  int in_ECX;
  char *pcVar2;
  int iVar3;
  
  if (*(float *)(in_ECX + 0x118) == 0.0) {
    *(undefined4 *)(in_ECX + 0x118) = 0x3f800000;
  }
  switch(*(undefined4 *)(in_ECX + 0x114)) {
  case 1:
    pcVar2 = "plats/ttrain1.wav";
    break;
  case 2:
    pcVar2 = "plats/ttrain2.wav";
    break;
  case 3:
    pcVar2 = "plats/ttrain3.wav";
    break;
  case 4:
    pcVar2 = "plats/ttrain4.wav";
    break;
  case 5:
    pcVar2 = "plats/ttrain6.wav";
    break;
  case 6:
    pcVar2 = "plats/ttrain7.wav";
    break;
  default:
    goto switchD_100d715e_default;
  }
  *(int *)(*(int *)(in_ECX + 4) + 0x1ec) = (int)pcVar2 - *(int *)(DAT_10223188 + 0x98);
switchD_100d715e_default:
  iVar3 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar3 + 0x1f0) == 0) {
    *(int *)(iVar3 + 0x1f0) = (int)"plats/ttrain_brake1.wav" - *(int *)(DAT_10223188 + 0x98);
    iVar3 = *(int *)(in_ECX + 4);
  }
  if (*(int *)(iVar3 + 500) == 0) {
    *(int *)(iVar3 + 500) = (int)"plats/ttrain_start1.wav" - *(int *)(DAT_10223188 + 0x98);
    iVar3 = *(int *)(in_ECX + 4);
  }
  if (*(int *)(iVar3 + 0x1ec) != 0) {
    FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar3 + 0x1ec));
    iVar3 = *(int *)(in_ECX + 4);
  }
  FUN_10116a30(*(int *)(iVar3 + 0x1f0) + *(int *)(DAT_10223188 + 0x98));
  FUN_10116a30(*(int *)(*(int *)(in_ECX + 4) + 500) + *(int *)(DAT_10223188 + 0x98));
  uVar1 = (*DAT_10223130)(1,"events/train.sc");
  *(undefined2 *)(in_ECX + 0x13c) = uVar1;
  return;
}

