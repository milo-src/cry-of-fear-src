// rea decompile_all
// name: FUN_100a8680
// address: 0x100a8680
// body: available
// range: 0x100a8680-0x100a89a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a8680(undefined4 param_1)

{
  undefined8 uVar1;
  short sVar2;
  undefined8 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined8 uStack_64;
  float fStack_5c;
  undefined8 uStack_58;
  float fStack_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [16];
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int iStack_10;
  
  iVar5 = 0;
  switch(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x188)) {
  case 1:
    iVar5 = (*DAT_102230b0)(0,4);
    break;
  case 2:
    iVar5 = (*DAT_102230b0)(0,5);
    iVar5 = iVar5 + 0xd;
    break;
  case 3:
    iVar5 = (*DAT_102230b0)(0,5);
    iVar5 = iVar5 + 0x13;
    break;
  case 4:
    iVar5 = (*DAT_102230b0)(0,2);
    iVar5 = iVar5 + 0x19;
    break;
  case 5:
    iVar5 = (*DAT_102230b0)(0,4);
    iVar5 = iVar5 + 0x1c;
    break;
  case 6:
    iVar5 = (*DAT_102230b0)(0,1);
    iVar5 = iVar5 + 0xb;
    break;
  case 7:
    iVar5 = (*DAT_102230b0)(0,1);
    iVar5 = iVar5 + 0x21;
  }
  iVar4 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar4 + 0x188) == 0) {
    uVar6 = *(undefined4 *)(iVar4 + 0x110);
  }
  else {
    uVar6 = (&DAT_1021b944)[iVar5 * 2];
  }
  if (*(int *)(iVar4 + 0x1cc) == 0) {
    uStack_58 = *(undefined8 *)(iVar4 + 8);
    fStack_50 = *(float *)(iVar4 + 0x10);
  }
  else {
    puVar3 = (undefined8 *)FUN_100b8110(&uStack_64);
    iVar4 = *(int *)(in_ECX + 4);
    uStack_58 = *puVar3;
    fStack_50 = *(float *)(puVar3 + 1);
  }
  if (*(int *)(iVar4 + 0x1d4) == 0) {
    FUN_10119320(iVar4 + 0x50);
    uVar1 = *(undefined8 *)(DAT_10223188 + 0x28);
    fStack_5c = *(float *)(DAT_10223188 + 0x30);
  }
  else {
    puVar3 = (undefined8 *)FUN_100b8240(auStack_4c);
    uVar1 = *puVar3;
    fStack_5c = *(float *)(puVar3 + 1);
  }
  iVar5 = *(int *)(*(int *)(in_ECX + 4) + 0x1d8);
  uStack_64 = uVar1;
  if (iVar5 == 0) {
    uStack_64._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
    uStack_64._0_4_ = (float)uVar1;
    dVar9 = (double)(uStack_64._4_4_ * uStack_64._4_4_ + (float)uStack_64 * (float)uStack_64 +
                    fStack_5c * fStack_5c);
    if (dVar9 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    fVar10 = 0.0;
    if ((float)dVar9 == 0.0) {
      fStack_5c = 1.0;
      uStack_64._4_4_ = 0.0;
    }
    else {
      fVar8 = 1.0 / (float)dVar9;
      fVar10 = (float)uStack_64 * fVar8;
      uStack_64._4_4_ = uStack_64._4_4_ * fVar8;
      fStack_5c = fStack_5c * fVar8;
    }
    fVar8 = 4000.0;
  }
  else {
    fVar7 = (float10)FUN_100b81e0(param_1,*(int *)(DAT_10223188 + 0x98) + iVar5);
    fVar8 = (float)fVar7;
    fVar10 = (float)uStack_64;
  }
  uStack_64 = CONCAT44(uStack_58._4_4_ + uStack_64._4_4_ * fVar8,(float)uStack_58 + fVar10 * fVar8);
  fStack_5c = fStack_50 + fStack_5c * fVar8;
  FUN_1011a800(&uStack_58,&uStack_64,1,0,auStack_40);
  if (fStack_30 != 1.0) {
    sVar2 = (*DAT_10223064)(iStack_10);
    (*DAT_10223000)(0,0x17,0,0);
    (*DAT_10223008)(0xd);
    (*DAT_1022301c)(uStack_2c);
    (*DAT_1022301c)(uStack_28);
    (*DAT_1022301c)(uStack_24);
    (*DAT_10223010)(uVar6);
    (*DAT_10223010)((int)sVar2);
    if (sVar2 != 0) {
      if (iStack_10 != 0) {
        iStack_10 = iStack_10 + 0x80;
      }
      (*DAT_10223010)(*(undefined4 *)(iStack_10 + 0xb4));
    }
    (*DAT_10223004)();
  }
  return;
}

