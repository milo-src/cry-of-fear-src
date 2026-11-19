// rea decompile_all
// name: FUN_100a92d0
// address: 0x100a92d0
// body: available
// range: 0x100a92d0-0x100a96da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a92d0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_40 [16];
  float fStack_30;
  undefined1 auStack_2c [40];
  
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = in_ECX[1];
  if (0.0 < *(float *)(iVar2 + 0x168)) {
    do {
      if (*(float *)(iVar2 + 0x168) * 3.0 <= (float)iVar4) break;
      fVar5 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
      fVar8 = (float)fVar5;
      fVar5 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
      fVar9 = (float)fVar5;
      fVar5 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
      fVar10 = (float)fVar5;
      dVar7 = (double)(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      if ((float)dVar7 == 0.0) {
        fVar10 = 1.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
      }
      else {
        fVar6 = 1.0 / (float)dVar7;
        fVar8 = fVar8 * fVar6;
        fVar9 = fVar9 * fVar6;
        fVar10 = fVar10 * fVar6;
      }
      iVar2 = in_ECX[1];
      fVar6 = *(float *)(iVar2 + 0x164);
      fStack_48 = fVar9 * fVar6 + *(float *)(iVar2 + 0xc);
      fStack_44 = fVar10 * fVar6 + *(float *)(iVar2 + 0x10);
      fStack_4c = fVar8 * fVar6 + *(float *)(iVar2 + 8);
      FUN_1011a800((float *)(iVar2 + 8),&fStack_4c,1,0,auStack_40);
      if (fStack_30 != 1.0) {
        iVar3 = iVar3 + 1;
        piVar1 = (int *)FUN_100926a0("sprites/lgtning.spr",200);
        FUN_10098bf0(in_ECX[1] + 8,auStack_2c);
        *(undefined4 *)(piVar1[1] + 0x154) = 0x43450000;
        *(undefined4 *)(piVar1[1] + 0x158) = 0x43730000;
        *(undefined4 *)(piVar1[1] + 0x15c) = 0x43290000;
        *(undefined4 *)(piVar1[1] + 0x114) = 0x41;
        *(undefined4 *)(piVar1[1] + 0x150) = 0x43160000;
        *(undefined4 *)(piVar1[1] + 0x148) = 0x41900000;
        *(undefined4 *)(piVar1[1] + 0x138) = 0x420c0000;
        piVar1[0x1e] = (int)CBaseEntity::SUB_Remove;
        (**(code **)(*piVar1 + 8))(0x3f800000);
      }
      iVar2 = in_ECX[1];
      iVar4 = iVar4 + 1;
    } while ((float)iVar3 < *(float *)(iVar2 + 0x168));
  }
  FUN_100fc9f0(*(undefined4 *)(iVar2 + 0x20c),4,"debris/beamstart2.wav",0x3f800000,0x3f4ccccd,0,100)
  ;
  piVar1 = (int *)FUN_1009f400("sprites/Fexplo1.spr",in_ECX[1] + 8,1);
  piVar1[0x1e] = (int)CSprite::AnimateUntilDead;
  *(undefined4 *)(piVar1[1] + 0x13c) = 0x41200000;
  *(float *)(piVar1[1] + 0x1e8) = (float)piVar1[0x38] / 10.0 + *DAT_10223188;
  (**(code **)(*piVar1 + 8))(0);
  *(undefined4 *)(piVar1[1] + 0x14c) = 3;
  *(undefined4 *)(piVar1[1] + 0x154) = 0x429a0000;
  *(undefined4 *)(piVar1[1] + 0x158) = 0x43520000;
  *(undefined4 *)(piVar1[1] + 0x15c) = 0x43020000;
  *(undefined4 *)(piVar1[1] + 0x150) = 0x437f0000;
  *(undefined4 *)(piVar1[1] + 0x160) = 0xe;
  piVar1 = (int *)FUN_1009f400("sprites/XFlare1.spr",in_ECX[1] + 8,1);
  piVar1[0x1e] = (int)CSprite::AnimateUntilDead;
  *(undefined4 *)(piVar1[1] + 0x13c) = 0x41200000;
  *(float *)(piVar1[1] + 0x1e8) = (float)piVar1[0x38] / 10.0 + *DAT_10223188;
  (**(code **)(*piVar1 + 8))(0);
  *(undefined4 *)(piVar1[1] + 0x14c) = 3;
  *(undefined4 *)(piVar1[1] + 0x154) = 0x43380000;
  *(undefined4 *)(piVar1[1] + 0x158) = 0x437a0000;
  *(undefined4 *)(piVar1[1] + 0x15c) = 0x43560000;
  *(undefined4 *)(piVar1[1] + 0x150) = 0x437f0000;
  *(undefined4 *)(piVar1[1] + 0x160) = 0xe;
  (**(code **)(*in_ECX + 8))(0x3f000000);
  return;
}

