// rea decompile_all
// name: CFuncMortarField::FieldUse
// address: 0x100c3630
// body: available
// range: 0x100c3630-0x100c394f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncMortarField::FieldUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CFuncMortarField::FieldUse
          (CFuncMortarField *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  float10 fVar4;
  float fVar5;
  undefined1 local_78 [20];
  undefined1 local_64 [36];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0xc3630  119
                       ?FieldUse@CFuncMortarField@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  fVar4 = (float10)(*DAT_102230b4)(*(undefined4 *)(*(int *)(this + 4) + 0xdc),
                                   *(undefined4 *)(*(int *)(this + 4) + 0xe8));
  local_c = (float)fVar4;
  fVar4 = (float10)(*DAT_102230b4)(*(undefined4 *)(*(int *)(this + 4) + 0xe0),
                                   *(undefined4 *)(*(int *)(this + 4) + 0xec));
  local_10 = (float)fVar4;
  local_18 = *(float *)(*(int *)(this + 4) + 0xf0);
  if (*(int *)(this + 0x194) == 1) {
    if (param_1 != (CBaseEntity *)0x0) {
      local_8 = *(float *)(*(int *)(param_1 + 4) + 8);
      fVar5 = *(float *)(*(int *)(param_1 + 4) + 0xc);
      goto LAB_100c3776;
    }
  }
  else if (*(int *)(this + 0x194) == 2) {
    local_8 = local_c;
    if ((*(int *)(this + 0x180) != 0) &&
       (iVar1 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x180)),
       local_8 = local_c, iVar1 != 0)) {
      local_8 = *(float *)(*(int *)(iVar1 + 4) + 0xac) * *(float *)(*(int *)(this + 4) + 0xf4) +
                *(float *)(*(int *)(this + 4) + 0xdc);
    }
    fVar5 = local_10;
    if ((*(int *)(this + 0x184) != 0) &&
       (iVar1 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x184)),
       fVar5 = local_10, iVar1 != 0)) {
      fVar5 = *(float *)(*(int *)(iVar1 + 4) + 0xac) * *(float *)(*(int *)(this + 4) + 0xf8) +
              *(float *)(*(int *)(this + 4) + 0xe0);
    }
    goto LAB_100c3776;
  }
  local_8 = local_c;
  fVar5 = local_10;
LAB_100c3776:
  local_c = fVar5;
  uVar2 = (*DAT_102230b0)(0x5f,0x7c);
  FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,"weapons/mortar.wav",0x3f800000,0,0,
               uVar2);
  iVar1 = 0;
  local_10 = 2.5;
  if (0 < *(int *)(this + 400)) {
    do {
      local_28 = local_8;
      local_24 = local_c;
      local_20 = local_18;
      local_14 = local_10;
      fVar4 = (float10)(*DAT_102230b4)(*(uint *)(this + 0x188) ^ 0x80000000,*(uint *)(this + 0x188))
      ;
      local_28 = (float)(fVar4 + (float10)local_28);
      fVar4 = (float10)(*DAT_102230b4)(*(uint *)(this + 0x188) ^ 0x80000000,*(uint *)(this + 0x188))
      ;
      local_34 = local_28 + 0.0;
      local_24 = (float)(fVar4 + (float10)local_24);
      local_30 = local_24 + 0.0;
      local_2c = local_20 - 4096.0;
      local_1c = local_24;
      FUN_1011a800(&local_28,&local_34,1,*(undefined4 *)(*(int *)(this + 4) + 0x20c),local_78);
      uVar2 = 0;
      if (param_1 != (CBaseEntity *)0x0) {
        uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20c);
      }
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      piVar3 = (int *)FUN_10017950("monster_mortar",local_64,&local_40,uVar2);
      (**(code **)(*piVar3 + 8))(local_14);
      fVar4 = (float10)(*DAT_102230b4)(0x3e4ccccd,0x3f000000);
      local_10 = (float)(fVar4 + (float10)local_10);
      if (iVar1 == 0) {
        FUN_10100820(0x20,local_64,400,0x3e99999a);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 400));
  }
  return;
}

