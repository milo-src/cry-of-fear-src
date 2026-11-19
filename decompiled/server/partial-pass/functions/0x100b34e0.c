// rea decompile_all
// name: CCineBlood::BloodGush
// address: 0x100b34e0
// body: available
// range: 0x100b34e0-0x100b378c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CCineBlood::BloodGush(void) */

void __thiscall CCineBlood::BloodGush(CCineBlood *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined1 local_64 [16];
  float local_54;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined8 local_1c;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0xb34e0  22  ?BloodGush@CCineBlood@@QAEXXZ */
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  FUN_10119320(*(int *)(this + 4) + 0x50);
  fVar1 = *(float *)(*(int *)(this + 4) + 0x164);
  *(float *)(*(int *)(this + 4) + 0x164) = fVar1 - 1.0;
  if (fVar1 < 0.0) {
    (*DAT_10222fa0)(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
  }
  fVar5 = (float10)(*DAT_102230b4)(0,0x3f800000);
  local_1c = (double)fVar5;
  if (0.7 <= local_1c) {
    uVar4 = (*DAT_102230b0)(0x32,0x96);
    uVar4 = FUN_101198a0(&local_2c,0xf7,uVar4);
    FUN_10117800(*(int *)(this + 4) + 8,uVar4);
  }
  else {
    uVar4 = FUN_101198a0(&local_2c,0xf7,10,(undefined4)DAT_10222f34,DAT_10222f34._4_4_,DAT_10222f3c)
    ;
    FUN_10117770(*(int *)(this + 4) + 8,uVar4);
  }
  fVar5 = (float10)(*DAT_102230b4)(0,0x3f800000);
  iVar2 = DAT_10223188;
  local_8 = (float)fVar5;
  if (local_8 < 0.75) {
    fVar5 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    iVar3 = DAT_10223188;
    local_10 = *(float *)(iVar2 + 0x2c);
    local_14 = *(float *)(iVar2 + 0x30);
    local_c = (float)(fVar5 * (float10)0.6);
    local_1c._4_4_ = *(float *)(iVar2 + 0x28);
    fVar5 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    iVar2 = *(int *)(this + 4);
    local_8 = (float)(fVar5 * (float10)0.6);
    local_20 = (*(float *)(iVar3 + 0x40) * local_8 + 0.0 + local_1c._4_4_ * local_c) * 256.0 +
               *(float *)(iVar2 + 8);
    local_1c = (double)CONCAT44(((*(float *)(iVar3 + 0x48) * local_8 - 1.0) + local_14 * local_c) *
                                256.0 + *(float *)(iVar2 + 0x10),
                                (*(float *)(iVar3 + 0x44) * local_8 + 0.0 + local_10 * local_c) *
                                256.0 + *(float *)(iVar2 + 0xc));
    local_28 = *(float *)(iVar2 + 0xc) + 0.0;
    local_24 = *(float *)(iVar2 + 0x10) + 64.0;
    local_2c = *(float *)(iVar2 + 8) + 0.0;
    FUN_1011a800(&local_2c,&local_20,1,*(undefined4 *)(iVar2 + 0x20c),local_64);
    if (local_54 != 1.0) {
      FUN_10117700(local_64,0xf7);
    }
  }
  return;
}

