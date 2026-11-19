// rea decompile_all
// name: CMobile::FixBattery
// address: 0x10052f20
// body: available
// range: 0x10052f20-0x1005305b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CMobile::FixBattery(void) */

void __thiscall CMobile::FixBattery(CMobile *this)

{
  float fVar1;
  undefined4 uVar2;
  
                    /* 0x52f20  126  ?FixBattery@CMobile@@QAEXXZ */
  FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,"weapons/sleeve_generic3.wav",
               0x3f800000,0x3f4ccccd,0,100);
  if (*(int *)(*(int *)(this + 0x160) + 0x1e98) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 7;
  }
  (**(code **)(*(int *)this + 0x198))(uVar2,1,0);
  *(float *)(*(int *)(this + 0x160) + 0x308) = *DAT_10223188 + 0.5;
  this[0x1f9] = (CMobile)0x0;
  *(undefined4 *)(*(int *)(this + 0x160) + 0x1f14) = 0;
  FUN_1000eb40(1,0);
  FUN_1000eb40(2,0);
  *(undefined4 *)(*(int *)(this + 0x160) + 0x5cc) = *(undefined4 *)(*(int *)(this + 4) + 0x114);
  (**(code **)(*(int *)this + 0x19c))
            (*(undefined4 *)(this + 0x160),*(undefined4 *)(*(int *)(this + 4) + 0x114));
  *(undefined1 *)(*(int *)(this + 0x160) + 0x1f1c) = 0;
  *(float *)(*(int *)(this + 0x160) + 0x1f20) = *DAT_10223188;
  this[0x1f8] = (CMobile)0x0;
  fVar1 = *DAT_10223188 + 0.5;
  *(float *)(*(int *)(this + 0x160) + 0x308) = fVar1;
  *(float *)(this + 0x1d4) = fVar1;
  *(float *)(this + 0x1d0) = fVar1;
  *(float *)(this + 0x1cc) = fVar1;
  return;
}

