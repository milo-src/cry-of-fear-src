// rea decompile_all
// name: FUN_100f14c0
// address: 0x100f14c0
// body: available
// range: 0x100f14c0-0x100f17d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100f14c0(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int in_ECX;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  float10 fVar10;
  undefined4 *puVar11;
  undefined *puVar12;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar4 = FUN_100c19a0(param_1);
  if (iVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_10117010("PLAYER",in_ECX,&DAT_10217fe8,0xcf);
  if (*(int *)(DAT_10223188[0x27] + 0x52c) == 0) {
    (*DAT_1022303c)(1,"No Landmark:%s\n",DAT_10223188[0x27] + 0x530);
    iVar4 = FUN_100df180();
    if (iVar4 == 0) {
      iVar7 = 0;
      iVar9 = 0x80;
    }
    else {
      iVar7 = iVar4 + 0x80;
      iVar9 = iVar7;
    }
    fVar1 = *(float *)(iVar7 + 0x10);
    iVar2 = *(int *)(in_ECX + 4);
    *(ulonglong *)(iVar2 + 8) = CONCAT44(*(float *)(iVar7 + 0xc) + 0.0,*(float *)(iVar7 + 8) + 0.0);
    *(float *)(iVar2 + 0x10) = fVar1 + 1.0;
    iVar7 = *(int *)(in_ECX + 4);
    if (iVar4 == 0) {
      iVar9 = 0;
    }
    *(undefined8 *)(iVar7 + 0x50) = *(undefined8 *)(iVar9 + 0x50);
    *(undefined4 *)(iVar7 + 0x58) = *(undefined4 *)(iVar9 + 0x58);
    iVar4 = *(int *)(in_ECX + 4);
    *(undefined8 *)(in_ECX + 0x618) = *(undefined8 *)(iVar4 + 8);
    *(undefined4 *)(in_ECX + 0x620) = *(undefined4 *)(iVar4 + 0x10);
  }
  else {
    iVar4 = *(int *)(in_ECX + 4);
  }
  *(undefined4 *)(iVar4 + 0x7c) = 0;
  iVar4 = *(int *)(in_ECX + 4);
  *(undefined8 *)(iVar4 + 0x50) = *(undefined8 *)(iVar4 + 0x74);
  *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar4 + 0x7c);
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0xa0) = 1;
  *(undefined4 *)(in_ECX + 0x31c) = 0xf7;
  DAT_10222ef8 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0xb4);
  if ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0x4000) == 0) {
    puVar11 = &local_1c;
    local_1c = 0x41800000;
    local_18 = 0x41800000;
    puVar8 = &local_10;
    local_14 = 0x42100000;
    local_10 = 0xc1800000;
    local_c = 0xc1800000;
    local_8 = 0xc2100000;
  }
  else {
    puVar11 = &local_10;
    local_10 = 0x41800000;
    local_c = 0x41800000;
    puVar8 = &local_1c;
    local_8 = 0x41900000;
    local_1c = 0xc1800000;
    local_18 = 0xc1800000;
    local_14 = 0xc1900000;
  }
  FUN_1011a030(*(int *)(in_ECX + 4),puVar8,puVar11);
  (*DAT_10223128)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),&DAT_101db584,&DAT_101be9f4);
  if (*(int *)(in_ECX + 0x24ec) == 0) {
    puVar12 = &DAT_101a1234;
  }
  else {
    puVar12 = &DAT_101be9f4;
  }
  (*DAT_10223128)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),&DAT_101a1d74,puVar12);
  if (DAT_10222ee4 != (int *)0x0) {
    iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))();
    if (iVar4 == 0) {
      if (*(char *)(in_ECX + 0x43c) == '\0') {
        puVar12 = &DAT_101a1234;
      }
      else {
        puVar12 = &DAT_101be9f4;
      }
      (*DAT_10223128)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),&DAT_101a1470,puVar12);
    }
  }
  uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
  uVar6 = (*DAT_10223030)("cof_walksteptime");
  (*DAT_10223128)(uVar3,&DAT_101a1c8c,uVar6);
  uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
  uVar6 = (*DAT_10223030)("cof_runsteptime");
  (*DAT_10223128)(uVar3,&DAT_101a1c90,uVar6);
  uVar3 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
  uVar6 = (*DAT_10223030)("cof_sprintsteptime");
  (*DAT_10223128)(uVar3,&DAT_101a1c94,uVar6);
  FUN_100f39e0(*(undefined4 *)(in_ECX + 0x2334));
  if (*(int *)(in_ECX + 0x2310) != 0) {
    FUN_100ea5c0(*(int *)(in_ECX + 0x2310),1,0x3f800000);
  }
  _DAT_10226478 = *DAT_10223188;
  fVar10 = (float10)(*DAT_1022302c)("sv_cheats");
  _DAT_10231f64 = (float)fVar10;
  DAT_10226476 = 1;
  uVar3 = *DAT_10223188;
  *(undefined4 *)(in_ECX + 0x614) = uVar3;
  *(undefined4 *)(in_ECX + 0x438) = uVar3;
  return uVar5;
}

