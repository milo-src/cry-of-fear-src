// rea decompile_all
// name: FUN_10092ce0
// address: 0x10092ce0
// body: available
// range: 0x10092ce0-0x10092f55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_10092ce0(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  
  iVar1 = *(int *)(param_1 + 0x668) + *(int *)(param_1 + 0x66c) * 0x3c;
  FUN_100dbfb0();
  iVar3 = *(int *)(param_1 + 0x67c);
  cVar6 = '\x02';
  if (iVar3 != 1) {
    cVar6 = '\0';
  }
  if (iVar3 == 2) {
    cVar6 = '\x04';
  }
  else if (iVar3 == 3) {
    cVar6 = '\x06';
  }
  else if (iVar3 == 4) {
    cVar6 = '\a';
  }
  fVar2 = *(float *)(param_1 + 0x64c);
  cVar4 = '\0';
  if ((30.0 <= fVar2) && (fVar2 < 40.0)) {
    cVar4 = '\x01';
  }
  if ((40.0 <= fVar2) && (fVar2 < 50.0)) {
    cVar4 = '\x02';
  }
  if ((50.0 <= fVar2) && (fVar2 < 60.0)) {
    cVar4 = '\x03';
  }
  if ((60.0 <= fVar2) && (fVar2 < 70.0)) {
    cVar4 = '\x04';
  }
  if ((70.0 <= fVar2) && (fVar2 < 80.0)) {
    cVar4 = '\x05';
  }
  if ((80.0 <= fVar2) && (fVar2 < 90.0)) {
    cVar4 = '\x06';
  }
  if (90.0 <= fVar2) {
    cVar4 = '\a';
  }
  iVar3 = *(int *)(param_1 + 0x650);
  cVar5 = 0x46 < iVar3;
  if (iVar3 < 0x47) {
    if (iVar3 < 0x3d) {
      if (iVar3 < 0x29) {
        if (iVar3 < 0x1a) {
          if (iVar3 < 0xb) {
            cVar5 = '\x06';
            if (iVar3 < 6) {
              cVar5 = '\a';
            }
          }
          else {
            cVar5 = '\x05';
          }
        }
        else {
          cVar5 = '\x04';
        }
      }
      else {
        cVar5 = '\x03';
      }
    }
    else {
      cVar5 = '\x02';
    }
  }
  iVar3 = *(int *)(param_1 + 0x644);
  cVar7 = 0x2d < iVar3;
  if (iVar3 < 0x2e) {
    if (iVar3 < 0x29) {
      if (iVar3 < 0x1f) {
        if (iVar3 < 0x15) {
          if (iVar3 < 0xb) {
            cVar7 = '\x06';
            if (iVar3 < 3) {
              cVar7 = '\a';
            }
          }
          else {
            cVar7 = '\x05';
          }
        }
        else {
          cVar7 = '\x04';
        }
      }
      else {
        cVar7 = '\x03';
      }
    }
    else {
      cVar7 = '\x02';
    }
  }
  cVar7 = cVar4 + cVar6 + cVar5 + cVar7;
  if (0x1a4 < iVar1) {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x678) == '\x01') {
      cVar6 = cVar7;
    }
    return cVar6;
  }
  if (0x168 < iVar1) {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x678) == '\x01') {
      cVar6 = cVar7 + '\x01';
    }
    return cVar6;
  }
  if (300 < iVar1) {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x678) == '\x01') {
      cVar6 = cVar7 + '\x02';
    }
    return cVar6;
  }
  if (0xf0 < iVar1) {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x678) == '\x01') {
      cVar6 = cVar7 + '\x03';
    }
    return cVar6;
  }
  if (0xb4 < iVar1) {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x678) == '\x01') {
      cVar6 = cVar7 + '\x04';
    }
    return cVar6;
  }
  if (0x96 < iVar1) {
    cVar6 = '\0';
    if (*(char *)(param_1 + 0x678) == '\x01') {
      cVar6 = cVar7 + '\x05';
    }
    return cVar6;
  }
  cVar6 = '\0';
  if (*(char *)(param_1 + 0x678) == '\x01') {
    cVar6 = cVar7 + '\a';
  }
  return cVar6;
}

