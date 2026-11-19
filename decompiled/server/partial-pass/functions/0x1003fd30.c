// rea decompile_all
// name: FUN_1003fd30
// address: 0x1003fd30
// body: available
// range: 0x1003fd30-0x1003ff0c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003fd30(void)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *in_ECX;
  float fVar4;
  undefined4 uVar5;
  undefined1 local_54 [16];
  float local_44;
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (*DAT_10223188 < (float)in_ECX[0x73]) {
    return;
  }
  if (*DAT_10223188 < (float)in_ECX[0x74]) {
    return;
  }
  if (in_ECX[0x4a] != 0) {
    return;
  }
  if (in_ECX[0x50] != 0) {
    return;
  }
  (**(code **)(*(int *)in_ECX[0x58] + 8))(0x3e99999a);
  *(code **)(in_ECX[0x58] + 0x78) = CBasePlayer::WeaponMelee;
  FUN_100ea240("pistol_melee",0);
  bVar1 = false;
  FUN_10119320(*(int *)(in_ECX[0x58] + 4) + 0x74);
  (**(code **)(*(int *)in_ECX[0x58] + 0x228))(&local_10);
  local_1c = DAT_10223188[10] * 32.0 + local_10;
  local_18 = DAT_10223188[0xb] * 32.0 + local_c;
  local_14 = DAT_10223188[0xc] * 32.0 + local_8;
  FUN_1011a800(&local_10,&local_1c,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),local_54);
  bVar2 = false;
  if (local_44 < 1.0) {
LAB_1003fe92:
    bVar1 = bVar2;
    if ((local_44 < 1.0) &&
       (((local_24 != 0 || (local_24 = (*DAT_1022305c)(0), local_24 != 0)) &&
        (*(int *)(local_24 + 0x7c) != 0)))) {
      puVar3 = (undefined4 *)(*in_ECX + 0x198);
      uVar5 = 10;
      goto LAB_1003feda;
    }
  }
  else {
    FUN_1011a7e0(&local_10,&local_1c,0,3,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),
                 local_54);
    if (local_44 < 1.0) {
      bVar2 = true;
      goto LAB_1003fe92;
    }
  }
  puVar3 = (undefined4 *)(*in_ECX + 0x198);
  if (bVar1) {
    uVar5 = 10;
  }
  else {
    uVar5 = 0xb;
  }
LAB_1003feda:
  (*(code *)*puVar3)(uVar5,1,0);
  fVar4 = *DAT_10223188 + 1.0;
  in_ECX[0x76] = (int)fVar4;
  in_ECX[0x74] = (int)fVar4;
  in_ECX[0x73] = (int)fVar4;
  return;
}

