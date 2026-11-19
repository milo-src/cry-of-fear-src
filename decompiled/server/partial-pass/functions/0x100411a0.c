// rea decompile_all
// name: FUN_100411a0
// address: 0x100411a0
// body: available
// range: 0x100411a0-0x1004170a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100411a0(float param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  float unaff_EBX;
  undefined4 uVar4;
  float unaff_ESI;
  float unaff_EDI;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined1 *puVar10;
  float *pfVar11;
  float fStack_44;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined8 local_2c;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  
  iVar3 = FUN_100bdf30();
  if (iVar3 != 0) {
    (*DAT_1022303c)(2,"Tried to move with no route!\n");
    in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
    return;
  }
  if (*DAT_10223188 <= (float)in_ECX[0x84] && (float)in_ECX[0x84] != *DAT_10223188) {
    return;
  }
  local_34 = (float)in_ECX[0x3c];
  uVar4 = 0;
  if (local_34 == 0.0) {
    local_34 = 200.0;
    in_ECX[0x3c] = 0x43480000;
  }
  local_34 = local_34 * param_1;
  iVar3 = in_ECX[0xaf];
  iVar1 = in_ECX[1];
  fVar6 = (float)in_ECX[iVar3 * 4 + 0x8f] - *(float *)(iVar1 + 0xc);
  local_38 = (float)in_ECX[iVar3 * 4 + 0x8e] - *(float *)(iVar1 + 8);
  local_30 = (float)in_ECX[iVar3 * 4 + 0x90] - *(float *)(iVar1 + 0x10);
  dVar7 = (double)(fVar6 * fVar6 + local_38 * local_38 + local_30 * local_30);
  if (dVar7 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  if ((float)dVar7 == 0.0) {
    local_20 = 0.0;
    fStack_1c = 0.0;
    local_18 = 1.0;
  }
  else {
    local_18 = 1.0 / (float)dVar7;
    local_20 = local_18 * local_38;
    fStack_1c = local_18 * fVar6;
    local_18 = local_18 * local_30;
  }
  local_2c = CONCAT44(fStack_1c,local_20);
  local_24 = local_18;
  iVar1 = in_ECX[1];
  fVar9 = (float)in_ECX[iVar3 * 4 + 0x8f] - *(float *)(iVar1 + 0xc);
  fVar8 = (float)in_ECX[iVar3 * 4 + 0x8e] - *(float *)(iVar1 + 8);
  fVar6 = (float)in_ECX[iVar3 * 4 + 0x90] - *(float *)(iVar1 + 0x10);
  dVar7 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6);
  if (dVar7 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  local_38 = (float)dVar7;
  if (200.0 <= local_38) {
    local_38 = 200.0;
  }
  if (((in_ECX[iVar3 * 4 + 0x91] & 0xfffffe7fU) == 2) ||
     ((in_ECX[iVar3 * 4 + 0x91] & 0xfffffe7fU) == 1)) {
    uVar4 = FUN_10017790();
  }
  iVar3 = in_ECX[1];
  local_3c = 0;
  local_20 = *(float *)(iVar3 + 8) + (float)local_2c * local_38;
  pfVar11 = &local_20;
  fStack_1c = *(float *)(iVar3 + 0xc) + local_2c._4_4_ * local_38;
  local_18 = *(float *)(iVar3 + 0x10) + local_24 * local_38;
  iVar3 = (**(code **)(*in_ECX + 0x158))((float *)(iVar3 + 8),pfVar11,uVar4,&local_3c);
  if (iVar3 != 2) {
    (**(code **)(*in_ECX + 0x16c))();
    fVar6 = DAT_10223188[0x1d];
    if ((((fVar6 == 0.0) && (fVar6 = (float)(*DAT_1022305c)(0), fVar6 == 0.0)) ||
        (piVar2 = *(int **)((int)fVar6 + 0x7c), piVar2 == (int *)0x0)) ||
       (((FUN_10016a80(*(undefined4 *)(in_ECX[1] + 0x20c),*(undefined4 *)(piVar2[1] + 0x20c)),
         (float)in_ECX[0xb0] <= 0.0 || (iVar3 = (**(code **)(*piVar2 + 0x9c))(), iVar3 == 0)) ||
        ((iVar3 = (**(code **)(*piVar2 + 0xd0))(), iVar3 != 0 ||
         (*DAT_10223188 - (float)in_ECX[0x84] <= 3.0)))))) {
      iVar3 = (**(code **)(*in_ECX + 0x1bc))
                        (in_ECX[1] + 8,in_ECX + in_ECX[0xaf] * 4 + 0x8e,unaff_ESI,uVar4,&local_24);
      if (iVar3 == 0) {
        (*DAT_1022303c)(2,"Couldn\'t Triangulate\n");
        (**(code **)(*in_ECX + 0x16c))();
        if (0.0 < (float)in_ECX[0xb0]) {
          FUN_100bddb0();
          in_ECX[0x84] = (int)((float)in_ECX[0xb0] * 0.5 + *DAT_10223188);
          return;
        }
        in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
        (*DAT_1022303c)(2,"Failed to move!\n");
        return;
      }
      FUN_100bf8c0(local_24,local_20,fStack_1c,8);
      FUN_100c1ad0(uVar4);
    }
    else if (unaff_ESI < (float)in_ECX[0x3c]) {
      in_ECX[0x84] = (int)(*DAT_10223188 + (float)in_ECX[0xb0]);
      return;
    }
  }
  if (fStack_44 <= unaff_EBX) {
    (**(code **)(*in_ECX + 0x160))(uVar4,&local_3c,fStack_44 / (float)in_ECX[0x3c]);
    iVar3 = (**(code **)(*in_ECX + 0x164))((float)pfVar11 - unaff_EDI);
    if (iVar3 == 0) goto LAB_10041664;
  }
  else {
    (**(code **)(*in_ECX + 0x160))(uVar4,&local_3c,unaff_EBX / (float)in_ECX[0x3c]);
  }
  FUN_100bc290(pfVar11);
LAB_10041664:
  if (in_ECX[0xae] == 0) {
    (**(code **)(*in_ECX + 0x16c))();
    FUN_100c1a70();
  }
  if ((float)pfVar11 < 128.0) {
    uVar4 = FUN_10017790();
    FUN_100c1ad0(uVar4);
    FUN_100bddb0();
  }
  fVar6 = (float)in_ECX[0x3c];
  puVar10 = &stack0xffffffb8;
  fVar5 = (float10)FUN_10040870(pfVar11,puVar10);
  fVar5 = (float10)FUN_100407d0(in_ECX[0x3c],(float)fVar5,puVar10);
  in_ECX[0x3c] = (int)(float)(fVar5 + (float10)fVar6);
  return;
}

