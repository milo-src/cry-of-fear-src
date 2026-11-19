// rea decompile_all
// name: FUN_1000a630
// address: 0x1000a630
// body: available
// range: 0x1000a630-0x1000aa4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a630(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  undefined1 local_f8 [72];
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float local_58;
  float local_54;
  undefined8 local_50;
  float local_48;
  undefined4 local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffff0;
  local_20 = *(float *)(DAT_10220c50 + 0x20) * *(float *)(DAT_10220c50 + 0x4546c) +
             *(float *)(DAT_10220c50 + 0x14) * *(float *)(DAT_10220c50 + 0x45468);
  fStack_1c = *(float *)(DAT_10220c50 + 0x24) * *(float *)(DAT_10220c50 + 0x4546c) +
              *(float *)(DAT_10220c50 + 0x18) * *(float *)(DAT_10220c50 + 0x45468);
  local_18 = *(float *)(DAT_10220c50 + 0x28) * *(float *)(DAT_10220c50 + 0x4546c) +
             *(float *)(DAT_10220c50 + 0x1c) * *(float *)(DAT_10220c50 + 0x45468);
  if ((((*(float *)(DAT_10220c50 + 0x45468) == 0.0) && (*(float *)(DAT_10220c50 + 0x4546c) == 0.0))
      && (*(float *)(DAT_10220c50 + 0x45470) == 0.0)) && (*(int *)(DAT_10220c50 + 0xe8) != -0x11)) {
    local_18 = local_18 - 60.0;
  }
  else {
    local_18 = *(float *)(DAT_10220c50 + 0x45470) + local_18;
  }
  local_50 = CONCAT44(fStack_1c,local_20);
  local_48 = local_18;
  fVar6 = (float10)FUN_100033d0(&local_50);
  local_54 = (*(float *)(DAT_10220c50 + 0x1f8) * (float)fVar6) / 100.0;
  if (*(float *)(DAT_10220c50 + 500) < local_54) {
    FUN_10003490(&local_20,*(float *)(DAT_10220c50 + 500) / local_54,&local_20);
    local_54 = *(float *)(DAT_10220c50 + 500);
  }
  iVar2 = DAT_10220c50;
  if (((*(ushort *)(DAT_10220c50 + 0x45476) & 0x1000) == 0) ||
     ((*(uint *)(DAT_10220c50 + 0xb8) & 0x40000) == 0)) {
    local_54 = local_54 * 0.8;
  }
  *(float *)(DAT_10220c50 + 0x5c) =
       *(float *)(DAT_10220c50 + 0x74) + *(float *)(DAT_10220c50 + 0x5c);
  iVar3 = DAT_10220c50;
  *(float *)(DAT_10220c50 + 0x60) =
       *(float *)(DAT_10220c50 + 0x78) + *(float *)(DAT_10220c50 + 0x60);
  iVar4 = DAT_10220c50;
  *(float *)(DAT_10220c50 + 100) = *(float *)(DAT_10220c50 + 0x7c) + *(float *)(DAT_10220c50 + 100);
  local_38 = *(undefined4 *)(iVar2 + 0x5c);
  local_34 = *(undefined4 *)(iVar3 + 0x60);
  local_30 = *(undefined4 *)(iVar4 + 100);
  fVar6 = (float10)FUN_100033d0(&local_38);
  fVar1 = (float)fVar6;
  if (fVar1 == 0.0) {
    fVar7 = 0.0;
    local_58 = fVar1;
  }
  else {
    fVar7 = fVar1 - *(float *)(DAT_10220c50 + 0x10) * fVar1 *
                    *(float *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x1c) *
                    *(float *)(DAT_10220c50 + 0xc4);
    local_58 = 0.0;
    if (0.0 <= fVar7) {
      local_58 = fVar7;
    }
    FUN_10003490(DAT_10220c50 + 0x5c,local_58 / fVar1,DAT_10220c50 + 0x5c);
    fVar7 = local_58;
  }
  if (0.1 <= local_54) {
    local_58 = local_54 - fVar7;
    if (0.0 < local_58) {
      FUN_100033d0(&local_20);
      fVar7 = *(float *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x10) * local_54 *
              *(float *)(DAT_10220c50 + 0x10) * *(float *)(DAT_10220c50 + 0xc4);
      fVar1 = local_58;
      if (fVar7 <= local_58) {
        fVar1 = fVar7;
      }
      *(float *)(DAT_10220c50 + 0x5c) = local_20 * fVar1 + *(float *)(DAT_10220c50 + 0x5c);
      *(float *)(DAT_10220c50 + 0x60) = fStack_1c * fVar1 + *(float *)(DAT_10220c50 + 0x60);
      *(float *)(DAT_10220c50 + 100) = local_18 * fVar1 + *(float *)(DAT_10220c50 + 100);
    }
    FUN_100032d0(DAT_10220c50 + 0x38,*(undefined4 *)(DAT_10220c50 + 0x10),DAT_10220c50 + 0x5c,
                 &local_2c);
    local_44 = local_2c;
    local_40 = local_28;
    local_3c = *(float *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x30) + 1.0 + local_24;
    piVar5 = (int *)(**(code **)(DAT_10220c50 + 0x4f584))(local_f8,&local_44,&local_2c,0,0xffffffff)
    ;
    local_a0 = piVar5[4];
    iStack_9c = piVar5[5];
    iStack_98 = piVar5[6];
    iStack_94 = piVar5[7];
    local_b0 = *piVar5;
    iStack_ac = piVar5[1];
    iStack_a8 = piVar5[2];
    iStack_a4 = piVar5[3];
    local_90 = piVar5[8];
    iStack_8c = piVar5[9];
    iStack_88 = piVar5[10];
    iStack_84 = piVar5[0xb];
    local_80 = piVar5[0xc];
    iStack_7c = piVar5[0xd];
    iStack_78 = piVar5[0xe];
    iStack_74 = piVar5[0xf];
    if ((iStack_ac == 0) && (local_b0 == 0)) {
      *(int *)(DAT_10220c50 + 0x38) = iStack_9c;
      *(int *)(DAT_10220c50 + 0x3c) = iStack_98;
      *(int *)(DAT_10220c50 + 0x40) = iStack_94;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
      return;
    }
    FUN_10005880();
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

