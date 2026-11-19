// rea decompile_all
// name: FUN_1000ff30
// address: 0x1000ff30
// body: available
// range: 0x1000ff30-0x10010139 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ff30(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  CBaseEntity *this;
  int in_ECX;
  int iVar4;
  float10 fVar5;
  float local_1c;
  float local_18;
  int local_14;
  int local_10;
  float local_c;
  float local_8;
  
  iVar2 = *(int *)(in_ECX + 4);
  local_8 = *(float *)(iVar2 + 8);
  local_c = *(float *)(iVar2 + 0xc);
  local_10 = *(int *)(iVar2 + 0x10);
  iVar1 = (int)(*(float *)(iVar2 + 0xf4) * 0.5);
  iVar4 = (int)(*(float *)(iVar2 + 0xf8) * 0.5);
  iVar2 = (*DAT_102230b0)(-iVar1,iVar1);
  iVar1 = (*DAT_102230b0)(-iVar4,iVar4);
  local_1c = (float)iVar2 + local_8;
  local_18 = (float)iVar1 + local_c;
  local_14 = local_10;
  iVar2 = FUN_10010430(local_1c,local_18,local_10);
  if (iVar2 != 0) {
    uVar3 = (*DAT_102230b0)(0,4);
    iVar2 = local_10;
    switch(uVar3) {
    case 0:
      iVar2 = (int)"sprites/mist1.spr" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 1:
      iVar2 = (int)"sprites/mist2.spr" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 2:
      iVar2 = (int)"sprites/mist3.spr" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 3:
      iVar2 = (int)"sprites/mist4.spr" - *(int *)(DAT_10223188 + 0x98);
      break;
    case 4:
      iVar2 = (int)"sprites/mist5.spr" - *(int *)(DAT_10223188 + 0x98);
    }
    this = (CBaseEntity *)FUN_1009f400(*(int *)(DAT_10223188 + 0x98) + iVar2,&local_1c,1);
    *(undefined4 *)(*(int *)(this + 4) + 0x14c) = 5;
    *(undefined4 *)(*(int *)(this + 4) + 0x154) = 0x437f0000;
    *(undefined4 *)(*(int *)(this + 4) + 0x158) = 0x437f0000;
    *(undefined4 *)(*(int *)(this + 4) + 0x15c) = 0x437f0000;
    *(undefined4 *)(*(int *)(this + 4) + 0x150) = 0x42000000;
    *(undefined4 *)(*(int *)(this + 4) + 0x160) = 0;
    fVar5 = (float10)(*DAT_102230b4)(0x40400000,0x40e00000);
    *(float *)(*(int *)(this + 4) + 0x20) = (float)fVar5;
    fVar5 = (float10)(*DAT_102230b4)(0x40400000,0x40e00000);
    *(float *)(*(int *)(this + 4) + 0x24) = (float)fVar5;
    fVar5 = (float10)(*DAT_102230b4)(0x40000000,0x40a00000);
    *(float *)(*(int *)(this + 4) + 0x28) = (float)fVar5;
    *(undefined4 *)(*(int *)(this + 4) + 0x148) = 0x3f800000;
    (**(code **)(*(int *)this + 8))(0x3f800000);
    CBaseEntity::SUB_StartFadeInAndOut(this);
  }
  return;
}

