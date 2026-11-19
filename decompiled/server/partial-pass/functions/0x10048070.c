// rea decompile_all
// name: CInterDoor::EndSequence
// address: 0x10048070
// body: available
// range: 0x10048070-0x1004853f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CInterDoor::EndSequence(void) */

void __thiscall CInterDoor::EndSequence(CInterDoor *this)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  bool bVar9;
  char *pcVar10;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  float local_30;
  int local_2c;
  byte local_28 [32];
  uint local_8;
  
                    /* 0x48070  108  ?EndSequence@CInterDoor@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)(this + 4);
  if (*(int *)(iVar4 + 0x19c) == 0) {
LAB_10048527:
    *(undefined4 *)(iVar4 + 0x19c) = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x19c) + 0x7c);
  if (iVar4 == 0) {
    (*DAT_1022303c)(1,"No USER!\n");
    iVar4 = *(int *)(this + 4);
    goto LAB_10048527;
  }
  piVar3 = (int *)FUN_100125e0(*(undefined4 *)(iVar4 + 4));
  if (piVar3 == (int *)0x0) {
    (*DAT_1022303c)(1,"No PLAYER!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_2c = *(int *)(*(int *)(this + 4) + 0x1cc);
  if (local_2c != 0) {
    iVar8 = *(int *)(DAT_10223188 + 0x98) + local_2c;
    iVar4 = FUN_1000aba0(iVar8,"closegame1");
    if (iVar4 != 0) {
      pcVar10 = "End of apartment demo chapter!";
LAB_1004810e:
      FUN_10119810(piVar3,pcVar10,2,0);
      (**(code **)(*(int *)this + 8))(0x40000000);
      *(code **)(this + 0x78) = EndGame;
      FUN_100ea600(0x3f800000);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar4 = FUN_1000aba0(iVar8,"closegame2");
    if (iVar4 != 0) {
      pcVar10 = "End of city demo chapter!";
      goto LAB_1004810e;
    }
    iVar4 = FUN_1000aba0(iVar8,"closegame3");
    if (iVar4 != 0) {
      pcVar10 = "End of subway demo chapter!";
      goto LAB_1004810e;
    }
    iVar4 = FUN_1000aba0(iVar8,"closegame4");
    if (iVar4 != 0) {
      pcVar10 = "End of forest demo chapter!";
      goto LAB_1004810e;
    }
  }
  pcVar10 = "endingcheck";
  pbVar7 = (byte *)(local_2c + *(int *)(DAT_10223188 + 0x98));
  pbVar5 = pbVar7;
  do {
    bVar1 = *pbVar5;
    bVar9 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_100481e0:
      uVar6 = -(uint)bVar9 | 1;
      goto LAB_100481e5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar5[1];
    bVar9 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_100481e0;
    pbVar5 = pbVar5 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  uVar6 = 0;
LAB_100481e5:
  if (uVar6 != 0) goto LAB_100482b8;
  pbVar5 = pbVar7;
  do {
    bVar1 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar5[(int)&local_2c + (3 - (int)pbVar7)] = bVar1;
  } while (bVar1 != 0);
  if (*(char *)((int)piVar3 + 0x4cd) == '\0') {
    if (*(char *)((int)piVar3 + 0x4ce) == '\0') {
      local_28[8] = 'x';
      local_28[9] = 'i';
      local_28[10] = 't';
      local_28[0xb] = '1';
    }
    else {
      if (*(char *)((int)piVar3 + 0x4ce) != '\x01') goto LAB_1004828b;
      local_28[8] = 'x';
      local_28[9] = 'i';
      local_28[10] = 't';
      local_28[0xb] = '2';
    }
LAB_10048283:
    local_28[0xc] = 0;
    local_28[0] = 0x65;
    local_28[1] = 0x6e;
    local_28[2] = 100;
    local_28[3] = 0x69;
    local_28[4] = 0x6e;
    local_28[5] = 0x67;
    local_28[6] = 0x5f;
    local_28[7] = 0x65;
  }
  else if (*(char *)((int)piVar3 + 0x4cd) == '\x01') {
    if (*(char *)((int)piVar3 + 0x4ce) == '\0') {
      local_28[8] = 'x';
      local_28[9] = 'i';
      local_28[10] = 't';
      local_28[0xb] = '3';
    }
    else {
      if (*(char *)((int)piVar3 + 0x4ce) != '\x01') goto LAB_1004828b;
      local_28[8] = 'x';
      local_28[9] = 'i';
      local_28[10] = 't';
      local_28[0xb] = '4';
    }
    goto LAB_10048283;
  }
LAB_1004828b:
  if (*(char *)((int)piVar3 + 0x4cf) == '\x01') {
    local_28[8] = 'x';
    local_28[9] = 'i';
    local_28[10] = 't';
    local_28[0xb] = '5';
    local_28[0] = 0x65;
    local_28[1] = 0x6e;
    local_28[2] = 100;
    local_28[3] = 0x69;
    local_28[4] = 0x6e;
    local_28[5] = 0x67;
    local_28[6] = 0x5f;
    local_28[7] = 0x65;
    local_28[0xc] = 0;
  }
  pbVar7 = local_28;
LAB_100482b8:
  iVar4 = FUN_10118590(0,pbVar7);
  if (iVar4 == 0) {
    (*DAT_1022303c)(1,"No TARGET!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar8 = *(int *)(iVar4 + 4);
  local_38 = *(undefined4 *)(iVar8 + 8);
  uStack_34 = *(undefined4 *)(iVar8 + 0xc);
  local_30 = *(float *)(iVar8 + 0x10);
  iVar8 = (**(code **)(*piVar3 + 0xd0))();
  if (iVar8 != 0) {
    local_30 = local_30 - *(float *)(piVar3[1] + 0xe4);
  }
  local_30 = local_30 + 1.0;
  FUN_10119fe0(piVar3,&local_38);
  iVar8 = piVar3[1];
  *(ulonglong *)(piVar3 + 0x186) = CONCAT44(uStack_34,local_38);
  piVar3[0x188] = (int)local_30;
  iVar2 = *(int *)(iVar4 + 4);
  *(undefined8 *)(iVar8 + 0x50) = *(undefined8 *)(iVar2 + 0x50);
  *(undefined4 *)(iVar8 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
  iVar8 = piVar3[1];
  *(undefined8 *)(iVar8 + 0x2c) = DAT_10222f34;
  *(undefined4 *)(iVar8 + 0x34) = DAT_10222f3c;
  iVar8 = piVar3[1];
  *(undefined8 *)(iVar8 + 0x20) = *(undefined8 *)(iVar8 + 0x2c);
  *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(iVar8 + 0x34);
  iVar8 = (**(code **)(*piVar3 + 0xd0))();
  if (iVar8 != 0) {
    iVar4 = *(int *)(iVar4 + 4);
    iVar8 = piVar3[1];
    *(undefined8 *)(iVar8 + 0x74) = *(undefined8 *)(iVar4 + 0x50);
    *(undefined4 *)(iVar8 + 0x7c) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)(piVar3[1] + 0xa0) = 1;
  }
  *(uint *)(piVar3[1] + 0x1a8) = *(uint *)(piVar3[1] + 0x1a8) & 0xfffffdff;
  *(undefined4 *)(piVar3[1] + 0xa0) = 1;
  *(undefined1 *)(piVar3 + 0x7a9) = 0;
  if (*(int *)(*(int *)(this + 4) + 0x1f0) != 0) {
    FUN_100fc9f0(*(undefined4 *)(piVar3[1] + 0x20c),0,
                 *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1f0),0x3f800000,
                 0x3f4ccccd,0,100);
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  FUN_10119c00(piVar3,&local_44,0x3f000000,0,0xff,0);
  FUN_100deff0(1);
  piVar3[0x940] = piVar3[0x940] & 0xfffffff6;
  *(uint *)(piVar3[1] + 0x1a8) = *(uint *)(piVar3[1] + 0x1a8) & 0xffffff7f;
  if (*(int *)(this + 0x19c) != 0) {
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x19c),this,this,3,0);
  }
  if (*(int *)(this + 0x18c) != 0) {
    local_2c = *(int *)(this + 0x1ac);
    FUN_100ea5c0(*(int *)(this + 0x18c),(*(byte *)(*(int *)(this + 4) + 0x1a4) & 2) != 0,0);
  }
  piVar3[0x8a5] = 1000;
  *(undefined4 *)(*(int *)(this + 4) + 0x19c) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

