// rea decompile_all
// name: FUN_10038fc0
// address: 0x10038fc0
// body: available
// range: 0x10038fc0-0x10039378 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10038fc0(int param_1)

{
  CDualWeapon *this;
  int iVar1;
  int in_ECX;
  float fVar2;
  undefined4 uVar3;
  
  *(int *)(in_ECX + 0xe8) = param_1;
  if ((((param_1 != 0) && (*(int *)(param_1 + 0x252c) != 0)) &&
      (*(int *)(*(int *)(param_1 + 0x252c) + 0x168) != 0xf)) && (*(int *)(in_ECX + 0x128) != 0)) {
    FUN_10038f40(param_1,0);
  }
  if ((0 < *(int *)(in_ECX + 0x118)) &&
     (*(float *)(in_ECX + 0x11c) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x11c))) {
    switch(*(int *)(in_ECX + 0x118)) {
    case 1:
      CBasePlayer::MeleeHitThinkPunch(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 2:
      CBasePlayer::MeleeHitThinkSwitchblade(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 3:
      CBasePlayer::MeleeHitThinkSwitchblade2(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 4:
      CBasePlayer::MeleeHitThinkSwitchblade3(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 5:
      CBasePlayer::MeleeHitThinkNightStick(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 6:
      CBasePlayer::MeleeHitThinkNightStick2(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 7:
      CBasePlayer::MeleeHitThinkNightStick3(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 8:
      iVar1 = *(int *)(in_ECX + 0xe8);
      if (*(int *)(iVar1 + 0x1f14) == 0) {
        if ((*(uint *)(iVar1 + 0x5d0) & 1) == 0) {
          *(uint *)(iVar1 + 0x5d0) = *(uint *)(iVar1 + 0x5d0) | 1;
          iVar1 = *(int *)(in_ECX + 0xe8);
        }
        if ((*(uint *)(iVar1 + 0x5d0) & 2) != 0) {
          *(uint *)(iVar1 + 0x5d0) = *(uint *)(iVar1 + 0x5d0) & 0xfffffffd;
          iVar1 = *(int *)(in_ECX + 0xe8);
        }
      }
      *(undefined4 *)(iVar1 + 0x1e98) = 1;
      break;
    case 9:
      iVar1 = *(int *)(in_ECX + 0xe8);
      if ((*(uint *)(iVar1 + 0x5d0) & 1) != 0) {
        *(uint *)(iVar1 + 0x5d0) = *(uint *)(iVar1 + 0x5d0) & 0xfffffffe;
        iVar1 = *(int *)(in_ECX + 0xe8);
      }
      if ((*(uint *)(iVar1 + 0x5d0) & 2) != 0) {
        *(uint *)(iVar1 + 0x5d0) = *(uint *)(iVar1 + 0x5d0) & 0xfffffffd;
        iVar1 = *(int *)(in_ECX + 0xe8);
      }
      *(undefined4 *)(iVar1 + 0x1e98) = 0;
      break;
    case 10:
      CBasePlayer::MeleeHitThinkBranch(*(CBasePlayer **)(in_ECX + 0xe8));
      break;
    case 0xb:
      if (((*(int *)(in_ECX + 0xe8) != 0) &&
          (iVar1 = *(int *)(*(int *)(in_ECX + 0xe8) + 0x252c), iVar1 != 0)) &&
         ((*(int *)(iVar1 + 0x168) == 0xf &&
          (this = (CDualWeapon *)FUN_1002f180(*(undefined4 *)(iVar1 + 4)),
          this != (CDualWeapon *)0x0)))) {
        CDualWeapon::VP70Shoot(this);
      }
    }
    *(undefined4 *)(in_ECX + 0x118) = 0;
  }
  if ((*(char *)(in_ECX + 0x10c) != '\0') &&
     ((((*(byte *)(*(int *)(param_1 + 4) + 0x184) & 1) == 0 || (*(int *)(in_ECX + 0x110) != 0)) ||
      (iVar1 = (**(code **)(**(int **)(in_ECX + 0xe8) + 0xbc))(), iVar1 == 0)))) {
    *(undefined1 *)(in_ECX + 0x10c) = 0;
    if (*(int *)(in_ECX + 0x104) != 0) {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),0,
                   (int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x104),0,0,0x20,100);
    }
    if (*(int *)(in_ECX + 0x108) != 0) {
      FUN_100fc9f0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),0,
                   (int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x108),0x3f800000,0x3f4ccccd,0,100);
    }
  }
  if (*(int *)(in_ECX + 0x110) != 0) {
    return;
  }
  fVar2 = *DAT_10223188;
  if (fVar2 < *(float *)(in_ECX + 0xf0) || fVar2 == *(float *)(in_ECX + 0xf0)) {
    return;
  }
  if (fVar2 < *(float *)(in_ECX + 0xfc) || fVar2 == *(float *)(in_ECX + 0xfc)) {
    return;
  }
  if (fVar2 < *(float *)(in_ECX + 0x100) || fVar2 == *(float *)(in_ECX + 0x100)) {
    return;
  }
  switch(*(undefined4 *)(in_ECX + 0xe4)) {
  case 1:
  case 6:
  case 10:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x10:
    uVar3 = *(undefined4 *)(in_ECX + 300);
LAB_10039354:
    FUN_10038f10(param_1,uVar3);
    fVar2 = *(float *)(in_ECX + 0x120);
    break;
  case 2:
    iVar1 = *(int *)(in_ECX + 0xe8);
    if (*(int *)(iVar1 + 0x1e98) == 0) {
      FUN_10038f10(param_1,*(undefined4 *)(in_ECX + 300));
      iVar1 = *(int *)(in_ECX + 0xe8);
      *(float *)(in_ECX + 0xf0) = *(float *)(in_ECX + 0x120) + *DAT_10223188;
    }
    if (*(int *)(iVar1 + 0x1e98) != 1) {
      return;
    }
    FUN_10038f10(param_1,*(undefined4 *)(in_ECX + 0x130));
    fVar2 = *(float *)(in_ECX + 0x124);
    break;
  case 3:
  case 7:
    if (*(int *)(*(int *)(in_ECX + 0xe8) + 0x5dc) != 0) {
      uVar3 = 0;
      goto LAB_10039354;
    }
    FUN_10038f10(param_1,1);
    fVar2 = *(float *)(in_ECX + 0x124);
    break;
  default:
    goto switchD_10039294_caseD_4;
  case 0x13:
    FUN_10038f10(param_1,0);
    *(float *)(in_ECX + 0xf0) = *DAT_10223188 + 1.0;
    return;
  }
  *(float *)(in_ECX + 0xf0) = fVar2 + *DAT_10223188;
switchD_10039294_caseD_4:
  return;
}

