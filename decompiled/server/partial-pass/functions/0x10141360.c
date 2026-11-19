// rea decompile_all
// name: FUN_10141360
// address: 0x10141360
// body: available
// range: 0x10141360-0x101413cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_10141360(uint *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar10 [15];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  
  if (DAT_102328ec != 0) {
    auVar11 = pshuflw(ZEXT216(CONCAT11(param_2,param_2)),ZEXT216(CONCAT11(param_2,param_2)),0);
    uVar3 = -1 << (sbyte)((uint)param_1 & 0xf);
    pcVar7 = (char *)((int)param_1 - ((uint)param_1 & 0xf));
    while( true ) {
      auVar10 = SUB1615((undefined1  [16])0x0,1);
      auVar9[0] = -(*pcVar7 == '\0');
      auVar9[1] = -(pcVar7[1] == '\0');
      auVar9[2] = -(pcVar7[2] == '\0');
      auVar9[3] = -(pcVar7[3] == '\0');
      auVar9[4] = -(pcVar7[4] == '\0');
      auVar9[5] = -(pcVar7[5] == '\0');
      auVar9[6] = -(pcVar7[6] == '\0');
      auVar9[7] = -(pcVar7[7] == '\0');
      auVar9[8] = -(pcVar7[8] == '\0');
      auVar9[9] = -(auVar10[8] == pcVar7[9]);
      auVar9[10] = -(auVar10[9] == pcVar7[10]);
      auVar9[0xb] = -(auVar10[10] == pcVar7[0xb]);
      auVar9[0xc] = -(auVar10[0xb] == pcVar7[0xc]);
      auVar9[0xd] = -(auVar10[0xc] == pcVar7[0xd]);
      auVar9[0xe] = -(auVar10[0xd] == pcVar7[0xe]);
      auVar9[0xf] = -(auVar10[0xe] == pcVar7[0xf]);
      cVar2 = auVar11[0];
      auVar8[0] = -(*pcVar7 == cVar2);
      auVar8[1] = -(pcVar7[1] == auVar11[1]);
      auVar8[2] = -(pcVar7[2] == auVar11[2]);
      auVar8[3] = -(pcVar7[3] == auVar11[3]);
      auVar8[4] = -(pcVar7[4] == auVar11[4]);
      auVar8[5] = -(pcVar7[5] == auVar11[5]);
      auVar8[6] = -(pcVar7[6] == auVar11[6]);
      auVar8[7] = -(pcVar7[7] == auVar11[7]);
      auVar8[8] = -(pcVar7[8] == cVar2);
      auVar8[9] = -(pcVar7[9] == auVar11[1]);
      auVar8[10] = -(pcVar7[10] == auVar11[2]);
      auVar8[0xb] = -(pcVar7[0xb] == auVar11[3]);
      auVar8[0xc] = -(pcVar7[0xc] == auVar11[4]);
      auVar8[0xd] = -(pcVar7[0xd] == auVar11[5]);
      auVar8[0xe] = -(pcVar7[0xe] == auVar11[6]);
      auVar8[0xf] = -(pcVar7[0xf] == auVar11[7]);
      auVar9 = auVar9 | auVar8;
      uVar3 = (ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                      (ushort)(byte)(auVar9[0xf] >> 7) << 0xf) & uVar3;
      if (uVar3 != 0) break;
      uVar3 = 0xffffffff;
      pcVar7 = pcVar7 + 0x10;
    }
    iVar1 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    puVar4 = (uint *)(pcVar7 + iVar1);
    if (cVar2 != (char)*puVar4) {
      puVar4 = (uint *)0x0;
    }
    return puVar4;
  }
  while (((uint)param_1 & 3) != 0) {
    uVar3 = *param_1;
    if ((char)uVar3 == param_2) {
      return param_1;
    }
    param_1 = (uint *)((int)param_1 + 1);
    if ((char)uVar3 == '\0') {
      return (uint *)0x0;
    }
  }
  while( true ) {
    while( true ) {
      uVar3 = *param_1;
      uVar6 = uVar3 ^ CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
      uVar5 = uVar3 ^ 0xffffffff ^ uVar3 + 0x7efefeff;
      puVar4 = param_1 + 1;
      if (((uVar6 ^ 0xffffffff ^ uVar6 + 0x7efefeff) & 0x81010100) != 0) break;
      param_1 = puVar4;
      if ((uVar5 & 0x81010100) != 0) {
        if ((uVar5 & 0x1010100) != 0) {
          return (uint *)0x0;
        }
        if ((uVar3 + 0x7efefeff & 0x80000000) == 0) {
          return (uint *)0x0;
        }
      }
    }
    uVar3 = *param_1;
    if ((char)uVar3 == param_2) {
      return param_1;
    }
    if ((char)uVar3 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar3 >> 8);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 1);
    }
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
    cVar2 = (char)(uVar3 >> 0x10);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 2);
    }
    if (cVar2 == '\0') break;
    cVar2 = (char)(uVar3 >> 0x18);
    if (cVar2 == param_2) {
      return (uint *)((int)param_1 + 3);
    }
    param_1 = puVar4;
    if (cVar2 == '\0') {
      return (uint *)0x0;
    }
  }
  return (uint *)0x0;
}

