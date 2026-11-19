// rea decompile_all
// name: FUN_100bc070
// address: 0x100bc070
// body: available
// range: 0x100bc070-0x100bc21e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bc070(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float fVar3;
  undefined1 local_60 [28];
  float local_44;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = in_ECX[1];
  if ((((*(byte *)(iVar1 + 0x1a4) & 0x40) != 0) || (in_ECX[0xdd] < 1)) ||
     (in_ECX[0xdc] < in_ECX[0xdd])) {
    local_20 = (float)in_ECX[0xde];
    if ((float)in_ECX[0xde] == 0.0) {
      local_c = *(float *)(iVar1 + 0xc) - 0.0;
      local_8 = *(float *)(iVar1 + 0x10) - 2048.0;
      local_10 = *(float *)(iVar1 + 8) - 0.0;
      FUN_1011a800((float *)(iVar1 + 8),&local_10,1,*(undefined4 *)(iVar1 + 0x20c),local_60);
      iVar1 = in_ECX[1];
      in_ECX[0xde] = (int)local_44;
      local_20 = local_44;
    }
    local_28 = *(float *)(iVar1 + 8) - 34.0;
    local_24 = *(float *)(iVar1 + 0xc) - 34.0;
    local_1c = *(float *)(iVar1 + 8) + 34.0;
    local_18 = *(float *)(iVar1 + 0xc) + 34.0;
    local_14 = *(undefined4 *)(iVar1 + 0x10);
    if (((*(byte *)(iVar1 + 0x1a4) & 0x20) == 0) &&
       (iVar1 = FUN_10118390(&local_c,2,&local_28,&local_1c,0x28), iVar1 != 0)) {
      return;
    }
    fVar3 = (float)in_ECX[0xe3];
    if (fVar3 != 0.0) {
      if (*(int *)(in_ECX[1] + 0x1cc) != 0) {
        FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1cc));
        fVar3 = (float)in_ECX[0xe3];
      }
      in_ECX[0x1e] = (int)CMonsterMaker::MakeMonsterThink;
      (**(code **)(*in_ECX + 8))(fVar3);
      return;
    }
    uVar2 = FUN_100bbb30();
    if (*(int *)(in_ECX[1] + 0x1cc) != 0) {
      FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1cc),uVar2);
    }
  }
  return;
}

