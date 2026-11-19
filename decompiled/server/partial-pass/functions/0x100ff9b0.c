// rea decompile_all
// name: CAmbientGeneric::ToggleUse
// address: 0x100ff9b0
// body: available
// range: 0x100ff9b0-0x100ffe91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CAmbientGeneric::ToggleUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CAmbientGeneric::ToggleUse
          (CAmbientGeneric *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  float fVar7;
  
                    /* 0xff9b0  331
                       ?ToggleUse@CAmbientGeneric@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  iVar4 = *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1d8);
  if ((DAT_10226477 != '\0') &&
     (fVar6 = (float10)(*DAT_1022302c)("host_framerate"), (float)fVar6 != 0.0)) {
    return;
  }
  if (param_3 == 3) {
LAB_100ffb1e:
    if (*(int *)(this + 0x144) != 0) {
      iVar1 = *(int *)(this + 0x114);
      if (iVar1 != 0) {
        if (iVar1 < *(int *)(this + 0x118)) {
          return;
        }
        iVar4 = *(int *)(this + 0x118) + 1;
        *(undefined4 *)(this + 0xec) = *(undefined4 *)(this + 0x120);
        *(int *)(this + 0x118) = iVar4;
        *(undefined4 *)(this + 0xf0) = 0;
        iVar4 = ((0xff - *(int *)(this + 0xe8)) / iVar1) * iVar4 + *(int *)(this + 0xe8);
        if (0xff < iVar4) {
          iVar4 = 0xff;
        }
        *(int *)(this + 0xe4) = iVar4;
LAB_100ffb85:
        (**(code **)(*(int *)this + 8))(0x3dcccccd);
        return;
      }
      *(undefined4 *)(this + 0x144) = 0;
      *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) | 0x10;
      if ((*(int *)(this + 0x124) != 0) || (*(int *)(this + 0x134) != 0)) {
        *(int *)(this + 0xf0) = *(int *)(this + 0x124);
        *(undefined4 *)(this + 0xec) = 0;
        *(undefined4 *)(this + 0x100) = *(undefined4 *)(this + 0x134);
        *(undefined4 *)(this + 0xfc) = 0;
        goto LAB_100ffb85;
      }
      if (*(int *)(this + 0x14c) != 0) {
        FUN_1001e990(*(int *)(this + 0x14c),*(undefined4 *)(this + 0x150),iVar4);
        return;
      }
      iVar1 = *(int *)(this + 4);
      if ((*(byte *)(iVar1 + 0x1a4) & 0x40) == 0) {
        FUN_101182b0(*(undefined4 *)(iVar1 + 0x20c),iVar1 + 8,iVar4,0,0,0x20,0);
        return;
      }
      iVar1 = (*DAT_10223068)(1);
      if (iVar1 == 0) {
        iVar1 = (*DAT_1022305c)(0);
        iVar2 = 0;
        if (iVar1 == 0) goto LAB_100ffc1a;
      }
      iVar2 = *(int *)(iVar1 + 0x7c);
LAB_100ffc1a:
      FUN_1001e990(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c),6,iVar4);
      return;
    }
  }
  else {
    if (*(int *)(this + 0x144) == 0) {
      bVar5 = param_3 == 0;
    }
    else {
      bVar5 = param_3 == 1;
    }
    if (bVar5) {
      return;
    }
    if (param_3 != 2) goto LAB_100ffb1e;
    if (*(int *)(this + 0x144) != 0) {
      fVar7 = 1.0;
      if (param_4 <= 1.0) {
        fVar7 = param_4;
      }
      if (fVar7 < 0.0) {
        fVar7 = 0.01;
      }
      iVar1 = (int)(fVar7 * 255.0);
      *(int *)(this + 0x11c) = iVar1;
      if (*(int *)(this + 0x14c) != 0) {
        FUN_100fc9f0(*(int *)(this + 0x14c),*(undefined4 *)(this + 0x150),iVar4,0,0,0x80,iVar1);
        return;
      }
      iVar2 = *(int *)(this + 4);
      if ((*(byte *)(iVar2 + 0x1a4) & 0x40) == 0) {
        FUN_101182b0(*(undefined4 *)(iVar2 + 0x20c),iVar2 + 8,iVar4,0,0,0x80,iVar1);
        return;
      }
      iVar1 = (*DAT_10223068)(1);
      if (iVar1 == 0) {
        iVar1 = (*DAT_1022305c)(0);
        iVar2 = 0;
        if (iVar1 == 0) goto LAB_100ffad1;
      }
      iVar2 = *(int *)(iVar1 + 0x7c);
LAB_100ffad1:
      FUN_100fcaf0(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c),iVar4);
      return;
    }
  }
  if ((DAT_10226477 != '\0') && (DAT_10223190 != 0)) {
    iVar1 = 1;
    pcVar3 = (char *)(DAT_10223190 + 0x120);
    do {
      if ((((pcVar3[-0x10] == '\0') || (*pcVar3 == '\0')) || (pcVar3[0x10] == '\0')) ||
         (pcVar3[0x20] == '\0')) break;
      iVar1 = iVar1 + 4;
      pcVar3 = pcVar3 + 0x40;
    } while (iVar1 < 0x41);
  }
  if (*(int *)(this + 0x148) == 0) {
    if (*(int *)(this + 0x14c) == 0) {
      iVar1 = *(int *)(this + 4);
      if ((*(byte *)(iVar1 + 0x1a4) & 0x40) == 0) {
        FUN_101182b0(*(undefined4 *)(iVar1 + 0x20c),iVar1 + 8,iVar4,0,0,0x20,0);
      }
      else {
        iVar1 = (*DAT_10223068)(1);
        if (iVar1 == 0) {
          iVar1 = (*DAT_1022305c)(0);
          iVar2 = 0;
          if (iVar1 != 0) goto LAB_100ffd42;
        }
        else {
LAB_100ffd42:
          iVar2 = *(int *)(iVar1 + 0x7c);
        }
        FUN_1001e990(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c),6,iVar4);
      }
    }
    else {
      FUN_100fc9f0(*(int *)(this + 0x14c),*(undefined4 *)(this + 0x150),iVar4,0,0,0x20,100);
    }
  }
  else {
    *(undefined4 *)(this + 0x144) = 1;
  }
  FUN_100fccc0();
  if (*(int *)(this + 0x14c) != 0) {
    FUN_100fc9f0(*(int *)(this + 0x14c),*(undefined4 *)(this + 0x150),iVar4,
                 (float)*(int *)(this + 300) * 0.01,*(undefined4 *)(this + 0xdc),0,
                 *(undefined4 *)(this + 0x11c));
LAB_100ffe78:
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  iVar1 = *(int *)(this + 4);
  if ((*(byte *)(iVar1 + 0x1a4) & 0x40) == 0) {
    FUN_101182b0(*(undefined4 *)(iVar1 + 0x20c),iVar1 + 8,iVar4,(float)*(int *)(this + 300) * 0.01,
                 *(undefined4 *)(this + 0xdc),0,*(undefined4 *)(this + 0x11c));
    goto LAB_100ffe78;
  }
  iVar1 = (*DAT_10223068)(1);
  if (iVar1 == 0) {
    iVar1 = (*DAT_1022305c)(0);
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_100ffe09;
  }
  iVar2 = *(int *)(iVar1 + 0x7c);
LAB_100ffe09:
  FUN_100fcaf0(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c),iVar4);
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

