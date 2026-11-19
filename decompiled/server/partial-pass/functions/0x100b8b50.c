// rea decompile_all
// name: FUN_100b8b50
// address: 0x100b8b50
// body: available
// range: 0x100b8b50-0x100b8e3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float * FUN_100b8b50(float *param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  int in_ECX;
  undefined4 uVar5;
  undefined4 uVar6;
  float10 fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  undefined1 local_48 [20];
  float local_34;
  float local_30;
  float local_2c;
  
  FUN_100b8110(&local_6c);
  fVar7 = (float10)FUN_100b81e0(param_2,*(int *)(DAT_10223188 + 0x98) +
                                        *(int *)(*(int *)(in_ECX + 4) + 0x1ec));
  fVar1 = (float)fVar7;
  iVar2 = (int)*(float *)(*(int *)(in_ECX + 4) + 0x1c0);
  if (iVar2 == 0) {
    pfVar4 = (float *)FUN_100b8110(&local_60);
    fVar9 = pfVar4[2] - local_64;
    *(ulonglong *)param_1 = CONCAT44(pfVar4[1] - local_68,*pfVar4 - local_6c);
LAB_100b8c3f:
    param_1[2] = fVar9;
  }
  else if (iVar2 == 1) {
    puVar3 = (undefined8 *)FUN_100b8240(&local_60);
    fVar9 = *(float *)(puVar3 + 1);
    *(undefined8 *)param_1 = *puVar3;
    goto LAB_100b8c3f;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if (*(float *)(iVar2 + 0x164) != 0.0) {
    local_60 = *param_1;
    fStack_5c = 0.0;
    fStack_58 = 0.0;
    uStack_54 = 0;
    dVar8 = (double)(local_60 * local_60 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
    if (dVar8 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar8 = SQRT(dVar8);
    }
    fVar9 = (float)dVar8;
    switch((int)*(float *)(iVar2 + 0x164)) {
    case 2:
      fVar9 = fVar9 * fVar9;
    case 1:
      local_60 = local_60 / fVar9;
      fVar10 = param_1[1] / fVar9;
      fVar9 = param_1[2] / fVar9;
      break;
    case 3:
      fVar10 = fVar9 * fVar9 * fVar9;
      fVar9 = param_1[2] / fVar10;
      *(ulonglong *)param_1 = CONCAT44(param_1[1] / fVar10,local_60 / fVar10);
      goto LAB_100b8d35;
    case 4:
      local_60 = local_60 * fVar9;
      fVar10 = param_1[1] * fVar9;
      fVar9 = param_1[2] * fVar9;
      break;
    default:
      goto switchD_100b8cba_default;
    }
    *(ulonglong *)param_1 = CONCAT44(fVar10,local_60);
LAB_100b8d35:
    param_1[2] = fVar9;
  }
switchD_100b8cba_default:
  fVar9 = *(float *)(iVar2 + 0x168);
  *(ulonglong *)param_1 = CONCAT44(param_1[1] * fVar1,*param_1 * fVar1);
  param_1[2] = param_1[2] * fVar1;
  if (fVar9 == 0.0) {
    return param_1;
  }
  iVar2 = (int)fVar9;
  uVar5 = 1;
  uVar6 = 1;
  if (iVar2 == 2) {
    uVar5 = 0;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 4) goto LAB_100b8dae;
      uVar5 = 0;
    }
    uVar6 = 0;
  }
LAB_100b8dae:
  local_60 = *param_1 + local_6c;
  fStack_5c = param_1[1] + local_68;
  fStack_58 = param_1[2] + local_64;
  FUN_1011a820(&local_6c,&local_60,uVar6,uVar5,0,local_48);
  *(ulonglong *)param_1 = CONCAT44(local_30 - local_68,local_34 - local_6c);
  param_1[2] = local_2c - local_64;
  return param_1;
}

