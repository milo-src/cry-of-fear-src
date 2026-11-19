// rea decompile_all
// name: FUN_10028440
// address: 0x10028440
// body: available
// range: 0x10028440-0x100288d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10028440(int param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,uint param_7)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int *piVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float local_18;
  
  iVar1 = *(int *)(param_1 + 0x20c);
  if ((iVar1 == 0) && (iVar1 = (*DAT_1022305c)(), iVar1 == 0)) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(iVar1 + 0x7c);
  }
  if ((param_7 & 0x4000000) != 0) {
    param_2 = param_2 + param_2;
  }
  if ((piVar3 != (int *)0x0) && (iVar1 = (**(code **)(*piVar3 + 0xd0))(), iVar1 != 0)) {
    FUN_10119320();
    fVar5 = *(float *)(piVar3[1] + 8) - *(float *)(in_ECX[1] + 8);
    fVar7 = *(float *)(piVar3[1] + 0xc) - *(float *)(in_ECX[1] + 0xc);
    dVar6 = (double)(fVar5 * fVar5 + fVar7 * fVar7);
    if (dVar6 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar6 = SQRT(dVar6);
    }
    if ((float)dVar6 == 0.0) {
      fVar8 = 0.0;
      fVar7 = 0.0;
    }
    else {
      fVar8 = 1.0 / (float)dVar6;
      fVar7 = fVar8 * fVar7;
      fVar8 = fVar8 * fVar5;
    }
    if (((*(float *)(DAT_10223188 + 0x2c) * fVar7 + *(float *)(DAT_10223188 + 0x28) * fVar8 < 0.0)
        && (in_ECX[0x85] == 0x19)) && ((param_7 & 0x4000000) != 0)) {
      *(undefined4 *)(param_6 + 0x34) = 9;
    }
  }
  if (*(float *)(in_ECX[1] + 0x170) == 0.0) {
    return;
  }
  in_ECX[0x87] = *(int *)(param_6 + 0x34);
  local_18 = param_2;
  switch(*(undefined4 *)(param_6 + 0x34)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    if (in_ECX[0x85] != 0x19) {
LAB_100285ba:
      in_ECX[0xdf] = (int)((float)in_ECX[0xdf] + param_2);
    }
LAB_100285d5:
    uVar2 = (**(code **)(*in_ECX + 0x70))(0x40000000);
    FUN_1011f900(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 0x18),
                 *(undefined4 *)(param_6 + 0x1c),uVar2);
    local_18 = 0.0;
    break;
  case 8:
    local_18 = 0.0;
    break;
  case 9:
    if (in_ECX[0x85] != 0x19) goto LAB_100285ba;
    if (*(int *)(in_ECX[1] + 0x110) != 1) goto LAB_100285d5;
    (*DAT_102230b0)();
    iVar1 = (*DAT_102230b0)(0);
    if (iVar1 < 2) {
      iVar1 = (*DAT_102230b0)(0,1,0x3f800000);
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,
                   (&PTR_s_boss_sawer_sawer_pain1_wav_10212024)[iVar1]);
    }
    local_18 = DAT_10226884;
    FUN_1011f900(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 0x18),
                 *(undefined4 *)(param_6 + 0x1c),0xc3,DAT_10226884);
  }
  switch(DAT_10222efc) {
  case 1:
    bVar4 = SBORROW4(in_ECX[0xdf],0x32);
    iVar1 = in_ECX[0xdf] + -0x32;
    break;
  case 2:
    bVar4 = SBORROW4(in_ECX[0xdf],0x46);
    iVar1 = in_ECX[0xdf] + -0x46;
    break;
  case 3:
  case 4:
    if ((0x77 < in_ECX[0xdf]) && (in_ECX[0x85] != 0x19)) {
      *(undefined4 *)(in_ECX[1] + 0x110) = 1;
      (**(code **)(*in_ECX + 0x16c))();
      FUN_100c1a70();
      (**(code **)(*in_ECX + 0x1b0))();
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"boss/sawer/eye_open.wav",0x3f800000);
      in_ECX[0xdf] = 0;
    }
  default:
    goto switchD_10028631_default;
  }
  if ((bVar4 == iVar1 < 0) && (in_ECX[0x85] != 0x19)) {
    *(undefined4 *)(in_ECX[1] + 0x110) = 1;
    (**(code **)(*in_ECX + 0x16c))();
    FUN_100c1a70();
    (**(code **)(*in_ECX + 0x1b0))();
    in_ECX[0xdf] = 0;
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"boss/sawer/eye_open.wav",0x3f800000);
  }
switchD_10028631_default:
  if ((param_7 != 2) && (*(int *)(in_ECX[1] + 0x110) != 1)) {
    local_18 = 0.0;
  }
  uVar2 = (**(code **)(*in_ECX + 0x70))(local_18 * 3.0);
  FUN_1011f900(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 0x18),
               *(undefined4 *)(param_6 + 0x1c),uVar2);
  (**(code **)(*in_ECX + 0x74))(local_18,param_3,param_4);
  if ((param_7 == 2) || (*(int *)(param_6 + 0x34) == 9)) {
    FUN_1011b640(param_1);
  }
  return;
}

