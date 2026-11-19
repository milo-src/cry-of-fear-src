// rea decompile_all
// name: FUN_1009e640
// address: 0x1009e640
// body: available
// range: 0x1009e640-0x1009e853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009e640(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (**(code **)(*in_ECX + 0x30))();
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  FUN_10119fe0();
  if (*(int *)(in_ECX[1] + 0xb8) != 0) {
    iVar1 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0xb8),"skogsris");
    if (iVar1 != 0) {
      *(undefined4 *)(in_ECX[1] + 0x160) = 0x5e;
    }
  }
  iVar1 = in_ECX[1];
  if ((*(byte *)(iVar1 + 0x1a4) & 4) != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 3;
    local_10 = 0x41200000;
    local_c = 0x41200000;
    local_8 = 0x41200000;
    local_1c = 0xc1200000;
    local_18 = 0xc1200000;
    local_14 = 0xc1200000;
    FUN_1011a030(in_ECX[1],&local_1c,&local_10);
    iVar1 = in_ECX[1];
  }
  if ((*(byte *)(iVar1 + 0x1a4) & 2) != 0) {
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) + 1.0;
    (*DAT_10222fb0)(*(undefined4 *)(in_ECX[1] + 0x20c));
    iVar1 = in_ECX[1];
  }
  if ((*(int *)(iVar1 + 0x160) == 0) && (*(int *)(iVar1 + 0xb8) != 0)) {
    iVar1 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar1 + 0xb8),"obbsror");
    if (iVar1 == 0) {
      *(undefined4 *)(in_ECX[1] + 0x160) = 0x5c;
    }
  }
  FUN_1000eb70(0,*(undefined4 *)(in_ECX[1] + 600));
  FUN_1000eb70(1,*(undefined4 *)(in_ECX[1] + 0x25c));
  FUN_1000eb70(2,*(undefined4 *)(in_ECX[1] + 0x260));
  FUN_1000eb70(3,*(undefined4 *)(in_ECX[1] + 0x264));
  FUN_1009bed0();
  (**(code **)(*in_ECX + 8))(0x3dcccccd);
  iVar1 = (*DAT_102230b0)(0,8);
  in_ECX[0x42] = iVar1;
  iVar1 = (*DAT_102230b0)(0,8);
  in_ECX[0x43] = iVar1;
  if (in_ECX[0x41] != 0) {
    FUN_1000eb40(1,in_ECX[0x42]);
    FUN_1000eb40(2,in_ECX[0x43]);
  }
  return;
}

