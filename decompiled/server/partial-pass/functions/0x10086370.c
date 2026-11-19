// rea decompile_all
// name: CWheelchair::Embark
// address: 0x10086370
// body: available
// range: 0x10086370-0x100865bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CWheelchair::Embark(void) */

void __thiscall CWheelchair::Embark(CWheelchair *this)

{
  int iVar1;
  undefined4 uVar2;
  float10 fVar3;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x86370  101  ?Embark@CWheelchair@@QAEXXZ */
  if (*(int *)(this + 900) != 0) {
    FUN_100dd990(1,1);
    FUN_100f0ba0(0);
    FUN_100f2e10(0);
    *(undefined4 *)(*(int *)(this + 900) + 0x5dc) = 0xfffffffe;
    *(undefined4 *)(*(int *)(this + 900) + 0x5e0) = 0xfffffffe;
    fVar3 = (float10)(*DAT_1022302c)("cof_wheelchair_maxspeed");
    *(float *)(*(int *)(this + 4) + 600) = (float)fVar3;
    fVar3 = (float10)(*DAT_1022302c)("cof_wheelchair_maxturnspeed");
    *(float *)(*(int *)(this + 4) + 0x25c) = (float)fVar3;
    fVar3 = (float10)(*DAT_1022302c)("cof_wheelchair_speedreduction");
    *(float *)(*(int *)(this + 4) + 0x260) = (float)fVar3;
    fVar3 = (float10)(*DAT_1022302c)("cof_wheelchair_turnspeed");
    *(float *)(*(int *)(this + 4) + 0x264) = (float)fVar3;
    *(code **)(this + 0x80) = WheelchairUse;
    iVar1 = FUN_10118460(0,"wheelchair_hide_spot");
    (*DAT_10223000)(1,DAT_10226670,0,*(undefined4 *)(*(int *)(*(int *)(this + 900) + 4) + 0x20c));
    uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
    (*DAT_10223010)(uVar2);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    if (iVar1 != 0) {
      FUN_10119fe0(*(undefined4 *)(this + 900),*(int *)(iVar1 + 4) + 8);
    }
    FUN_10017740(this);
    *(undefined4 *)(*(int *)(this + 4) + 0x164) =
         *(undefined4 *)(*(int *)(*(int *)(this + 900) + 4) + 0x164);
    (*DAT_10223128)(*(undefined4 *)(*(int *)(*(int *)(this + 900) + 4) + 0x20c),&DAT_101a1d94,
                    &DAT_101be9f4);
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    FUN_10119c00(*(undefined4 *)(this + 900),&local_10,0x3f800000,0,0xff,0);
    DAT_10226480 = 1;
    *(undefined1 *)(*(int *)(this + 900) + 0x1ef8) = 1;
    FUN_100e0a80("weapon_browning_wheelchair",0,0);
    FUN_100e0a80("weapon_browning_wheelchair",0,0);
    FUN_100e0a80("weapon_browning_wheelchair",0,0);
    FUN_100e0a80("weapon_browning_wheelchair",0,0);
    DAT_10226480 = 0;
    *(code **)(this + 0x78) = CBaseMonster::CallMonsterThink;
    (**(code **)(*(int *)this + 0x10))(*(float *)(this + 0x58) + 0.1);
  }
  return;
}

