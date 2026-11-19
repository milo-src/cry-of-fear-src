// rea decompile_all
// name: CRifle::RifleEjectBrass
// address: 0x10067b90
// body: available
// range: 0x10067b90-0x10067d7c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CRifle::RifleEjectBrass(void) */

void __thiscall CRifle::RifleEjectBrass(CRifle *this)

{
  int iVar1;
  undefined1 local_34 [12];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0x67b90  252  ?RifleEjectBrass@CRifle@@QAEXXZ */
  FUN_10119320(*(int *)(*(int *)(this + 0x160) + 4) + 0x74);
  (**(code **)(**(int **)(this + 0x160) + 0x228))(local_34);
  if (((DAT_10222ee4 == (int *)0x0) || (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 != 0))
     && (*(int *)(*(int *)(this + 0x160) + 0x2814) == 1)) {
    return;
  }
  iVar1 = *(int *)(this + 4);
  local_1c = *(float *)(DAT_10223188 + 0x34) * 200.0 + *(float *)(DAT_10223188 + 0x40) * 60.0 +
             *(float *)(DAT_10223188 + 0x28) * 40.0;
  local_18 = *(float *)(DAT_10223188 + 0x38) * 200.0 + *(float *)(DAT_10223188 + 0x44) * 60.0 +
             *(float *)(DAT_10223188 + 0x2c) * 40.0;
  local_14 = *(float *)(DAT_10223188 + 0x48) * 60.0 + *(float *)(DAT_10223188 + 0x3c) * 200.0 +
             *(float *)(DAT_10223188 + 0x30) * 40.0;
  local_c = *(float *)(DAT_10223188 + 0x44);
  local_10 = *(float *)(DAT_10223188 + 0x48);
  local_8 = *(float *)(DAT_10223188 + 0x30);
  local_28 = *(float *)(iVar1 + 0x178) + *(float *)(iVar1 + 8) +
             *(float *)(DAT_10223188 + 0x28) * 60.0 + *(float *)(DAT_10223188 + 0x40) * 20.0;
  local_24 = *(float *)(iVar1 + 0x17c) + *(float *)(iVar1 + 0xc) +
             *(float *)(DAT_10223188 + 0x2c) * 60.0 + local_c * 20.0;
  local_20 = *(float *)(iVar1 + 0x10) + *(float *)(iVar1 + 0x180) + local_8 * 60.0 + local_10 * 20.0
  ;
  FUN_1011cf70(&local_28,&local_1c,*(undefined4 *)(iVar1 + 0x54),*(undefined4 *)(this + 0x20c),1);
  return;
}

