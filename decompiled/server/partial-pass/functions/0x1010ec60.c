// rea decompile_all
// name: CTriggerBookSimon::PlayerTouch
// address: 0x1010ec60
// body: available
// range: 0x1010ec60-0x1010ed30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CTriggerBookSimon::PlayerTouch(class CBaseEntity *) */

void __thiscall CTriggerBookSimon::PlayerTouch(CTriggerBookSimon *this,CBaseEntity *param_1)

{
  int iVar1;
  
                    /* 0x10ec60  225  ?PlayerTouch@CTriggerBookSimon@@QAEXPAVCBaseEntity@@@Z */
  if (param_1 != (CBaseEntity *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xd0))();
    if (((iVar1 != 0) && (*(int *)(*(int *)(this + 4) + 0x248) == 1)) &&
       (iVar1 = *(int *)(*(int *)(this + 4) + 0x1d8), iVar1 != 0)) {
      iVar1 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + iVar1);
      if (iVar1 == 0) {
        (*DAT_1022303c)(4,"Sick Simon Spawn: no info_simon_spawnpoint on level");
      }
      else {
        FUN_10017950("monster_booksimon",*(int *)(iVar1 + 4) + 8,*(int *)(iVar1 + 4) + 0x50,0);
      }
      if (*(int *)(*(int *)(this + 4) + 0x1cc) != 0) {
        FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1cc),this,this,
                     3,0);
      }
      FUN_10119900(this);
      *(undefined4 *)(*(int *)(this + 4) + 0x248) = 0;
    }
  }
  return;
}

