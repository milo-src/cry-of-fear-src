// rea decompile_all
// name: CBaseButton::TriggerAndWait
// address: 0x10015960
// body: available
// range: 0x10015960-0x10015a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100159fe to 0x10012d50 CBaseButton::ButtonReturn (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaseButton::TriggerAndWait(void) */

void __thiscall CBaseButton::TriggerAndWait(CBaseButton *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* 0x15960  340  ?TriggerAndWait@CBaseButton@@QAEXXZ */
  uVar1 = FUN_10017790();
  iVar2 = FUN_10119060(*(undefined4 *)(this + 0x17c),uVar1);
  if (iVar2 != 0) {
    uVar4 = 0;
    *(undefined4 *)(this + 0x100) = 0;
    uVar3 = 3;
    *(undefined4 *)(*(int *)(this + 4) + 0x134) = 0x3f800000;
    uVar1 = FUN_10017790(3,0);
    FUN_10102930(uVar1,uVar3,uVar4);
    if ((*(int *)(this + 0x1a8) == 0) && ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) == 0)) {
      *(code **)(this + 0x78) = ButtonReturn;
      if (*(float *)(this + 0x10c) != 0.0) {
        (**(code **)(*(int *)this + 8))(*(float *)(this + 0x10c));
        return;
      }
      ButtonReturn(this);
      return;
    }
    *(uint *)(this + 0x7c) =
         -(uint)((*(uint *)(*(int *)(this + 4) + 0x1a4) & 0x100) != 0) & 0x10012f70;
  }
  return;
}

