// rea decompile_all
// name: CAmbientGeneric::RampThink
// address: 0x100fd870
// body: available
// range: 0x100fd870-0x100fdde4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CAmbientGeneric::RampThink(void) */

void __thiscall CAmbientGeneric::RampThink(CAmbientGeneric *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  uint local_c;
  uint local_8;
  
                    /* 0xfd870  234  ?RampThink@CAmbientGeneric@@QAEXXZ */
  local_8 = 0;
  iVar1 = *(int *)(this + 4);
  uVar10 = *(uint *)(this + 300);
  iVar3 = *(int *)(this + 0x11c);
  iVar6 = *(int *)(iVar1 + 0x1d8) + *(int *)(DAT_10223188 + 0x98);
  local_c = 0;
  if (*(int *)(this + 0xec) == 0) {
    if (*(int *)(this + 0xf0) != 0) {
LAB_100fd8f8:
      iVar9 = *(int *)(this + 0x128);
      local_c = iVar9 >> 8;
LAB_100fd906:
      if (0 < *(int *)(this + 0xf0)) {
        iVar9 = iVar9 - *(int *)(this + 0xf0);
        goto LAB_100fd912;
      }
      goto LAB_100fd918;
    }
    if ((*(int *)(this + 0xfc) == 0) && (*(int *)(this + 0x100) == 0)) {
      if (*(int *)(this + 0x104) == 0) {
        return;
      }
      if (*(int *)(this + 0xf0) != 0) goto LAB_100fd8f8;
    }
  }
  else {
    iVar9 = *(int *)(this + 0x128);
    local_c = iVar9 >> 8;
    if (*(int *)(this + 0xec) < 1) goto LAB_100fd906;
    iVar9 = iVar9 + *(int *)(this + 0xec);
LAB_100fd912:
    *(int *)(this + 0x128) = iVar9;
LAB_100fd918:
    iVar3 = iVar9 >> 8;
    if (*(int *)(this + 0xe4) < iVar9 >> 8) {
      *(undefined4 *)(this + 0xec) = 0;
      iVar3 = *(int *)(this + 0xe4);
    }
    if (iVar3 < *(int *)(this + 0xe8)) {
      iVar3 = *(int *)(this + 0x14c);
      *(undefined4 *)(this + 0xf0) = 0;
      if (iVar3 != 0) goto LAB_100fd951;
      if ((*(byte *)(iVar1 + 0x1a4) & 0x40) != 0) {
        iVar1 = (*DAT_10223068)(1);
        if (iVar1 == 0) {
          iVar1 = (*DAT_1022305c)(0);
          iVar3 = 0;
          if (iVar1 == 0) goto LAB_100fd9ca;
        }
        iVar3 = *(int *)(iVar1 + 0x7c);
LAB_100fd9ca:
        FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c),6,iVar6,0,0,0x20,100);
        return;
      }
      goto LAB_100fd9fd;
    }
    if (iVar3 < 0x100) {
      if (iVar3 < 1) {
        iVar3 = 1;
      }
    }
    else {
      iVar3 = 0xff;
    }
    *(int *)(this + 0x11c) = iVar3;
    local_8 = 0x80;
    local_c = (uint)(local_c != iVar3);
  }
  uVar8 = local_c;
  if (*(int *)(this + 0xfc) == 0) {
    if (*(int *)(this + 0x100) != 0) {
      iVar9 = *(int *)(this + 0x138);
      local_c = iVar9 >> 8;
LAB_100fda82:
      if (0 < *(int *)(this + 0x100)) {
        iVar9 = iVar9 - *(int *)(this + 0x100);
        goto LAB_100fda91;
      }
      goto LAB_100fda97;
    }
  }
  else {
    iVar9 = *(int *)(this + 0x138);
    local_c = iVar9 >> 8;
    if (*(int *)(this + 0xfc) < 1) goto LAB_100fda82;
    iVar9 = iVar9 + *(int *)(this + 0xfc);
    iVar1 = *(int *)(this + 4);
LAB_100fda91:
    *(int *)(this + 0x138) = iVar9;
LAB_100fda97:
    uVar10 = iVar9 >> 8;
    if (*(int *)(this + 0xf4) < (int)uVar10) {
      uVar10 = *(uint *)(this + 0xf4);
      *(undefined4 *)(this + 0xfc) = 0;
    }
    if ((int)uVar10 < *(int *)(this + 0xf8)) {
      iVar3 = *(int *)(this + 0x14c);
      *(undefined4 *)(this + 0x100) = 0;
      if (iVar3 != 0) {
LAB_100fd951:
        FUN_100fc9f0(iVar3,*(undefined4 *)(this + 0x150),iVar6,0,0,0x20,100);
        return;
      }
      if ((*(byte *)(iVar1 + 0x1a4) & 0x40) != 0) {
        iVar1 = (*DAT_10223068)(1);
        if ((iVar1 == 0) && (iVar1 = (*DAT_1022305c)(0), iVar1 == 0)) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x7c);
        }
        FUN_1001e990(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c),6,iVar6);
        return;
      }
LAB_100fd9fd:
      FUN_101182b0(*(undefined4 *)(iVar1 + 0x20c),iVar1 + 8,iVar6,0,0,0x20,0);
      return;
    }
    if ((int)uVar10 < 0x65) {
      if ((int)uVar10 < 1) {
        uVar10 = 1;
      }
    }
    else {
      uVar10 = 100;
    }
    bVar11 = local_c != uVar10;
    local_c = uVar8;
    if (bVar11) {
      local_c = 1;
    }
    *(uint *)(this + 300) = uVar10;
    local_8 = local_8 | 0x40;
  }
  iVar1 = *(int *)(this + 0x104);
  iVar9 = iVar3;
  if (iVar1 != 0) {
    iVar4 = *(int *)(this + 0x13c);
    if (0x6fffffff < iVar4) {
      iVar4 = 0;
    }
    iVar4 = iVar4 + *(int *)(this + 0x108);
    *(int *)(this + 0x13c) = iVar4;
    iVar7 = iVar4 >> 8;
    if (iVar4 < 0) {
      uVar8 = (int)*(uint *)(this + 0x108) >> 0x1f;
      *(undefined4 *)(this + 0x13c) = 0;
      iVar1 = (*(uint *)(this + 0x108) ^ uVar8) - uVar8;
      iVar7 = 0;
LAB_100fdbe6:
      *(int *)(this + 0x108) = iVar1;
      iVar1 = *(int *)(this + 0x104);
    }
    else if (0xff < iVar7) {
      uVar8 = (int)*(uint *)(this + 0x108) >> 0x1f;
      *(undefined4 *)(this + 0x13c) = 0xff00;
      iVar7 = 0xff;
      iVar1 = -((*(uint *)(this + 0x108) ^ uVar8) - uVar8);
      goto LAB_100fdbe6;
    }
    if (iVar1 == 1) {
      uVar2 = 0;
      if (iVar7 < 0x80) {
        uVar2 = 0xff;
      }
LAB_100fdc2a:
      *(undefined4 *)(this + 0x140) = uVar2;
    }
    else if (iVar1 == 3) {
      if (iVar7 == 0xff) {
        uVar2 = (*DAT_102230b0)(0,0xff);
        goto LAB_100fdc2a;
      }
    }
    else {
      *(int *)(this + 0x140) = iVar7;
    }
    if (*(int *)(this + 0x10c) != 0) {
      iVar9 = iVar3 + ((*(int *)(this + 0x140) + -0x80) * *(int *)(this + 0x10c)) / 100;
      if (iVar9 < 0x100) {
        if (iVar9 < 1) {
          iVar9 = 1;
        }
      }
      else {
        iVar9 = 0xff;
      }
      local_c = local_c | iVar3 != iVar9;
      local_8 = local_8 | 0x80;
    }
    if (*(int *)(this + 0x110) != 0) {
      uVar8 = uVar10 + ((*(int *)(this + 0x140) + -0x80) * *(int *)(this + 0x110)) / 100;
      if (100 < (int)uVar8) {
        uVar8 = 100;
      }
      uVar5 = 0;
      if (-1 < (int)uVar8) {
        uVar5 = uVar8;
      }
      local_c = local_c | uVar10 != uVar5;
      local_8 = local_8 | 0x40;
      uVar10 = uVar5;
    }
  }
  if ((local_8 == 0) || (local_c == 0)) goto LAB_100fddcf;
  if (iVar9 == 100) {
    iVar9 = 0x65;
  }
  if (*(int *)(this + 0x14c) != 0) {
    FUN_100fc9f0(*(int *)(this + 0x14c),*(undefined4 *)(this + 0x150),iVar6,
                 (float)(int)uVar10 * 0.01,*(undefined4 *)(this + 0xdc),local_8,iVar9);
    goto LAB_100fddcf;
  }
  iVar1 = *(int *)(this + 4);
  if ((*(byte *)(iVar1 + 0x1a4) & 0x40) == 0) {
    FUN_101182b0(*(undefined4 *)(iVar1 + 0x20c),iVar1 + 8,iVar6,(float)(int)uVar10 * 0.01,
                 *(undefined4 *)(this + 0xdc),local_8,iVar9);
    goto LAB_100fddcf;
  }
  iVar1 = (*DAT_10223068)(1);
  if (iVar1 == 0) {
    iVar1 = (*DAT_1022305c)(0);
    iVar3 = 0;
    if (iVar1 != 0) goto LAB_100fdd77;
  }
  else {
LAB_100fdd77:
    iVar3 = *(int *)(iVar1 + 0x7c);
  }
  FUN_100fcaf0(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c),iVar6);
LAB_100fddcf:
  (**(code **)(*(int *)this + 8))(0x3e4ccccd);
  return;
}

