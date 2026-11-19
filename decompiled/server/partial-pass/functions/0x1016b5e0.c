// rea decompile_all
// name: FUN_1016b5e0
// address: 0x1016b5e0
// body: available
// range: 0x1016b5e0-0x1016bafe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1016b5e0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort in_FPUControlWord;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  undefined8 local_10;
  double local_8;
  
  auVar4._0_8_ = in_XMM0._0_8_;
  local_8 = auVar4._0_8_;
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    local_10 = (double)CONCAT44(0x1016baf3,(undefined4)local_10);
    uVar2 = FUN_101827ff();
    return uVar2;
  }
  auVar4._8_8_ = in_XMM0._8_8_ >> 0x2c;
  uVar2 = in_XMM0._4_4_;
  uVar1 = uVar2 >> 0xc & 0x7ffff;
  if (uVar1 - 0x3fb00 < 0x3bb) {
    return uVar1 - 0x3fb00;
  }
  if (uVar1 - 0x3febb < 0x41) {
    return -(uint)(SUB161(auVar4 >> 0x3f,0) & 1) & 0x8000;
  }
  if (uVar1 - 0x3c300 < 0x3800) {
    return uVar1 - 0x3c300;
  }
  if (uVar1 - 0x3fefc < 4) {
    return in_XMM0._6_2_ & 0x8000;
  }
  if (uVar1 < 0x3ff00) {
    return uVar1;
  }
  if ((uVar2 & 0x7fffffff) != 0x3ff00000 || in_XMM0._0_4_ != 0) {
    if ((int)(((uVar2 & 0x7fffffff) + 0x80100000) - (uint)(in_XMM0._0_4_ == 0)) < 0) {
      local_10 = -NAN;
      uVar3 = 0x3a;
    }
    else {
      local_10 = auVar4._0_8_ + 0.0;
      uVar3 = 0x3f0;
    }
    uVar2 = ___libm_error_support(&local_8,&local_8,&local_10,uVar3);
    return uVar2;
  }
  return 0;
}

