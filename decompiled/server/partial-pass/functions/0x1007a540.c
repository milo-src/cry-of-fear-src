// rea decompile_all
// name: CSyringe::BladeRetract
// address: 0x1007a540
// body: available
// range: 0x1007a540-0x1007a664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a5bf to 0x1007aab0 CSyringe::Inject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CSyringe::BladeRetract(void) */

void __thiscall CSyringe::BladeRetract(CSyringe *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* 0x7a540  19  ?BladeRetract@CSyringe@@QAEXXZ */
  if (DAT_10222ee4 != (int *)0x0) {
    iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))();
    if (iVar2 != 0) {
      *(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x260) = 0;
      FUN_100f9140(0,0);
      if (*(int **)(this + 0x1f8) != (int *)0x0) {
        iVar2 = (**(code **)(**(int **)(this + 0x1f8) + 0xbc))();
        if (iVar2 == 0) {
          FUN_100f9140(0,0);
          FUN_100f1860();
          *(int *)(*(int *)(this + 0x160) + 0x644) = *(int *)(*(int *)(this + 0x160) + 0x644) + 1;
          iVar2 = *(int *)(this + 0x160);
          if (*(char *)(iVar2 + 0x21ea) == '\0') {
            piVar1 = (int *)(iVar2 + 0x2540 + *(int *)(this + 0x1dc) * 4);
            *piVar1 = *piVar1 + -1;
            iVar2 = *(int *)(this + 0x160);
          }
          iVar3 = *(int *)(this + 0x1dc);
          if (*(int *)(iVar2 + 0x2540 + iVar3 * 4) < 0) {
            *(undefined4 *)(iVar2 + 0x2540 + iVar3 * 4) = 0;
            iVar3 = *(int *)(this + 0x1dc);
            iVar2 = *(int *)(this + 0x160);
          }
          if (0 < *(int *)(iVar2 + 0x2540 + iVar3 * 4)) {
            *(code **)(this + 0x78) = Redeploy;
            (**(code **)(*(int *)this + 8))();
            this[0x1fc] = (CSyringe)0x1;
            return;
          }
          *(code **)(this + 0x78) = DestroyItem;
          (**(code **)(*(int *)this + 8))(0x3fc00000);
          this[0x1fc] = (CSyringe)0x1;
          return;
        }
        *(undefined4 *)(*(int *)(*(int *)(this + 0x1f8) + 4) + 0x260) = 0;
        FUN_100f9140(0,0);
      }
    }
  }
  Inject(this);
  return;
}

