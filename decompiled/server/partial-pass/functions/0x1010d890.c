// rea decompile_all
// name: CLadderControl::LadderThink
// address: 0x1010d890
// body: available
// range: 0x1010d890-0x1010d965 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CLadderControl::LadderThink(void) */

void __thiscall CLadderControl::LadderThink(CLadderControl *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_88 [128];
  uint local_8;
  
                    /* 0x10d890  163  ?LadderThink@CLadderControl@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_10118390(local_88,0x20,*(int *)(this + 4) + 0xdc,*(int *)(this + 4) + 0xe8,8);
  if (iVar1 == 0) {
    iVar1 = FUN_10017780();
    if (iVar1 == 0) {
      uVar2 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1cc));
      FUN_10017740(uVar2);
    }
    iVar1 = FUN_10017780();
    if ((iVar1 != 0) && (iVar1 = FUN_100177a0(), *(int *)(*(int *)(iVar1 + 4) + 0x248) != 1)) {
      iVar1 = FUN_100177a0();
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x248) = 1;
    }
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

