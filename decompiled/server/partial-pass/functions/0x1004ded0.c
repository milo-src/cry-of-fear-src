// rea decompile_all
// name: CKeyitemModel::KeyitemUse
// address: 0x1004ded0
// body: available
// range: 0x1004ded0-0x1004e022 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CKeyitemModel::KeyitemUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CKeyitemModel::KeyitemUse
          (CKeyitemModel *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  
                    /* 0x4ded0  155  ?KeyitemUse@CKeyitemModel@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  if ((param_1 != (CBaseEntity *)0x0) &&
     (*(float *)(this + 0x100) < *DAT_10223188 || *(float *)(this + 0x100) == *DAT_10223188)) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xd0))();
    if (iVar1 != 0) {
      iVar1 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
      if (iVar1 == 0) {
        return;
      }
      iVar2 = *(int *)(this + 4);
      if (*(int *)(iVar2 + 0x1cc) != 0) {
        FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(iVar2 + 0x1cc),this,this,3,0);
        iVar2 = *(int *)(this + 4);
      }
      if (((*(byte *)(iVar2 + 0x1a4) & 2) != 0) && (iVar2 = *(int *)(iVar2 + 0x248), iVar2 != 0)) {
        if (iVar2 == 1) {
          puVar4 = &DAT_101b1888;
LAB_1004df91:
          FUN_10119810(iVar1,puVar4,5,0);
          *(int *)(*(int *)(this + 4) + 0x248) = *(int *)(*(int *)(this + 4) + 0x248) + -1;
          return;
        }
        if (iVar2 == 2) {
          puVar4 = &DAT_101b18a4;
          goto LAB_1004df91;
        }
        if (iVar2 == 3) {
          puVar4 = &DAT_101b18c8;
          goto LAB_1004df91;
        }
      }
      iVar2 = FUN_100e2f80(this);
      if (iVar2 != 0) {
        if (((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) != 0) &&
           (fVar3 = (float10)(*DAT_1022302c)("difficulty"), (float)fVar3 == 4.0)) {
          *(undefined4 *)(iVar1 + 0x1ef4) = 5;
        }
        *(undefined4 *)(*(int *)(this + 4) + 0x1c0) = 0;
        FUN_10119900(this);
      }
    }
    *(float *)(this + 0x100) = *DAT_10223188 + 1.0;
  }
  return;
}

