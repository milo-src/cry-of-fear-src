// rea decompile_all
// name: FUN_100d6f30
// address: 0x100d6f30
// body: available
// range: 0x100d6f30-0x100d7081 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d6f30(void)

{
  int iVar1;
  int in_ECX;
  char *pcVar2;
  
  if (*(int *)(*(int *)(in_ECX + 4) + 0x1ec) == 0) {
    switch(*(undefined1 *)(in_ECX + 0x180)) {
    case 1:
      pcVar2 = "plats/bigmove1.wav";
      break;
    case 2:
      pcVar2 = "plats/bigmove2.wav";
      break;
    case 3:
      pcVar2 = "plats/elevmove1.wav";
      break;
    case 4:
      pcVar2 = "plats/elevmove2.wav";
      break;
    case 5:
      pcVar2 = "plats/elevmove3.wav";
      break;
    case 6:
      pcVar2 = "plats/freightmove1.wav";
      break;
    case 7:
      pcVar2 = "plats/freightmove2.wav";
      break;
    case 8:
      pcVar2 = "plats/heavymove1.wav";
      break;
    case 9:
      pcVar2 = "plats/rackmove1.wav";
      break;
    case 10:
      pcVar2 = "plats/railmove1.wav";
      break;
    case 0xb:
      pcVar2 = "plats/squeekmove1.wav";
      break;
    case 0xc:
      pcVar2 = "plats/talkmove1.wav";
      break;
    case 0xd:
      pcVar2 = "plats/talkmove2.wav";
      break;
    default:
      pcVar2 = "common/null.wav";
    }
    *(int *)(*(int *)(in_ECX + 4) + 0x1ec) = (int)pcVar2 - *(int *)(DAT_10223188 + 0x98);
  }
  FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1ec));
  iVar1 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar1 + 0x1f0) == 0) {
    switch(*(undefined1 *)(in_ECX + 0x181)) {
    case 1:
      pcVar2 = "plats/bigstop1.wav";
      break;
    case 2:
      pcVar2 = "plats/bigstop2.wav";
      break;
    case 3:
      pcVar2 = "plats/freightstop1.wav";
      break;
    case 4:
      pcVar2 = "plats/heavystop2.wav";
      break;
    case 5:
      pcVar2 = "plats/rackstop1.wav";
      break;
    case 6:
      pcVar2 = "plats/railstop1.wav";
      break;
    case 7:
      pcVar2 = "plats/squeekstop1.wav";
      break;
    case 8:
      pcVar2 = "plats/talkstop1.wav";
      break;
    default:
      *(int *)(iVar1 + 0x1f0) = (int)"common/null.wav" - *(int *)(DAT_10223188 + 0x98);
      goto LAB_100d7062;
    }
    *(int *)(iVar1 + 0x1f0) = (int)pcVar2 - *(int *)(DAT_10223188 + 0x98);
  }
LAB_100d7062:
  FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1f0));
  return;
}

