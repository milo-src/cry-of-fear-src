// rea decompile_all
// name: CCineMonster::InitIdleThink
// address: 0x100fb050
// body: available
// range: 0x100fb050-0x100fb11c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CCineMonster::InitIdleThink(void) */

void __thiscall CCineMonster::InitIdleThink(CCineMonster *this)

{
  undefined4 uVar1;
  int iVar2;
  
                    /* 0xfb050  149  ?InitIdleThink@CCineMonster@@QAEXXZ */
  uVar1 = FUN_100fabc0((int)DAT_10223188[0x26] + *(int *)(this + 0x374),0);
  iVar2 = FUN_10017740(uVar1);
  if (iVar2 != 0) {
    (**(code **)(*(int *)this + 0x244))();
    *(float *)(this + 0x3ac) = *DAT_10223188 + 1e+06;
    (*DAT_1022303c)(2,"script \"%s\" using monster \"%s\"\n",
                    *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26],
                    *(int *)(this + 0x374) + (int)DAT_10223188[0x26]);
    return;
  }
  FUN_100fa4b0();
  (*DAT_1022303c)(2,"script \"%s\" can\'t find monster \"%s\"\n",
                  *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26],
                  *(int *)(this + 0x374) + (int)DAT_10223188[0x26]);
  (**(code **)(*(int *)this + 8))(0x3f800000);
  return;
}

