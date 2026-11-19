// rea decompile_all
// name: CCoFSurvivalMode::SurvivalThink
// address: 0x100a03d0
// body: available
// range: 0x100a03d0-0x100a0694 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CCoFSurvivalMode::SurvivalThink(void) */

void __thiscall CCoFSurvivalMode::SurvivalThink(CCoFSurvivalMode *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
                    /* 0xa03d0  314  ?SurvivalThink@CCoFSurvivalMode@@QAEXXZ */
  if (this[0xdc] == (CCoFSurvivalMode)0x1) {
    if ((this[0xdd] == (CCoFSurvivalMode)0x1) &&
       (*(float *)(*(int *)(this + 4) + 600) <= *DAT_10223188 &&
        *DAT_10223188 != *(float *)(*(int *)(this + 4) + 600))) {
      iVar2 = *(int *)(this + 0xf8);
      if (*(int *)(this + 0xf4) == 0x3c) {
        iVar2 = iVar2 + 1;
        *(undefined4 *)(this + 0xf4) = 0;
        *(int *)(this + 0xf8) = iVar2;
      }
      if (iVar2 == 0x3c) {
        *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + 1;
        *(undefined4 *)(this + 0xf8) = 0;
      }
      (*DAT_10223000)(2,DAT_102266a4,0,0);
      (*DAT_10223008)(2);
      (*DAT_10223008)(*(undefined4 *)(this + 0xf4));
      (*DAT_10223008)(*(undefined4 *)(this + 0xf8));
      (*DAT_10223008)(*(undefined4 *)(this + 0xfc));
      (*DAT_10223010)(*(undefined4 *)(this + 0xe8));
      (*DAT_10223004)();
      *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 3.0;
      if (this[0xdc] != (CCoFSurvivalMode)0x1) goto LAB_100a0684;
    }
    if (((this[0xdd] == (CCoFSurvivalMode)0x1) && (DAT_10222f20 == 0)) &&
       (fVar1 = *DAT_10223188, *(float *)(this + 0xf0) <= fVar1 && fVar1 != *(float *)(this + 0xf0))
       ) {
      *(float *)(this + 0xf0) = fVar1 + 1.0;
      if (*(int *)(this + 0xec) < *(int *)(this + 0xe8)) {
        if (DAT_10222f20 == 0) {
          *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + 1;
          *(int *)(this + 0xec) = *(int *)(this + 0xec) + 1;
          iVar2 = *(int *)(this + 0xf8);
          if (*(int *)(this + 0xf4) == 0x3c) {
            iVar2 = iVar2 + 1;
            *(undefined4 *)(this + 0xf4) = 0;
            *(int *)(this + 0xf8) = iVar2;
          }
          if (iVar2 == 0x3c) {
            *(int *)(this + 0xfc) = *(int *)(this + 0xfc) + 1;
            *(undefined4 *)(this + 0xf8) = 0;
          }
        }
      }
      else {
        iVar2 = FUN_10118460(0,"player");
        if (((iVar2 != 0) && (*(int *)(this + 0xe0) != 0)) &&
           (*(int *)(*(int *)(this + 4) + 0x250) == 0)) {
          this[0xdd] = (CCoFSurvivalMode)0x0;
          iVar2 = FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(this + 0xe0));
          if (iVar2 != 0) {
            iVar2 = 1;
            *(undefined4 *)(*(int *)(this + 4) + 0x250) = 1;
            if (0 < (int)DAT_10223188[0x24]) {
              do {
                iVar3 = FUN_10119680(iVar2);
                if (iVar3 != 0) {
                  (*DAT_10223000)(1,DAT_102266a4,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
                  (*DAT_10223008)(0);
                  (*DAT_10223008)(0);
                  (*DAT_10223008)(0);
                  (*DAT_10223008)(0);
                  (*DAT_10223010)(0);
                  (*DAT_10223004)();
                  FUN_100ea600(0x3f800000);
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 <= (int)DAT_10223188[0x24]);
            }
            FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(this + 0xe0),this,this,3,0);
            (**(code **)(*(int *)this + 8))(0);
            return;
          }
        }
      }
    }
  }
LAB_100a0684:
  (**(code **)(*(int *)this + 8))(0);
  return;
}

