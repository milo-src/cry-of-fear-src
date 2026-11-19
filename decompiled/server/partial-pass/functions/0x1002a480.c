// rea decompile_all
// name: FUN_1002a480
// address: 0x1002a480
// body: available
// range: 0x1002a480-0x1002a873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a480(int *param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 *in_ECX;
  int *piVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    *in_ECX = 0;
    param_1 = (int *)0x1;
    pcVar6 = in_ECX + 0x420;
    while (*pcVar6 != '\0') {
      param_1 = (int *)((int)param_1 + 1);
      pcVar6 = pcVar6 + 0x41c;
      if (0x20 < (int)param_1) {
        return;
      }
    }
    iVar3 = (**(code **)(*piVar2 + 0xbc))();
    if (iVar3 == 0) {
      iVar3 = FUN_100e4d60();
      in_ECX[(int)param_1 * 0x41c + 0x1d4] = 1;
      in_ECX[(int)param_1 * 0x41c + 0x18] = iVar3 != 0;
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1dc) = piVar2[399];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1e0) = piVar2[400];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1e4) = piVar2[0x191];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1e8) = piVar2[0x192];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1ec) = piVar2[0x193];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1f0) = piVar2[0x194];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 500) = piVar2[0x195];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1f8) = piVar2[0x196];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1fc) = piVar2[0x197];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x200) = piVar2[0x198];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x204) = piVar2[0x199];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x208) = piVar2[0x19a];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x20c) = piVar2[0x19b];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x210) = piVar2[0x19c];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x214) = piVar2[0x19d];
      in_ECX[(int)param_1 * 0x41c + 0x218] = (char)piVar2[0x19e];
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x21c) = piVar2[0x19f];
      in_ECX[(int)param_1 * 0x41c + 0x220] = (char)piVar2[0x1a0];
      in_ECX[(int)param_1 * 0x41c + 4] = 1;
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0xc) =
           *(int *)(piVar2[1] + 0x1d4) + *(int *)(DAT_10223188 + 0x98);
      puVar8 = (undefined4 *)(in_ECX + (int)param_1 * 0x41c + 4);
      puVar9 = (undefined4 *)(in_ECX + (int)param_1 * 0x41c + 0x87a0);
      for (iVar3 = 0x107; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      return;
    }
    iVar3 = FUN_100e4d60();
    in_ECX[(int)param_1 * 0x41c + 0x1d4] = 0;
    in_ECX[(int)param_1 * 0x41c + 0x18] = iVar3 != 0;
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0xc) =
         *(int *)(DAT_10223188 + 0x98) + *(int *)(piVar2[1] + 0x1d4);
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x4c) = (int)*(float *)(piVar2[1] + 0x164);
    fVar1 = (float)piVar2[0x87c];
    in_ECX[(int)param_1 * 0x41c + 4] = 1;
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x50) = (int)fVar1;
    *(int *)(in_ECX + (int)param_1 * 0x41c + 8) = piVar2[0xed];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1dc) = piVar2[399];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1e0) = piVar2[400];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1e4) = piVar2[0x191];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1e8) = piVar2[0x192];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1ec) = piVar2[0x193];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1f0) = piVar2[0x194];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 500) = piVar2[0x195];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1f8) = piVar2[0x196];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x1fc) = piVar2[0x197];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x200) = piVar2[0x198];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x204) = piVar2[0x199];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x208) = piVar2[0x19a];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x20c) = piVar2[0x19b];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x210) = piVar2[0x19c];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x214) = piVar2[0x19d];
    in_ECX[(int)param_1 * 0x41c + 0x218] = (char)piVar2[0x19e];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x21c) = piVar2[0x19f];
    in_ECX[(int)param_1 * 0x41c + 0x220] = (char)piVar2[0x1a0];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x228) = piVar2[0xf7];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x22c) = piVar2[0xf8];
    *(int *)(in_ECX + (int)param_1 * 0x41c + 0x230) = piVar2[0xf9];
    if (piVar2[0x94b] != 0) {
      *(int *)(in_ECX + (int)param_1 * 0x41c + 0x10) =
           **(int **)(piVar2[0x94b] + 4) + *(int *)(DAT_10223188 + 0x98);
      *(undefined4 *)(in_ECX + (int)param_1 * 0x41c + 0x14) = *(undefined4 *)(piVar2[0x94b] + 0x168)
      ;
    }
    iVar3 = 1;
    puVar7 = in_ECX + (int)param_1 * 0x41c + 0x3fd;
    do {
      iVar4 = iVar3 + 0x3f4;
      iVar3 = iVar3 + 1;
      *puVar7 = *(undefined1 *)((int)piVar2 + iVar4);
      puVar7 = puVar7 + 1;
    } while (iVar3 < 0x21);
    piVar5 = piVar2 + 0x813;
    iVar3 = (int)param_1 * 0x41c - (int)piVar5;
    do {
      iVar4 = *piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      (in_ECX + iVar3 + 0x27b)[(int)piVar5] = (char)iVar4;
    } while ((char)iVar4 != '\0');
    piVar5 = piVar2 + 0x833;
    iVar3 = (int)param_1 * 0x41c - (int)piVar5;
    do {
      iVar4 = *piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      (in_ECX + iVar3 + 0x2fb)[(int)piVar5] = (char)iVar4;
    } while ((char)iVar4 != '\0');
    piVar5 = piVar2 + 0x853;
    iVar3 = (int)param_1 * 0x41c - (int)piVar5;
    do {
      iVar4 = *piVar5;
      piVar5 = (int *)((int)piVar5 + 1);
      (in_ECX + iVar3 + 0x37b)[(int)piVar5] = (char)iVar4;
    } while ((char)iVar4 != '\0');
    iVar3 = 1;
    piVar5 = piVar2 + 0x880;
    do {
      iVar4 = FUN_100e4ee0(*piVar5);
      if (((iVar4 == 0) &&
          (pcVar6 = (char *)FUN_100dff70("classname",*(int *)(DAT_10223188 + 0x98) + *piVar5),
          pcVar6 != (char *)0x0)) && (iVar4 = _strncmp(pcVar6,"weapon_",7), iVar4 == 0)) {
        FUN_1002a000(pcVar6,iVar3,param_1,piVar2);
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < 7);
  }
  return;
}

