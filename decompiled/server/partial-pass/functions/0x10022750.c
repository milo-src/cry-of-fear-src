// rea decompile_all
// name: CBoat::Disembark
// address: 0x10022750
// body: available
// range: 0x10022750-0x10022974 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBoat::Disembark(void) */

void __thiscall CBoat::Disembark(CBoat *this)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x22750  88  ?Disembark@CBoat@@QAEXXZ */
  if ((*(int *)(this + 0x118) != 0) && (*(int *)(this + 0x110) != 0)) {
    (*DAT_10223000)(1,DAT_10226640,0,*(undefined4 *)(*(int *)(*(int *)(this + 0x118) + 4) + 0x20c));
    (*DAT_10223010)(0xffffffff);
    (*DAT_10223004)();
    iVar1 = *(int *)(this + 4);
    *(undefined8 *)(iVar1 + 0x20) = DAT_10222f34;
    *(undefined4 *)(iVar1 + 0x28) = DAT_10222f3c;
    iVar1 = *(int *)(this + 4);
    *(undefined8 *)(iVar1 + 0x5c) = DAT_10222f34;
    *(undefined4 *)(iVar1 + 100) = DAT_10222f3c;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    FUN_10119c00(*(undefined4 *)(this + 0x118),&local_10,0x3f800000,0,0xff,0);
    FUN_10119fe0(*(undefined4 *)(this + 0x118),*(int *)(*(int *)(this + 0x110) + 4) + 8);
    iVar1 = *(int *)(*(int *)(this + 0x110) + 4);
    FUN_100c48e0(*(undefined4 *)(this + 0x118),*(undefined4 *)(iVar1 + 0x50),
                 *(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(iVar1 + 0x58));
    *(float *)(*(int *)(this + 4) + 8) =
         (float)*(int *)(*(int *)(*(int *)(this + 0x110) + 4) + 0x248);
    *(float *)(*(int *)(this + 4) + 0xc) =
         (float)*(int *)(*(int *)(*(int *)(this + 0x110) + 4) + 0x24c);
    *(float *)(*(int *)(this + 4) + 0x10) =
         (float)*(int *)(*(int *)(*(int *)(this + 0x110) + 4) + 0x250);
    *(float *)(*(int *)(this + 4) + 0x54) =
         (float)*(int *)(*(int *)(*(int *)(this + 0x110) + 4) + 0x254);
    FUN_10023130(&DAT_101aa610);
    *(undefined4 *)(*(int *)(this + 4) + 0x114) = 1;
    FUN_100deff0(1);
    if (*(int *)(*(int *)(this + 4) + 0x250) == 1) {
      *(undefined4 *)(*(int *)(this + 4) + 0x250) = 2;
      FUN_100ea600(0x40000000);
    }
    *(uint *)(*(int *)(this + 0x118) + 0x2500) =
         *(uint *)(*(int *)(this + 0x118) + 0x2500) & 0xfffffff7;
    FUN_10017740(0);
    *(undefined4 *)(this + 0x118) = 0;
    *(undefined4 *)(this + 0x110) = 0;
    *(code **)(this + 0x80) = BoatUse;
    *(code **)(this + 0x78) = BoatThink;
    (**(code **)(*(int *)this + 8))(0);
    *(undefined4 *)(*(int *)(this + 4) + 0x248) = 0;
  }
  return;
}

