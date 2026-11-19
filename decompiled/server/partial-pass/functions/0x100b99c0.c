// rea decompile_all
// name: FUN_100b99c0
// address: 0x100b99c0
// body: available
// range: 0x100b99c0-0x100b9de5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b99c0(int *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int in_ECX;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  float local_14;
  undefined8 local_10;
  float local_8;
  
  switch(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x188)) {
  case 0:
    iVar5 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe4),param_1);
    iVar3 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe8),param_1);
    if (iVar5 == 0) {
      return;
    }
    if (iVar3 == 0) {
      return;
    }
    param_1 = (int *)FUN_100926a0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xdc),
                                  *(undefined4 *)(in_ECX + 0xec));
    uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
    uVar4 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c),uVar6);
    FUN_10094640(uVar4,uVar6);
    break;
  case 1:
    puVar7 = (undefined8 *)FUN_100b8110(&local_28);
    local_10 = *puVar7;
    local_8 = *(float *)(puVar7 + 1);
    iVar5 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe8),param_1);
    if (iVar5 == 0) {
      return;
    }
    param_1 = (int *)FUN_100926a0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xdc),
                                  *(undefined4 *)(in_ECX + 0xec));
    uVar6 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
    FUN_10098b90(&local_10,uVar6);
    break;
  case 2:
    puVar7 = (undefined8 *)FUN_100b8110(&local_28);
    local_10 = *puVar7;
    local_8 = *(float *)(puVar7 + 1);
    puVar7 = (undefined8 *)FUN_100b8110(&local_28);
    local_1c = *puVar7;
    local_14 = *(float *)(puVar7 + 1);
    param_1 = (int *)FUN_100926a0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xdc),
                                  *(undefined4 *)(in_ECX + 0xec));
    FUN_10098bf0(&local_10,&local_1c);
    break;
  case 3:
    puVar7 = (undefined8 *)FUN_100b8110(&local_28);
    local_10 = *puVar7;
    local_8 = *(float *)(puVar7 + 1);
    puVar7 = (undefined8 *)FUN_100b8240(&local_28);
    local_1c = *puVar7;
    local_14 = *(float *)(puVar7 + 1);
    param_1 = (int *)FUN_100926a0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xdc),
                                  *(undefined4 *)(in_ECX + 0xec));
    local_28 = (float)local_10 + (float)local_1c;
    local_24 = local_10._4_4_ + local_1c._4_4_;
    local_20 = local_8 + local_14;
    FUN_10098bf0(&local_10,&local_28);
  }
  iVar5 = *(int *)(in_ECX + 4);
  fVar1 = *(float *)(iVar5 + 0x15c);
  fVar2 = *(float *)(iVar5 + 0x158);
  *(float *)(param_1[1] + 0x154) = (float)(int)*(float *)(iVar5 + 0x154);
  *(float *)(param_1[1] + 0x158) = (float)(int)fVar2;
  *(float *)(param_1[1] + 0x15c) = (float)(int)fVar1;
  *(float *)(param_1[1] + 0x150) = (float)(int)*(float *)(*(int *)(in_ECX + 4) + 0x150);
  *(undefined4 *)(param_1[1] + 0x114) = *(undefined4 *)(in_ECX + 0xf0);
  *(undefined4 *)(param_1[1] + 0x134) = *(undefined4 *)(in_ECX + 0xf4);
  *(float *)(param_1[1] + 0x138) = (float)*(int *)(in_ECX + 0xf8);
  *(uint *)(param_1[1] + 0x14c) =
       *(uint *)(in_ECX + 0x108) & 0xf0 | *(uint *)(param_1[1] + 0x14c) & 0xf;
  *(undefined4 *)(param_1[1] + 0x1e4) = *(undefined4 *)(in_ECX + 0x100);
  *(float *)(param_1[1] + 0x168) = (float)*(int *)(in_ECX + 0x104);
  *(uint *)(param_1[1] + 0x1a4) =
       *(uint *)(param_1[1] + 0x1a4) | *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x78;
  if (*(float *)(in_ECX + 0xfc) != 0.0) {
    param_1[0x1e] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*param_1 + 8))(*(undefined4 *)(in_ECX + 0xfc));
  }
  *(undefined4 *)(param_1[1] + 0x1d0) = *(undefined4 *)(in_ECX + 0xe0);
  iVar5 = *(int *)(*(int *)(in_ECX + 4) + 0x1cc);
  if (iVar5 != 0) {
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + iVar5,param_1);
  }
  return;
}

