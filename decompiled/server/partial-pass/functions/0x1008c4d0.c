// rea decompile_all
// name: FUN_1008c4d0
// address: 0x1008c4d0
// body: available
// range: 0x1008c4d0-0x1008c7a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008c4d0(int param_1,float param_2,float param_3,float param_4,float param_5,int param_6,
                 uint param_7)

{
  float *pfVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  float fVar5;
  undefined1 local_48 [56];
  float local_10;
  float local_c;
  float local_8;
  
  if (*(float *)(in_ECX[1] + 0x170) != 0.0) {
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 0x40) != 0) {
      iVar2 = *(int *)(param_1 + 0x20c);
      if ((iVar2 == 0) && (iVar2 = (*DAT_1022305c)(), iVar2 == 0)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = *(int **)(iVar2 + 0x7c);
      }
      iVar2 = (**(code **)(*piVar4 + 0xd0))();
      if (iVar2 != 0) {
        return;
      }
      if ((*(int *)(param_1 + 0x19c) != 0) &&
         (iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x19c) + 0x7c) + 0xd0))(), iVar2 != 0))
      {
        return;
      }
    }
    in_ECX[0x87] = *(int *)(param_6 + 0x34);
    (**(code **)(*in_ECX + 0x74))();
    switch(*(undefined4 *)(param_6 + 0x34)) {
    case 1:
      pfVar1 = (float *)(param_6 + 0x14);
      local_10 = *pfVar1 + param_3 * 172.0;
      local_c = *(float *)(param_6 + 0x18) + param_4 * 172.0;
      local_8 = *(float *)(param_6 + 0x1c) + param_5 * 172.0;
      FUN_1011a800(pfVar1,&local_10);
      FUN_10117fe0(local_48,"brains",0);
      uVar3 = (**(code **)(*in_ECX + 0x70))(param_2 * 4.0);
      FUN_1011f900(*pfVar1,*(undefined4 *)(param_6 + 0x18),*(undefined4 *)(param_6 + 0x1c),uVar3);
      fVar5 = DAT_10226884;
      if ((param_7 & 0x2000000) != 0) {
        fVar5 = DAT_10226884 * 2.0;
      }
      param_2 = fVar5 * param_2;
      break;
    case 2:
      param_2 = param_2 * _DAT_10226888;
      break;
    case 3:
      param_2 = param_2 * _DAT_1022688c;
      break;
    case 4:
    case 5:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0x12:
    case 0x13:
      param_2 = param_2 * _DAT_10226894;
      break;
    case 6:
    case 7:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
      param_2 = param_2 * _DAT_10226890;
      break;
    case 8:
      param_2 = 0.0;
      break;
    case 9:
      param_2 = DAT_10226884;
    }
    FUN_10089f30();
    uVar3 = (**(code **)(*in_ECX + 0x70))(param_2 + param_2);
    FUN_1011f900(*(undefined4 *)(param_6 + 0x14),*(undefined4 *)(param_6 + 0x18),
                 *(undefined4 *)(param_6 + 0x1c),uVar3);
    FUN_1011b640(param_1);
  }
  return;
}

