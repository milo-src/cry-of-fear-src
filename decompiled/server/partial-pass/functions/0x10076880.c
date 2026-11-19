// rea decompile_all
// name: CCoFStrangle::StrangleThink
// address: 0x10076880
// body: available
// range: 0x10076880-0x10076d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CCoFStrangle::StrangleThink(void) */

void __thiscall CCoFStrangle::StrangleThink(CCoFStrangle *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  
                    /* 0x76880  299  ?StrangleThink@CCoFStrangle@@AAEXXZ */
  iVar3 = *(int *)(this + 4);
  if (*DAT_10223188 < *(float *)(iVar3 + 0x1b8) || *DAT_10223188 == *(float *)(iVar3 + 0x1b8))
  goto LAB_10076cef;
  iVar2 = *(int *)(this + 0xdc);
  if (((iVar2 != 0) && (*(int *)(iVar2 + 0x5ac) != 0)) && (*(int *)(iVar3 + 0x248) == 1)) {
    FUN_100c20c0("strangle_start2");
    uVar1 = (*DAT_10223070)(*(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(this + 0xdc) + 0x5ac) + 4) + 0x20c),
                            "strangle_start2");
    fVar5 = (float10)FUN_1000f3e0(uVar1);
    *(float *)(*(int *)(this + 4) + 0x1b8) = (float)(fVar5 + (float10)*DAT_10223188);
    *(undefined4 *)(*(int *)(this + 4) + 0x248) = 2;
    (**(code **)(*(int *)this + 8))(0);
    return;
  }
  if ((iVar2 != 0) && (*(int *)(iVar3 + 0x248) == 2)) {
    *(undefined4 *)(iVar2 + 0x60c) = 0;
    (*DAT_10223000)(1,DAT_1022661c,0,*(undefined4 *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x20c));
    (*DAT_10223008)(*(undefined4 *)(*(int *)(this + 0xdc) + 0x60c));
    (*DAT_10223004)();
    *(undefined4 *)(*(int *)(this + 0xdc) + 0x21d4) = 100;
    *(undefined4 *)(*(int *)(this + 4) + 0x248) = 3;
    iVar3 = *(int *)(this + 4);
  }
  if (((*(int *)(iVar3 + 0x248) != 3) || (iVar2 = *(int *)(this + 0xdc), iVar2 == 0)) ||
     (*(int *)(iVar2 + 0x5ac) == 0)) goto LAB_10076cef;
  if (*(float *)(iVar3 + 0x1b8) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar3 + 0x1b8)) {
    FUN_100c20c0("strangle_idle");
    iVar2 = *(int *)(this + 0xdc);
  }
  if ((*(uint *)(*(int *)(*(int *)(iVar2 + 0x5ac) + 4) + 0x184) & 0x801) == 0) goto LAB_10076cef;
  iVar3 = (*DAT_102230b0)(0,2);
  if (iVar3 == 0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x20c),0,
                 "cutscene/strangle_strangle1.wav",0x3f800000,0,0,100);
    FUN_100c20c0("strangle_strangle1");
    uVar1 = (*DAT_10223070)(*(undefined4 *)
                             (*(int *)(*(int *)(*(int *)(this + 0xdc) + 0x5ac) + 4) + 0x20c),
                            "strangle_strangle1");
    fVar5 = (float10)FUN_1000f3e0(uVar1);
    fVar6 = (float)(fVar5 + (float10)*DAT_10223188);
LAB_10076bc0:
    *(float *)(*(int *)(this + 4) + 0x1b8) = fVar6;
  }
  else {
    if (iVar3 == 1) {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x20c),0,
                   "cutscene/strangle_strangle2.wav",0x3f800000,0,0,100);
      FUN_100c20c0("strangle_strangle2");
      uVar1 = (*DAT_10223070)(*(undefined4 *)
                               (*(int *)(*(int *)(*(int *)(this + 0xdc) + 0x5ac) + 4) + 0x20c),
                              "strangle_strangle2");
      fVar5 = (float10)FUN_1000f3e0(uVar1);
      fVar6 = (float)(fVar5 + (float10)*DAT_10223188);
      goto LAB_10076bc0;
    }
    if (iVar3 == 2) {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x20c),0,
                   "cutscene/strangle_strangle3.wav",0x3f800000,0,0,100);
      FUN_100c20c0("strangle_strangle3");
      uVar1 = (*DAT_10223070)(*(undefined4 *)
                               (*(int *)(*(int *)(*(int *)(this + 0xdc) + 0x5ac) + 4) + 0x20c),
                              "strangle_strangle3");
      fVar5 = (float10)FUN_1000f3e0(uVar1);
      fVar6 = (float)(fVar5 + (float10)*DAT_10223188);
      goto LAB_10076bc0;
    }
  }
  iVar3 = FUN_10017780();
  if (iVar3 != 0) {
    piVar4 = (int *)FUN_100177a0();
    (**(code **)(*piVar4 + 100))
              (*(undefined4 *)(*(int *)(this + 0xdc) + 4),*(undefined4 *)(*(int *)(this + 0xdc) + 4)
               ,0x41c80000,0);
    *(float *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x164) =
         *(float *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x164) - 25.0;
    if ((*(float *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x164) <= 1.0) &&
       (*(int *)(*(int *)(this + 4) + 0x1cc) != 0)) {
      FUN_100c20c0("strangle_death");
      *(undefined4 *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x164) = 0x3f800000;
      FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(this + 0xdc) + 4) + 0x20c),0,
                   "cutscene/strangle_strangle4.wav",0x3f800000,0,0,100);
      FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(*(int *)(this + 4) + 0x1cc),
                   *(undefined4 *)(this + 0xdc),*(undefined4 *)(this + 0xdc),3,0);
      *(undefined4 *)(this + 0x78) = 0;
      FUN_10119900(this);
      return;
    }
  }
LAB_10076cef:
  (**(code **)(*(int *)this + 8))(0);
  return;
}

