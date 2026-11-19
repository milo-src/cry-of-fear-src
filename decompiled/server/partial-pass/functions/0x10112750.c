// rea decompile_all
// name: CStateWatcher::Think
// address: 0x10112750
// body: available
// range: 0x10112750-0x101127f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: virtual void __thiscall CStateWatcher::Think(void) */

void __thiscall CStateWatcher::Think(CStateWatcher *this)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
                    /* 0x112750  323  ?Think@CStateWatcher@@UAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  uVar4 = *(uint *)(*(int *)(this + 4) + 0x1a4) & 0x200;
  iVar3 = FUN_1010a930(0);
  if (iVar3 == 0) {
    puVar1 = (uint *)(*(int *)(this + 4) + 0x1a4);
    *puVar1 = *puVar1 & 0xfffffdff;
  }
  else {
    puVar1 = (uint *)(*(int *)(this + 4) + 0x1a4);
    *puVar1 = *puVar1 | 0x200;
  }
  uVar2 = *(uint *)(*(int *)(this + 4) + 0x1a4);
  if ((uVar2 & 0x200) != uVar4) {
    if (uVar4 == 0) {
      if ((uVar2 & 2) == 0) {
        if ((uVar2 & 1) != 0) goto LAB_101127c2;
        FUN_10102930(this,1,0);
      }
    }
    else if ((uVar2 & 4) == 0) {
      if ((uVar2 & 1) == 0) {
        FUN_10102930(this,0,0);
        return;
      }
LAB_101127c2:
      FUN_10102930(this,3,0);
      return;
    }
  }
  return;
}

