// rea decompile_all
// name: CFuncStairs::StairThink
// address: 0x10111260
// body: available
// range: 0x10111260-0x10111371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncStairs::StairThink(void) */

void __thiscall CFuncStairs::StairThink(CFuncStairs *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_88 [32];
  uint local_8;
  
                    /* 0x111260  286  ?StairThink@CFuncStairs@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_10118390(local_88,0x20,*(int *)(this + 4) + 0xdc,*(int *)(this + 4) + 0xe8,8);
  iVar3 = 0;
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      iVar1 = FUN_10017780();
      if (iVar1 != 0) {
        iVar1 = FUN_100177a0();
        iVar1 = FUN_100125e0(*(undefined4 *)(iVar1 + 4));
        if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1ec8) != '\0')) {
          *(undefined1 *)(iVar1 + 0x1ec8) = 0;
        }
      }
      goto LAB_10111314;
    }
  }
  else {
    do {
      iVar2 = (**(code **)(*(int *)local_88[iVar3] + 0xd0))();
      if (iVar2 != 0) {
        FUN_10017740(local_88[iVar3]);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  iVar1 = FUN_10017780();
  if (iVar1 != 0) {
    iVar1 = FUN_100177a0();
    iVar1 = FUN_100125e0(*(undefined4 *)(iVar1 + 4));
    if ((iVar1 != 0) && (*(char *)(iVar1 + 0x1ec8) == '\0')) {
      *(undefined1 *)(iVar1 + 0x1ec8) = 1;
    }
  }
LAB_10111314:
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

