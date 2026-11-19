// rea decompile_all
// name: FUN_100f4090
// address: 0x100f4090
// body: available
// range: 0x100f4090-0x100f49fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4090(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *in_ECX;
  undefined4 *puVar8;
  char *pcVar9;
  float10 fVar10;
  undefined4 *puVar11;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [268];
  uint local_14;
  
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffff0;
  FUN_100dff40(local_120);
  _DAT_10226478 = *DAT_10223188;
  *(int *)in_ECX[1] = (int)"player" - (int)DAT_10223188[0x26];
  *(undefined4 *)(in_ECX[1] + 0x164) = 0x42c80000;
  *(undefined4 *)(in_ECX[1] + 0x1c0) = 0;
  *(undefined4 *)(in_ECX[1] + 0x170) = 0x40000000;
  *(undefined4 *)(in_ECX[1] + 0x10c) = 3;
  *(undefined4 *)(in_ECX[1] + 0x108) = 3;
  *(undefined4 *)(in_ECX[1] + 0x1b4) = *(undefined4 *)(in_ECX[1] + 0x164);
  *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) & 0x100000;
  *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) | 8;
  *(undefined4 *)(in_ECX[1] + 0x1e4) = 0x40000000;
  *(undefined4 *)(in_ECX[1] + 0x118) = 0;
  *(undefined4 *)(in_ECX[1] + 0x174) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1dc) = 0;
  *(undefined4 *)(in_ECX[1] + 0x1e0) = 0;
  *(undefined4 *)(in_ECX[1] + 0x120) = 0x3f800000;
  *(undefined4 *)(in_ECX[1] + 0x11c) = 0x3f800000;
  in_ECX[0x932] = -1;
  in_ECX[0xc3] = 0;
  in_ECX[0x8b9] = 0;
  in_ECX[0x93b] = 0;
  in_ECX[0x7c6] = -1;
  in_ECX[0x8c4] = 0;
  in_ECX[0x8c6] = 0;
  in_ECX[0x8c8] = 0;
  *(undefined1 *)(in_ECX + 0x8c7) = 0;
  FUN_100f39e0(100);
  in_ECX[0x9f7] = 0;
  in_ECX[0x9f8] = 0;
  in_ECX[0x9f9] = 0;
  in_ECX[0x9fa] = 0;
  in_ECX[0x9fb] = 0;
  in_ECX[0x9fc] = 0;
  in_ECX[0x9fd] = 0;
  in_ECX[0x9fe] = 0;
  in_ECX[0x9ff] = 0;
  in_ECX[0xa00] = 0;
  in_ECX[0xa01] = 0;
  in_ECX[0xa02] = 0;
  FUN_100dd990(1,1);
  in_ECX[0x7aa] = 0;
  *(undefined4 *)(in_ECX[1] + 0x274) = 0x42b40000;
  in_ECX[0x79e] = 0;
  in_ECX[0x79f] = 0;
  *(undefined2 *)(in_ECX + 0x7a0) = 0;
  in_ECX[0x8c5] = 1;
  FUN_10017740(0);
  FUN_10017740(0);
  in_ECX[0x9ab] = (int)*DAT_10223188;
  in_ECX[0xfa] = (int)*DAT_10223188;
  in_ECX[0x7cb] = 0;
  in_ECX[0xf4] = (int)*DAT_10223188;
  if (((DAT_10222ee4 != (int *)0x0) && (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 != 0))
     && (iVar3 = 1, 0 < (int)DAT_10223188[0x24])) {
    do {
      piVar4 = (int *)FUN_10119680(iVar3);
      if ((piVar4 != (int *)0x0) && (piVar4 == in_ECX)) {
        in_ECX[0xf1] = iVar3 * 0x32;
        if (0x167 < iVar3 * 0x32) {
          iVar3 = (*DAT_102230b0)(0,0x15e);
          in_ECX[0xf1] = iVar3;
        }
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 <= (int)DAT_10223188[0x24]);
  }
  in_ECX[0x137] = 0;
  *(undefined1 *)(in_ECX + 0xea) = 0;
  pcVar5 = (char *)(*DAT_10223030)("sv_custommaterials");
  pcVar9 = pcVar5;
  do {
    cVar2 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar2 != '\0');
  if ((uint)((int)pcVar9 - (int)(pcVar5 + 1)) < 3) {
    pcVar5 = "0";
  }
  (*DAT_10223128)(*(undefined4 *)(in_ECX[1] + 0x20c),&DAT_101a13f0,pcVar5);
  DAT_10226475 = 1;
  (*DAT_10222fec)(*(undefined4 *)(in_ECX[1] + 0x20c),"donatorcheck\n");
  (*DAT_10223128)(*(undefined4 *)(in_ECX[1] + 0x20c),&DAT_101a1d74,&DAT_101a1234);
  (*DAT_10223128)(*(undefined4 *)(in_ECX[1] + 0x20c),&DAT_101db584,&DAT_101be9f4);
  if (DAT_10222f14 != 0) {
    in_ECX[0xfd] = 0x1010101;
    in_ECX[0xfe] = 0x1010101;
    in_ECX[0xff] = 0x1010101;
    in_ECX[0x100] = 0x1010101;
    in_ECX[0x101] = 0x1010101;
    in_ECX[0x102] = 0x1010101;
    in_ECX[0x103] = 0x1010101;
    in_ECX[0x104] = 0x1010101;
  }
  in_ECX[0x136] = (int)*DAT_10223188;
  *(undefined1 *)(in_ECX + 0x13a) = 0;
  in_ECX[0x13b] = 0;
  in_ECX[0x13c] = 0;
  *(undefined4 *)(in_ECX[1] + 0x264) = 0;
  *(undefined1 *)((int)in_ECX + 0x501) = 0;
  fVar1 = *DAT_10223188;
  in_ECX[0x141] = (int)fVar1;
  in_ECX[0x13d] = (int)fVar1;
  in_ECX[0x142] = -1;
  in_ECX[0x13e] = -1;
  in_ECX[0x877] = (int)*DAT_10223188;
  DAT_10226718 = 0;
  DAT_10226474 = 0;
  iVar3 = in_ECX[1];
  in_ECX[0x17c] = 2;
  *(undefined1 *)(in_ECX + 0x17d) = 0;
  *(undefined8 *)(in_ECX + 0x186) = *(undefined8 *)(iVar3 + 8);
  in_ECX[0x188] = *(int *)(iVar3 + 0x10);
  *(undefined1 *)((int)in_ECX + 0x1f2a) = 0;
  uVar7 = *(undefined4 *)(iVar3 + 0x20c);
  uVar6 = (*DAT_10223030)("cof_walksteptime");
  (*DAT_10223128)(uVar7,&DAT_101a1c8c,uVar6);
  uVar7 = *(undefined4 *)(in_ECX[1] + 0x20c);
  uVar6 = (*DAT_10223030)("cof_runsteptime");
  (*DAT_10223128)(uVar7,&DAT_101a1c90,uVar6);
  uVar7 = *(undefined4 *)(in_ECX[1] + 0x20c);
  uVar6 = (*DAT_10223030)("cof_sprintsteptime");
  (*DAT_10223128)(uVar7,&DAT_101a1c94,uVar6);
  in_ECX[0x108] = 0;
  in_ECX[0x7a3] = 0;
  in_ECX[0x7ae] = -1;
  *(undefined1 *)(in_ECX + 0x7be) = 0;
  FUN_10117180(*(undefined4 *)(in_ECX[1] + 0x20c),*(undefined4 *)(in_ECX[1] + 0x20c));
  FUN_10119810();
  FUN_10017740(0);
  if (((in_ECX[0x8d7] == 0) || (in_ECX[0x8d8] == 0)) ||
     ((in_ECX[0x8d9] == 0 || (in_ECX[0x8da] == 0)))) {
    iVar3 = (*DAT_102230b0)(1,9);
    in_ECX[0x8d7] = iVar3;
    iVar3 = (*DAT_102230b0)(1,9);
    in_ECX[0x8d8] = iVar3;
    iVar3 = (*DAT_102230b0)(1,9);
    in_ECX[0x8d9] = iVar3;
    iVar3 = (*DAT_102230b0)(1,9);
    in_ECX[0x8da] = iVar3;
  }
  *(undefined8 *)(in_ECX + 0x7b5) = DAT_10222f34;
  in_ECX[0x7b7] = DAT_10222f3c;
  *(undefined1 *)(in_ECX + 0x7b2) = 0;
  *(undefined1 *)(in_ECX + 0x89b) = 0;
  in_ECX[0x89d] = 0;
  in_ECX[0x89f] = 0;
  in_ECX[0x7b3] = 0;
  in_ECX[0x7a8] = 0;
  FUN_100f2d40();
  FUN_100f2d00();
  in_ECX[0x875] = 0;
  in_ECX[0x874] = (int)*DAT_10223188;
  in_ECX[0x812] = (int)*DAT_10223188;
  in_ECX[0x80e] = 0;
  in_ECX[0x87c] = 0x42c80000;
  fVar1 = *DAT_10223188;
  in_ECX[0x87e] = (int)fVar1;
  in_ECX[0x87d] = (int)fVar1;
  (*DAT_10223000)(8,DAT_1022657c,0,*(undefined4 *)(in_ECX[1] + 0x20c));
  (*DAT_10223008)((int)(float)in_ECX[0x87c]);
  (*DAT_1022301c)(0);
  (*DAT_10223004)();
  in_ECX[0x942] = 0;
  *(undefined4 *)(in_ECX[1] + 0x218) = 0;
  in_ECX[0x943] = -1;
  in_ECX[0x999] = 0;
  fVar1 = *DAT_10223188;
  in_ECX[0x8db] = 0;
  in_ECX[0x92b] = 0;
  in_ECX[0x82] = 0x3f000000;
  in_ECX[199] = 0xf7;
  in_ECX[0x929] = (int)(fVar1 + 2.0);
  fVar10 = (float10)FUN_1011ab20();
  in_ECX[0xc2] = (int)(float)fVar10;
  (**(code **)(*in_ECX + 0xac))();
  in_ECX[0x8aa] = 99;
  in_ECX[0x8a9] = 0x3f800000;
  in_ECX[0x8b1] = 0;
  (**(code **)(*DAT_10222ee4 + 0xe4))();
  iVar3 = (**(code **)(*DAT_10222ee4 + 0x60))();
  if ((*(byte *)(iVar3 + 0x224) & 1) != 0) {
    *(uint *)(in_ECX[1] + 0x16c) = *(uint *)(in_ECX[1] + 0x16c) | 0x80000000;
  }
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),"models/player.mdl");
  DAT_10222ef8 = *(undefined4 *)(in_ECX[1] + 0xb4);
  uVar7 = FUN_1000e950(1);
  *(undefined4 *)(in_ECX[1] + 300) = uVar7;
  if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x4000) == 0) {
    puVar11 = &local_12c;
    local_12c = 0x41800000;
    local_128 = 0x41800000;
    puVar8 = &local_138;
    local_124 = 0x42100000;
    local_138 = 0xc1800000;
    local_134 = 0xc1800000;
    local_130 = 0xc2100000;
  }
  else {
    puVar11 = &local_138;
    local_138 = 0x41800000;
    local_134 = 0x41800000;
    puVar8 = &local_12c;
    local_130 = 0x41900000;
    local_12c = 0xc1800000;
    local_128 = 0xc1800000;
    local_124 = 0xc1900000;
  }
  FUN_1011a030(in_ECX[1],puVar8,puVar11);
  iVar3 = in_ECX[1];
  local_124 = 0x41e00000;
  *(undefined8 *)(iVar3 + 0x178) = 0;
  *(undefined4 *)(iVar3 + 0x180) = 0x41e00000;
  (**(code **)(*in_ECX + 0x30))();
  local_124 = 0;
  in_ECX[0xce] = 0;
  in_ECX[0xcf] = 0x42000000;
  in_ECX[0xd0] = 0;
  if (in_ECX[0x8a3] == -1) {
    (*DAT_1022303c)(1,"Couldn\'t alloc player sound slot!\n");
  }
  in_ECX[0x93a] = 0;
  in_ECX[0x94d] = 0;
  iVar3 = 0x20;
  in_ECX[0x933] = 1;
  in_ECX[0x941] = -1;
  in_ECX[0x936] = 0;
  in_ECX[0x94c] = 0;
  in_ECX[0x93f] = -1;
  piVar4 = in_ECX + 0x970;
  do {
    piVar4[-0x20] = 0;
    *piVar4 = 0;
    iVar3 = iVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (iVar3 != 0);
  in_ECX[0x997] = 0;
  in_ECX[0x996] = 0;
  in_ECX[0x9f6] = (int)*DAT_10223188;
  (**(code **)(*DAT_10222ee4 + 0x50))();
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

