// rea decompile_all
// name: FUN_100e04d0
// address: 0x100e04d0
// body: available
// range: 0x100e04d0-0x100e08a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e04d0(int param_1,byte *param_2,int param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  byte *pbVar7;
  int in_ECX;
  byte *pbVar8;
  bool bVar9;
  undefined *puVar10;
  int local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (param_2 == (byte *)0x0) {
LAB_100e05c0:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar3 = (**(code **)(*DAT_10222ee4 + 0xa8))(), iVar3 == 0)) {
    if (((*(uint *)(*(int *)(in_ECX + 4) + 0x184) | *(uint *)(in_ECX + 0x22b4) |
         *(uint *)(in_ECX + 0x22b0)) & 0x20) != 0) {
      if (param_2 == (byte *)"syringe") {
        local_88 = 0xe5ec20d3;
        uStack_84 = 0xf32060ed;
        uStack_80 = 0xe820e5e6;
        uStack_7c = 0xeae0f220;
        local_78 = 0xf820eee3eeedec20;
        uStack_70 = 0xf6e8f0ef;
        uStack_6c = 0xe2e5;
      }
      else if (param_2 == (byte *)"flare") {
        uStack_70 = 0xeae5f8fb;
        local_88 = 0x20e5edcc;
        uStack_84 = 0xf2e0e2f5;
        uStack_80 = 0xe820f2e8;
        uStack_7c = 0xf9fee5ec;
        uStack_6c = uStack_6c & 0xffff0000;
        local_78 = 0xeff1e22060f1f5e8;
      }
      else {
        FUN_1001f160(&local_88,&DAT_101dbadc,param_2);
      }
      FUN_10119810();
    }
    goto LAB_100e05c0;
  }
  uVar4 = FUN_100dfe60(param_2);
  if (0x1f < uVar4) goto LAB_100e05c0;
  param_3 = param_3 - *(int *)(in_ECX + 0x2540 + uVar4 * 4);
  if (param_1 < param_3) {
    param_3 = param_1;
  }
  if (param_3 < 1) goto LAB_100e05c0;
  if (param_4 != '\0') goto LAB_100e06f0;
  if (param_2 == &DAT_101b91e0) {
    FUN_1001f160(&local_88,&DAT_101dbafc,param_3);
  }
  else if (param_2 == &DAT_101b256c) {
    puVar10 = &DAT_101dbb1c;
LAB_100e06bf:
    FUN_1001f160(&local_88,puVar10,param_2,param_3);
  }
  else if (param_2 == (byte *)"syringe") {
    local_78 = local_78 & 0xffffffff00000000;
    local_88 = 0xeee4eecf;
    uStack_84 = 0xede0f0e1;
    uStack_80 = 0xf0eff820;
    uStack_7c = 0xf6e8;
  }
  else if (param_2 == (byte *)"flares") {
    local_78 = CONCAT62(local_78._2_6_,0xe0);
    local_88 = 0xeee4eecf;
    uStack_84 = 0xede0f0e1;
    uStack_80 = 0xf1e220e0;
    uStack_7c = 0xeaf8fbef;
  }
  else if (param_2 == &DAT_101b72d8) {
    FUN_1001f160(&local_88,&DAT_101dbb6c,param_3);
  }
  else {
    if (param_2 != (byte *)"rifle") {
      puVar10 = &DAT_101dbbb8;
      goto LAB_100e06bf;
    }
    FUN_1001f160(&local_88,&DAT_101dbb94,param_3);
  }
  if (param_2 != (byte *)"flashlight") {
    FUN_10119810();
  }
LAB_100e06f0:
  piVar6 = (int *)(in_ECX + 0x2540 + uVar4 * 4);
  *piVar6 = *piVar6 + param_3;
  if (DAT_10226508 != 0) {
    (*DAT_10223000)(1,DAT_10226508,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    uVar5 = FUN_100dfe60(param_2);
    (*DAT_10223008)(uVar5);
    (*DAT_10223008)(param_3);
    (*DAT_10223020)(param_2);
    (*DAT_10223004)();
  }
  (*DAT_10223000)(1,DAT_102264e8,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  (*DAT_10223008)(uVar4);
  (*DAT_10223010)(*(undefined4 *)(in_ECX + 0x2540 + uVar4 * 4));
  (*DAT_10223004)();
  FUN_100f5eb0();
  piVar6 = (int *)(in_ECX + 0x2514);
  local_98 = 6;
  iVar3 = DAT_102265b8;
  do {
    for (iVar2 = *piVar6; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x164)) {
      pbVar7 = (byte *)(&DAT_10231890)[*(int *)(iVar2 + 0x168) * 0xb];
      pbVar8 = param_2;
      if (pbVar7 != (byte *)0x0) {
        do {
          bVar1 = *pbVar7;
          bVar9 = bVar1 < *pbVar8;
          if (bVar1 != *pbVar8) {
LAB_100e07e7:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_100e07ec;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar7[1];
          bVar9 = bVar1 < pbVar8[1];
          if (bVar1 != pbVar8[1]) goto LAB_100e07e7;
          pbVar7 = pbVar7 + 2;
          pbVar8 = pbVar8 + 2;
        } while (bVar1 != 0);
        uVar4 = 0;
LAB_100e07ec:
        if ((uVar4 == 0) && (iVar3 != 0)) {
          (*DAT_10223000)(1,iVar3,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
          (*DAT_10223008)(*(undefined4 *)(iVar2 + 0x168));
          (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + *(int *)(iVar2 + 0x168) * 0x2c));
          iVar3 = FUN_10018440(*(undefined4 *)(iVar2 + 4));
          (*DAT_10223010)(*(undefined4 *)(in_ECX + 0x2540 + *(int *)(iVar3 + 0x1dc) * 4));
          (*DAT_10223004)();
          iVar3 = DAT_102265b8;
        }
      }
    }
    piVar6 = piVar6 + 1;
    local_98 = local_98 + -1;
    if (local_98 == 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

