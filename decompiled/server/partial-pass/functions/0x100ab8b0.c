// rea decompile_all
// name: FUN_100ab8b0
// address: 0x100ab8b0
// body: available
// range: 0x100ab8b0-0x100abc86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ab8b0(undefined4 param_1,float *param_2,float param_3)

{
  float *pfVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_2c;
  float local_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float local_14;
  float local_10;
  float local_c;
  
  iVar2 = in_ECX[1];
  if (*(int *)(iVar2 + 0x108) != 5) {
    FUN_100c0e70(param_1,param_2,param_3);
    return;
  }
  if ((1.0 < *DAT_10223188 - (float)in_ECX[0xde]) && (in_ECX[0x86] != in_ECX[0xb4])) {
    in_ECX[0x86] = in_ECX[0xb4];
    in_ECX[0xdd] = 0x43480000;
    in_ECX[0x3c] = 0x43480000;
  }
  pfVar1 = DAT_10223188;
  fVar8 = (float)in_ECX[0xdf];
  fVar7 = (float)in_ECX[0xdb] * fVar8 + param_2[1];
  fVar6 = (float)in_ECX[0xda] * fVar8 + *param_2;
  local_24 = (float)in_ECX[0xdc] * fVar8 + param_2[2];
  dVar5 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + local_24 * local_24);
  if (dVar5 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  if ((float)dVar5 == 0.0) {
    fVar8 = 1.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar8 = 1.0 / (float)dVar5;
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
    fVar8 = local_24 * fVar8;
  }
  fVar4 = (float)in_ECX[0x3c] * param_3;
  local_10 = fVar7 * fVar4 + *(float *)(iVar2 + 0xc);
  local_c = fVar8 * fVar4 + *(float *)(iVar2 + 0x10);
  local_14 = fVar6 * fVar4 + *(float *)(iVar2 + 8);
  if (in_ECX[0x86] == in_ECX[0xb4]) {
    fVar3 = (float10)FUN_101174a0(0x41a00000,in_ECX[0xdd],pfVar1[1] * 300.0);
    in_ECX[0xdd] = (int)(float)fVar3;
  }
  else {
    fVar3 = (float10)FUN_101174a0(0x42c80000,in_ECX[0xdd],pfVar1[1] * 75.0);
    local_24 = (float)fVar3;
    in_ECX[0xdd] = (int)local_24;
    if (local_24 < 100.0) {
      in_ECX[0xde] = (int)*DAT_10223188;
    }
  }
  iVar2 = (**(code **)(*in_ECX + 0x158))(in_ECX[1] + 8,&local_14,param_1,0);
  if (iVar2 != 0) {
    iVar2 = in_ECX[1];
    fVar8 = *(float *)(iVar2 + 0x10);
    *(ulonglong *)(in_ECX + 0xda) =
         CONCAT44(fStack_20 - *(float *)(iVar2 + 0xc),local_24 - *(float *)(iVar2 + 8));
    in_ECX[0xdc] = (int)(fStack_1c - fVar8);
    dVar5 = (double)((float)in_ECX[0xda] * (float)in_ECX[0xda] +
                     (float)in_ECX[0xdb] * (float)in_ECX[0xdb] +
                    (float)in_ECX[0xdc] * (float)in_ECX[0xdc]);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    if ((float)dVar5 == 0.0) {
      fVar8 = 0.0;
      local_2c = 0.0;
      local_28 = 1.0;
    }
    else {
      local_28 = 1.0 / (float)dVar5;
      fVar8 = (float)in_ECX[0xda] * local_28;
      local_2c = (float)in_ECX[0xdb] * local_28;
      local_28 = (float)in_ECX[0xdc] * local_28;
    }
    *(ulonglong *)(in_ECX + 0xda) = CONCAT44(local_2c,fVar8);
    in_ECX[0xdc] = (int)local_28;
    FUN_10119420(*(undefined4 *)(iVar2 + 0x20c),&local_24,(float)in_ECX[0x3c] * param_3,1);
    return;
  }
  iVar2 = (**(code **)(*in_ECX + 0x168))();
  in_ECX[0x86] = iVar2;
  in_ECX[0xde] = (int)*DAT_10223188;
  *(undefined8 *)(in_ECX + 0xda) = DAT_10222f34;
  in_ECX[0xdc] = DAT_10222f3c;
  return;
}

