// rea decompile_all
// name: FUN_10034540
// address: 0x10034540
// body: available
// range: 0x10034540-0x10034b4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10034540(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 local_10c [260];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  FUN_100dff40(local_10c);
  iVar3 = FUN_1013f5f0(local_10c,"editor321@planethalflife.com");
  if (((((iVar3 == 0) || (in_ECX[0x4a] == 1)) || (2 < in_ECX[0x4a])) ||
      ((DAT_102119d0 == 1 || (2 < DAT_102119d0)))) ||
     ((*DAT_10223188 < (float)in_ECX[0x73] || (*DAT_10223188 < (float)in_ECX[0x74]))))
  goto LAB_10034b3f;
  cVar2 = FUN_10032e20(in_ECX[0x81]);
  if (cVar2 != '\0') {
    cVar2 = FUN_10032e20(in_ECX[0x80]);
    if (cVar2 != '\0') goto LAB_10034b3f;
  }
  iVar3 = in_ECX[0x80];
  if (iVar3 == 3) {
    iVar3 = FUN_100dfe60("glock");
    if ((*(int *)(iVar3 * 4 + 0x2540 + in_ECX[0x58]) < 1) || (in_ECX[0x81] != 6)) goto LAB_10034b3f;
    iVar5 = FUN_100dfe60("glock");
    iVar3 = in_ECX[0x58];
    iVar4 = 0xf - *(int *)(iVar3 + 0x5e0);
    if (*(int *)(iVar3 + iVar5 * 4 + 0x2540) <= iVar4) {
      iVar4 = FUN_100dfe60("glock");
      iVar3 = in_ECX[0x58];
      iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
    }
    if (iVar4 == 0) goto LAB_10034b3f;
    if (*(int *)(iVar3 + 0x5e0) == 0) {
      uVar7 = 9;
    }
    else {
      uVar7 = 8;
    }
    (**(code **)(*in_ECX + 0x198))(uVar7,1,0);
    pcVar6 = "weapons/glock/glock_magout.wav";
LAB_1003484a:
    *(undefined4 *)(in_ECX[0x58] + 0x5e0) = 0;
    fVar1 = *DAT_10223188;
    in_ECX[0x76] = (int)(fVar1 + 2.0);
    in_ECX[0x74] = (int)(fVar1 + 2.0);
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,pcVar6,0x3f800000,0,0,100);
    in_ECX[0x1e] = (int)CDualWeapon::ReloadFinishRight;
    (**(code **)(*in_ECX + 8))(0x3f800000);
  }
  else {
    if (iVar3 == 7) {
      iVar3 = FUN_100dfe60(&DAT_101adf40);
      if ((*(int *)(iVar3 * 4 + 0x2540 + in_ECX[0x58]) < 1) || (in_ECX[0x81] != 6))
      goto LAB_10034b3f;
      iVar5 = FUN_100dfe60(&DAT_101adf40);
      iVar3 = in_ECX[0x58];
      iVar4 = 8 - *(int *)(iVar3 + 0x5e0);
      if (*(int *)(iVar3 + iVar5 * 4 + 0x2540) <= iVar4) {
        iVar4 = FUN_100dfe60(&DAT_101adf40);
        iVar3 = in_ECX[0x58];
        iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
      }
      if (iVar4 == 0) goto LAB_10034b3f;
      if (*(int *)(iVar3 + 0x5e0) == 0) {
        uVar7 = 9;
      }
      else {
        uVar7 = 8;
      }
      (**(code **)(*in_ECX + 0x198))(uVar7,1,0);
      pcVar6 = "weapons/p345/p345_magout.wav";
      goto LAB_1003484a;
    }
    if (iVar3 == 0x13) {
      iVar3 = FUN_100dfe60(&DAT_101adf64);
      if ((*(int *)(iVar3 * 4 + 0x2540 + in_ECX[0x58]) < 1) || (in_ECX[0x81] != 6))
      goto LAB_10034b3f;
      iVar4 = FUN_100dfe60(&DAT_101adf64);
      iVar3 = 8 - *(int *)(in_ECX[0x58] + 0x5e0);
      if (*(int *)(in_ECX[0x58] + iVar4 * 4 + 0x2540) <= iVar3) {
        iVar3 = FUN_100dfe60(&DAT_101adf64);
        iVar3 = *(int *)(iVar3 * 4 + 0x2540 + in_ECX[0x58]);
      }
      if (iVar3 == 0) goto LAB_10034b3f;
      (**(code **)(*in_ECX + 0x198))(3,1,0);
      pcVar6 = "weapons/vp70/vp70_magout.wav";
      goto LAB_1003484a;
    }
  }
  iVar3 = in_ECX[0x81];
  if (iVar3 == 3) {
    iVar3 = FUN_100dfe60("glock");
    if ((*(int *)(iVar3 * 4 + 0x2540 + in_ECX[0x58]) < 1) || (in_ECX[0x80] != 6)) goto LAB_10034b3f;
    iVar5 = FUN_100dfe60("glock");
    iVar3 = in_ECX[0x58];
    iVar4 = 0xf - *(int *)(iVar3 + 0x5dc);
    if (*(int *)(iVar3 + iVar5 * 4 + 0x2540) <= iVar4) {
      iVar4 = FUN_100dfe60("glock");
      iVar3 = in_ECX[0x58];
      iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
    }
    if (iVar4 == 0) goto LAB_10034b3f;
    FUN_10038f10(iVar3,9 - (uint)(*(int *)(iVar3 + 0x5dc) != 0));
    pcVar6 = "weapons/glock/glock_magout.wav";
  }
  else if (iVar3 == 7) {
    iVar3 = FUN_100dfe60(&DAT_101adf40);
    if ((*(int *)(iVar3 * 4 + 0x2540 + in_ECX[0x58]) < 1) || (in_ECX[0x80] != 6)) goto LAB_10034b3f;
    iVar5 = FUN_100dfe60(&DAT_101adf40);
    iVar3 = in_ECX[0x58];
    iVar4 = 8 - *(int *)(iVar3 + 0x5dc);
    if (*(int *)(iVar3 + iVar5 * 4 + 0x2540) <= iVar4) {
      iVar4 = FUN_100dfe60(&DAT_101adf40);
      iVar3 = in_ECX[0x58];
      iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
    }
    if (iVar4 == 0) goto LAB_10034b3f;
    FUN_10038f10(iVar3,9 - (uint)(*(int *)(iVar3 + 0x5dc) != 0));
    pcVar6 = "weapons/p345/p345_magout.wav";
  }
  else {
    if (iVar3 != 0x13) goto LAB_10034b3f;
    iVar3 = FUN_100dfe60(&DAT_101adf64);
    if ((*(int *)(iVar3 * 4 + 0x2540 + in_ECX[0x58]) < 1) || (in_ECX[0x80] != 6)) goto LAB_10034b3f;
    iVar5 = FUN_100dfe60(&DAT_101adf64);
    iVar3 = in_ECX[0x58];
    iVar4 = 8 - *(int *)(iVar3 + 0x5dc);
    if (*(int *)(iVar3 + iVar5 * 4 + 0x2540) <= iVar4) {
      iVar4 = FUN_100dfe60(&DAT_101adf64);
      iVar3 = in_ECX[0x58];
      iVar4 = *(int *)(iVar3 + iVar4 * 4 + 0x2540);
    }
    if (iVar4 == 0) goto LAB_10034b3f;
    FUN_10038f10(iVar3,3);
    pcVar6 = "weapons/vp70/vp70_magout.wav";
  }
  *(undefined4 *)(in_ECX[0x58] + 0x5dc) = 0;
  _DAT_102119bc = *DAT_10223188 + 2.0;
  in_ECX[0x76] = (int)_DAT_102119bc;
  in_ECX[0x73] = (int)_DAT_102119bc;
  FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,pcVar6,0x3f800000,0,0,100);
  in_ECX[0x1e] = (int)CDualWeapon::ReloadFinishLeft;
  (**(code **)(*in_ECX + 8))(0x3f800000);
LAB_10034b3f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

