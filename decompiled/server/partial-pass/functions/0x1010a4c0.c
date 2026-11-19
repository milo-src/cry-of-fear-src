// rea decompile_all
// name: CTriggerCounter::CounterUse
// address: 0x1010a4c0
// body: available
// range: 0x1010a4c0-0x1010a5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CTriggerCounter::CounterUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CTriggerCounter::CounterUse
          (CTriggerCounter *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  bool bVar7;
  
                    /* 0x10a4c0  61
                       ?CounterUse@CTriggerCounter@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  *(int *)(this + 0x14c) = *(int *)(this + 0x14c) + -1;
  FUN_10017740(param_1);
  if (-1 < *(int *)(this + 0x14c)) {
    iVar2 = FUN_100177a0();
    pcVar6 = "player";
    pbVar3 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(iVar2 + 4));
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_1010a528:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_1010a52d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_1010a528;
      pbVar3 = pbVar3 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_1010a52d:
    if ((uVar4 == 0) && ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) == 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    iVar2 = *(int *)(this + 0x14c);
    if (iVar2 == 0) {
      if (bVar7) {
        (*DAT_1022303c)(1,"Sequence completed!");
      }
      uVar5 = FUN_10017790();
      FUN_10108bc0(uVar5);
    }
    else if (bVar7) {
      if (iVar2 == 1) {
        (*DAT_1022303c)(1,"Only 1 more to go...");
        return;
      }
      if (iVar2 != 2) {
        if (iVar2 != 3) {
          (*DAT_1022303c)(1,"There are more to go...");
          return;
        }
        (*DAT_1022303c)(1,"Only 3 more to go...");
        return;
      }
      (*DAT_1022303c)(1,"Only 2 more to go...");
      return;
    }
  }
  return;
}

