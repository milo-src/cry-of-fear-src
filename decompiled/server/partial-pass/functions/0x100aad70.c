// rea decompile_all
// name: FUN_100aad70
// address: 0x100aad70
// body: available
// range: 0x100aad70-0x100aaee1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100aad70(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  float10 fVar4;
  float fVar5;
  
  iVar2 = in_ECX[1];
  fVar4 = (float10)(*DAT_102230b4)(0x43480000,0x43960000);
  fVar5 = *(float *)(iVar2 + 0x58);
  iVar3 = in_ECX[1];
  fVar1 = (float)fVar4;
  *(ulonglong *)(iVar3 + 0x20) =
       CONCAT44(*(float *)(iVar2 + 0x54) * fVar1,*(float *)(iVar2 + 0x50) * fVar1);
  *(float *)(iVar3 + 0x28) = fVar5 * fVar1;
  iVar2 = in_ECX[1];
  fVar4 = (float10)(*DAT_102230b4)(0xc2c80000,0x42c80000);
  *(float *)(iVar2 + 0x20) = (float)(fVar4 + (float10)*(float *)(iVar2 + 0x20));
  iVar2 = in_ECX[1];
  fVar4 = (float10)(*DAT_102230b4)(0xc2c80000,0x42c80000);
  *(float *)(iVar2 + 0x24) = (float)(fVar4 + (float10)*(float *)(iVar2 + 0x24));
  fVar5 = *(float *)(in_ECX[1] + 0x28);
  if (fVar5 < 0.0) {
    fVar5 = fVar5 - 200.0;
  }
  else {
    fVar5 = fVar5 + 200.0;
  }
  *(float *)(in_ECX[1] + 0x28) = fVar5;
  *(undefined4 *)(in_ECX[1] + 0x108) = 10;
  *(undefined4 *)(in_ECX[1] + 0x11c) = 0x3f000000;
  (**(code **)(*in_ECX + 8))(0x3dcccccd);
  *(undefined4 *)(in_ECX[1] + 0x10c) = 0;
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),"models/grenade.mdl");
  FUN_1011a030(in_ECX[1],&DAT_10222f34,&DAT_10222f34);
  *(uint *)(in_ECX[1] + 0x118) = *(uint *)(in_ECX[1] + 0x118) | 0x80;
  fVar4 = (float10)(*DAT_102230b4)(0x3f000000,0x3fc00000);
  *(float *)(in_ECX[1] + 0x1fc) = (float)fVar4;
  iVar2 = in_ECX[1];
  *(undefined8 *)(iVar2 + 0x50) = DAT_10222f34;
  *(undefined4 *)(iVar2 + 0x58) = DAT_10222f3c;
  return;
}

