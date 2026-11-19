// rea decompile_all
// name: FUN_10004990
// address: 0x10004990
// body: available
// range: 0x10004990-0x10004bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004990(void)

{
  int iVar1;
  int local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_14 = (*(float *)(DAT_10220c50 + 0x4f528 + *(int *)(DAT_10220c50 + 0xbc) * 0xc) +
             *(float *)(DAT_10220c50 + 0x4f4f8 + *(int *)(DAT_10220c50 + 0xbc) * 0xc)) * 0.5 +
             *(float *)(DAT_10220c50 + 0x38);
  local_10 = (*(float *)(DAT_10220c50 + 0x4f52c + *(int *)(DAT_10220c50 + 0xbc) * 0xc) +
             *(float *)(DAT_10220c50 + 0x4f4fc + *(int *)(DAT_10220c50 + 0xbc) * 0xc)) * 0.5 +
             *(float *)(DAT_10220c50 + 0x3c);
  local_c = *(float *)(DAT_10220c50 + (*(int *)(DAT_10220c50 + 0xbc) + 0x69c0) * 0xc) +
            *(float *)(DAT_10220c50 + 0x40) + 1.0;
  *(undefined4 *)(DAT_10220c50 + 0xe4) = 0;
  *(undefined4 *)(DAT_10220c50 + 0xe8) = 0xffffffff;
  iVar1 = (**(code **)(DAT_10220c50 + 0x4f578))(&local_14,&local_18);
  if (((iVar1 < -2) && (-0xf < iVar1)) || (iVar1 + 0x13U < 3)) {
    *(int *)(DAT_10220c50 + 0xe8) = iVar1;
    *(undefined4 *)(DAT_10220c50 + 0xe4) = 1;
    local_c = (*(float *)(DAT_10220c50 + 0x4f530 + *(int *)(DAT_10220c50 + 0xbc) * 0xc) +
              *(float *)(DAT_10220c50 + 0x4f500 + *(int *)(DAT_10220c50 + 0xbc) * 0xc)) * 0.5 +
              *(float *)(DAT_10220c50 + 0x40);
    iVar1 = (**(code **)(DAT_10220c50 + 0x4f578))(&local_14,0);
    if (((iVar1 < -2) && (-0xf < iVar1)) || (iVar1 + 0x13U < 3)) {
      *(undefined4 *)(DAT_10220c50 + 0xe4) = 2;
      local_c = *(float *)(DAT_10220c50 + 0x88) + *(float *)(DAT_10220c50 + 0x40);
      iVar1 = (**(code **)(DAT_10220c50 + 0x4f578))(&local_14,0);
      if (((iVar1 < -2) && (-0xf < iVar1)) || (iVar1 == -0x13)) {
        *(undefined4 *)(DAT_10220c50 + 0xe4) = 3;
      }
    }
    if (local_18 + 0xeU < 6) {
      FUN_100032d0(DAT_10220c50 + 0x74,(float)*(int *)(DAT_10220c50 + 0xe4) * 50.0,
                   &DAT_10211090 + (local_18 * 3 + 0x1b) * -4,DAT_10220c50 + 0x74);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

