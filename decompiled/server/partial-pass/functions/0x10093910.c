// rea decompile_all
// name: FUN_10093910
// address: 0x10093910
// body: available
// range: 0x10093910-0x10093e29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10093910(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int in_ECX;
  float10 fVar6;
  uint local_24;
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(in_ECX + 0x124) < 2) {
    piVar2 = (int *)FUN_1002a8e0();
    iVar4 = piVar2[1];
    *(undefined8 *)(iVar4 + 8) = param_1;
    *(undefined4 *)(iVar4 + 0x10) = param_2;
    iVar4 = piVar2[1];
    *(undefined8 *)(iVar4 + 0x20) = param_3;
    *(undefined4 *)(iVar4 + 0x28) = param_4;
    FUN_1008ac80(*(int *)(*(int *)(in_ECX + 4) + 0xb8) + (int)DAT_10223188[0x26]);
    if (*(int *)(in_ECX + 0x124) != 0) {
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      *(undefined4 *)(piVar2[1] + 0x108) = 6;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      *(undefined4 *)(piVar2[1] + 0x10c) = 2;
      FUN_1011a030(piVar2[1],&local_24,&local_18);
      piVar2[0x1f] = (int)CGib::StickyGibTouch;
    }
    iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x114);
    if (0 < iVar4) {
      uVar3 = (*DAT_102230b0)(0,iVar4 + -1);
      *(undefined4 *)(piVar2[1] + 0x114) = uVar3;
    }
    iVar4 = -1;
    if (*(int *)(in_ECX + 0x118) != 0) {
      iVar4 = *(int *)(in_ECX + 0x118);
    }
    piVar2[0x37] = iVar4;
    piVar2[0x39] = *(int *)(in_ECX + 0xf4);
    *(undefined4 *)(piVar2[1] + 0x14c) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x14c);
    *(undefined4 *)(piVar2[1] + 0x150) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x150);
    iVar4 = *(int *)(in_ECX + 4);
    iVar1 = piVar2[1];
    *(undefined8 *)(iVar1 + 0x154) = *(undefined8 *)(iVar4 + 0x154);
    *(undefined4 *)(iVar1 + 0x15c) = *(undefined4 *)(iVar4 + 0x15c);
    *(undefined4 *)(piVar2[1] + 0x160) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x160);
    *(undefined4 *)(piVar2[1] + 0x148) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x148);
    *(undefined4 *)(piVar2[1] + 0x110) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x110);
    local_c = (float)piVar2[0x16] - *DAT_10223188;
    fVar6 = (float10)(*DAT_102230b4)(0x3f733333,0x3f866666);
    local_8 = (float)(fVar6 * (float10)*(float *)(in_ECX + 0x100));
    piVar2[0x3a] = (int)local_8;
    if (local_8 < local_c) {
      (**(code **)(*piVar2 + 8))(local_8);
      piVar2[0x3a] = 0;
    }
    fVar6 = (float10)(*DAT_102230b4)(0x42c80000,0x43480000);
    *(float *)(piVar2[1] + 0x5c) = (float)fVar6;
    fVar6 = (float10)(*DAT_102230b4)(0x42c80000,0x43960000);
    *(float *)(piVar2[1] + 0x60) = (float)fVar6;
    return piVar2;
  }
  piVar2 = (int *)FUN_100921a0(0);
  *(int *)piVar2[1] = (int)&DAT_101bef34 - (int)DAT_10223188[0x26];
  *(undefined4 *)(piVar2[1] + 0x10c) = 3;
  iVar4 = piVar2[1];
  *(undefined8 *)(iVar4 + 8) = param_1;
  *(undefined4 *)(iVar4 + 0x10) = param_2;
  iVar4 = piVar2[1];
  *(undefined8 *)(iVar4 + 0x20) = param_3;
  *(undefined4 *)(iVar4 + 0x28) = param_4;
  (*DAT_10222f50)(*(undefined4 *)(piVar2[1] + 0x20c),
                  *(int *)(*(int *)(in_ECX + 4) + 0xb8) + (int)DAT_10223188[0x26]);
  local_24 = *(uint *)(in_ECX + 300) ^ 0x80000000;
  local_20 = *(uint *)(in_ECX + 0x130) ^ 0x80000000;
  local_1c = *(uint *)(in_ECX + 0x134) ^ 0x80000000;
  FUN_1011a030(piVar2[1],&local_24,in_ECX + 300);
  *(undefined4 *)(piVar2[1] + 0x150) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x150);
  *(undefined4 *)(piVar2[1] + 0x14c) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x14c);
  iVar4 = *(int *)(in_ECX + 4);
  iVar1 = piVar2[1];
  *(undefined8 *)(iVar1 + 0x154) = *(undefined8 *)(iVar4 + 0x154);
  *(undefined4 *)(iVar1 + 0x15c) = *(undefined4 *)(iVar4 + 0x15c);
  *(undefined4 *)(piVar2[1] + 0x160) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x160);
  *(undefined4 *)(piVar2[1] + 0x1d4) = *(undefined4 *)(in_ECX + 0x11c);
  *(undefined4 *)(piVar2[1] + 0x1d8) = *(undefined4 *)(in_ECX + 0x120);
  *(undefined4 *)(piVar2[1] + 0x110) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x110);
  *(undefined4 *)(piVar2[1] + 0x114) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x114);
  *(undefined4 *)(piVar2[1] + 0x148) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x148);
  *(undefined4 *)(piVar2[1] + 0x134) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x134);
  *(undefined4 *)(piVar2[1] + 0x13c) = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x13c);
  *(undefined4 *)(piVar2[1] + 0x120) = *(undefined4 *)(in_ECX + 0x128);
  switch(*(undefined4 *)(in_ECX + 0x124)) {
  case 2:
    *(undefined4 *)(piVar2[1] + 0x108) = 8;
    *(undefined4 *)(piVar2[1] + 0x10c) = 0;
    break;
  case 3:
    *(undefined4 *)(piVar2[1] + 0x108) = 9;
    break;
  case 4:
    *(undefined4 *)(piVar2[1] + 0x108) = 0xb;
    break;
  case 5:
    *(undefined4 *)(piVar2[1] + 0x108) = 6;
    break;
  case 6:
    *(undefined4 *)(piVar2[1] + 0x108) = 10;
  }
  if (*(float *)(piVar2[1] + 0x13c) != 0.0) {
    iVar4 = (*DAT_10222f58)(*(undefined4 *)(piVar2[1] + 0xb4));
    piVar2[0x38] = (int)((float)iVar4 - 1.0);
    if (1.0 < (float)iVar4 - 1.0) {
      if (*(float *)(in_ECX + 0x100) == 0.0) {
        pcVar5 = CSprite::AnimateThink;
      }
      else {
        *(float *)(piVar2[1] + 0x1e8) = *(float *)(in_ECX + 0x100) + *DAT_10223188;
        pcVar5 = CSprite::AnimateUntilDead;
      }
      piVar2[0x1e] = (int)pcVar5;
      (**(code **)(*piVar2 + 8))(0);
      piVar2[0x37] = (int)*DAT_10223188;
      return piVar2;
    }
  }
  if (*(float *)(in_ECX + 0x100) != 0.0) {
    piVar2[0x1e] = (int)CBaseEntity::SUB_Remove;
    (**(code **)(*piVar2 + 8))(*(undefined4 *)(in_ECX + 0x100));
  }
  return piVar2;
}

