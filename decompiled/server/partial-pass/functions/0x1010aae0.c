// rea decompile_all
// name: CRenderFxFader::FadeThink
// address: 0x1010aae0
// body: available
// range: 0x1010aae0-0x1010ad90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CRenderFxFader::FadeThink(void) */

void __thiscall CRenderFxFader::FadeThink(CRenderFxFader *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
                    /* 0x10aae0  116  ?FadeThink@CRenderFxFader@@QAEXXZ */
  iVar7 = FUN_10017790();
  if (iVar7 == 0) {
    CBaseEntity::SUB_Remove((CBaseEntity *)this);
    return;
  }
  iVar7 = *(int *)(this + 0xe8);
  iVar6 = *(int *)(this + 0xec);
  fVar11 = (*DAT_10223188 - *(float *)(this + 0xdc)) / *(float *)(this + 0xe0);
  if (1.0 <= fVar11) {
    iVar8 = FUN_100177a0();
    *(float *)(*(int *)(iVar8 + 4) + 0x150) = (float)(iVar7 + iVar6);
    fVar11 = *(float *)(this + 0xfc);
    fVar1 = *(float *)(this + 0xf0);
    fVar2 = *(float *)(this + 0x100);
    fVar3 = *(float *)(this + 0xf4);
    fVar4 = *(float *)(this + 0x104);
    fVar5 = *(float *)(this + 0xf8);
    iVar7 = FUN_100177a0();
    iVar7 = *(int *)(iVar7 + 4);
    *(ulonglong *)(iVar7 + 0x154) = CONCAT44(fVar2 + fVar3,fVar11 + fVar1);
    *(float *)(iVar7 + 0x15c) = fVar4 + fVar5;
    fVar11 = *(float *)(this + 0x10c);
    fVar1 = *(float *)(this + 0x108);
    iVar7 = FUN_100177a0();
    uVar13 = 0;
    uVar12 = 3;
    *(float *)(*(int *)(iVar7 + 4) + 0x148) = fVar11 + fVar1;
    uVar9 = FUN_10017790(3,0);
    FUN_10102a80(uVar9,uVar12,uVar13);
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
      iVar7 = FUN_100177a0();
      *(code **)(iVar7 + 0x78) = CBaseEntity::SUB_Remove;
      piVar10 = (int *)FUN_100177a0();
      (**(code **)(*piVar10 + 8))(0x3dcccccd);
    }
    FUN_10017740(0);
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
    return;
  }
  iVar8 = FUN_100177a0();
  *(float *)(*(int *)(iVar8 + 4) + 0x150) = (float)iVar6 * fVar11 + (float)iVar7;
  fVar1 = *(float *)(this + 0xfc);
  fVar2 = *(float *)(this + 0xf0);
  iVar7 = FUN_100177a0();
  *(float *)(*(int *)(iVar7 + 4) + 0x154) = fVar11 * fVar1 + fVar2;
  fVar1 = *(float *)(this + 0x100);
  fVar2 = *(float *)(this + 0xf4);
  iVar7 = FUN_100177a0();
  *(float *)(*(int *)(iVar7 + 4) + 0x158) = fVar1 * fVar11 + fVar2;
  fVar1 = *(float *)(this + 0x104);
  fVar2 = *(float *)(this + 0xf8);
  iVar7 = FUN_100177a0();
  *(float *)(*(int *)(iVar7 + 4) + 0x15c) = fVar1 * fVar11 + fVar2;
  fVar1 = *(float *)(this + 0x10c);
  fVar2 = *(float *)(this + 0x108);
  iVar7 = FUN_100177a0();
  *(float *)(*(int *)(iVar7 + 4) + 0x148) = fVar1 * fVar11 + fVar2;
  (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0xe4));
  return;
}

