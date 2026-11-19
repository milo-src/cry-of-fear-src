// rea decompile_all
// name: FUN_100a1d80
// address: 0x100a1d80
// body: available
// range: 0x100a1d80-0x100a1ef5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a1d80(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_60 [16];
  float local_50;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar2 = *(int *)(in_ECX + 4);
  if ((*(byte *)(iVar2 + 0x1a4) & 2) == 0) {
    iVar7 = (int)*(float *)(iVar2 + 0x1e4);
    uVar3 = *(undefined4 *)(iVar2 + 0x188);
    uVar4 = (undefined4)DAT_10222f34;
    uVar8 = DAT_10222f34._4_4_;
    uVar9 = DAT_10222f3c;
    uVar5 = FUN_100941f0(&local_28,param_1);
    uVar6 = FUN_10092b90(&local_1c,param_1);
    FUN_10117770(uVar6,uVar5,uVar3,iVar7,uVar4,uVar8,uVar9);
  }
  else {
    iVar7 = *(int *)(iVar2 + 0x188);
    if (iVar7 == 0xf7) {
      iVar7 = 0x46;
    }
    iVar2 = (int)*(float *)(iVar2 + 0x1e4);
    uVar3 = FUN_100941f0(&local_28,param_1);
    uVar4 = FUN_10092b90(&local_1c,param_1);
    FUN_10117800(uVar4,uVar3,iVar7,iVar2);
  }
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 8) != 0) {
    FUN_100941f0(&local_1c,param_1);
    FUN_10092b90(&local_10,param_1);
    fVar1 = *(float *)(*(int *)(in_ECX + 4) + 0x1e4);
    local_28 = local_1c * fVar1 + local_1c * fVar1 + local_10;
    local_24 = local_18 * fVar1 + local_18 * fVar1 + local_c;
    local_20 = local_14 * fVar1 + local_14 * fVar1 + local_8;
    FUN_1011a800(&local_10,&local_28,1,0,local_60);
    if (local_50 != 1.0) {
      FUN_10117700(local_60,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x188));
    }
  }
  return;
}

