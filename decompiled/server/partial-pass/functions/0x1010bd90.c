// rea decompile_all
// name: FUN_1010bd90
// address: 0x1010bd90
// body: available
// range: 0x1010bd90-0x1010bf5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010bd90(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  char cVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  double dVar13;
  
  pbVar9 = &DAT_101c6a78;
  pbVar2 = *(byte **)(param_1 + 4);
  pbVar4 = pbVar2;
  do {
    bVar1 = *pbVar4;
    bVar12 = bVar1 < *pbVar9;
    if (bVar1 != *pbVar9) {
LAB_1010bdc5:
      uVar5 = -(uint)bVar12 | 1;
      goto LAB_1010bdca;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar12 = bVar1 < pbVar9[1];
    if (bVar1 != pbVar9[1]) goto LAB_1010bdc5;
    pbVar4 = pbVar4 + 2;
    pbVar9 = pbVar9 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_1010bdca:
  if (uVar5 == 0) {
    pcVar8 = *(char **)(param_1 + 8);
    pcVar10 = pcVar8;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    if (0x1f < (uint)((int)pcVar10 - (int)(pcVar8 + 1))) {
      (*DAT_1022303c)(4,"Map name \'%s\' too long (32 chars)\n",pcVar8);
      pcVar8 = *(char **)(param_1 + 8);
    }
    pcVar11 = (char *)(in_ECX + 0x180);
    pcVar10 = pcVar8;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar10[(int)(pcVar11 + (-1 - (int)pcVar8))] = cVar3;
    } while (cVar3 != '\0');
    cVar3 = *pcVar11;
    if (cVar3 != '\0') {
      do {
        iVar6 = _tolower((int)cVar3);
        *pcVar11 = (char)iVar6;
        cVar3 = pcVar11[1];
        pcVar11 = pcVar11 + 1;
      } while (cVar3 != '\0');
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  else {
    pcVar8 = "landmark";
    pbVar4 = pbVar2;
    do {
      bVar1 = *pbVar4;
      bVar12 = bVar1 < (byte)*pcVar8;
      if (bVar1 != *pcVar8) {
LAB_1010be70:
        uVar5 = -(uint)bVar12 | 1;
        goto LAB_1010be75;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar12 = bVar1 < (byte)pcVar8[1];
      if (bVar1 != pcVar8[1]) goto LAB_1010be70;
      pbVar4 = pbVar4 + 2;
      pcVar8 = pcVar8 + 2;
    } while (bVar1 != 0);
    uVar5 = 0;
LAB_1010be75:
    if (uVar5 != 0) {
      pcVar8 = "changetarget";
      pbVar4 = pbVar2;
      do {
        bVar1 = *pbVar4;
        bVar12 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_1010bef5:
          uVar5 = -(uint)bVar12 | 1;
          goto LAB_1010befa;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar12 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_1010bef5;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_1010befa:
      if (uVar5 == 0) {
        uVar7 = (*DAT_10223054)(*(undefined4 *)(param_1 + 8));
        *(undefined4 *)(in_ECX + 0x1c0) = uVar7;
        *(undefined4 *)(param_1 + 0xc) = 1;
        return;
      }
      iVar6 = FUN_1000aba0(pbVar2,"changedelay");
      if (iVar6 == 0) {
        FUN_10102480(param_1);
        return;
      }
      dVar13 = FID_conflict__atof(*(wchar_t **)(param_1 + 8));
      *(float *)(in_ECX + 0x1c4) = (float)dVar13;
      *(undefined4 *)(param_1 + 0xc) = 1;
      return;
    }
    pcVar8 = *(char **)(param_1 + 8);
    pcVar10 = pcVar8;
    do {
      cVar3 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar3 != '\0');
    if (0x1f < (uint)((int)pcVar10 - (int)(pcVar8 + 1))) {
      (*DAT_1022303c)(4,"Landmark name \'%s\' too long (32 chars)\n",pcVar8);
      pcVar8 = *(char **)(param_1 + 8);
    }
    iVar6 = in_ECX - (int)pcVar8;
    do {
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar8[iVar6 + 0x19f] = cVar3;
    } while (cVar3 != '\0');
  }
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}

