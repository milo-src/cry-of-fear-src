// rea decompile_all
// name: FUN_100a0db0
// address: 0x100a0db0
// body: available
// range: 0x100a0db0-0x100a1303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a0db0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  undefined1 local_70 [16];
  float local_60;
  undefined8 local_5c;
  float local_54;
  undefined8 local_38;
  float local_30;
  undefined8 local_2c;
  float local_24;
  int local_20;
  float local_1c;
  int local_18;
  int local_14;
  float local_10;
  float local_c;
  float local_8;
  
  FUN_10119320(in_ECX[1] + 0x50);
  iVar4 = in_ECX[0x42];
  local_8 = *(float *)(DAT_10223188 + 0x28);
  local_c = *(float *)(DAT_10223188 + 0x2c);
  local_10 = *(float *)(DAT_10223188 + 0x30);
  if (iVar4 == 0) {
    fVar6 = *(float *)(in_ECX[1] + 0xfc) / local_10;
  }
  else if (iVar4 == 1) {
    fVar6 = *(float *)(in_ECX[1] + 0xf4) / local_8;
  }
  else {
    if (iVar4 != 2) goto LAB_100a0e6a;
    fVar6 = *(float *)(in_ECX[1] + 0xf8) / local_c;
  }
  local_8 = local_8 * fVar6;
  local_10 = local_10 * fVar6;
  local_c = local_c * fVar6;
LAB_100a0e6a:
  if ((((float)in_ECX[0x44] == 0.0) && ((float)in_ECX[0x40] == 0.0)) && ((float)in_ECX[0x41] == 0.0)
     ) {
    local_18 = in_ECX[0x3d] * 3;
  }
  else {
    local_18 = in_ECX[0x3d];
  }
  iVar4 = 0;
  iVar3 = 0;
  local_14 = 0;
  if (0 < local_18) {
    local_20 = local_18 * 3;
    do {
      if (local_20 <= iVar3) break;
      iVar4 = in_ECX[1];
      iVar3 = iVar3 + 1;
      if (in_ECX[0x42] == 1) {
        local_2c = CONCAT44(local_2c._4_4_,*(undefined4 *)(iVar4 + 0xe8));
LAB_100a0ef2:
        iVar1 = (*DAT_102230b0)(0,(int)*(float *)(iVar4 + 0xf8));
        iVar4 = in_ECX[1];
        fVar6 = *(float *)(iVar4 + 0xe0) + (float)iVar1;
        local_2c = CONCAT44(fVar6,(float)local_2c);
        if (in_ECX[0x42] != 0) goto LAB_100a0f79;
        local_24 = *(float *)(iVar4 + 0xf0);
      }
      else {
        iVar1 = (*DAT_102230b0)(0,(int)*(float *)(iVar4 + 0xf4));
        iVar4 = in_ECX[1];
        fVar6 = *(float *)(iVar4 + 0xdc) + (float)iVar1;
        local_2c = CONCAT44(local_2c._4_4_,fVar6);
        if (in_ECX[0x42] != 2) goto LAB_100a0ef2;
        local_2c = CONCAT44(*(undefined4 *)(iVar4 + 0xec),fVar6);
LAB_100a0f79:
        iVar4 = (*DAT_102230b0)(0,(int)*(float *)(iVar4 + 0xfc));
        local_24 = *(float *)(in_ECX[1] + 0xe4) + (float)iVar4;
        fVar6 = local_2c._4_4_;
      }
      local_30 = local_24 - local_10;
      local_38 = CONCAT44(fVar6 - local_c,(float)local_2c - local_8);
      switch(in_ECX[0x43]) {
      case 1:
        FUN_1011a800(&local_2c,&local_38,1,0,local_70);
        local_38 = local_5c;
        local_30 = local_54;
        break;
      case 2:
        FUN_1011a800(&local_2c,&local_38,1,0,local_70);
        local_38 = local_5c;
        local_30 = local_54;
        goto LAB_100a10c0;
      case 3:
        FUN_1011a800(&local_38,&local_2c,1,0,local_70);
        local_2c = local_5c;
        local_24 = local_54;
        break;
      case 4:
        FUN_1011a800(&local_38,&local_2c,1,0,local_70);
        local_2c = local_5c;
        local_24 = local_54;
LAB_100a10c0:
        iVar4 = local_14;
        if (local_60 != 1.0) break;
        goto LAB_100a1263;
      }
      iVar4 = local_14 + 1;
      local_14 = iVar4;
      (*DAT_10223000)(0,0x17,0,0);
      (*DAT_10223008)(0);
      (*DAT_1022301c)((undefined4)local_38);
      (*DAT_1022301c)(local_38._4_4_);
      (*DAT_1022301c)(local_30);
      (*DAT_1022301c)((float)local_2c);
      (*DAT_1022301c)(local_2c._4_4_);
      (*DAT_1022301c)(local_24);
      (*DAT_10223010)(in_ECX[0x38]);
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      if ((float)in_ECX[0x44] == 0.0) {
        if ((float)in_ECX[0x41] == 0.0) {
          fVar6 = (float)in_ECX[0x40] * 30.0;
          goto LAB_100a11d4;
        }
        fVar5 = (float10)(*DAT_102230b4)(in_ECX[0x40],in_ECX[0x41]);
        local_1c = (float)(fVar5 * (float10)30.0);
        (*DAT_10223008)((int)(fVar5 * (float10)30.0));
      }
      else {
        fVar6 = (float)in_ECX[0x44] * 10.0;
LAB_100a11d4:
        (*DAT_10223008)((int)fVar6);
      }
      (*DAT_10223008)(in_ECX[0x3a]);
      (*DAT_10223008)(in_ECX[0x45]);
      (*DAT_10223008)((int)*(float *)(in_ECX[1] + 0x154));
      (*DAT_10223008)((int)*(float *)(in_ECX[1] + 0x158));
      (*DAT_10223008)((int)*(float *)(in_ECX[1] + 0x15c));
      (*DAT_10223008)(in_ECX[0x3e]);
      uVar2 = (*DAT_102230b0)(in_ECX[0x3b],in_ECX[0x3c]);
      (*DAT_10223008)(uVar2);
      (*DAT_10223004)();
LAB_100a1263:
    } while (iVar4 < local_18);
  }
  if ((*(int *)(in_ECX[1] + 0x1cc) != 0) && (iVar4 != 0)) {
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1cc));
  }
  fVar6 = (float)in_ECX[0x40];
  if ((float)in_ECX[0x41] != 0.0) {
    iVar4 = *in_ECX;
    fVar5 = (float10)(*DAT_102230b4)(in_ECX[0x41],fVar6);
    (**(code **)(iVar4 + 8))((float)fVar5);
    return;
  }
  if (fVar6 != 0.0) {
    (**(code **)(*in_ECX + 8))(fVar6);
  }
  return;
}

