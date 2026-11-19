// rea decompile_all
// name: CFuncTrain::Wait
// address: 0x100d9aa0
// body: available
// range: 0x100d9aa0-0x100d9d49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100d9c3c to 0x100d5d20 CFuncTrain::Next (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100d9d45 to 0x10017ad0 FUN_10017ad0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncTrain::Wait(void) */

void __thiscall CFuncTrain::Wait(CFuncTrain *this)

{
  int iVar1;
  
                    /* 0xd9aa0  359  ?Wait@CFuncTrain@@QAEXXZ */
  if (*(int *)(this + 0x188) != 0) {
    FUN_100d3130();
  }
  iVar1 = *(int *)(this + 0x18c);
  if (*(int *)(iVar1 + 0x1d8) != 0) {
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x1d8),this,this,3,0);
    iVar1 = *(int *)(this + 0x18c);
    if ((*(byte *)(iVar1 + 0x1a4) & 4) != 0) {
      *(undefined4 *)(iVar1 + 0x1d8) = 0;
      iVar1 = *(int *)(this + 0x18c);
    }
  }
  if (((*(byte *)(iVar1 + 0x1a4) & 1) == 0) && ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) == 0)) {
    if (*(float *)(this + 0x10c) != 0.0) {
      *(undefined4 *)(this + 0x194) = 0;
      FUN_100c4b90(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
      FUN_100c4ed0(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
      (**(code **)(*(int *)this + 8))(*(undefined4 *)(this + 0x10c));
      iVar1 = *(int *)(this + 4);
      if (*(int *)(iVar1 + 0x1ec) != 0) {
        FUN_1001e990(*(undefined4 *)(iVar1 + 0x20c),6,
                     *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x1ec));
        iVar1 = *(int *)(this + 4);
      }
      if (*(int *)(iVar1 + 0x1f0) != 0) {
        FUN_100fc9f0(*(undefined4 *)(iVar1 + 0x20c),2,
                     *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x1f0),
                     *(undefined4 *)(this + 0x184),0x3f4ccccd,0,100);
      }
      *(code **)(this + 0x78) = Next;
      return;
    }
    Next(this);
    return;
  }
  *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) | 1;
  iVar1 = *(int *)(this + 4);
  *(undefined4 *)(this + 0x194) = 0;
  if (*(int *)(iVar1 + 0x1ec) != 0) {
    FUN_100fc9f0(*(undefined4 *)(iVar1 + 0x20c),6,
                 *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x1ec),0,0,0x20,100);
    iVar1 = *(int *)(this + 4);
  }
  if (*(int *)(iVar1 + 0x1f0) != 0) {
    FUN_100fc9f0(*(undefined4 *)(iVar1 + 0x20c),2,
                 *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0x1f0),
                 *(undefined4 *)(this + 0x184),0x3f4ccccd,0,100);
  }
  FUN_100c4ed0(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
  FUN_100c4b90(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
  FUN_10017ad0();
  return;
}

