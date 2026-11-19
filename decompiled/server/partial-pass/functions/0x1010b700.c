// rea decompile_all
// name: CTriggerHurt::HurtTouch
// address: 0x1010b700
// body: available
// range: 0x1010b700-0x1010b9b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CTriggerHurt::HurtTouch(class CBaseEntity *) */

void __thiscall CTriggerHurt::HurtTouch(CTriggerHurt *this,CBaseEntity *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
                    /* 0x10b700  144  ?HurtTouch@CTriggerHurt@@QAEXPAVCBaseEntity@@@Z */
  if (*(float *)(*(int *)(param_1 + 4) + 0x170) == 0.0) {
    return;
  }
  if (((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) &&
     (iVar5 = (**(code **)(*(int *)param_1 + 0xd0))(), iVar5 == 0)) {
    return;
  }
  if (((*(byte *)(*(int *)(this + 4) + 0x1a4) & 8) != 0) &&
     (iVar5 = (**(code **)(*(int *)param_1 + 0xd0))(), iVar5 != 0)) {
    return;
  }
  iVar5 = (**(code **)(*(int *)param_1 + 0xd0))();
  if ((iVar5 != 0) && (iVar5 = FUN_100125e0(*(undefined4 *)(param_1 + 4)), iVar5 != 0)) {
    iVar6 = *(int *)(this + 4);
    if ((*(int *)(iVar6 + 0x248) != 0) &&
       (*(float *)(*(int *)(iVar5 + 4) + 0x164) <= *(float *)(iVar6 + 0x1e4))) {
      *(undefined1 *)(iVar5 + 0x1f2a) = 1;
      iVar6 = *(int *)(this + 4);
    }
    if ((*(int *)(iVar6 + 0x24c) != 0) &&
       (*(float *)(*(int *)(iVar5 + 4) + 0x164) <= *(float *)(iVar6 + 0x1e4))) {
      uVar1 = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c);
      FUN_10117180(uVar1,uVar1);
    }
  }
  if ((DAT_10222ee4 == (int *)0x0) || (iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar5 == 0)) {
    if ((*DAT_10223188 < *(float *)(*(int *)(this + 4) + 0x1e8)) &&
       (*DAT_10223188 != *(float *)(*(int *)(this + 4) + 0x204))) {
      return;
    }
  }
  else {
    iVar5 = *(int *)(this + 4);
    if (*(float *)(iVar5 + 0x1e8) <= *DAT_10223188) {
      *(undefined4 *)(iVar5 + 0x188) = 0;
      iVar5 = (**(code **)(*(int *)param_1 + 0xd0))();
      if (iVar5 != 0) {
        cVar4 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
        *(uint *)(*(int *)(this + 4) + 0x188) =
             *(uint *)(*(int *)(this + 4) + 0x188) | 1 << (cVar4 - 1U & 0x1f);
      }
    }
    else if (*DAT_10223188 != *(float *)(iVar5 + 0x204)) {
      iVar5 = (**(code **)(*(int *)param_1 + 0xd0))();
      if (iVar5 == 0) {
        return;
      }
      cVar4 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
      uVar7 = 1 << (cVar4 - 1U & 0x1f);
      uVar2 = *(uint *)(*(int *)(this + 4) + 0x188);
      if ((uVar7 & uVar2) != 0) {
        return;
      }
      *(uint *)(*(int *)(this + 4) + 0x188) = uVar2 | uVar7;
    }
  }
  iVar5 = *(int *)(this + 4);
  fVar3 = *(float *)(iVar5 + 0x1e4) * 0.5;
  if (0.0 <= fVar3) {
    (**(code **)(*(int *)param_1 + 100))(iVar5,iVar5,fVar3,*(undefined4 *)(this + 0x178));
  }
  else {
    (**(code **)(*(int *)param_1 + 0x68))(-fVar3);
  }
  *(float *)(*(int *)(this + 4) + 0x204) = *DAT_10223188;
  *(float *)(*(int *)(this + 4) + 0x1e8) = *DAT_10223188 + 0.5;
  if (*(int *)(*(int *)(this + 4) + 0x1cc) != 0) {
    if (((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x10) != 0) &&
       (iVar5 = (**(code **)(*(int *)param_1 + 0xd0))(), iVar5 == 0)) {
      return;
    }
    FUN_10102930(param_1,3,0);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) != 0) {
      *(undefined4 *)(*(int *)(this + 4) + 0x1cc) = 0;
    }
  }
  return;
}

