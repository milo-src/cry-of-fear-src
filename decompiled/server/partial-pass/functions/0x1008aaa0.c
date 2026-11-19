// rea decompile_all
// name: CBaseEntity::SUB_FadeInAndOut
// address: 0x1008aaa0
// body: available
// range: 0x1008aaa0-0x1008aba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaseEntity::SUB_FadeInAndOut(void) */

void __thiscall CBaseEntity::SUB_FadeInAndOut(CBaseEntity *this)

{
  float fVar1;
  int iVar2;
  
                    /* 0x8aaa0  259  ?SUB_FadeInAndOut@CBaseEntity@@QAEXXZ */
  iVar2 = *(int *)(this + 4);
  if ((*(float *)(iVar2 + 0x150) < 32.0) && (this[0x88] == (CBaseEntity)0x0)) {
    *(float *)(iVar2 + 0x150) = *(float *)(iVar2 + 0x150) + 3.0;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    iVar2 = *(int *)(this + 4);
  }
  fVar1 = *(float *)(iVar2 + 0x150);
  if ((32.0 <= fVar1) && (this[0x88] == (CBaseEntity)0x0)) {
    this[0x88] = (CBaseEntity)0x1;
    iVar2 = (*DAT_102230b0)(0,2);
    (**(code **)(*(int *)this + 8))((float)iVar2);
    return;
  }
  if ((0.0 < fVar1) && (this[0x88] == (CBaseEntity)0x1)) {
    *(float *)(iVar2 + 0x150) = fVar1 - 3.0;
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    iVar2 = *(int *)(this + 4);
  }
  if ((*(float *)(iVar2 + 0x150) <= 7.0) && (this[0x88] == (CBaseEntity)0x1)) {
    *(undefined4 *)(iVar2 + 0x150) = 0;
    (**(code **)(*(int *)this + 8))(0x3e4ccccd);
    *(code **)(this + 0x78) = SUB_Remove;
  }
  return;
}

