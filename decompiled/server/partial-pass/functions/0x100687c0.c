// rea decompile_all
// name: CRoofBossHead::DieTouch
// address: 0x100687c0
// body: available
// range: 0x100687c0-0x1006895a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CRoofBossHead::DieTouch(class CBaseEntity *) */

void __thiscall CRoofBossHead::DieTouch(CRoofBossHead *this,CBaseEntity *param_1)

{
  int iVar1;
  char *pcVar2;
  float10 fVar3;
  
                    /* 0x687c0  86  ?DieTouch@CRoofBossHead@@QAEXPAVCBaseEntity@@@Z */
  *(undefined4 *)(*(int *)(this + 4) + 0x164) = 0xbf800000;
  (*DAT_10223000)(4,0x17,*(int *)(this + 4) + 8,0);
  (*DAT_10223008)(0x73);
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(this + 4) + 8));
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(this + 4) + 0xc));
  (*DAT_1022301c)(*(undefined4 *)(*(int *)(this + 4) + 0x10));
  (*DAT_10223010)((int)DAT_10231f28);
  (*DAT_10223010)((int)DAT_10231f20);
  (*DAT_10223008)(0xf7);
  (*DAT_10223008)(5);
  (*DAT_10223004)();
  fVar3 = (float10)(*DAT_1022302c)("sv_joebiden");
  pcVar2 = "roofboss/rb_headhit.wav";
  if ((float)fVar3 != 0.0) {
    pcVar2 = "roofboss/milkme.wav";
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,pcVar2,0x3f800000,0x3f4ccccd,0,100);
  if ((param_1 != (CBaseEntity *)0x0) && (*(float *)(*(int *)(param_1 + 4) + 0x170) != 0.0)) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xd0))();
    if (iVar1 != 0) {
      iVar1 = *(int *)(this + 4);
      (**(code **)(*(int *)param_1 + 100))
                (iVar1,-(uint)(*(int *)(iVar1 + 0x19c) != 0) & *(int *)(iVar1 + 0x19c) + 0x80U,
                 *(undefined4 *)(iVar1 + 0x1e4),2);
    }
  }
  *(undefined4 *)(*(int *)(this + 4) + 0xb4) = 0;
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 0;
  *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
  *(float *)(*(int *)(this + 4) + 0x104) = *DAT_10223188 + 1.0;
  return;
}

