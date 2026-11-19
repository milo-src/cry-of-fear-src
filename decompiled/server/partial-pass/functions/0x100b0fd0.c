// rea decompile_all
// name: CGrenade::BounceTouch
// address: 0x100b0fd0
// body: available
// range: 0x100b0fd0-0x100b135a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CGrenade::BounceTouch(class CBaseEntity *) */

void __thiscall CGrenade::BounceTouch(CGrenade *this,CBaseEntity *param_1)

{
  undefined8 uVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  double dVar8;
  float local_84;
  float fStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [48];
  undefined8 local_10;
  
                    /* 0xb0fd0  27  ?BounceTouch@CGrenade@@QAEXPAVCBaseEntity@@@Z */
  iVar7 = *(int *)(this + 4);
  iVar2 = *(int *)(iVar7 + 0x19c);
  if (*(int *)(*(int *)(param_1 + 4) + 0x20c) != iVar2) {
    if (*(float *)(this + 0x308) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x308)) {
      dVar8 = (double)(*(float *)(iVar7 + 0x20) * *(float *)(iVar7 + 0x20) +
                       *(float *)(iVar7 + 0x24) * *(float *)(iVar7 + 0x24) +
                      *(float *)(iVar7 + 0x28) * *(float *)(iVar7 + 0x28));
      if (dVar8 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      if (100.0 < (float)dVar8) {
        iVar7 = *(int *)(this + 4);
        uVar6 = -(uint)(iVar2 != 0) & iVar2 + 0x80U;
        if (uVar6 != 0) {
          puVar4 = (undefined4 *)FUN_10118b00(local_40);
          local_78 = *puVar4;
          local_74 = puVar4[1];
          local_70 = puVar4[2];
          local_6c = puVar4[3];
          local_68 = puVar4[4];
          local_64 = puVar4[5];
          local_60 = puVar4[6];
          local_5c = puVar4[7];
          local_58 = puVar4[8];
          local_54 = puVar4[9];
          local_50 = puVar4[10];
          local_4c = puVar4[0xb];
          uVar1 = *(undefined8 *)(puVar4 + 0xc);
          local_10._0_4_ = (undefined4)uVar1;
          local_48 = (undefined4)local_10;
          local_10._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
          local_44 = local_10._4_4_;
          local_10 = uVar1;
          FUN_1011c070();
          (**(code **)(*(int *)param_1 + 0x60))
                    (uVar6,0x3f800000,DAT_10223188[10],DAT_10223188[0xb],DAT_10223188[0xc],&local_78
                     ,0x80);
          FUN_1011b8f0(*(undefined4 *)(this + 4),uVar6);
          iVar7 = *(int *)(this + 4);
        }
        *(float *)(this + 0x308) = *DAT_10223188 + 1.0;
      }
    }
    fVar3 = *(float *)(iVar7 + 0x28) * 0.45;
    if (*(int *)(this + 0x368) == 0) {
      local_84 = (float)*(undefined8 *)(iVar7 + 0x20);
      fStack_80 = (float)((ulonglong)*(undefined8 *)(iVar7 + 0x20) >> 0x20);
      dVar8 = (double)(local_84 * local_84 + fStack_80 * fStack_80 + fVar3 * fVar3);
      if (dVar8 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar8 = SQRT(dVar8);
      }
      if ((float)dVar8 <= 60.0) {
        FUN_10100820(0x20,iVar7 + 8,(int)(*(float *)(iVar7 + 0x1e4) / 0.4),0x3e99999a);
        iVar7 = *(int *)(this + 4);
        *(undefined4 *)(this + 0x368) = 1;
      }
    }
    if ((*(uint *)(iVar7 + 0x1a8) & 0x200) == 0) {
      (**(code **)(*(int *)this + 0x244))();
    }
    else {
      *(ulonglong *)(iVar7 + 0x20) =
           CONCAT44(*(float *)(iVar7 + 0x24) * 0.8,*(float *)(iVar7 + 0x20) * 0.8);
      *(float *)(iVar7 + 0x28) = *(float *)(iVar7 + 0x28) * 0.8;
      uVar5 = (*DAT_102230b0)(1,1);
      *(undefined4 *)(*(int *)(this + 4) + 300) = uVar5;
    }
    iVar2 = *(int *)(this + 4);
    dVar8 = (double)(*(float *)(iVar2 + 0x20) * *(float *)(iVar2 + 0x20) +
                     *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                    *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
    if (dVar8 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar8 = SQRT(dVar8);
    }
    *(float *)(iVar2 + 0x13c) = (float)dVar8 / 200.0;
    iVar2 = *(int *)(this + 4);
    if (1.0 < *(float *)(iVar2 + 0x13c)) {
      *(undefined4 *)(iVar2 + 0x13c) = 0x3f800000;
      return;
    }
    if (*(float *)(iVar2 + 0x13c) < 0.5) {
      *(undefined4 *)(iVar2 + 0x13c) = 0;
    }
  }
  return;
}

