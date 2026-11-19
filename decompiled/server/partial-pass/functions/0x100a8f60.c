// rea decompile_all
// name: FUN_100a8f60
// address: 0x100a8f60
// body: available
// range: 0x100a8f60-0x100a9098 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a8f60(void)

{
  int iVar1;
  undefined8 *puVar2;
  int *in_ECX;
  undefined1 local_1c [12];
  undefined8 local_10;
  undefined4 local_8;
  
  iVar1 = in_ECX[1];
  if (*(int *)(iVar1 + 0x1d8) == 0) {
    local_10 = *(undefined8 *)(iVar1 + 8);
    local_8 = *(undefined4 *)(iVar1 + 0x10);
  }
  else {
    puVar2 = (undefined8 *)FUN_100b8110(local_1c);
    local_10 = *puVar2;
    local_8 = *(undefined4 *)(puVar2 + 1);
  }
  (*DAT_10223000)(0,0x17,0,0);
  (*DAT_10223008)(*(undefined4 *)(in_ECX[1] + 0x188));
  (*DAT_1022301c)((undefined4)local_10);
  (*DAT_1022301c)(local_10._4_4_);
  (*DAT_1022301c)(local_8);
  iVar1 = *(int *)(in_ECX[1] + 0x188);
  if (iVar1 == 0x7a) {
    (*DAT_10223010)((int)*(float *)(in_ECX[1] + 0x1bc));
    (*DAT_10223008)((int)*(float *)(in_ECX[1] + 0x168));
    (*DAT_10223008)((int)(*(float *)(in_ECX[1] + 0x164) * 10.0));
  }
  else if (iVar1 == 0xc) {
    (*DAT_10223008)(0);
    (*DAT_10223008)(1);
  }
  (*DAT_10223004)();
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) == 0) {
    in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*in_ECX + 8))(0);
  }
  return;
}

