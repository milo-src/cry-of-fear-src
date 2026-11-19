// rea decompile_all
// name: FUN_10018870
// address: 0x10018870
// body: available
// range: 0x10018870-0x10018ca9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_10018870(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,byte param_5,int param_6
            ,undefined4 param_7)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((((*(int *)(param_3 + 0x198) != 0x80) || (param_3 == param_4)) &&
      (*(int *)(param_3 + 0x134) != 0)) &&
     (*(int *)(DAT_10223188 + 0x98) + *(int *)(param_3 + 0x138) != 0)) {
    if (param_3 != param_4) {
      if ((*(uint *)(param_3 + 0x228) & 0x4000000) != 0) {
        return 0;
      }
      iVar3 = *(int *)(param_3 + 0x1e0);
      if (((iVar3 != 0x46) && (iVar3 != 0x89)) &&
         ((iVar3 != 0x55 && (iVar3 = (*DAT_10223140)(param_3,param_7), iVar3 == 0)))) {
        return 0;
      }
    }
    if ((((*(uint *)(param_3 + 0x228) & 0x100) == 0) || ((param_5 & 1) == 0)) ||
       (*(int *)(param_3 + 0x21c) != param_4)) {
      if (*(int *)(param_4 + 0x2c4) != 0) {
        FUN_10119fb0(*(int *)(param_4 + 0x2c4),0);
        uVar2 = *(uint *)(param_3 + 0x2c4);
        if (uVar2 != 0) {
          if (DAT_10231058 == 0) {
            if ((*(uint *)(param_4 + 0x2c4) & uVar2) == 0) {
              return 0;
            }
          }
          else if ((DAT_10231058 == 1) && ((*(uint *)(param_4 + 0x2c4) & uVar2) != 0)) {
            return 0;
          }
        }
        FUN_1011a870();
      }
      _memset(param_1 + 2,0,0x14c);
      param_1[1] = param_2;
      uVar4 = 1;
      if ((*(uint *)(param_3 + 0x228) & 0x20000000) != 0) {
        uVar4 = 2;
      }
      *param_1 = uVar4;
      param_1[0x17] = (float)(int)(*(float *)(param_3 + 0x1b8) * 1000.0) / 1000.0;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 0x88);
      param_1[6] = *(undefined4 *)(param_3 + 0x90);
      *(undefined8 *)(param_1 + 7) = *(undefined8 *)(param_3 + 0xd0);
      param_1[9] = *(undefined4 *)(param_3 + 0xd8);
      *(undefined8 *)(param_1 + 0x1f) = *(undefined8 *)(param_3 + 0x15c);
      param_1[0x21] = *(undefined4 *)(param_3 + 0x164);
      *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_3 + 0x168);
      param_1[0x24] = *(undefined4 *)(param_3 + 0x170);
      *(undefined8 *)(param_1 + 0x39) = *(undefined8 *)(param_3 + 0x10c);
      param_1[0x3b] = *(undefined4 *)(param_3 + 0x114);
      *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(param_3 + 0x100);
      param_1[0x3e] = *(undefined4 *)(param_3 + 0x108);
      param_1[0x3f] = *(undefined4 *)(param_3 + 0x118);
      param_1[0x40] = *(undefined4 *)(param_3 + 0x11c);
      param_1[10] = *(undefined4 *)(param_3 + 0x134);
      param_1[0xc] = *(undefined4 *)(param_3 + 0x1b4);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_3 + 400);
      param_1[0xf] = *(undefined4 *)(param_3 + 0x198);
      if ((((param_6 == 0) && (*(float *)(param_3 + 0x1b8) != 0.0)) &&
          (*(float *)(param_3 + 0xa0) == 0.0)) &&
         ((*(float *)(param_3 + 0xa4) == 0.0 && (*(float *)(param_3 + 0xa8) == 0.0)))) {
        *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 1;
      }
      param_1[0x10] = *(undefined4 *)(param_3 + 0x1c8);
      *(undefined2 *)((int)param_1 + 0x3a) = *(undefined2 *)(param_3 + 0x18c);
      uVar4 = (*DAT_10223064)(param_3);
      param_1[0xd] = uVar4;
      param_1[0x16] = *(undefined4 *)(param_3 + 0x188);
      param_1[0xb] = *(undefined4 *)(param_3 + 0x1ac);
      param_1[0x18] = *(undefined4 *)(param_3 + 0x1bc);
      param_1[0x19] = *(undefined4 *)(param_3 + 0x194);
      *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_3 + 0x1c0);
      *(undefined1 *)((int)param_1 + 0x69) = *(undefined1 *)(param_3 + 0x1c1);
      *(undefined1 *)((int)param_1 + 0x6a) = *(undefined1 *)(param_3 + 0x1c2);
      *(undefined1 *)((int)param_1 + 0x6b) = *(undefined1 *)(param_3 + 0x1c3);
      *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_3 + 0x1c4);
      *(undefined1 *)((int)param_1 + 0x6d) = *(undefined1 *)(param_3 + 0x1c5);
      param_1[0x12] = *(undefined4 *)(param_3 + 0x1cc);
      param_1[0x13] = (int)*(float *)(param_3 + 0x1d0);
      param_1[0x15] = *(undefined4 *)(param_3 + 0x1e0);
      *(char *)(param_1 + 0x14) = (char)(int)*(float *)(param_3 + 0x1d4);
      *(char *)((int)param_1 + 0x51) = (char)(int)*(float *)(param_3 + 0x1d8);
      fVar1 = *(float *)(param_3 + 0x1dc);
      param_1[0x25] = 0;
      *(char *)((int)param_1 + 0x52) = (char)(int)fVar1;
      if (*(int *)(param_3 + 0x218) != 0) {
        uVar4 = (*DAT_10223064)(*(int *)(param_3 + 0x218));
        param_1[0x25] = uVar4;
      }
      param_1[0x26] = 0;
      if (((*(int *)(param_3 + 0x21c) != 0) &&
          (iVar3 = (*DAT_10223064)(*(int *)(param_3 + 0x21c)), 0 < iVar3)) &&
         (iVar3 <= *(int *)(DAT_10223188 + 0x90))) {
        param_1[0x26] = iVar3;
      }
      if (param_6 != 0) {
        *(undefined8 *)(param_1 + 0x2f) = *(undefined8 *)(param_3 + 0xac);
        param_1[0x31] = *(undefined4 *)(param_3 + 0xb4);
        uVar4 = (*DAT_10222f54)(*(int *)(DAT_10223188 + 0x98) + *(int *)(param_3 + 0x140));
        param_1[0x2d] = uVar4;
        param_1[0x2e] = *(undefined4 *)(param_3 + 0x1b0);
        param_1[0x2c] = *(uint *)(param_3 + 0x228) & 0x4000000;
        param_1[0x27] = *(undefined4 *)(param_3 + 0x1a0);
        param_1[0x28] = *(undefined4 *)(param_3 + 0x19c);
        param_1[0x32] = *(uint *)(param_3 + 0x228) >> 0xe & 1;
        param_1[0x2b] = (int)*(float *)(param_3 + 0x1e4);
        return 1;
      }
      param_1[0x2a] = *(undefined4 *)(param_3 + 0x290);
      return 1;
    }
  }
  return 0;
}

