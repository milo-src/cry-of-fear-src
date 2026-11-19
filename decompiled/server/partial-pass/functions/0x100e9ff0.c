// rea decompile_all
// name: FUN_100e9ff0
// address: 0x100e9ff0
// body: available
// range: 0x100e9ff0-0x100ea1e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e9ff0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  
  iVar2 = FUN_10118460(0,"cof_phonecheck");
  if (iVar2 != 0) {
    uVar9 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c);
    iVar3 = FUN_10090ee0(*(undefined4 *)(iVar2 + 4));
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x19c) = uVar9;
    iVar2 = *(int *)(iVar2 + 4);
    if (*(float *)(iVar2 + 0x168) == 1.0) {
      iVar3 = param_1;
      FUN_10090ee0(iVar2);
      FUN_100a1cd0(iVar3);
    }
    else {
      iVar3 = param_1;
      FUN_10090ee0(iVar2,param_1);
      FUN_10094270(iVar3);
    }
  }
  if (((*(char *)(in_ECX + 0x399) == '\0') && (*(char *)(in_ECX + 0x1ee8) == '\0')) &&
     (iVar2 = *(int *)(in_ECX + 0x252c), iVar2 != 0)) {
    pcVar7 = "weapon_mobile";
    iVar3 = *(int *)(*(int *)(iVar2 + 4) + 0x20c);
    pbVar6 = (byte *)(*(int *)(-(uint)(iVar3 != 0) & iVar3 + 0x80U) + (int)DAT_10223188[0x26]);
    do {
      bVar1 = *pbVar6;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100ea0e0:
        uVar4 = -(uint)bVar8 | 1;
        goto LAB_100ea0e5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100ea0e0;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100ea0e5:
    if ((uVar4 == 0) && ((param_1 == 0x38f || (param_1 == 0x70)))) {
      *(undefined1 *)(in_ECX + 0x399) = 1;
      piVar5 = (int *)FUN_10052e30(*(undefined4 *)(iVar2 + 4));
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),0,"phone/tone_send.wav",0x3f800000,
                   0x3f4ccccd,0,100);
      *(uint *)(in_ECX + 0x2500) = *(uint *)(in_ECX + 0x2500) | 8;
      *(undefined4 *)(in_ECX + 0x1eb4) = 1;
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x260) = 0x40a00000;
      iVar2 = *(int *)(in_ECX + 0x1e98);
      *(float *)(in_ECX + 0x308) = *DAT_10223188 + 4.0;
      piVar5[0x76] = (int)(*DAT_10223188 + 1.1);
      if (iVar2 == 0) {
        uVar9 = 0xc;
      }
      else {
        uVar9 = 0xd;
      }
      (**(code **)(*piVar5 + 0x198))(uVar9,1,0);
      *(undefined1 *)(in_ECX + 0x1ee8) = 1;
      *(undefined4 *)(in_ECX + 0x3a0) = 1;
      *(float *)(in_ECX + 0x39c) = *DAT_10223188 + 1.0;
    }
  }
  return;
}

