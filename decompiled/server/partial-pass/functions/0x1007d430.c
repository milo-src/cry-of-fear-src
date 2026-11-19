// rea decompile_all
// name: FUN_1007d430
// address: 0x1007d430
// body: available
// range: 0x1007d430-0x1007d820 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d430(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (((param_1 != (int *)0x0) && (iVar2 = (**(code **)(*param_1 + 0xd0))(), iVar2 != 0)) &&
     (iVar2 = FUN_100125e0(param_1[1]), iVar2 != 0)) {
    if ((*(float *)(*(int *)(in_ECX + 4) + 0x168) != 0.0) &&
       (*(float *)(*(int *)(in_ECX + 4) + 0x164) == 0.0)) {
      FUN_1001f160(local_88,&DAT_101bc788,*(undefined4 *)(iVar2 + 0x2040));
      FUN_10119810(iVar2,local_88,5,0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_10017740(iVar2);
    if (((*(int *)(*(int *)(in_ECX + 4) + 0x1d8) != 0) && (iVar3 = FUN_10017780(), iVar3 == 0)) &&
       (iVar3 = FUN_10118590(0,*(int *)(*(int *)(in_ECX + 4) + 0x1d8) +
                               *(int *)(DAT_10223188 + 0x98)), iVar3 != 0)) {
      iVar1 = *(int *)(iVar3 + 4);
      *(undefined8 *)(in_ECX + 0xec) = *(undefined8 *)(iVar1 + 0x50);
      *(undefined4 *)(in_ECX + 0xf4) = *(undefined4 *)(iVar1 + 0x58);
      FUN_10017740(iVar3);
    }
    iVar3 = *(int *)(in_ECX + 4);
    if (*(int *)(iVar3 + 0x114) == 0) {
      FUN_10119810(iVar2,&DAT_101bc7a4,5,0);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x114) = 1;
      iVar3 = *(int *)(in_ECX + 4);
    }
    *(float *)(iVar3 + 0x164) = (float)(*(float *)(iVar3 + 0x164) == 0.0);
    if (*(float *)(*(int *)(in_ECX + 4) + 0x164) == 0.0) {
      iVar3 = FUN_100177a0();
      (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      (*DAT_1022301c)(0x43af0000);
      (*DAT_10223008)(0);
      (*DAT_10223008)(1);
      (*DAT_10223004)();
      iVar3 = FUN_100177a0();
      (*DAT_10223000)(1,DAT_102265fc,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      iVar3 = FUN_100177a0();
      uVar4 = 0;
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x274) = 0x42b40000;
      iVar3 = FUN_100177a0(0);
      FUN_100125e0(*(undefined4 *)(iVar3 + 4));
      FUN_10017740(uVar4);
      FUN_100deff0(1);
      iVar3 = FUN_10017780();
      if (iVar3 == 0) goto LAB_1007d80f;
      (*DAT_10223000)(1,DAT_10226630,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      (*DAT_10223010)(0xffffffff);
    }
    else {
      iVar3 = FUN_100177a0();
      (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      (*DAT_1022301c)(0x43af0000);
      (*DAT_10223008)(1);
      (*DAT_10223008)(1);
      (*DAT_10223004)();
      iVar3 = FUN_100177a0();
      (*DAT_10223000)(1,DAT_102265fc,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      (*DAT_10223008)(2);
      (*DAT_10223004)();
      iVar3 = FUN_100177a0();
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x274) = 0x420c0000;
      FUN_100deff0(0);
      iVar3 = FUN_100177a0();
      FUN_100125e0(*(undefined4 *)(iVar3 + 4));
      FUN_10017740(in_ECX);
      iVar3 = FUN_10017780();
      if (iVar3 == 0) goto LAB_1007d80f;
      (*DAT_10223000)(1,DAT_10226630,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      iVar2 = FUN_100177a0();
      uVar4 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      (*DAT_10223010)(uVar4);
    }
    iVar2 = FUN_100177a0();
    (*DAT_10223010)((int)*(float *)(*(int *)(iVar2 + 4) + 0x50));
    iVar2 = FUN_100177a0();
    (*DAT_10223010)((int)*(float *)(*(int *)(iVar2 + 4) + 0x54));
    iVar2 = FUN_100177a0();
    (*DAT_10223010)((int)*(float *)(*(int *)(iVar2 + 4) + 0x58));
    (*DAT_10223004)();
  }
LAB_1007d80f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

