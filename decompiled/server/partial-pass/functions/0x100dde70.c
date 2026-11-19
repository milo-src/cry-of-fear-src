// rea decompile_all
// name: FUN_100dde70
// address: 0x100dde70
// body: available
// range: 0x100dde70-0x100de075 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dde70(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (*(char *)(in_ECX + 0x1ee9) != '\0') {
    return;
  }
  iVar2 = *(int *)(in_ECX + 4);
  if ((*(uint *)(iVar2 + 0x1a8) & 0x5000) != 0) {
    return;
  }
  if ((*(byte *)(iVar2 + 0x184) & 4) != 0) {
    return;
  }
  if (2 < *(int *)(iVar2 + 0x1c4)) {
    return;
  }
  if (*(int *)(iVar2 + 0x230) != 0) {
    return;
  }
  if (*(float *)(in_ECX + 0x21f0) <= 15.0 && *(float *)(in_ECX + 0x21f0) != 15.0) {
    return;
  }
  if (*DAT_10223188 <= *(float *)(in_ECX + 0x2048) && *(float *)(in_ECX + 0x2048) != *DAT_10223188)
  {
    return;
  }
  FUN_10119320(iVar2 + 0x74);
  FUN_100f5db0();
  if (*(char *)(in_ECX + 0x21e8) == '\0') {
    *(float *)(in_ECX + 0x21f0) = *(float *)(in_ECX + 0x21f0) - 15.0;
  }
  iVar2 = *(int *)(in_ECX + 4);
  uVar1 = *(undefined4 *)(iVar2 + 0x28);
  switch(param_1) {
  case 1:
    fVar6 = DAT_10223188[10];
    fVar5 = DAT_10223188[0xb];
    fVar3 = DAT_10223188[0xc];
    uVar8 = 0x40000000;
    uVar7 = 0x40800000;
    goto LAB_100de011;
  case 2:
    fVar4 = -600.0;
    fVar6 = DAT_10223188[10];
    fVar5 = DAT_10223188[0xb];
    fVar3 = DAT_10223188[0xc];
    uVar8 = 0x40000000;
    uVar7 = 0xc0800000;
    break;
  case 3:
    fVar4 = -600.0;
    fVar6 = DAT_10223188[0x10];
    fVar5 = DAT_10223188[0x11];
    fVar3 = DAT_10223188[0x12];
    uVar8 = 0x40800000;
    uVar7 = 0x40000000;
    break;
  case 4:
    fVar6 = DAT_10223188[0x10];
    fVar5 = DAT_10223188[0x11];
    fVar3 = DAT_10223188[0x12];
    uVar8 = 0xc0800000;
    uVar7 = 0x40000000;
LAB_100de011:
    fVar4 = 600.0;
    break;
  default:
    goto switchD_100ddf39_default;
  }
  *(ulonglong *)(iVar2 + 0x20) = CONCAT44(fVar5 * fVar4,fVar6 * fVar4);
  *(float *)(iVar2 + 0x28) = fVar3 * fVar4;
  FUN_100f91b0(uVar7,uVar8,0x40000000);
switchD_100ddf39_default:
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x28) = uVar1;
  *(undefined4 *)(in_ECX + 0x430) = 0x3f800000;
  *(float *)(in_ECX + 0x2048) = *DAT_10223188 + 1.0;
  return;
}

