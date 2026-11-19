// rea decompile_all
// name: FUN_1001ed60
// address: 0x1001ed60
// body: available
// range: 0x1001ed60-0x1001f014 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ed60(int param_1,undefined4 param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(param_1 + 0x228);
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x1e4);
  uVar3 = (*DAT_10222f54)(*(int *)(DAT_10223188 + 0x98) + *(int *)(param_1 + 0x13c));
  *(undefined4 *)(param_3 + 3) = uVar3;
  *(undefined4 *)((int)param_3 + 0x2c) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(param_3 + 6) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_3 + 9) = *(undefined4 *)(param_1 + 0x1ec);
  *param_3 = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x90);
  *(undefined8 *)((int)param_3 + 0xc) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined4 *)((int)param_3 + 0x14) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined8 *)((int)param_3 + 0x34) = *(undefined8 *)(param_1 + 0x1f8);
  *(undefined4 *)((int)param_3 + 0x3c) = *(undefined4 *)(param_1 + 0x200);
  if ((DAT_10222ee4 == (int *)0x0) || (iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar4 == 0)) {
    *(undefined8 *)((int)param_3 + 0x1c) = *(undefined8 *)(param_1 + 0xe8);
    uVar3 = *(undefined4 *)(param_1 + 0xf0);
  }
  else {
    *(undefined8 *)((int)param_3 + 0x1c) = DAT_10222f34;
    uVar3 = DAT_10222f3c;
  }
  *(undefined4 *)((int)param_3 + 0x24) = uVar3;
  *(undefined4 *)((int)param_3 + 0x44) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined4 *)((int)param_3 + 0x4c) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_3 + 10) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x2ac);
  *(int *)(param_3 + 0xb) = (int)*(float *)(param_1 + 0x238);
  pcVar5 = (char *)(*DAT_1022312c)(param_1);
  pcVar9 = pcVar5;
  do {
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    pcVar9[(int)param_3 + (0x8b - (int)pcVar5)] = cVar1;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)param_3 + 0x5c) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)((int)param_3 + 100) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)((int)param_3 + 0x84) = *(undefined4 *)(param_1 + 0x2a0);
  iVar4 = *(int *)(param_1 + 0x28c);
  if ((iVar4 == 0) && (iVar4 = (*DAT_1022305c)(0), iVar4 == 0)) {
    return;
  }
  iVar4 = *(int *)(iVar4 + 0x7c);
  if (iVar4 != 0) {
    uVar3 = 0;
    *(undefined4 *)(param_3 + 0x37) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x274);
    *(undefined4 *)((int)param_3 + 0x1bc) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x278);
    *(undefined4 *)(param_3 + 0x38) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x27c);
    *(undefined4 *)(param_3 + 0x3a) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x28c);
    if (*(int *)(iVar4 + 0x252c) != 0) {
      uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x252c) + 0x118);
    }
    *(undefined4 *)((int)param_3 + 0x1d4) = uVar3;
    *(undefined4 *)(param_3 + 0x3b) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x294);
    if (*(int *)(iVar4 + 0x252c) != 0) {
      pcVar9 = "weapon_m16";
      iVar7 = *(int *)(*(int *)(*(int *)(iVar4 + 0x252c) + 4) + 0x20c);
      pbVar8 = (byte *)(*(int *)(-(uint)(iVar7 != 0) & iVar7 + 0x80U) +
                       *(int *)(DAT_10223188 + 0x98));
      do {
        bVar2 = *pbVar8;
        bVar10 = bVar2 < (byte)*pcVar9;
        if (bVar2 != *pcVar9) {
LAB_1001ef90:
          uVar6 = -(uint)bVar10 | 1;
          goto LAB_1001ef95;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar8[1];
        bVar10 = bVar2 < (byte)pcVar9[1];
        if (bVar2 != pcVar9[1]) goto LAB_1001ef90;
        pbVar8 = pbVar8 + 2;
        pcVar9 = pcVar9 + 2;
      } while (bVar2 != 0);
      uVar6 = 0;
LAB_1001ef95:
      if ((uVar6 == 0) && (iVar7 = FUN_100e0310(9), iVar7 != 0)) {
        if (*(char *)(iVar7 + 0x200) == '\0') {
          *(undefined4 *)((int)param_3 + 0x1c4) = 0;
        }
        else {
          *(undefined4 *)((int)param_3 + 0x1c4) = 0x3f800000;
        }
      }
      *(undefined4 *)(param_3 + 0x39) = *(undefined4 *)(*(int *)(iVar4 + 0x252c) + 0x19c);
      *(undefined4 *)((int)param_3 + 0x1cc) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x288);
    }
    iVar7 = *(int *)(iVar4 + 4);
    *(undefined8 *)((int)param_3 + 0x1ac) = *(undefined8 *)(iVar7 + 0x268);
    *(undefined4 *)((int)param_3 + 0x1b4) = *(undefined4 *)(iVar7 + 0x270);
    *(undefined4 *)((int)param_3 + 0x1dc) = *(undefined4 *)(iVar4 + 0xc4);
  }
  return;
}

