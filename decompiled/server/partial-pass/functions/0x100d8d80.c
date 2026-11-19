// rea decompile_all
// name: FUN_100d8d80
// address: 0x100d8d80
// body: available
// range: 0x100d8d80-0x100d8ea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d8d80(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
  if (in_ECX[0x70] != 0) {
    iVar4 = in_ECX[0x40];
    if (iVar4 == 0) {
      iVar3 = in_ECX[0x68];
    }
    else if (iVar4 == 1) {
      iVar3 = in_ECX[0x69];
    }
    else {
      iVar3 = 0;
    }
    pcVar6 = "func_tracktrain";
    pbVar5 = (byte *)(**(int **)(param_1 + 4) + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100d8df0:
        uVar2 = -(uint)bVar7 | 1;
        goto LAB_100d8df5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100d8df0;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar2 = 0;
LAB_100d8df5:
    if (uVar2 == 0) {
      iVar3 = FUN_100d43f0(iVar3);
      in_ECX[0x6e] = iVar3;
      if ((iVar3 == 2) && (iVar4 != in_ECX[0x6f])) {
        in_ECX[0x70] = 0;
        if (iVar4 != 0) {
          (**(code **)(*in_ECX + 0x124))();
          return;
        }
        (**(code **)(*in_ECX + 0x128))();
        return;
      }
    }
    else {
      if ((((iVar3 != 0) && (iVar4 = FUN_100d1f00(), iVar4 != 0)) &&
          (*(int *)(in_ECX[0x6a] + 0xe0) != iVar4)) &&
         (iVar4 = FUN_100183a0(param_3,in_ECX[0x6f]), iVar4 != 0)) {
        in_ECX[0x6f] = (uint)(in_ECX[0x6f] == 0);
      }
      (**(code **)(*in_ECX + 0x134))(in_ECX[0x6f]);
    }
  }
  return;
}

