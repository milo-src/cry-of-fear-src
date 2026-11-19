// rea decompile_all
// name: CLightning::StrikeThink
// address: 0x1009ff20
// body: available
// range: 0x1009ff20-0x100a035c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CLightning::StrikeThink(void) */

void __thiscall CLightning::StrikeThink(CLightning *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 local_40 [56];
  float local_8;
  
                    /* 0x9ff20  301  ?StrikeThink@CLightning@@QAEXXZ */
  if ((*(float *)(this + 0xe8) != 0.0) && (fVar6 = *(float *)(this + 0xfc), fVar6 != -1.0)) {
    iVar1 = *(int *)this;
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 4) == 0) {
      fVar6 = fVar6 + *(float *)(this + 0xe8);
    }
    else {
      fVar5 = (float10)(*DAT_102230b4)(0,fVar6);
      local_8 = (float)fVar5;
      fVar6 = local_8 + *(float *)(this + 0xe8);
    }
    (**(code **)(iVar1 + 8))(fVar6);
  }
  *(undefined4 *)(this + 0xdc) = 1;
  if (*(int *)(this + 0xe4) == 0) {
    if (*(int *)(this + 0xe0) == 0) {
      FUN_10099a50();
      return;
    }
    iVar1 = FUN_1009a090((int)DAT_10223188[0x26] + *(int *)(this + 0xe0));
    if (iVar1 == 0) {
      (*DAT_1022303c)(1,"env_beam: unknown entity \"%s\"\n",
                      (int)DAT_10223188[0x26] + *(int *)(this + 0xe0));
      return;
    }
    FUN_10099e90(*(int *)(iVar1 + 4) + 8);
    return;
  }
  iVar2 = FUN_1009a090((int)DAT_10223188[0x26] + *(int *)(this + 0xe0));
  iVar1 = FUN_1009a090((int)DAT_10223188[0x26] + *(int *)(this + 0xe4));
  if (iVar2 == 0) {
    return;
  }
  if (iVar1 != 0) {
    iVar3 = FUN_10095190(iVar2);
    if (((iVar3 != 0) || (iVar3 = FUN_10095190(iVar1), iVar3 != 0)) &&
       ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 8) != 0)) {
      return;
    }
    (*DAT_10223000)(0,0x17,0,0);
    iVar4 = FUN_10095190(iVar2);
    iVar3 = iVar2;
    if ((iVar4 == 0) && (iVar4 = FUN_10095190(iVar1), iVar4 == 0)) {
      if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 8) == 0) {
        uVar7 = 8;
      }
      else {
        uVar7 = 0x18;
      }
      (*DAT_10223008)(uVar7);
      uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      (*DAT_10223010)(uVar7);
      uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
      (*DAT_10223010)(uVar7);
    }
    else {
      iVar4 = FUN_10095190(iVar1);
      if (iVar4 == 0) {
        iVar3 = iVar1;
        iVar1 = iVar2;
      }
      iVar2 = FUN_10095190(iVar3);
      if (iVar2 == 0) {
        (*DAT_10223008)(1);
        uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
        (*DAT_10223010)(uVar7);
      }
      else {
        (*DAT_10223008)(0);
        (*DAT_1022301c)(*(undefined4 *)(*(int *)(iVar3 + 4) + 8));
        (*DAT_1022301c)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0xc));
        (*DAT_1022301c)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x10));
      }
      (*DAT_1022301c)(*(undefined4 *)(*(int *)(iVar1 + 4) + 8));
      (*DAT_1022301c)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0xc));
      (*DAT_1022301c)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x10));
    }
    (*DAT_10223010)(*(undefined4 *)(this + 0x100));
    (*DAT_10223008)(*(undefined4 *)(this + 0x108));
    (*DAT_10223008)((int)*(float *)(*(int *)(this + 4) + 0x13c));
    (*DAT_10223008)((int)(*(float *)(this + 0xe8) * 10.0));
    (*DAT_10223008)(*(undefined4 *)(this + 0xec));
    (*DAT_10223008)(*(undefined4 *)(this + 0xf0));
    (*DAT_10223008)((int)*(float *)(*(int *)(this + 4) + 0x154));
    (*DAT_10223008)((int)*(float *)(*(int *)(this + 4) + 0x158));
    (*DAT_10223008)((int)*(float *)(*(int *)(this + 4) + 0x15c));
    (*DAT_10223008)((int)*(float *)(*(int *)(this + 4) + 0x150));
    (*DAT_10223008)(*(undefined4 *)(this + 0xf8));
    (*DAT_10223004)();
    FUN_10094330(*(int *)(iVar3 + 4) + 8,*(int *)(iVar1 + 4) + 8);
    if ((*(float *)(*(int *)(this + 4) + 0x1e4) != 0.0) ||
       (*(int *)(*(int *)(this + 4) + 0x1cc) != 0)) {
      FUN_1011a800(*(int *)(iVar3 + 4) + 8,*(int *)(iVar1 + 4) + 8,0,0,local_40);
      iVar1 = *(int *)(this + 4);
      if (*(float *)(iVar1 + 0x1e4) != 0.0) {
        *(float *)(iVar1 + 0x1e8) = *DAT_10223188 - 1.0;
        FUN_100926e0(local_40);
        iVar1 = *(int *)(this + 4);
      }
      if ((*(int *)(iVar1 + 0x1cc) != 0) && (iVar1 = FUN_10094d70(local_40), iVar1 != 0)) {
        FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(*(int *)(this + 4) + 0x1cc),iVar1,this,3,0);
      }
    }
    return;
  }
  return;
}

