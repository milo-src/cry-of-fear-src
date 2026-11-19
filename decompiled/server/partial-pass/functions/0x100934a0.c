// rea decompile_all
// name: FUN_100934a0
// address: 0x100934a0
// body: available
// range: 0x100934a0-0x10093907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100934a0(int *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  char *pcVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_24;
  uint local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pbVar6 = (byte *)(in_ECX + 0xdc);
  do {
    bVar1 = *param_2;
    bVar13 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_100934e9:
      local_1c = -(uint)bVar13 | 1;
      goto LAB_100934f1;
    }
    if (bVar1 == 0) break;
    bVar1 = param_2[1];
    bVar13 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_100934e9;
    param_2 = param_2 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  local_1c = 0;
LAB_100934f1:
  pbVar6 = (byte *)(in_ECX + 0x11c);
  do {
    bVar1 = *param_3;
    bVar13 = bVar1 < *pbVar6;
    if (bVar1 != *pbVar6) {
LAB_10093520:
      uVar11 = -(uint)bVar13 | 1;
      goto LAB_10093525;
    }
    if (bVar1 == 0) break;
    bVar1 = param_3[1];
    bVar13 = bVar1 < pbVar6[1];
    if (bVar1 != pbVar6[1]) goto LAB_10093520;
    param_3 = param_3 + 2;
    pbVar6 = pbVar6 + 2;
  } while (bVar1 != 0);
  uVar11 = 0;
LAB_10093525:
  if ((local_1c == 0) && (uVar11 == 0)) {
    if (*(int *)(*(int *)(in_ECX + 4) + 0x248) == 0) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x248) = 1;
      iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0x1cc);
      if (iVar3 != 0) {
        FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + iVar3,param_1);
      }
      iVar3 = (**(code **)(*param_1 + 0xd0))();
      if ((iVar3 != 0) && (iVar3 = FUN_100125e0(param_1[1]), iVar3 != 0)) {
        FUN_1001f160(local_18,"%i%i%i%i",*(undefined4 *)(iVar3 + 0x235c),
                     *(undefined4 *)(iVar3 + 0x2360),*(undefined4 *)(iVar3 + 0x2364),
                     *(undefined4 *)(iVar3 + 0x2368));
        (*DAT_10223000)(1,DAT_102265ec,0,*(undefined4 *)(param_1[1] + 0x20c));
        (*DAT_10223008)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x248));
        (*DAT_10223008)(0);
        (*DAT_10223008)(0);
        (*DAT_10223008)((int)*(float *)(*(int *)(in_ECX + 4) + 600));
        (*DAT_10223020)(local_18);
        (*DAT_10223004)();
        pcVar9 = (char *)(iVar3 + 0x7e8);
        local_24 = 1;
        do {
          pcVar5 = pcVar9;
          do {
            cVar2 = *pcVar5;
            pcVar5 = pcVar5 + 1;
          } while (cVar2 != '\0');
          if (pcVar5 == pcVar9 + 1) {
            iVar7 = local_24 * 0x120;
            puVar10 = (undefined4 *)(iVar3 + 0x6c8 + iVar7);
            puVar12 = (undefined4 *)(iVar3 + 0x688 + iVar7);
            *puVar10 = 0x6472656e;
            *(undefined2 *)(puVar10 + 1) = 0x73;
            *puVar12 = 0x6472656e;
            *(undefined2 *)(puVar12 + 1) = 0x73;
            *(undefined4 *)(iVar7 + iVar3 + 0x708) = 0x6472656e;
            *(undefined2 *)(iVar7 + iVar3 + 0x70c) = 0x73;
            *(undefined4 *)(iVar7 + iVar3 + 0x738) = 0x6472656e;
            puVar8 = (undefined4 *)(iVar3 + 0x778 + iVar7);
            *(undefined2 *)(iVar7 + iVar3 + 0x73c) = 0x73;
            *puVar8 = 0x6472656e;
            *(undefined2 *)(puVar8 + 1) = 0x73;
            (*DAT_10223000)(1,DAT_10226648,0,*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
            (*DAT_10223008)(local_24);
            (*DAT_10223008)(1);
            iVar4 = _atoi(local_18);
            (*DAT_10223010)(iVar4);
            (*DAT_10223008)(1);
            (*DAT_10223020)(puVar10);
            (*DAT_10223020)(iVar3 + 0x6d8 + iVar7);
            (*DAT_10223020)(iVar3 + 0x6e8 + iVar7);
            (*DAT_10223020)(iVar3 + 0x6f8 + iVar7);
            (*DAT_10223020)(puVar12);
            (*DAT_10223020)(iVar3 + 0x698 + iVar7);
            (*DAT_10223020)(iVar3 + 0x6a8 + iVar7);
            (*DAT_10223020)(iVar3 + 0x6b8 + iVar7);
            (*DAT_10223020)(iVar3 + 0x708 + iVar7);
            (*DAT_10223020)(iVar3 + 0x738 + iVar7);
            (*DAT_10223020)(puVar8);
            (*DAT_10223004)();
            break;
          }
          local_24 = local_24 + 1;
          pcVar9 = pcVar9 + 0x120;
        } while (local_24 < 0x11);
        *(undefined4 *)(iVar3 + 0x1ea0) = 1;
      }
      if (*(float *)(*(int *)(in_ECX + 4) + 600) == 0.0) {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 600) = 0x3f800000;
      }
    }
  }
  else {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x248) = 0;
    iVar3 = (**(code **)(*param_1 + 0xd0))();
    if ((iVar3 != 0) && (iVar3 = FUN_100125e0(param_1[1]), iVar3 != 0)) {
      FUN_1001f160(local_18,"%i%i%i%i",*(undefined4 *)(iVar3 + 0x235c),
                   *(undefined4 *)(iVar3 + 0x2360),*(undefined4 *)(iVar3 + 0x2364),
                   *(undefined4 *)(iVar3 + 0x2368));
      (*DAT_10223000)(1,DAT_102265ec,0,*(undefined4 *)(param_1[1] + 0x20c));
      (*DAT_10223008)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x248));
      (*DAT_10223008)(local_1c != 0);
      (*DAT_10223008)(uVar11 != 0);
      (*DAT_10223008)(0);
      (*DAT_10223020)(local_18);
      (*DAT_10223004)();
      *(undefined4 *)(iVar3 + 0x1ea0) = 1;
    }
  }
  *(uint *)(*(int *)(in_ECX + 4) + 0x114) = (*(int *)(*(int *)(in_ECX + 4) + 0x248) != 0) + 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

