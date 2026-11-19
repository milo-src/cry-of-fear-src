// rea decompile_all
// name: CBoat::Embark
// address: 0x10022980
// body: available
// range: 0x10022980-0x10022b15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBoat::Embark(void) */

void __thiscall CBoat::Embark(CBoat *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x22980  100  ?Embark@CBoat@@QAEXXZ */
  if (*(int *)(this + 0x118) != 0) {
    *(code **)(this + 0x80) = BoatUse;
    *(code **)(this + 0x78) = BoatThink;
    (**(code **)(*(int *)this + 8))(0);
    iVar1 = FUN_10118460(0,"boat_hide_spot");
    (*DAT_10223000)(1,DAT_10226640,0,*(undefined4 *)(*(int *)(*(int *)(this + 0x118) + 4) + 0x20c));
    uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
    (*DAT_10223010)(uVar2);
    (*DAT_10223004)();
    if (iVar1 != 0) {
      FUN_10119fe0(*(undefined4 *)(this + 0x118),*(int *)(iVar1 + 4) + 8);
    }
    FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),4,"boat/boat_idle.wav",0x3f800000,0,0,
                 100);
    FUN_10017740(this);
    if (*(int *)(*(int *)(this + 4) + 0x250) == 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x250) = 1;
      FUN_100ea5c0((int)"boat.mp3" - *(int *)(DAT_10223188 + 0x98),1,0x3f800000);
    }
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    FUN_10119c00(*(undefined4 *)(this + 0x118),&local_10,0x3f800000,0,0xff,0);
    *(uint *)(*(int *)(this + 0x118) + 0x2500) = *(uint *)(*(int *)(this + 0x118) + 0x2500) | 8;
    if (*(int *)(*(int *)(this + 4) + 0x254) == 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x254) = 1;
      FUN_10119810(*(undefined4 *)(this + 0x118),&DAT_101aa700,5,0);
    }
  }
  return;
}

