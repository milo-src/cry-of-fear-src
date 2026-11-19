// rea decompile_all
// name: FUN_10141642
// address: 0x10141642
// body: available
// range: 0x10141642-0x101424cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10141642(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_3 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    uVar2 = (uint)(byte)*param_1;
    uVar1 = (uint)(byte)*param_2;
  }
  else if (param_3 == 2) {
    iVar3 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
    if (iVar3 != 0) goto LAB_10142448;
    uVar2 = (uint)*(byte *)((int)param_1 + 1);
    uVar1 = (uint)*(byte *)((int)param_2 + 1);
  }
  else if (param_3 == 3) {
    iVar3 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
    if ((iVar3 != 0) ||
       (iVar3 = (uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1), iVar3 != 0))
    goto LAB_10142448;
    uVar2 = (uint)*(byte *)((int)param_1 + 2);
    uVar1 = (uint)*(byte *)((int)param_2 + 2);
  }
  else {
    if (param_3 != 4) {
code_r0x10141683:
      switch(param_3) {
      case 0:
        break;
      case 1:
        goto switchD_10141984_caseD_1;
      case 2:
        goto switchD_10141984_caseD_2;
      case 3:
        goto switchD_10141984_caseD_3;
      case 4:
        goto switchD_10141984_caseD_4;
      case 5:
        goto switchD_10141984_caseD_5;
      case 6:
        goto switchD_10141984_caseD_6;
      case 7:
        goto switchD_10141984_caseD_7;
      case 8:
        goto switchD_10141984_caseD_8;
      case 9:
        goto switchD_10141984_caseD_9;
      case 10:
        goto switchD_10141984_caseD_a;
      case 0xb:
        goto switchD_10141984_caseD_b;
      case 0xc:
        goto switchD_10141984_caseD_c;
      case 0xd:
        goto switchD_10141984_caseD_d;
      case 0xe:
        goto switchD_10141984_caseD_e;
      case 0xf:
        goto switchD_10141984_caseD_f;
      case 0x10:
        goto switchD_10141984_caseD_10;
      case 0x11:
        goto switchD_10141984_caseD_11;
      case 0x12:
        goto switchD_10141984_caseD_12;
      case 0x13:
        goto switchD_10141984_caseD_13;
      case 0x14:
        goto switchD_10141984_caseD_14;
      case 0x15:
        goto switchD_10141984_caseD_15;
      case 0x16:
        goto switchD_10141984_caseD_16;
      case 0x17:
        goto switchD_10141984_caseD_17;
      case 0x1a:
        goto switchD_10141984_caseD_1a;
      case 0x1b:
        goto switchD_10141984_caseD_1b;
      case 0x1c:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1c);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1c)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x1c);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1b) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x1b), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1a) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x1a), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x19);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x19);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      case 0x18:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x18);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x18)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x18);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x17) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x17), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x16) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x16), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x15);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x15);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_14:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x14);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x14)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x14);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x13) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x13), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x12) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x12), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x11);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x11);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_10:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x10);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x10)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x10);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xf) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0xf), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xe) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0xe), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0xd);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xd);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_c:
        if (*(int *)((int)param_1 + param_3 + -0xc) != *(int *)((int)param_2 + param_3 + -0xc)) {
          iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xc) -
                  (uint)*(byte *)((int)param_2 + param_3 + -0xc);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xb) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0xb), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -10) -
                      (uint)*(byte *)((int)param_2 + param_3 + -10), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -9);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -9);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_8:
        uVar1 = *(uint *)((int)param_1 + param_3 + -8);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -8)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -8);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -7) -
                       (uint)*(byte *)((int)param_2 + param_3 + -7), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -6) -
                      (uint)*(byte *)((int)param_2 + param_3 + -6), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -5);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -5);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_4:
        uVar1 = *(uint *)((int)param_1 + param_3 + -4);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -4)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -4);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -3) -
                       (uint)*(byte *)((int)param_2 + param_3 + -3), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -2) -
                      (uint)*(byte *)((int)param_2 + param_3 + -2), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -1);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -1);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        break;
      case 0x1d:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1d);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1d)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x1d);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1c) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x1c), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1b) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x1b), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x1a);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1a);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
      case 0x19:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x19);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x19)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x19);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x18) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x18), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x17) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x17), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x16);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x16);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_15:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x15);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x15)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x15);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x14) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x14), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x13) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x13), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x12);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x12);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_11:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x11);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x11)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x11);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x10) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x10), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xf) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0xf), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0xe);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xe);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_d:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0xd);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0xd)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0xd);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xc) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0xc), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xb) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0xb), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -10);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -10);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_9:
        if (*(int *)((int)param_1 + param_3 + -9) != *(int *)((int)param_2 + param_3 + -9)) {
          iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -9) -
                  (uint)*(byte *)((int)param_2 + param_3 + -9);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -8) -
                       (uint)*(byte *)((int)param_2 + param_3 + -8), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -7) -
                      (uint)*(byte *)((int)param_2 + param_3 + -7), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -6);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -6);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_5:
        uVar1 = *(uint *)((int)param_1 + param_3 + -5);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -5)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -5);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -4) -
                       (uint)*(byte *)((int)param_2 + param_3 + -4), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -3) -
                      (uint)*(byte *)((int)param_2 + param_3 + -3), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -2);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -2);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_1:
        uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -1);
        uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -1);
        if (uVar2 == uVar1) {
          return 0;
        }
        return (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
      case 0x1e:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1e);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1e)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x1e);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1d) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x1d), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1c) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x1c), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x1b);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1b);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_1a:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1a);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1a)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x1a);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x19) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x19), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x18) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x18), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x17);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x17);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_16:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x16);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x16)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x16);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x15) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x15), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x14) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x14), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x13);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x13);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_12:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x12);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x12)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x12);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x11) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x11), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x10) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x10), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0xf);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xf);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_e:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0xe);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0xe)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0xe);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xd) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0xd), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xc) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0xc), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0xb);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xb);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_a:
        if (*(int *)((int)param_1 + param_3 + -10) != *(int *)((int)param_2 + param_3 + -10)) {
          iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -10) -
                  (uint)*(byte *)((int)param_2 + param_3 + -10);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -9) -
                       (uint)*(byte *)((int)param_2 + param_3 + -9), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -8) -
                      (uint)*(byte *)((int)param_2 + param_3 + -8), iVar3 == 0)) {
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -7);
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -7);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_6:
        uVar1 = *(uint *)((int)param_1 + param_3 + -6);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -6)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -6);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -5) -
                       (uint)*(byte *)((int)param_2 + param_3 + -5), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -4) -
                      (uint)*(byte *)((int)param_2 + param_3 + -4), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -3);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -3);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_2:
        if (*(short *)((int)param_1 + param_3 + -2) != *(short *)((int)param_2 + param_3 + -2)) {
LAB_101423fc:
          iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -2) -
                  (uint)*(byte *)((int)param_2 + param_3 + -2);
          if (iVar3 != 0) {
LAB_1014240c:
            return (uint)(0 < iVar3) * 2 + -1;
          }
          goto switchD_10141984_caseD_1;
        }
        break;
      case 0x1f:
        if (*(int *)((int)param_1 + param_3 + -0x1f) != *(int *)((int)param_2 + param_3 + -0x1f)) {
          iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1f) -
                  (uint)*(byte *)((int)param_2 + param_3 + -0x1f);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1e) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x1e), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1d) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x1d), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x1c);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x1c);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_1b:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x1b);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x1b)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x1b);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x1a) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x1a), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x19) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x19), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x18);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x18);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_17:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x17);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x17)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x17);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x16) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x16), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x15) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x15), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x14);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x14);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_13:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0x13);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0x13)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0x13);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x12) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0x12), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0x11) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0x11), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0x10);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0x10);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_f:
        if (*(int *)((int)param_1 + param_3 + -0xf) != *(int *)((int)param_2 + param_3 + -0xf)) {
          iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xf) -
                  (uint)*(byte *)((int)param_2 + param_3 + -0xf);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xe) -
                       (uint)*(byte *)((int)param_2 + param_3 + -0xe), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -0xd) -
                      (uint)*(byte *)((int)param_2 + param_3 + -0xd), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -0xc);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -0xc);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_b:
        uVar1 = *(uint *)((int)param_1 + param_3 + -0xb);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -0xb)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -0xb);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -10) -
                       (uint)*(byte *)((int)param_2 + param_3 + -10), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -9) -
                      (uint)*(byte *)((int)param_2 + param_3 + -9), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -8);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -8);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_7:
        uVar1 = *(uint *)((int)param_1 + param_3 + -7);
        if (uVar1 != *(uint *)((int)param_2 + param_3 + -7)) {
          iVar3 = (uVar1 & 0xff) - (uint)*(byte *)((int)param_2 + param_3 + -7);
          if (((iVar3 == 0) &&
              (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -6) -
                       (uint)*(byte *)((int)param_2 + param_3 + -6), iVar3 == 0)) &&
             (iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -5) -
                      (uint)*(byte *)((int)param_2 + param_3 + -5), iVar3 == 0)) {
            uVar2 = (uint)*(byte *)((int)param_1 + param_3 + -4);
            uVar1 = (uint)*(byte *)((int)param_2 + param_3 + -4);
            iVar3 = 0;
            if (uVar2 != uVar1) {
              iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
            }
          }
          else {
            iVar3 = (uint)(0 < iVar3) * 2 + -1;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
        }
switchD_10141984_caseD_3:
        iVar3 = (uint)*(byte *)((int)param_1 + param_3 + -3) -
                (uint)*(byte *)((int)param_2 + param_3 + -3);
        if (iVar3 != 0) goto LAB_1014240c;
        goto LAB_101423fc;
      default:
        goto switchD_10141984_default;
      }
      return 0;
    }
    iVar3 = (uint)(byte)*param_1 - (uint)(byte)*param_2;
    if (((iVar3 != 0) ||
        (iVar3 = (uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1), iVar3 != 0))
       || (iVar3 = (uint)*(byte *)((int)param_1 + 2) - (uint)*(byte *)((int)param_2 + 2), iVar3 != 0
          )) {
LAB_10142448:
      return (uint)(0 < iVar3) * 2 + -1;
    }
    uVar2 = (uint)*(byte *)((int)param_1 + 3);
    uVar1 = (uint)*(byte *)((int)param_2 + 3);
  }
  iVar3 = 0;
  if (uVar2 != uVar1) {
    iVar3 = (uint)(0 < (int)(uVar2 - uVar1)) * 2 + -1;
  }
  return iVar3;
switchD_10141984_default:
  if (*param_1 != *param_2) {
    iVar3 = (*param_1 & 0xff) - (uint)(byte)*param_2;
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1), iVar3 == 0))
       && (iVar3 = (uint)*(byte *)((int)param_1 + 2) - (uint)*(byte *)((int)param_2 + 2), iVar3 == 0
          )) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 3) != (uint)*(byte *)((int)param_2 + 3)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 3) -
                                (uint)*(byte *)((int)param_2 + 3))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_1[1] != param_2[1]) {
    iVar3 = (param_1[1] & 0xff) - (uint)(byte)param_2[1];
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 5) - (uint)*(byte *)((int)param_2 + 5), iVar3 == 0))
       && (iVar3 = (uint)*(byte *)((int)param_1 + 6) - (uint)*(byte *)((int)param_2 + 6), iVar3 == 0
          )) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 7) != (uint)*(byte *)((int)param_2 + 7)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 7) -
                                (uint)*(byte *)((int)param_2 + 7))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_1[2] != param_2[2]) {
    iVar3 = (param_1[2] & 0xff) - (uint)(byte)param_2[2];
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 9) - (uint)*(byte *)((int)param_2 + 9), iVar3 == 0))
       && (iVar3 = (uint)*(byte *)((int)param_1 + 10) - (uint)*(byte *)((int)param_2 + 10),
          iVar3 == 0)) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 0xb) != (uint)*(byte *)((int)param_2 + 0xb)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 0xb) -
                                (uint)*(byte *)((int)param_2 + 0xb))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_1[3] != param_2[3]) {
    iVar3 = (param_1[3] & 0xff) - (uint)(byte)param_2[3];
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 0xd) - (uint)*(byte *)((int)param_2 + 0xd),
        iVar3 == 0)) &&
       (iVar3 = (uint)*(byte *)((int)param_1 + 0xe) - (uint)*(byte *)((int)param_2 + 0xe),
       iVar3 == 0)) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 0xf) != (uint)*(byte *)((int)param_2 + 0xf)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 0xf) -
                                (uint)*(byte *)((int)param_2 + 0xf))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_1[4] != param_2[4]) {
    iVar3 = (uint)(byte)param_1[4] - (uint)(byte)param_2[4];
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 0x11) - (uint)*(byte *)((int)param_2 + 0x11),
        iVar3 == 0)) &&
       (iVar3 = (uint)*(byte *)((int)param_1 + 0x12) - (uint)*(byte *)((int)param_2 + 0x12),
       iVar3 == 0)) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 0x13) != (uint)*(byte *)((int)param_2 + 0x13)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 0x13) -
                                (uint)*(byte *)((int)param_2 + 0x13))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_1[5] != param_2[5]) {
    iVar3 = (param_1[5] & 0xff) - (uint)(byte)param_2[5];
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 0x15) - (uint)*(byte *)((int)param_2 + 0x15),
        iVar3 == 0)) &&
       (iVar3 = (uint)*(byte *)((int)param_1 + 0x16) - (uint)*(byte *)((int)param_2 + 0x16),
       iVar3 == 0)) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 0x17) != (uint)*(byte *)((int)param_2 + 0x17)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 0x17) -
                                (uint)*(byte *)((int)param_2 + 0x17))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_1[6] != param_2[6]) {
    iVar3 = (param_1[6] & 0xff) - (uint)(byte)param_2[6];
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 0x19) - (uint)*(byte *)((int)param_2 + 0x19),
        iVar3 == 0)) &&
       (iVar3 = (uint)*(byte *)((int)param_1 + 0x1a) - (uint)*(byte *)((int)param_2 + 0x1a),
       iVar3 == 0)) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 0x1b) != (uint)*(byte *)((int)param_2 + 0x1b)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 0x1b) -
                                (uint)*(byte *)((int)param_2 + 0x1b))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_1[7] != param_2[7]) {
    iVar3 = (param_1[7] & 0xff) - (uint)(byte)param_2[7];
    if (((iVar3 == 0) &&
        (iVar3 = (uint)*(byte *)((int)param_1 + 0x1d) - (uint)*(byte *)((int)param_2 + 0x1d),
        iVar3 == 0)) &&
       (iVar3 = (uint)*(byte *)((int)param_1 + 0x1e) - (uint)*(byte *)((int)param_2 + 0x1e),
       iVar3 == 0)) {
      iVar3 = 0;
      if ((uint)*(byte *)((int)param_1 + 0x1f) != (uint)*(byte *)((int)param_2 + 0x1f)) {
        iVar3 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 0x1f) -
                                (uint)*(byte *)((int)param_2 + 0x1f))) * 2 + -1;
      }
    }
    else {
      iVar3 = (uint)(0 < iVar3) * 2 + -1;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  param_3 = param_3 + -0x20;
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  goto code_r0x10141683;
}

