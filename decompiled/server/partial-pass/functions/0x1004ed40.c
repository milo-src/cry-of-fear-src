// rea decompile_all
// name: CCoFLadderManager::LadderThink
// address: 0x1004ed40
// body: available
// range: 0x1004ed40-0x1004f11d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CCoFLadderManager::LadderThink(void) */

void __thiscall CCoFLadderManager::LadderThink(CCoFLadderManager *this)

{
  uint *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
                    /* 0x4ed40  162  ?LadderThink@CCoFLadderManager@@AAEXXZ */
  if ((((this[0x120] != (CCoFLadderManager)0x0) &&
       (*(float *)(this + 0x11c) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x11c))) &&
      (iVar4 = *(int *)(this + 0x114), iVar4 != 0)) && (*(int *)(iVar4 + 0x5ac) != 0)) {
    this[0x120] = (CCoFLadderManager)0x0;
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5ac) + 4);
    *(float *)(iVar4 + 0x10) = *(float *)(iVar4 + 0x10) - 48.0;
  }
  fVar2 = *DAT_10223188;
  if (((fVar2 < *(float *)(this + 0xe0) || fVar2 == *(float *)(this + 0xe0)) ||
      (this[0xdd] == (CCoFLadderManager)0x0)) || (*(int *)(this + 0x114) == 0)) {
    if (((*(float *)(*(int *)(this + 4) + 0x1b8) <= fVar2 &&
          fVar2 != *(float *)(*(int *)(this + 4) + 0x1b8)) && (this[0xdc] == (CCoFLadderManager)0x0)
        ) && (iVar4 = *(int *)(this + 0x114), iVar4 != 0)) {
      if ((*(int *)(iVar4 + 0x5ac) != 0) &&
         ((*(byte *)(*(int *)(*(int *)(iVar4 + 0x5ac) + 4) + 0x184) & 8) != 0)) {
        this[0xe4] = (CCoFLadderManager)0x0;
        FUN_1004f470();
        iVar4 = *(int *)(this + 0x114);
      }
      if ((*(int *)(iVar4 + 0x5ac) != 0) &&
         ((*(byte *)(*(int *)(*(int *)(iVar4 + 0x5ac) + 4) + 0x184) & 0x10) != 0)) {
        this[0xe4] = (CCoFLadderManager)0x1;
        FUN_1004f780();
      }
    }
    (**(code **)(*(int *)this + 8))(0);
    return;
  }
  FUN_100deff0(1);
  iVar4 = *(int *)(this + 0x114);
  if (*(int *)(iVar4 + 0x5ac) != 0) {
    FUN_10119900(*(int *)(iVar4 + 0x5ac));
    *(undefined4 *)(*(int *)(this + 0x114) + 0x5ac) = 0;
    FUN_10017740(0);
    iVar4 = *(int *)(this + 0x114);
  }
  (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
  (*DAT_10223010)(0);
  (*DAT_10223008)(0);
  (*DAT_10223004)();
  puVar1 = (uint *)(*(int *)(*(int *)(this + 0x114) + 4) + 0x1a8);
  *puVar1 = *puVar1 & 0xffffffbf;
  puVar1 = (uint *)(*(int *)(*(int *)(this + 0x114) + 4) + 0x1a8);
  *puVar1 = *puVar1 & 0xffffff7f;
  (*DAT_10222fec)(*(undefined4 *)(*(int *)(*(int *)(this + 0x114) + 4) + 0x20c),"finishladder\n");
  if (this[0xe4] == (CCoFLadderManager)0x0) {
    iVar4 = FUN_10017780();
    if (iVar4 != 0) goto LAB_1004eee9;
    iVar4 = (int)DAT_10223188[0x26] + *(int *)(this + 0x10c);
  }
  else {
    iVar4 = FUN_10017780();
    if (iVar4 != 0) goto LAB_1004eee9;
    iVar4 = (int)DAT_10223188[0x26] + *(int *)(this + 0x110);
  }
  iVar4 = FUN_10118590(0,iVar4);
  if (iVar4 != 0) {
    FUN_10017740(iVar4);
  }
LAB_1004eee9:
  iVar4 = FUN_10017780();
  if (iVar4 != 0) {
    iVar4 = FUN_100177a0();
    iVar4 = *(int *)(iVar4 + 4);
    local_10 = *(undefined4 *)(iVar4 + 8);
    local_c = *(undefined4 *)(iVar4 + 0xc);
    local_8 = *(float *)(iVar4 + 0x10) + 36.0 + 1.0;
    FUN_10119fe0(*(undefined4 *)(this + 0x114),&local_10);
    iVar4 = FUN_100177a0();
    iVar4 = *(int *)(iVar4 + 4);
    iVar3 = *(int *)(*(int *)(this + 0x114) + 4);
    *(undefined8 *)(iVar3 + 0x50) = *(undefined8 *)(iVar4 + 0x50);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    iVar4 = *(int *)(*(int *)(this + 0x114) + 4);
    *(undefined8 *)(iVar4 + 0x2c) = DAT_10222f34;
    *(undefined4 *)(iVar4 + 0x34) = DAT_10222f3c;
    iVar4 = *(int *)(*(int *)(this + 0x114) + 4);
    *(undefined8 *)(iVar4 + 0x20) = *(undefined8 *)(iVar4 + 0x2c);
    *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar4 + 0x34);
    iVar4 = (**(code **)(**(int **)(this + 0x114) + 0xd0))();
    if (iVar4 != 0) {
      iVar4 = FUN_100177a0();
      *(undefined4 *)(*(int *)(*(int *)(this + 0x114) + 4) + 0x78) =
           *(undefined4 *)(*(int *)(iVar4 + 4) + 0x54);
      *(undefined4 *)(*(int *)(*(int *)(this + 0x114) + 4) + 0xa0) = 1;
    }
    puVar1 = (uint *)(*(int *)(*(int *)(this + 0x114) + 4) + 0x1a8);
    *puVar1 = *puVar1 & 0xfffffdff;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x114) + 4) + 0xa0) = 1;
  }
  (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(*(int *)(this + 0x114) + 4) + 0x20c));
  (*DAT_1022301c)(0x42480000);
  (*DAT_10223008)(0);
  (*DAT_10223008)(0);
  (*DAT_10223004)();
  *(undefined4 *)(*(int *)(*(int *)(this + 0x114) + 4) + 0x274) = 0x42b40000;
  if (*(int *)(*(int *)(this + 4) + 0x1cc) != 0) {
    FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(*(int *)(this + 4) + 0x1cc),
                 *(undefined4 *)(this + 0x114),*(undefined4 *)(this + 0x114),3,0);
  }
  this[0xdd] = (CCoFLadderManager)0x0;
  return;
}

