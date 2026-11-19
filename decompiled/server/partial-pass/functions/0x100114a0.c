// rea decompile_all
// name: FUN_100114a0
// address: 0x100114a0
// body: available
// range: 0x100114a0-0x100116c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100114a0(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  undefined4 local_8;
  
  in_ECX[0x3d] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3a] = 0x42c60000;
  if ((float)in_ECX[0x39] == 0.0) {
    in_ECX[0x39] = 0x3f800000;
  }
  iVar1 = in_ECX[1];
  in_ECX[0x38] = 0x3f4ccccd;
  if ((char)*(uint *)(iVar1 + 0x1a4) < '\0') {
    in_ECX[0x38] = 0x40000000;
  }
  else if ((*(uint *)(iVar1 + 0x1a4) & 0x100) != 0) {
    in_ECX[0x38] = 0x3fa00000;
  }
  if ((float)in_ECX[0x37] <= 0.0) {
    in_ECX[0x37] = 0x3f800000;
  }
  if (((*(float *)(iVar1 + 0x44) != (float)DAT_10222f34) ||
      (*(float *)(iVar1 + 0x48) != DAT_10222f34._4_4_)) ||
     (*(float *)(iVar1 + 0x4c) != DAT_10222f3c)) goto LAB_100115a9;
  if ((*(uint *)(iVar1 + 0x1a4) & 4) == 0) {
    local_8 = 0;
    if ((*(uint *)(iVar1 + 0x1a4) & 8) == 0) {
      uVar2 = 0x3f800000;
      goto LAB_1001159e;
    }
    *(undefined8 *)(iVar1 + 0x44) = 0x3f800000;
  }
  else {
    local_8 = 0x3f800000;
    uVar2 = 0;
LAB_1001159e:
    *(ulonglong *)(iVar1 + 0x44) = (ulonglong)uVar2 << 0x20;
  }
  *(undefined4 *)(iVar1 + 0x4c) = local_8;
LAB_100115a9:
  iVar1 = in_ECX[1];
  if ((*(byte *)(iVar1 + 0x1a4) & 2) != 0) {
    *(ulonglong *)(iVar1 + 0x44) =
         CONCAT44(*(float *)(iVar1 + 0x48) * -1.0,*(float *)(iVar1 + 0x44) * -1.0);
    *(float *)(iVar1 + 0x4c) = *(float *)(iVar1 + 0x4c) * -1.0;
    iVar1 = in_ECX[1];
  }
  if ((*(byte *)(iVar1 + 0x1a4) & 0x40) == 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar1 + 0x10c) = 0;
    *(undefined4 *)(in_ECX[1] + 0x110) = 0xffffffff;
  }
  *(undefined4 *)(in_ECX[1] + 0x108) = 7;
  FUN_10119fe0();
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  iVar1 = in_ECX[1];
  in_ECX[0x20] = (int)CFuncRotating::RotatingUse;
  if (*(float *)(iVar1 + 0x1fc) <= 0.0) {
    *(undefined4 *)(iVar1 + 0x1fc) = 0;
    iVar1 = in_ECX[1];
  }
  if (((*(byte *)(iVar1 + 0x1a4) & 1) != 0) || (*(int *)(iVar1 + 0x1d0) == 0)) {
    in_ECX[0x1e] = (int)CFuncRotating::WaitForStart;
    (**(code **)(*in_ECX + 8))(0x3fc00000);
    iVar1 = in_ECX[1];
  }
  if ((*(byte *)(iVar1 + 0x1a4) & 0x20) != 0) {
    in_ECX[0x1f] = (int)CFuncRotating::HurtTouch;
  }
  (**(code **)(*in_ECX + 0x30))();
  return;
}

