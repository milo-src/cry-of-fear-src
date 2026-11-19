// rea decompile_all
// name: FUN_100f6aa0
// address: 0x100f6aa0
// body: available
// range: 0x100f6aa0-0x100f6c8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f6aa0(void)

{
  uint *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  float fVar5;
  char *pcVar6;
  
  uVar3 = (*DAT_102230b0)(0,3);
  switch(uVar3) {
  case 0:
    pcVar6 = "common/bodydrop1.wav";
    break;
  case 1:
    pcVar6 = "common/bodydrop2.wav";
    break;
  case 2:
    pcVar6 = "common/bodydrop3.wav";
    break;
  case 3:
    pcVar6 = "common/bodydrop4.wav";
    break;
  default:
    goto switchD_100f6ab9_default;
  }
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,pcVar6,0x3f800000,0x3f4ccccd,0,0x5a);
switchD_100f6ab9_default:
  *(float *)(*(int *)(in_ECX + 4) + 0x20) = *(float *)(*(int *)(in_ECX + 4) + 0x20) * 0.5;
  *(float *)(*(int *)(in_ECX + 4) + 0x24) = *(float *)(*(int *)(in_ECX + 4) + 0x24) * 0.5;
  *(float *)(*(int *)(in_ECX + 4) + 0x28) = *(float *)(*(int *)(in_ECX + 4) + 0x28) * 0.5;
  fVar5 = *DAT_10223188;
  *(undefined1 *)(in_ECX + 0x1ed0) = 1;
  *(float *)(in_ECX + 0x1ecc) = fVar5 + 0.8;
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x260) = 0x3f800000;
  (*DAT_10223000)(1,DAT_102265b4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  (*DAT_10223008)(1);
  (*DAT_10223004)();
  iVar4 = (*DAT_102230b0)(0xffffffdd,0x23);
  fVar5 = (float)iVar4;
  iVar4 = (*DAT_102230b0)(0xffffffdd,0x23,fVar5);
  FUN_100f91b0(0xc1f00000,(float)iVar4,fVar5);
  FUN_100e9eb0();
  puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x1a8);
  *puVar1 = *puVar1 & 0xfffbffff;
  uVar3 = DAT_102268b4;
  if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x80000) == 0) {
    uVar3 = DAT_102268b0;
  }
  if (*(char *)(in_ECX + 0x1ec8) != '\0') {
    uVar3 = DAT_102268bc;
  }
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x214) = uVar3;
  pfVar2 = (float *)(*(int *)(in_ECX + 4) + 0x214);
  if (*pfVar2 <= 30.0 && *pfVar2 != 30.0) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x214) = 0x41f00000;
  }
  return;
}

