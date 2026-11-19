// rea decompile_all
// name: CTestEffect::TestThink
// address: 0x100a0770
// body: available
// range: 0x100a0770-0x100a0a6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CTestEffect::TestThink(void) */

void __thiscall CTestEffect::TestThink(CTestEffect *this)

{
  CTestEffect *pCVar1;
  CTestEffect *pCVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  CTestEffect *pCVar7;
  float10 fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 auStack_40 [20];
  undefined1 auStack_2c [40];
  
                    /* 0xa0770  318  ?TestThink@CTestEffect@@QAEXXZ */
  fVar3 = *DAT_10223188;
  fVar4 = *(float *)(this + 0x1b4);
  iVar6 = *(int *)(this + 0xf0);
  if (iVar6 < 0x18) {
    iVar5 = FUN_100926a0("sprites/lgtning.spr",100);
    iVar6 = *(int *)(this + 4);
    local_4c = *(float *)(iVar6 + 8);
    local_48 = *(float *)(iVar6 + 0xc);
    local_44 = *(float *)(iVar6 + 0x10);
    fVar8 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    fStack_58 = (float)fVar8;
    fVar8 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    fStack_54 = (float)fVar8;
    fVar8 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    fStack_50 = (float)fVar8;
    dVar10 = (double)(fStack_54 * fStack_54 + fStack_58 * fStack_58 + fStack_50 * fStack_50);
    if (dVar10 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar10 = SQRT(dVar10);
    }
    fVar11 = 0.0;
    if ((float)dVar10 == 0.0) {
      fStack_50 = 1.0;
      fStack_54 = 0.0;
    }
    else {
      fVar9 = 1.0 / (float)dVar10;
      fVar11 = fStack_58 * fVar9;
      fStack_54 = fStack_54 * fVar9;
      fStack_50 = fStack_50 * fVar9;
    }
    fStack_58 = fVar11 * 128.0 + local_4c;
    fStack_54 = fStack_54 * 128.0 + local_48;
    fStack_50 = fStack_50 * 128.0 + local_44;
    FUN_1011a800(&local_4c,&fStack_58,1,*(undefined4 *)(*(int *)(this + 4) + 0x20c),auStack_40);
    FUN_10098bf0(&local_4c,auStack_2c);
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x154) = 0x437f0000;
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x158) = 0x43340000;
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x15c) = 0x42c80000;
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x148) = 0x42c80000;
    *(undefined4 *)(*(int *)(iVar5 + 4) + 0x138) = 0x41400000;
    *(float *)(this + *(int *)(this + 0xf0) * 4 + 0x154) = *DAT_10223188;
    *(int *)(this + *(int *)(this + 0xf0) * 4 + 0xf4) = iVar5;
    *(int *)(this + 0xf0) = *(int *)(this + 0xf0) + 1;
    iVar6 = *(int *)(this + 0xf0);
  }
  if (fVar3 - fVar4 < 3.0) {
    iVar5 = 0;
    if (0 < iVar6) {
      pCVar7 = this + 0xf4;
      do {
        iVar5 = iVar5 + 1;
        pCVar1 = pCVar7 + 0x60;
        pCVar2 = pCVar7 + 0x60;
        iVar6 = *(int *)pCVar7;
        pCVar7 = pCVar7 + 4;
        *(float *)(*(int *)(iVar6 + 4) + 0x150) =
             (float)(int)(((*DAT_10223188 - *(float *)pCVar2) /
                          ((*(float *)(this + 0x1b4) + 3.0) - *(float *)pCVar1)) * 255.0);
      } while (iVar5 < *(int *)(this + 0xf0));
    }
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  iVar5 = 0;
  if (0 < iVar6) {
    pCVar7 = this + 0xf4;
    do {
      FUN_10119900(*(undefined4 *)pCVar7);
      iVar5 = iVar5 + 1;
      pCVar7 = pCVar7 + 4;
    } while (iVar5 < *(int *)(this + 0xf0));
  }
  *(float *)(this + 0x1b4) = *DAT_10223188;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  return;
}

