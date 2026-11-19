// rea decompile_all
// name: CMultiSource::Register
// address: 0x100145b0
// body: available
// range: 0x100145b0-0x100146ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CMultiSource::Register(void) */

void __thiscall CMultiSource::Register(CMultiSource *this)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x145b0  239  ?Register@CMultiSource@@QAEXXZ */
  *(undefined4 *)(this + 0x25c) = 0;
  _memset(this + 0xdc,0,0x100);
  *(code **)(this + 0x78) = CBaseEntity::SUB_DoNothing;
  iVar1 = FUN_101184e0(0,*(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
  while ((iVar1 != 0 && (*(int *)(this + 0x25c) < 0x20))) {
    *(int *)(this + 0x25c) = *(int *)(this + 0x25c) + 1;
    FUN_10017740(iVar1);
    iVar1 = FUN_101184e0(iVar1,*(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98))
    ;
  }
  for (piVar2 = (int *)FUN_10118460(0,"multi_manager"); piVar2 != (int *)0x0;
      piVar2 = (int *)FUN_10118460(piVar2,"multi_manager")) {
    if (0x1f < *(int *)(this + 0x25c)) goto LAB_100146bb;
    iVar1 = (**(code **)(*piVar2 + 200))(*(undefined4 *)(*(int *)(this + 4) + 0x1d0));
    if (iVar1 != 0) {
      *(int *)(this + 0x25c) = *(int *)(this + 0x25c) + 1;
      FUN_10017740(piVar2);
    }
  }
  if (0x1f < *(int *)(this + 0x25c)) {
LAB_100146bb:
    (*DAT_1022303c)(1,
                    "WARNING: There are too many entities targetting multisource \"%s\". (limit is %d)\n"
                    ,*(int *)(*(int *)(this + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98),0x20);
  }
  *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) & 0xfffffffd;
  return;
}

