// rea decompile_all
// name: FUN_100172b0
// address: 0x100172b0
// body: available
// range: 0x100172b0-0x1001758b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100172b0(int param_1,int param_2,float param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  int iVar3;
  undefined8 *puVar4;
  int *in_ECX;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  undefined8 local_20;
  float local_18;
  undefined1 auStack_14 [16];
  
  if (*(float *)(in_ECX[1] + 0x170) != 0.0) {
    pfVar2 = (float *)FUN_10012420(&local_20,in_ECX[1]);
    fVar5 = *(float *)(param_1 + 8) - *pfVar2;
    fVar8 = *(float *)(param_1 + 0xc) - pfVar2[1];
    local_18 = *(float *)(param_1 + 0x10) - pfVar2[2];
    dVar6 = (double)(fVar5 * fVar5 + fVar8 * fVar8 + local_18 * local_18);
    if (dVar6 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if ((float)dVar6 == 0.0) {
      local_20 = 0;
      local_18 = 1.0;
    }
    else {
      fVar7 = 1.0 / (float)dVar6;
      local_18 = fVar7 * local_18;
      local_20 = CONCAT44(fVar7 * fVar8,fVar7 * fVar5);
    }
    _DAT_10222f28 = local_20;
    DAT_10222f30 = local_18;
    if ((param_1 != 0) && (iVar3 = (*DAT_10223060)(*(undefined4 *)(param_1 + 0x20c)), iVar3 != 0)) {
      iVar3 = in_ECX[1];
      if (((*(int *)(iVar3 + 0x108) == 3) || (*(int *)(iVar3 + 0x108) == 4)) &&
         (*(int *)(param_2 + 0x10c) != 1)) {
        local_20 = CONCAT44(*(float *)(iVar3 + 0xc) -
                            (*(float *)(param_1 + 0xd4) + *(float *)(param_1 + 200)) * 0.5,
                            *(float *)(iVar3 + 8) -
                            (*(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0xc4)) * 0.5);
        local_18 = *(float *)(iVar3 + 0x10) -
                   (*(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xcc)) * 0.5;
        puVar4 = (undefined8 *)FUN_10017e70(auStack_14);
        uVar1 = *puVar4;
        fVar5 = (73728.0 /
                (*(float *)(iVar3 + 0xf8) * *(float *)(iVar3 + 0xf4) * *(float *)(iVar3 + 0xfc))) *
                param_3 * 5.0;
        if (1000.0 < fVar5) {
          fVar5 = 1000.0;
        }
        local_20._0_4_ = (float)uVar1;
        local_20._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_18 = *(float *)(puVar4 + 1) * fVar5 + *(float *)(iVar3 + 0x28);
        *(ulonglong *)(iVar3 + 0x20) =
             CONCAT44(local_20._4_4_ * fVar5 + *(float *)(iVar3 + 0x24),
                      (float)local_20 * fVar5 + *(float *)(iVar3 + 0x20));
        *(float *)(iVar3 + 0x28) = local_18;
        local_20 = uVar1;
      }
    }
    *(float *)(in_ECX[1] + 0x164) = *(float *)(in_ECX[1] + 0x164) - param_3;
    if (0.0 < *(float *)(in_ECX[1] + 0x164)) {
      return 1;
    }
    (**(code **)(*in_ECX + 0x6c))(param_2,0);
  }
  return 0;
}

