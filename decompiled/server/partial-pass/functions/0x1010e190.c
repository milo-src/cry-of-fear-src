// rea decompile_all
// name: CMultiManager::ManagerUse
// address: 0x1010e190
// body: available
// range: 0x1010e190-0x1010e560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CMultiManager::ManagerUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CMultiManager::ManagerUse
          (CMultiManager *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  CMultiManager *this_00;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  
                    /* 0x10e190  174
                       ?ManagerUse@CMultiManager@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar4 = *(int *)(this + 4);
  uVar2 = *(uint *)(iVar4 + 0x1a4);
  if ((uVar2 & 4) != 0) {
    if (*(int *)(this + 0xdc) != 0) {
      if (param_3 == 1) {
        if ((uVar2 & 0x20) == 0) {
          return;
        }
        (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": Loop already active.\n",
                        *(int *)(iVar4 + 0x1d0) + (int)DAT_10223188[0x26]);
        return;
      }
      if ((uVar2 & 0x20) != 0) {
        (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": Loop halted on request.\n",
                        *(int *)(iVar4 + 0x1d0) + (int)DAT_10223188[0x26]);
        iVar4 = *(int *)(this + 4);
      }
      *(undefined4 *)(this + 0xdc) = 0;
      if ((-1 < (int)*(uint *)(iVar4 + 0x1a4)) && ((*(uint *)(iVar4 + 0x1a4) & 8) == 0)) {
        *(undefined4 *)(this + 0x78) = 0;
        if ((*(byte *)(iVar4 + 0x1a4) & 0x20) == 0) {
          return;
        }
        (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": loop halted.\n",
                        *(int *)(iVar4 + 0x1d0) + (int)DAT_10223188[0x26]);
        return;
      }
      *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
      (**(code **)(*(int *)this + 8))(0x3dcccccd);
      *(undefined4 *)(this + 0x80) = 0;
      if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) == 0) {
        return;
      }
      (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": loop halted (removing).\n",
                      *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26]);
      return;
    }
    if (param_3 == 0) {
      if ((uVar2 & 0x20) == 0) {
        return;
      }
      (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": Loop already inactive.\n",
                      *(int *)(iVar4 + 0x1d0) + (int)DAT_10223188[0x26]);
      return;
    }
  }
  iVar1 = FUN_10119060(*(undefined4 *)(this + 0x174));
  iVar4 = *(int *)(this + 4);
  if (iVar1 == 0) {
    if ((*(byte *)(iVar4 + 0x1a4) & 0x20) != 0) {
      (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": Can\'t trigger, locked by master \"%s\".\n",
                      *(int *)(iVar4 + 0x1d0) + (int)DAT_10223188[0x26],
                      *(int *)(this + 0x174) + (int)DAT_10223188[0x26]);
      return;
    }
  }
  else if (((int)*(uint *)(iVar4 + 0x1a4) < 0) || ((*(uint *)(iVar4 + 0x1a4) & 1) == 0)) {
    FUN_10017740();
    fVar6 = *(float *)(this + 0x16c);
    *(undefined4 *)(this + 0xe4) = 0;
    if (*(float *)(this + 0x170) == 0.0) {
      if (fVar6 == 0.0) {
        fVar6 = 0.0;
        *(undefined4 *)(this + 0xdc) = 2;
      }
      else {
        *(undefined4 *)(this + 0xdc) = 1;
      }
    }
    else {
      fVar5 = (float10)(*DAT_102230b4)(fVar6,*(float *)(this + 0x170));
      fVar6 = (float)fVar5;
      *(undefined4 *)(this + 0xdc) = 1;
    }
    *(float *)(this + 0xe8) = *DAT_10223188 + fVar6;
    if (((0 < *(int *)(this + 0xe0)) && (*(int *)(this + 0x178) == 0)) &&
       (*(float *)(this + 300) < 0.0)) {
      fVar6 = fVar6 + *(float *)(this + 300);
    }
    iVar4 = *(int *)(this + 4);
    uVar2 = *(uint *)(iVar4 + 0x1a4);
    if ((uVar2 & 0x40000000) != 0) {
      *(USE_TYPE *)(this + 0x18c) = param_3;
      uVar2 = *(uint *)(iVar4 + 0x1a4);
    }
    pcVar3 = ManagerUse;
    if ((uVar2 & 4) == 0) {
      pcVar3 = (code *)0x0;
    }
    *(code **)(this + 0x80) = pcVar3;
    if (0.0 < fVar6) {
      if ((*(byte *)(iVar4 + 0x1a4) & 0x20) != 0) {
        (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": Begin in %f seconds.\n",
                        *(int *)(iVar4 + 0x1d0) + (int)DAT_10223188[0x26],(double)fVar6);
      }
      *(code **)(this + 0x78) = ManagerThink;
      (**(code **)(*(int *)this + 8))();
      return;
    }
    *(code **)(this + 0x78) = ManagerThink;
    ManagerThink(this);
  }
  else {
    this_00 = (CMultiManager *)FUN_1010a2f0();
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
      (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": Creating clone.\n");
    }
    ManagerUse(this_00,param_1,param_2,param_3,param_4);
    if (*(int *)(this + 0x180) != 0) {
      FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(this + 0x180),this_00,this,3,0);
      return;
    }
  }
  return;
}

