// rea decompile_all
// name: CTriggerTeleport::TeleportTouch
// address: 0x10111760
// body: available
// range: 0x10111760-0x10111bf9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CTriggerTeleport::TeleportTouch(class CBaseEntity *) */

void __thiscall CTriggerTeleport::TeleportTouch(CTriggerTeleport *this,CBaseEntity *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float local_48;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 auStack_14 [8];
  float fStack_c;
  
                    /* 0x111760  317  ?TeleportTouch@CTriggerTeleport@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if (((((*(byte *)(iVar1 + 0x1a8) & 0x28) != 0) &&
       (iVar2 = FUN_10119060(*(undefined4 *)(this + 0x17c),param_1), iVar2 != 0)) &&
      (iVar2 = FUN_10109c40(iVar1), iVar2 != 0)) &&
     (iVar2 = FUN_10118590(0,*(int *)(*(int *)(this + 4) + 0x1cc) + *(int *)(DAT_10223188 + 0x98)),
     iVar2 != 0)) {
    iVar3 = FUN_10118590(0,*(int *)(*(int *)(this + 4) + 0x1d8) + *(int *)(DAT_10223188 + 0x98));
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar2 + 4);
      local_20 = *(float *)(iVar3 + 8);
      local_1c = *(float *)(iVar3 + 0xc);
      local_18 = *(float *)(iVar3 + 0x10);
      iVar3 = (**(code **)(*(int *)param_1 + 0xd0))();
      if (iVar3 != 0) {
        local_18 = local_18 - *(float *)(*(int *)(param_1 + 4) + 0xe4);
      }
      local_18 = local_18 + 1.0;
      FUN_10119fe0(param_1,&local_20);
      iVar3 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(iVar2 + 4);
      *(undefined8 *)(iVar3 + 0x50) = *(undefined8 *)(iVar4 + 0x50);
      *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
      iVar3 = *(int *)(param_1 + 4);
      *(undefined8 *)(iVar3 + 0x2c) = DAT_10222f34;
      *(undefined4 *)(iVar3 + 0x34) = DAT_10222f3c;
      iVar3 = *(int *)(param_1 + 4);
      *(undefined8 *)(iVar3 + 0x20) = *(undefined8 *)(iVar3 + 0x2c);
      *(undefined4 *)(iVar3 + 0x28) = *(undefined4 *)(iVar3 + 0x34);
      iVar3 = (**(code **)(*(int *)param_1 + 0xd0))();
      if (iVar3 != 0) {
        iVar3 = *(int *)(param_1 + 4);
        iVar2 = *(int *)(iVar2 + 4);
        *(undefined8 *)(iVar3 + 0x74) = *(undefined8 *)(iVar2 + 0x50);
        *(undefined4 *)(iVar3 + 0x7c) = *(undefined4 *)(iVar2 + 0x58);
        *(undefined4 *)(*(int *)(param_1 + 4) + 0xa0) = 1;
      }
    }
    else {
      iVar4 = *(int *)(iVar3 + 4);
      iVar2 = *(int *)(iVar2 + 4);
      fVar6 = *(float *)(iVar2 + 8) - *(float *)(iVar4 + 8);
      fVar7 = *(float *)(iVar2 + 0xc) - *(float *)(iVar4 + 0xc);
      local_48 = *(float *)(iVar2 + 0x10) - *(float *)(iVar4 + 0x10);
      iVar4 = FUN_10108b60(iVar2 + 0x50);
      if (iVar4 != 0) {
        fVar8 = *(float *)(iVar2 + 0x54) - *(float *)(*(int *)(iVar3 + 4) + 0x54);
        *(float *)(*(int *)(param_1 + 4) + 0x54) = fVar8 + *(float *)(*(int *)(param_1 + 4) + 0x54);
        (**(code **)(*(int *)param_1 + 0xd0))();
        puVar5 = (undefined8 *)FUN_1011a8d0(auStack_14,*(int *)(param_1 + 4) + 0x20);
        uStack_2c._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
        uStack_24 = *(undefined4 *)(puVar5 + 1);
        uStack_2c._0_4_ = (undefined4)*puVar5;
        uStack_2c = CONCAT44(uStack_2c._4_4_ + fVar8,(undefined4)uStack_2c);
        FUN_10119320(&uStack_2c);
        iVar2 = *(int *)(param_1 + 4);
        dVar9 = (double)(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                         *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                        *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
        if (dVar9 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar9 = SQRT(dVar9);
        }
        fVar10 = (float)dVar9;
        fStack_c = *(float *)(DAT_10223188 + 0x30) * fVar10;
        *(ulonglong *)(iVar2 + 0x20) =
             CONCAT44(*(float *)(DAT_10223188 + 0x2c) * fVar10,
                      *(float *)(DAT_10223188 + 0x28) * fVar10);
        *(float *)(iVar2 + 0x28) = fStack_c;
        *(uint *)(*(int *)(param_1 + 4) + 0x28) =
             *(uint *)(*(int *)(param_1 + 4) + 0x28) ^ 0x80000000;
        iVar2 = *(int *)(iVar3 + 4);
        iVar3 = *(int *)(param_1 + 4);
        local_1c = *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc);
        local_18 = *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10);
        local_20 = *(float *)(iVar3 + 8) - *(float *)(iVar2 + 8);
        puVar5 = (undefined8 *)FUN_1011a8d0(auStack_14,&local_20);
        uStack_2c = *puVar5;
        uStack_24 = *(undefined4 *)(puVar5 + 1);
        FUN_10119320(&uStack_2c);
        uStack_2c = CONCAT44(uStack_2c._4_4_ + fVar8,(undefined4)uStack_2c);
        FUN_10119320(&uStack_2c);
        dVar9 = (double)(local_1c * local_1c + local_20 * local_20 + local_18 * local_18);
        if (dVar9 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar9 = SQRT(dVar9);
        }
        fVar8 = (float)dVar9;
        fVar7 = (fVar7 + *(float *)(DAT_10223188 + 0x2c) * fVar8) - local_1c;
        local_48 = (local_48 - *(float *)(DAT_10223188 + 0x30) * fVar8) - local_18;
        fVar6 = (fVar6 + *(float *)(DAT_10223188 + 0x28) * fVar8) - local_20;
      }
      iVar2 = *(int *)(param_1 + 4);
      local_1c = *(float *)(iVar2 + 0xc) + fVar7;
      local_18 = *(float *)(iVar2 + 0x10) + local_48;
      local_20 = *(float *)(iVar2 + 8) + fVar6;
      FUN_10119fe0(param_1,&local_20);
    }
    *(uint *)(iVar1 + 0x1a8) = *(uint *)(iVar1 + 0x1a8) & 0xfffffdff;
    *(undefined4 *)(iVar1 + 0xa0) = 1;
    FUN_10101ff0(*(int *)(*(int *)(this + 4) + 0x1ec) + *(int *)(DAT_10223188 + 0x98),param_1,this,3
                 ,0);
  }
  return;
}

