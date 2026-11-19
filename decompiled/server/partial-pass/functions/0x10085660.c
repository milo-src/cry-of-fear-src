// rea decompile_all
// name: CVP70::SuicideShot
// address: 0x10085660
// body: available
// range: 0x10085660-0x100856f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CVP70::SuicideShot(void) */

void __thiscall CVP70::SuicideShot(CVP70 *this)

{
  undefined1 auStack_20 [8];
  undefined4 uStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
                    /* 0x85660  313  ?SuicideShot@CVP70@@QAEXXZ */
  if (*(int *)(this + 0x1e4) != 0) {
    uStack_8 = 1;
    *(undefined4 *)(*(int *)(*(int *)(this + 0x160) + 4) + 0x164) = 0;
    iStack_c = (*(int **)(this + 0x160))[1];
    uStack_10 = 0x1008568f;
    (**(code **)(**(int **)(this + 0x160) + 0x6c))();
    uStack_10 = 10;
    piStack_14 = (int *)0x0;
    uStack_18 = 0x10085699;
    (*DAT_102230b0)();
    piStack_14 = *(int **)(this + 0x160);
    uStack_10 = 1;
    (**(code **)(*piStack_14 + 0x104))(auStack_20);
    FUN_10116a40("weapons/vp70/vp70_fire.wav",0,1);
    return;
  }
  uStack_8 = 0x100856cc;
  (**(code **)(*(int *)this + 400))();
  *(float *)(this + 0x1b0) = *DAT_10223188 + 0.25;
                    /* WARNING: Could not recover jumptable at 0x100856f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)this + 0x17c))();
  return;
}

