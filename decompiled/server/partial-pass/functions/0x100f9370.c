// rea decompile_all
// name: FUN_100f9370
// address: 0x100f9370
// body: available
// range: 0x100f9370-0x100f978b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f9370(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  int *in_ECX;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar4 = in_ECX[1];
  if (*(int *)(iVar4 + 0x108) == 8) {
    return;
  }
  if (*(float *)(iVar4 + 0x164) <= 0.0 && *(float *)(iVar4 + 0x164) != 0.0) {
    return;
  }
  if ((*(int *)(iVar4 + 0x1c4) == 3) && (-0x11 < *(int *)(iVar4 + 0x1c8))) {
    uVar1 = in_ECX[0xc3];
    in_ECX[0xc3] = uVar1 & 0xfff7ffff;
    *(undefined1 *)(in_ECX + 0xc5) = 0;
    fVar6 = *DAT_10223188;
    if (fVar6 < *(float *)(iVar4 + 0x200) || fVar6 == *(float *)(iVar4 + 0x200)) {
      in_ECX[0xc3] = uVar1 & 0xfff7bfff;
    }
    else if (*(float *)(iVar4 + 0x204) <= fVar6 && fVar6 != *(float *)(iVar4 + 0x204)) {
      *(float *)(iVar4 + 0x1e4) = *(float *)(iVar4 + 0x1e4) + 1.0;
      iVar4 = in_ECX[1];
      if (5.0 < *(float *)(iVar4 + 0x1e4)) {
        *(undefined4 *)(iVar4 + 0x1e4) = 0x40a00000;
        iVar4 = in_ECX[1];
      }
      iVar2 = *in_ECX;
      uVar3 = FUN_100f9010(0,*(undefined4 *)(iVar4 + 0x1e4),0x4000);
      uVar3 = FUN_100f9010(0,uVar3);
      (**(code **)(iVar2 + 100))(uVar3);
      *(float *)(in_ECX[1] + 0x204) = *DAT_10223188 + 1.0;
      *(undefined1 *)(in_ECX + 0x878) = 1;
      in_ECX[0x930] = (int)((float)in_ECX[0x930] + *(float *)(in_ECX[1] + 0x1e4));
    }
  }
  else {
    *(float *)(iVar4 + 0x200) = *DAT_10223188 + 12.0;
    *(undefined4 *)(in_ECX[1] + 0x1e4) = 0x40000000;
    if (in_ECX[0x931] < in_ECX[0x930]) {
      in_ECX[0xc3] = in_ECX[0xc3] & 0xffffbfffU | 0x80000;
      *(undefined1 *)(in_ECX + 0xc5) = 0;
    }
  }
  iVar4 = in_ECX[1];
  if ((*(int *)(iVar4 + 0x1c4) == 0) || (*(int *)(iVar4 + 0x1c8) < -0x10)) {
    if ((*(uint *)(iVar4 + 0x1a8) & 0x10) == 0) {
      return;
    }
    *(uint *)(iVar4 + 0x1a8) = *(uint *)(iVar4 + 0x1a8) & 0xffffffef;
    return;
  }
  if (((2 < *(int *)(iVar4 + 0x1c4)) && (iVar4 = (**(code **)(*in_ECX + 0xbc))(), iVar4 != 0)) &&
     ((float)in_ECX[0x877] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x877])) {
    iVar4 = in_ECX[1];
    local_28 = *(float *)(iVar4 + 0x68) + *(float *)(iVar4 + 0x74);
    local_24 = *(float *)(iVar4 + 0x6c) + *(float *)(iVar4 + 0x78);
    local_20 = *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x7c);
    FUN_10119320(&local_28);
    local_14 = DAT_10223188[0xd] * 10.0;
    local_18 = DAT_10223188[0xe] * 10.0;
    local_1c = DAT_10223188[0xf] * 10.0;
    local_8 = DAT_10223188[10] * 10.0;
    local_c = DAT_10223188[0xb] * 10.0;
    local_10 = DAT_10223188[0xc] * 10.0;
    pfVar5 = (float *)(**(code **)(*in_ECX + 0x100))(&local_28);
    fVar8 = (*pfVar5 + local_8) - local_14;
    fVar7 = (pfVar5[1] + local_c) - local_18;
    fVar6 = (pfVar5[2] + local_10) - local_1c;
    FUN_10117cb0(fVar8,fVar7,fVar6,fVar8 + 0.0,fVar7 + 0.0,fVar6 + 32.0,5);
    iVar4 = (*DAT_102230b0)(0xfffffffb,5);
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),4,"player/vocal/water_breathe.wav",0x3f800000,
                 0x3f4ccccd,0,iVar4 + 100);
    in_ECX[0x877] = (int)(*DAT_10223188 + 4.0);
  }
  iVar4 = in_ECX[1];
  if (*(int *)(iVar4 + 0x1c8) == -5) {
    if (*DAT_10223188 < *(float *)(iVar4 + 0x1e8) || *DAT_10223188 == *(float *)(iVar4 + 0x1e8))
    goto LAB_100f974a;
    uVar3 = 8;
    iVar4 = *(int *)(iVar4 + 0x1c4) * 10;
  }
  else {
    if (*(int *)(iVar4 + 0x1c8) != -4) goto LAB_100f974a;
    uVar3 = 0x100000;
    *(float *)(iVar4 + 0x1e8) = *DAT_10223188 + 1.0;
    iVar4 = *(int *)(in_ECX[1] + 0x1c4) << 2;
  }
  iVar2 = *in_ECX;
  uVar3 = FUN_100f9010(0,(float)iVar4,uVar3);
  uVar3 = FUN_100f9010(0,uVar3);
  (**(code **)(iVar2 + 100))(uVar3);
LAB_100f974a:
  uVar1 = *(uint *)(in_ECX[1] + 0x1a8);
  if ((uVar1 & 0x10) != 0) {
    return;
  }
  *(uint *)(in_ECX[1] + 0x1a8) = uVar1 | 0x10;
  *(undefined4 *)(in_ECX[1] + 0x1e8) = 0;
  return;
}

