// rea decompile_all
// name: UnDecorator::getTypeEncoding
// address: 0x1014a5bb
// body: available
// range: 0x1014a5bb-0x1014a8c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static int __cdecl UnDecorator::getTypeEncoding(void)
   
   Library: Visual Studio 2019 Release */

int __cdecl UnDecorator::getTypeEncoding(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = 0;
  while( true ) {
    uVar2 = 0;
    if (*DAT_10232958 == 0x5f) {
      DAT_10232958 = DAT_10232958 + 1;
      uVar2 = 0x4000;
    }
    bVar1 = *DAT_10232958;
    if (('@' < (char)bVar1) && ((char)bVar1 < '[')) {
      uVar3 = uVar2 | 0x8000;
      uVar4 = (int)(char)*DAT_10232958 - 0x41;
      DAT_10232958 = DAT_10232958 + 1;
      if ((uVar4 & 1) != 0) {
        uVar3 = uVar2 | 0xa000;
      }
      if (0x17 < (int)uVar4) {
        return uVar3;
      }
      uVar2 = uVar3 | 0x800;
      uVar7 = uVar4 & 0x18;
      pbVar6 = DAT_10232958;
      if (uVar7 == 0) {
        uVar2 = uVar3 | 0x840;
      }
      else if (uVar7 == 8) {
        uVar2 = uVar3 | 0x880;
      }
      else if (uVar7 != 0x10) goto switchD_1014a84a_default;
      uVar4 = uVar4 & 6;
      if (uVar4 == 0) {
        return uVar2;
      }
      if (uVar4 == 2) {
        return uVar2 | 0x200;
      }
      if (uVar4 == 4) {
        return uVar2 | 0x100;
      }
      if (uVar4 == 6) {
        return uVar2 | 0x400;
      }
      goto switchD_1014a84a_default;
    }
    if (bVar1 != 0x24) {
      if (((char)bVar1 < '0') || ('8' < (char)bVar1)) {
        if (bVar1 == 0x39) {
          DAT_10232958 = DAT_10232958 + 1;
          return 0xfffd;
        }
        if (bVar1 == 0x3b) {
          DAT_10232958 = DAT_10232958 + 1;
          return 0x6c00;
        }
        return (bVar1 != 0) + 0xfffe;
      }
      pbVar6 = DAT_10232958 + 1;
      switch(bVar1) {
      case 0x30:
        DAT_10232958 = pbVar6;
        return 0x800;
      case 0x31:
        DAT_10232958 = pbVar6;
        return 0x1000;
      case 0x32:
        DAT_10232958 = pbVar6;
        return 0;
      case 0x33:
        DAT_10232958 = pbVar6;
        return 0x4000;
      case 0x34:
        DAT_10232958 = pbVar6;
        return 0x2000;
      case 0x35:
        DAT_10232958 = pbVar6;
        return 0x6000;
      case 0x36:
        DAT_10232958 = pbVar6;
        return 0x6800;
      case 0x37:
        DAT_10232958 = pbVar6;
        return 0x7000;
      case 0x38:
        DAT_10232958 = pbVar6;
        return 0x7800;
      }
      goto switchD_1014a84a_default;
    }
    pbVar5 = DAT_10232958 + 1;
    bVar1 = *pbVar5;
    pbVar6 = pbVar5;
    if ('B' < (char)bVar1) break;
    if (bVar1 == 0x42) {
      uVar2 = uVar2 | 0x9800;
      goto LAB_1014a81f;
    }
    if (bVar1 == 0) {
      uVar2 = 0xfffe;
      pbVar5 = DAT_10232958;
      goto LAB_1014a81f;
    }
    if (bVar1 != 0x24) {
      if ((char)bVar1 < '0') goto switchD_1014a84a_default;
      if ((char)bVar1 < '6') goto LAB_1014a7b6;
      if (bVar1 != 0x41) goto switchD_1014a84a_default;
      uVar2 = uVar2 | 0x9000;
      goto LAB_1014a81f;
    }
    if (DAT_10232958[2] == 0x50) {
      pbVar5 = DAT_10232958 + 2;
    }
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar6;
    if ((char)bVar1 < 'N') {
      if ((char)bVar1 < 'L') {
        if (bVar1 == 0) {
          DAT_10232958 = pbVar6;
          return 0xfffe;
        }
        if ((bVar1 != 0x46) && (bVar1 != 0x48)) {
          if (bVar1 == 0x4a) {
LAB_1014a703:
            bVar1 = pbVar5[2];
            if (((char)bVar1 < '0') || ('9' < (char)bVar1)) {
              uVar2 = 0xffff;
              pbVar5 = pbVar5 + 2;
LAB_1014a81f:
              DAT_10232958 = pbVar5 + 1;
            }
            else {
              DAT_10232958 = pbVar5 + (char)bVar1 + -0x2d;
              uVar2 = getTypeEncoding();
              uVar2 = uVar2 | 0x10000;
            }
          }
          else {
switchD_1014a84a_default:
            DAT_10232958 = pbVar6;
            uVar2 = 0xffff;
          }
          return uVar2;
        }
      }
    }
    else {
      if ((char)bVar1 < 'P') goto LAB_1014a703;
      if (bVar1 != 0x51) {
        if (bVar1 != 0x68) goto switchD_1014a84a_default;
        DAT_1023296c = 0;
      }
    }
    DAT_10232958 = pbVar5 + 2;
  }
  if (bVar1 == 0x43) {
    uVar2 = 0x7c00;
    goto LAB_1014a81f;
  }
  if (bVar1 == 0x44) {
    uVar2 = uVar2 | 0x9100;
    goto LAB_1014a81f;
  }
  if (bVar1 == 0x45) {
    uVar2 = uVar2 | 0x9200;
    goto LAB_1014a81f;
  }
  if (bVar1 != 0x52) goto switchD_1014a84a_default;
  pbVar5 = DAT_10232958 + 2;
  bVar1 = *pbVar5;
  if (((char)bVar1 < '0') || (iVar8 = 1, '5' < (char)bVar1)) {
    DAT_10232958 = pbVar5;
    return (bVar1 == 0) + 0xfffe;
  }
LAB_1014a7b6:
  uVar4 = (iVar8 + 5) * 0x100 | uVar2;
  uVar2 = uVar4 | 0x8800;
  if ((*pbVar5 & 1) != 0) {
    uVar2 = uVar4 | 0xa800;
  }
  bVar1 = *pbVar5 & 6;
  if (bVar1 == 0) {
    uVar2 = uVar2 | 0x40;
    goto LAB_1014a81f;
  }
  if (bVar1 == 2) {
    uVar2 = uVar2 | 0x80;
    goto LAB_1014a81f;
  }
  pbVar6 = pbVar5;
  if (bVar1 != 4) goto switchD_1014a84a_default;
  goto LAB_1014a81f;
}

