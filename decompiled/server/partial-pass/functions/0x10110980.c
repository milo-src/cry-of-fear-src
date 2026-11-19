// rea decompile_all
// name: FUN_10110980
// address: 0x10110980
// body: available
// range: 0x10110980-0x10110a82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10110980(void)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int in_ECX;
  int iVar4;
  float *pfVar5;
  int iVar6;
  
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 0;
  iVar4 = *(int *)(in_ECX + 0xe0);
  *(code **)(in_ECX + 0x80) = CMultiManager::ManagerUse;
  *(code **)(in_ECX + 0x78) = CMultiManager::ManagerThink;
  *(undefined4 *)(in_ECX + 0xdc) = 0;
  if (0x10 < iVar4) {
    (*DAT_1022303c)(1,
                    "WARNING: multi_manager \"%s\" has too many targets (limit is %d, it has %d)\n",
                    *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1d0),0x10,
                    iVar4);
    *(undefined4 *)(in_ECX + 0xe0) = 0x10;
    iVar4 = 0x10;
  }
  if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x20000000) == 0) {
    *(undefined4 *)(in_ECX + 0x18c) = 3;
  }
  do {
    bVar3 = false;
    iVar6 = 1;
    if (iVar4 < 2) break;
    pfVar5 = (float *)(in_ECX + 0x130);
    do {
      fVar1 = *pfVar5;
      if (fVar1 < pfVar5[-1]) {
        fVar2 = pfVar5[-0x10];
        pfVar5[-0x10] = pfVar5[-0x11];
        bVar3 = true;
        *pfVar5 = pfVar5[-1];
        pfVar5[-0x11] = fVar2;
        pfVar5[-1] = fVar1;
      }
      iVar4 = *(int *)(in_ECX + 0xe0);
      iVar6 = iVar6 + 1;
      pfVar5 = pfVar5 + 1;
    } while (iVar6 < iVar4);
  } while (bVar3);
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x10) != 0) {
    *(code **)(in_ECX + 0x78) = CMultiManager::UseThink;
    *(undefined4 *)(in_ECX + 0x80) = 0;
    FUN_100c4850();
  }
  return;
}

