// rea decompile_all
// name: CBaby::FakeDeath
// address: 0x10054030
// body: available
// range: 0x10054030-0x10054108 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaby::FakeDeath(void) */

void __thiscall CBaby::FakeDeath(CBaby *this)

{
  float *pfVar1;
  int iVar2;
  
                    /* 0x54030  117  ?FakeDeath@CBaby@@QAEXXZ */
  (**(code **)(*(int *)this + 0x16c))();
  *(uint *)(this + 0x2ec) = *(uint *)(this + 0x2ec) | 0x80;
  FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),1,"common/null.wav",0x3f800000,0x3f4ccccd
               ,0,100);
  *(uint *)(this + 0x180) = *(uint *)(this + 0x180) | 0x100;
  *(undefined4 *)(this + 0x228) = 8;
  iVar2 = *(int *)(*(int *)(this + 4) + 0x19c);
  if (iVar2 == 0) {
    iVar2 = (*DAT_1022305c)(0);
    if (iVar2 != 0) goto LAB_100540a2;
  }
  else {
LAB_100540a2:
    if (*(int **)(iVar2 + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0x7c) + 0x54))(*(undefined4 *)(this + 4));
      goto LAB_100540d0;
    }
  }
  if ((*(byte *)(*(int *)(this + 4) + 0x1a8) & 0x20) != 0) {
    *(undefined4 *)(this + 0x7c) = 0;
    (**(code **)(*(int *)this + 0x144))();
  }
LAB_100540d0:
  pfVar1 = (float *)(*(int *)(this + 4) + 0x164);
  if (*pfVar1 <= -99.0 && *pfVar1 != -99.0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x164) = 0;
  }
  *(undefined4 *)(this + 0x228) = 8;
  (**(code **)(*(int *)this + 8))(0);
  return;
}

