// rea decompile_all
// name: CTapeRecorder::TapeUse
// address: 0x1007c930
// body: available
// range: 0x1007c930-0x1007cb8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CTapeRecorder::TapeUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CTapeRecorder::TapeUse
          (CTapeRecorder *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  char *pcVar4;
  float10 fVar5;
  float fVar6;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  float local_8c;
  undefined1 local_88 [128];
  uint local_8;
  
                    /* 0x7c930  316  ?TapeUse@CTapeRecorder@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((param_1 == (CBaseEntity *)0x0) ||
     (*DAT_10223188 <= *(float *)(this + 0x104) && *(float *)(this + 0x104) != *DAT_10223188))
  goto LAB_1007cb7b;
  iVar1 = (**(code **)(*(int *)param_1 + 0xd0))();
  if (iVar1 == 0) goto LAB_1007cb7b;
  iVar1 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
  if (*(char *)(iVar1 + 0x21d8) == '\0') {
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) == 0) {
      if (*(int *)(this + 0x108) == 0) {
        puVar2 = &DAT_101bc460;
      }
      else {
        puVar2 = (undefined *)((int)DAT_10223188[0x26] + *(int *)(this + 0x108));
      }
    }
    else {
      puVar2 = &DAT_101bc3e0;
    }
    FUN_10119810(iVar1,puVar2,5,0);
    *(undefined1 *)(iVar1 + 0x21d8) = 1;
LAB_1007c9d3:
    fVar6 = *DAT_10223188 + 1.0;
  }
  else {
    fVar5 = (float10)(*DAT_1022302c)("difficulty");
    local_8c = (float)fVar5;
    if (local_8c == 4.0) {
      if (*(int *)(iVar1 + 0x1ef4) != 0) {
        iVar3 = FUN_100e2240("inventoryitems/cassettetape.txt",0);
        if (iVar3 != 0) {
          if (this[0x10c] == (CTapeRecorder)0x0) {
            if (*(int *)(iVar1 + 0x1ef4) == 1) {
              FUN_1001f160(local_88,&DAT_101bc4ec);
            }
            else {
              FUN_1001f160(local_88,&DAT_101bc524,*(int *)(iVar1 + 0x1ef4));
            }
            this[0x10c] = (CTapeRecorder)0x1;
            FUN_10119810(iVar1,local_88,2,0);
            goto LAB_1007c9d3;
          }
          goto LAB_1007caa7;
        }
      }
      FUN_10119810(iVar1,&DAT_101bc4c8,2,0);
    }
    else {
LAB_1007caa7:
      if (*(int *)(*(int *)(this + 4) + 0x1d8) == 0) {
        (*DAT_10223000)(1,DAT_102265d4,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
        (*DAT_10223008)(0);
        pcVar4 = "Unknown area";
      }
      else {
        (*DAT_10223000)();
        (*DAT_10223008)(0);
        pcVar4 = (char *)((int)DAT_10223188[0x26] + *(int *)(*(int *)(this + 4) + 0x1d8));
      }
      (*DAT_10223020)(pcVar4);
      (*DAT_10223004)();
      local_98 = 0;
      local_94 = 0;
      local_90 = 0;
      FUN_10119c00(iVar1,&local_98,0x3dcccccd,0x41200000,0xff,5);
      this[0x10c] = (CTapeRecorder)0x0;
      *(undefined1 *)(iVar1 + 0x21d8) = 1;
    }
    fVar6 = *DAT_10223188 + 2.0;
  }
  *(float *)(this + 0x104) = fVar6;
LAB_1007cb7b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

