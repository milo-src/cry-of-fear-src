// rea decompile_all
// name: CFuncRotating::SpinDown
// address: 0x10011a90
// body: available
// range: 0x10011a90-0x10011bb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011ba2 to 0x10010f80 CFuncRotating::Rotate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncRotating::SpinDown(void) */

void __thiscall CFuncRotating::SpinDown(CFuncRotating *this)

{
  int iVar1;
  float fVar2;
  
                    /* 0x11a90  284  ?SpinDown@CFuncRotating@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar1 = *(int *)(this + 4);
  fVar2 = *(float *)(this + 0xf0) - *(float *)(iVar1 + 0x1fc) * *(float *)(this + 0xdc);
  *(float *)(this + 0xf0) = fVar2;
  FUN_100c4b90(this,*(float *)(iVar1 + 0x44) * fVar2,*(float *)(iVar1 + 0x48) * fVar2,
               *(float *)(iVar1 + 0x4c) * fVar2);
  if (*(float *)(this + 0xf0) <= 0.0) {
    *(undefined4 *)(this + 0xf4) = 0;
    *(undefined4 *)(this + 0xf0) = 0;
    FUN_100c4b90(this,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),6,
                 *(int *)(*(int *)(this + 4) + 0x1f8) + *(int *)(DAT_10223188 + 0x98),0,0,0x20,
                 (int)*(float *)(this + 0xe8));
    *(code **)(this + 0x78) = Rotate;
    Rotate(this);
    return;
  }
  FUN_10010df0(0);
  return;
}

