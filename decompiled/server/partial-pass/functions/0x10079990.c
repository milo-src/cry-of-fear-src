// rea decompile_all
// name: FUN_10079990
// address: 0x10079990
// body: available
// range: 0x10079990-0x10079e9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079990(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 uVar6;
  float10 fVar7;
  float fVar8;
  double dVar9;
  
  if ((in_ECX[0x4a] == 2) && (in_ECX[0x7c] == 0)) {
    in_ECX[0x4a] = 0;
  }
  iVar4 = in_ECX[0x58];
  iVar2 = *(int *)(iVar4 + 0x1f08);
  if (iVar2 < 2) {
    iVar3 = 0;
    if (in_ECX[0x7e] != 0) {
      in_ECX[0x7e] = 0;
      iVar3 = 0;
    }
  }
  else if (iVar2 < 6) {
    iVar3 = 1;
    if (in_ECX[0x7e] != 1) {
      in_ECX[0x7e] = 1;
      iVar3 = 1;
    }
  }
  else {
    iVar3 = in_ECX[0x7e];
    if (iVar2 < 9) {
      if (iVar3 != 2) {
        in_ECX[0x7e] = 2;
        iVar3 = 2;
      }
    }
    else if (iVar3 != 3) {
      in_ECX[0x7e] = 3;
      iVar3 = 3;
    }
  }
  if (*(int *)(in_ECX[1] + 0x114) != iVar3) {
    *(int *)(in_ECX[1] + 0x114) = iVar3;
    (**(code **)(*in_ECX + 0x19c))(in_ECX[0x58],*(undefined4 *)(in_ECX[1] + 0x114));
    iVar4 = in_ECX[0x58];
  }
  fVar8 = *(float *)(*(int *)(iVar4 + 4) + 0x24);
  fVar1 = *(float *)(*(int *)(iVar4 + 4) + 0x20);
  dVar9 = (double)(fVar1 * fVar1 + fVar8 * fVar8);
  if (dVar9 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar9 = SQRT(dVar9);
  }
  fVar8 = (float)dVar9;
  if (((in_ECX[0x7c] == 0) && (in_ECX[0x4a] != 2)) &&
     ((float)in_ECX[0x73] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x73])) {
    iVar4 = FUN_100f5da0();
    if (iVar4 == 0) {
      if (in_ECX[0x4a] == 5) {
        if ((char)in_ECX[0x81] == '\0') {
          (**(code **)(*in_ECX + 0x198))(0xc,1,0);
          uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
          uVar6 = 0xc;
        }
        else {
          (**(code **)(*in_ECX + 0x198))(0xf,1,0);
          uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
          uVar6 = 0xf;
        }
        fVar7 = (float10)FUN_1000f390(uVar5,uVar6);
        in_ECX[0x73] = (int)((float)fVar7 + *DAT_10223188);
        fVar1 = *DAT_10223188;
        in_ECX[0x4a] = 0;
        in_ECX[0x76] = (int)((float)fVar7 + fVar1);
      }
    }
    else if (in_ECX[0x4a] == 0) {
      in_ECX[0x4a] = 5;
      if ((char)in_ECX[0x81] == '\0') {
        (**(code **)(*in_ECX + 0x198))(10,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
        uVar6 = 10;
      }
      else {
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
        uVar6 = 0xd;
      }
      fVar7 = (float10)FUN_1000f390(uVar5,uVar6);
      in_ECX[0x73] = (int)((float)fVar7 * 0.5 + *DAT_10223188);
      in_ECX[0x4b] = (int)((float)fVar7 + *DAT_10223188);
    }
    if (((0.0 < fVar8) && ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x40000) != 0)) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] != 1)))) {
      in_ECX[0x4a] = 1;
      if ((char)in_ECX[0x81] == '\0') {
        (**(code **)(*in_ECX + 0x198))(10,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
        uVar6 = 10;
      }
      else {
        (**(code **)(*in_ECX + 0x198))(0xd,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
        uVar6 = 0xd;
      }
      fVar7 = (float10)FUN_1000f390(uVar5,uVar6);
      in_ECX[0x73] = (int)((float)fVar7 * 0.5 + *DAT_10223188);
      in_ECX[0x4b] = (int)((float)fVar7 + *DAT_10223188);
    }
    iVar4 = in_ECX[0x58];
    if ((((*(uint *)(*(int *)(iVar4 + 4) + 0x1a8) & 0x40000) != 0) && (0.0 < fVar8)) &&
       ((in_ECX[0x4a] != 5 &&
        ((in_ECX[0x4a] == 1 &&
         ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])))))) {
      if ((char)in_ECX[0x81] == '\0') {
        (**(code **)(*in_ECX + 0x198))(0xb,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
        uVar6 = 0xb;
      }
      else {
        (**(code **)(*in_ECX + 0x198))(0xe,1,0);
        uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
        uVar6 = 0xe;
      }
      fVar7 = (float10)FUN_1000f390(uVar5,uVar6);
      iVar4 = in_ECX[0x58];
      in_ECX[0x4b] = (int)((float)fVar7 + *DAT_10223188);
    }
    if (((((*(uint *)(*(int *)(iVar4 + 4) + 0x1a8) & 0x40000) == 0) || (fVar8 <= 0.0)) &&
        ((float)in_ECX[0x4b] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x4b])) &&
       ((in_ECX[0x4a] != 5 && (in_ECX[0x4a] == 1)))) {
      if ((char)in_ECX[0x81] == '\0') {
        uVar5 = 0xc;
      }
      else {
        uVar5 = 0xf;
      }
      (**(code **)(*in_ECX + 0x198))(uVar5,1,0);
      uVar5 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
      fVar7 = (float10)FUN_1000f390(uVar5,0xb);
      in_ECX[0x73] = (int)((float)fVar7 + *DAT_10223188);
      fVar8 = *DAT_10223188;
      in_ECX[0x4a] = 0;
      in_ECX[0x76] = (int)((float)fVar7 + fVar8);
    }
  }
  FUN_1011d560();
  return;
}

