// rea decompile_all
// name: FUN_10108bc0
// address: 0x10108bc0
// body: available
// range: 0x10108bc0-0x10108d7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10108bc0(int *param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_ECX;
  char *pcVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (*DAT_10223188 <= (float)in_ECX[0x16] && (float)in_ECX[0x16] != *DAT_10223188) {
    return;
  }
  iVar3 = FUN_10119060(in_ECX[0x5f],param_1);
  if (iVar3 == 0) {
    return;
  }
  pcVar7 = "trigger_secret";
  piVar8 = (int *)in_ECX[1];
  fVar2 = DAT_10223188[0x26];
  pbVar4 = (byte *)(*piVar8 + (int)fVar2);
  do {
    bVar1 = *pbVar4;
    bVar9 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10108c33:
      uVar5 = -(uint)bVar9 | 1;
      goto LAB_10108c38;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar9 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10108c33;
    pbVar4 = pbVar4 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_10108c38:
  if (uVar5 == 0) {
    if (piVar8[0x65] == 0) {
      return;
    }
    pcVar7 = "player";
    pbVar4 = (byte *)(*(int *)(piVar8[0x65] + 0x80) + (int)fVar2);
    do {
      bVar1 = *pbVar4;
      bVar9 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_10108c78:
        uVar5 = -(uint)bVar9 | 1;
        goto LAB_10108c7d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar9 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_10108c78;
      pbVar4 = pbVar4 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_10108c7d:
    if (uVar5 != 0) {
      return;
    }
    DAT_10223188[9] = DAT_10223188[9] + 1.0;
    piVar8 = (int *)in_ECX[1];
  }
  if (piVar8[0x7b] != 0) {
    FUN_100fc9f0(piVar8[0x83],2,piVar8[0x7b] + (int)fVar2,0x3f800000,0x3f4ccccd,0,100);
  }
  FUN_10017740(param_1);
  uVar11 = 0;
  uVar10 = 3;
  uVar6 = FUN_10017790(3,0);
  FUN_10102930(uVar6,uVar10,uVar11);
  if ((*(int *)(in_ECX[1] + 0x1d8) != 0) && (iVar3 = (**(code **)(*param_1 + 0xd0))(), iVar3 != 0))
  {
    FUN_1011a180(*(int *)(in_ECX[1] + 0x1d8) + (int)DAT_10223188[0x26],param_1);
  }
  if ((float)in_ECX[0x43] <= 0.0) {
    in_ECX[0x1f] = 0;
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
    in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
    return;
  }
  in_ECX[0x1e] = (int)CTriggerMultiple::MultiWaitOver;
  (**(code **)(*in_ECX + 8))(in_ECX[0x43]);
  return;
}

