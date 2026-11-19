// rea decompile_all
// name: CFuncRotating::HurtTouch
// address: 0x100102e0
// body: available
// range: 0x100102e0-0x10010424 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncRotating::HurtTouch(class CBaseEntity *) */

void __thiscall CFuncRotating::HurtTouch(CFuncRotating *this,CBaseEntity *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_30;
  
                    /* 0x102e0  143  ?HurtTouch@CFuncRotating@@QAEXPAVCBaseEntity@@@Z */
  iVar1 = *(int *)(param_1 + 4);
  if (*(float *)(iVar1 + 0x170) != 0.0) {
    *(float *)(*(int *)(this + 4) + 0x1e4) = *(float *)(this + 0xf0) / 10.0;
    iVar2 = *(int *)(this + 4);
    (**(code **)(*(int *)param_1 + 100))(iVar2,iVar2,*(undefined4 *)(iVar2 + 0x1e4),1);
    iVar2 = *(int *)(this + 4);
    pfVar3 = (float *)FUN_10012420(&stack0xffffffc4,iVar2);
    fVar4 = *(float *)(iVar1 + 0xc) - pfVar3[1];
    fVar8 = *(float *)(iVar1 + 8) - *pfVar3;
    fVar9 = *(float *)(iVar1 + 0x10) - pfVar3[2];
    dVar5 = (double)(fVar4 * fVar4 + fVar8 * fVar8 + fVar9 * fVar9);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    fVar6 = 1.0;
    fVar7 = fStack_30;
    if ((float)dVar5 != fStack_30) {
      fVar7 = 1.0 / (float)dVar5;
      fStack_30 = fVar7 * fVar8;
      fVar6 = fVar7 * fVar9;
      fVar7 = fVar7 * fVar4;
    }
    fVar4 = *(float *)(iVar2 + 0x1e4);
    *(ulonglong *)(iVar1 + 0x20) = CONCAT44(fVar7 * fVar4,fStack_30 * fVar4);
    *(float *)(iVar1 + 0x28) = fVar6 * fVar4;
  }
  return;
}

