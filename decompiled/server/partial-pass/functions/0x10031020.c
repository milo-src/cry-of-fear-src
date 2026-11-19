// rea decompile_all
// name: FUN_10031020
// address: 0x10031020
// body: available
// range: 0x10031020-0x10031748 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10031020(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  if (*(int *)(in_ECX + 0x1e4) == -0x29a) {
    *(undefined4 *)(in_ECX + 0x1e4) = 0;
  }
  *(uint *)(in_ECX + 0x140) = (uint)(*(int *)(in_ECX + 0x140) == 0x29a);
  *(int *)(in_ECX + 0x210) = (int)DAT_10226850;
  *(int *)(in_ECX + 0x218) = (int)DAT_10226850;
  iVar2 = FUN_10031f00(*(undefined4 *)(in_ECX + 0x204),1);
  FUN_10038f40(*(undefined4 *)(in_ECX + 0x160),iVar2 - (int)DAT_10223188[0x26]);
  FUN_100358c0();
  DAT_102119d0 = 0;
  _DAT_102119a4 = *(undefined4 *)(in_ECX + 0x204);
  *(undefined4 *)(in_ECX + 0x128) = 0;
  switch(*(undefined4 *)(in_ECX + 0x204)) {
  case 1:
    _DAT_102119e0 = 0x3f800000;
    goto LAB_100310ec;
  case 2:
    _DAT_102119ec = 0;
    _DAT_102119f0 = 5;
    if (1 < DAT_102119d4) {
      DAT_102119d4 = 0;
    }
    _DAT_102119e0 = 0x40d51eb8;
    iVar2 = *(int *)(in_ECX + 0x160);
    if (*(int *)(iVar2 + 0x1e98) == 0) {
      FUN_10038f10(iVar2,2);
      _DAT_102119bc = *DAT_10223188 + 0.5;
      _DAT_102119b0 = *DAT_10223188 + 0.5;
      iVar2 = *(int *)(in_ECX + 0x160);
    }
    if (*(int *)(iVar2 + 0x1e98) == 1) {
      FUN_10038f10(iVar2,7);
      _DAT_102119bc = *DAT_10223188 + 0.5;
      _DAT_102119b0 = *DAT_10223188 + 0.5;
    }
    break;
  case 3:
  case 7:
    _DAT_102119ec = 0;
    _DAT_102119f0 = 1;
    _DAT_102119e0 = 0x40a00000;
    _DAT_102119e4 = 0x40a00000;
    iVar8 = *(int *)(in_ECX + 0x160);
    iVar2 = 7 - (uint)(*(int *)(iVar8 + 0x5dc) != 0);
    goto LAB_100310fe;
  case 6:
    _DAT_102119ec = 5;
    _DAT_102119e0 = 0x40a33333;
    iVar2 = 6;
    goto LAB_100310f8;
  case 10:
    _DAT_102119ec = 2;
    _DAT_102119e0 = 0x40a00000;
    iVar2 = 0;
    goto LAB_100310f8;
  case 0xc:
    _DAT_102119ec = 0;
    _DAT_102119e0 = 0x3f99999a;
    FUN_10038f10(*(undefined4 *)(in_ECX + 0x160),1);
    _DAT_102119bc = *DAT_10223188 + 0.7;
    _DAT_102119b0 = *DAT_10223188 + 0.7;
    break;
  case 0xd:
    _DAT_102119ec = 2;
    _DAT_102119f0 = 5;
    _DAT_102119e0 = 0x40400000;
    _DAT_102119e4 = 0x40400000;
    FUN_10038f10(*(undefined4 *)(in_ECX + 0x160),0);
    _DAT_102119bc = *DAT_10223188 + 0.83;
    _DAT_102119b0 = *DAT_10223188 + 0.83;
    break;
  case 0x10:
    _DAT_102119ec = 0xf;
    _DAT_102119e0 = 0x41700000;
    iVar2 = 0x10;
    goto LAB_100310f8;
  case 0x13:
  case 0x15:
    _DAT_102119f0 = 0;
    _DAT_102119e0 = 0x40a00000;
    _DAT_102119e4 = 0x40a00000;
LAB_100310ec:
    _DAT_102119ec = 0;
    iVar2 = 1;
LAB_100310f8:
    iVar8 = *(int *)(in_ECX + 0x160);
LAB_100310fe:
    FUN_10038f10(iVar8,iVar2);
    _DAT_102119bc = *DAT_10223188 + 1.0;
    _DAT_102119b0 = *DAT_10223188 + 1.0;
  }
  iVar2 = FUN_10031f00(*(undefined4 *)(in_ECX + 0x204),1);
  *(int *)(in_ECX + 0x208) = iVar2 - (int)DAT_10223188[0x26];
  switch(*(undefined4 *)(in_ECX + 0x200)) {
  case 2:
    iVar2 = *(int *)(*(int *)(in_ECX + 0x160) + 0x1e98);
    if (iVar2 == 0) {
      uVar7 = 2;
      break;
    }
    if (iVar2 != 1) goto switchD_100313cf_caseD_4;
    goto LAB_10031735;
  case 3:
  case 7:
    if (*(int *)(*(int *)(in_ECX + 0x160) + 0x5e0) != 0) {
      uVar7 = 6;
      break;
    }
LAB_10031735:
    uVar7 = 7;
    break;
  default:
switchD_100313cf_caseD_4:
    uVar7 = 6;
    break;
  case 10:
    uVar7 = 0;
    break;
  case 0xc:
  case 0x13:
  case 0x15:
    uVar7 = 1;
    break;
  case 0xd:
    iVar2 = FUN_100e0310(0xd);
    if ((iVar2 == 0) || (*(int *)(*(int *)(iVar2 + 4) + 0x248) != 1)) {
      uVar7 = 0;
    }
    else {
      if (*(int *)(in_ECX + 0x160) != 0) {
        (*DAT_10223000)(1,DAT_10226490,0,
                        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
        uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223010)(uVar7);
        (*DAT_10223020)("aurora/signal.aur");
        (*DAT_10223008)(1);
        if (*(int *)(iVar2 + 0x16c) == 0) {
          pcVar5 = "models/weapons/flare/v_flare.mdl";
        }
        else {
          pcVar5 = (char *)((int)DAT_10223188[0x26] + *(int *)(iVar2 + 0x16c));
        }
        (*DAT_10223020)(pcVar5);
        (*DAT_10223010)(0);
        (*DAT_10223004)();
        (*DAT_10223000)(1,DAT_10226490,0,
                        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
        uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223010)(uVar7);
        (*DAT_10223020)("aurora/blacksmoke.aur");
        (*DAT_10223008)(1);
        if (*(int *)(iVar2 + 0x16c) == 0) {
          pcVar5 = "models/weapons/flare/v_flare.mdl";
        }
        else {
          pcVar5 = (char *)((int)DAT_10223188[0x26] + *(int *)(iVar2 + 0x16c));
        }
        (*DAT_10223020)(pcVar5);
        (*DAT_10223010)(0);
        (*DAT_10223004)();
        (*DAT_10223000)(1,DAT_10226490,0,
                        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
        uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223010)(uVar7);
        (*DAT_10223020)("aurora/flare_sparks.aur");
        (*DAT_10223008)(1);
        if (*(int *)(iVar2 + 0x16c) == 0) {
          pcVar5 = "models/weapons/flare/v_flare.mdl";
        }
        else {
          pcVar5 = (char *)((int)DAT_10223188[0x26] + *(int *)(iVar2 + 0x16c));
        }
        (*DAT_10223020)(pcVar5);
        (*DAT_10223010)(0);
        (*DAT_10223004)();
        (*DAT_10223000)(1,DAT_10226490,0,
                        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
        uVar7 = (*DAT_10223064)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223010)(uVar7);
        (*DAT_10223020)("aurora/flare_glow.aur");
        (*DAT_10223008)(1);
        if (*(int *)(iVar2 + 0x16c) == 0) {
          pcVar5 = "models/weapons/flare/v_flare.mdl";
        }
        else {
          pcVar5 = (char *)((int)DAT_10223188[0x26] + *(int *)(iVar2 + 0x16c));
        }
        (*DAT_10223020)(pcVar5);
        (*DAT_10223010)(2);
        (*DAT_10223004)();
        FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c),1,
                     "weapons/flare/flare_burn.wav",0x3e99999a,0x3f4ccccd,0,100);
        *(float *)(iVar2 + 0x1fc) = *DAT_10223188 + 6.9;
        uVar1 = *(uint *)(*(int *)(in_ECX + 0x160) + 0x5d0);
        if ((uVar1 & 0x10) == 0) {
          *(uint *)(*(int *)(in_ECX + 0x160) + 0x5d0) = uVar1 | 0x10;
        }
      }
      uVar7 = 1;
    }
    uVar9 = 0;
    uVar4 = 0;
    pcVar6 = "onehanded";
    pcVar5 = "models/null.mdl";
    uVar3 = FUN_10031f00(*(undefined4 *)(in_ECX + 0x200),0);
    FUN_1011c1a0(uVar3,pcVar5,uVar7,pcVar6,uVar4,uVar9);
    return;
  case 0x10:
    uVar7 = 0x10;
  }
  uVar9 = 0;
  pcVar6 = "onehanded";
  pcVar5 = "models/null.mdl";
  uVar3 = uVar9;
  uVar4 = FUN_10031f00(*(undefined4 *)(in_ECX + 0x200),0);
  FUN_1011c1a0(uVar4,pcVar5,uVar7,pcVar6,uVar9,uVar3);
  return;
}

