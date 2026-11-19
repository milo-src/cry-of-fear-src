// rea decompile_all
// name: FUN_100c8b70
// address: 0x100c8b70
// body: available
// range: 0x100c8b70-0x100c9074 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c8b70(int param_1)

{
  byte bVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  int *in_ECX;
  int iVar11;
  bool bVar12;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar10 = param_1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x264) = 0;
  *(undefined1 *)(param_1 + 0x3a9) = 0;
  (*DAT_10223000)(1,DAT_102266e8,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  (*DAT_10223020)(0);
  (*DAT_10223004)();
  (*DAT_10223000)(1,DAT_102266ec,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  (*DAT_10223020)(0);
  (*DAT_10223004)();
  (*DAT_10223000)(1,DAT_102266f0,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
  (*DAT_10223020)(0);
  (*DAT_10223004)();
  iVar11 = *(int *)(*(int *)(param_1 + 4) + 0x1d4);
  if ((iVar11 == 0) || (pcVar2 = (char *)(*(int *)(DAT_10223188 + 0x98) + iVar11), *pcVar2 == '\0'))
  {
    pcVar2 = "unconnected";
  }
  uVar3 = FUN_1011a8a0("%s has joined the game\n",pcVar2,0,0,0,0);
  FUN_10117f60(1,uVar3);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20c);
  if (DAT_10222ee8 == 0) {
    uVar4 = (*DAT_1022310c)(uVar3);
    local_8 = (*DAT_10223184)(uVar3);
    local_c = (*DAT_1022310c)(uVar3);
    pcVar2 = "\"%s<%i><%s><%i>\" entered the game\n";
    iVar11 = *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    param_1 = uVar4;
  }
  else {
    uVar4 = (*DAT_102230f0)(uVar3,"model");
    uVar4 = (*DAT_102230f4)(uVar4);
    local_8 = (*DAT_10223184)(uVar3);
    local_c = (*DAT_1022310c)(uVar3);
    pcVar2 = "\"%s<%i><%s><%s>\" entered the game\n";
    iVar11 = *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4);
    param_1 = uVar4;
  }
  FUN_10119200(pcVar2,iVar11,local_c,local_8,param_1);
  (**(code **)(*in_ECX + 0x40))(iVar10);
  FUN_100c9970(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x20c));
  iVar11 = 1;
  if (0 < *(int *)(DAT_10223188 + 0x90)) {
    do {
      iVar5 = FUN_10119680(iVar11);
      if (iVar5 != 0) {
        (*DAT_10223000)(1,DAT_102264d0,0,*(undefined4 *)(*(int *)(iVar10 + 4) + 0x20c));
        (*DAT_10223008)((int)*(float *)(*(int *)(iVar5 + 4) + 0x164));
        uVar3 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
        (*DAT_10223008)(uVar3);
        iVar6 = (**(code **)(*DAT_10222ee4 + 0x20))();
        (*DAT_10223008)(iVar6 != 0);
        (*DAT_10223004)();
        (*DAT_10223000)(1,DAT_102264f0,0,*(undefined4 *)(*(int *)(iVar10 + 4) + 0x20c));
        (*DAT_10223008)(iVar11);
        (*DAT_10223010)((int)*(float *)(*(int *)(iVar5 + 4) + 0x168));
        (*DAT_10223010)(*(undefined4 *)(iVar5 + 0x2650));
        (*DAT_10223010)(0);
        iVar6 = (**(code **)(*in_ECX + 0xd4))(iVar5 + 0x2668);
        (*DAT_10223010)(iVar6 + 1);
        (*DAT_10223004)();
        iVar6 = FUN_100e4c30();
        if (iVar6 == 0) {
          iVar6 = FUN_100e4d60();
          if (iVar6 == 0) {
            *(undefined4 *)(*(int *)(iVar5 + 4) + 0x26c) = 0;
          }
          else {
            *(undefined4 *)(*(int *)(iVar5 + 4) + 0x26c) = 0x40000000;
          }
        }
        else {
          *(undefined4 *)(*(int *)(iVar5 + 4) + 0x26c) = 0x3f800000;
        }
        (*DAT_10223000)(2,DAT_102266c8,0,0);
        uVar3 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
        (*DAT_10223008)(uVar3);
        (*DAT_10223008)((int)*(float *)(*(int *)(iVar5 + 4) + 0x26c));
        (*DAT_10223004)();
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 <= *(int *)(DAT_10223188 + 0x90));
  }
  if (DAT_10222f04 != 0) {
    (*DAT_10223000)(1,0x1e,0,*(undefined4 *)(*(int *)(iVar10 + 4) + 0x20c));
    (*DAT_10223004)();
  }
  iVar11 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x20c));
  if ((((char)in_ECX[0x2a] != '\0') && (iVar11 - 1U < 0x20)) && (DAT_102266b0 != 0)) {
    (*DAT_10223000)(2,DAT_102266b0,0,0);
    (*DAT_10223008)(iVar11);
    (*DAT_10223008)(0);
    (*DAT_10223008)(0);
    (*DAT_10223004)();
    uVar7 = *(uint *)(iVar10 + 0x2500);
    if ((uVar7 & 8) == 0) {
      uVar7 = uVar7 | 8;
      *(uint *)(iVar10 + 0x2500) = uVar7;
    }
    if ((uVar7 & 1) == 0) {
      *(uint *)(iVar10 + 0x2500) = uVar7 | 1;
    }
    uVar7 = *(uint *)(*(int *)(iVar10 + 4) + 0x1a8);
    if (-1 < (char)uVar7) {
      *(uint *)(*(int *)(iVar10 + 4) + 0x1a8) = uVar7 | 0x80;
    }
    *(undefined1 *)((int)DAT_10222ee4 + iVar11 + 0xa9) = 0;
  }
  uVar3 = (*DAT_102230f0)(*(undefined4 *)(*(int *)(iVar10 + 4) + 0x20c));
  (**(code **)(*in_ECX + 0x6c))(iVar10,uVar3);
  if ((DAT_10222ee4 != (int *)0x0) && (iVar11 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar11 != 0))
  {
    piVar8 = (int *)(*DAT_10223068)(1);
    param_1 = 1;
    iVar11 = DAT_10223188;
    if (1 < *(int *)(DAT_10223188 + 0x94)) {
      do {
        if (((*piVar8 == 0) && (piVar8[0x1f] != 0)) &&
           (iVar10 = *(int *)(piVar8[0x1f] + 4), 0 < *(int *)(iVar10 + 0x248))) {
          pcVar2 = "env_model";
          pbVar9 = (byte *)(*(int *)(-(uint)(*(int *)(iVar10 + 0x20c) != 0) &
                                    *(int *)(iVar10 + 0x20c) + 0x80U) + *(int *)(iVar11 + 0x98));
          do {
            bVar1 = *pbVar9;
            bVar12 = bVar1 < (byte)*pcVar2;
            if (bVar1 != *pcVar2) {
LAB_100c9030:
              uVar7 = -(uint)bVar12 | 1;
              goto LAB_100c9035;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar9[1];
            bVar12 = bVar1 < (byte)pcVar2[1];
            if (bVar1 != pcVar2[1]) goto LAB_100c9030;
            pbVar9 = pbVar9 + 2;
            pcVar2 = pcVar2 + 2;
          } while (bVar1 != 0);
          uVar7 = 0;
LAB_100c9035:
          if ((uVar7 == 0) && (iVar10 = FUN_10091960(iVar10), iVar11 = DAT_10223188, iVar10 != 0)) {
            FUN_100a9ce0();
            iVar11 = DAT_10223188;
          }
        }
        param_1 = param_1 + 1;
        piVar8 = piVar8 + 0xcb;
      } while (param_1 < *(int *)(iVar11 + 0x94));
    }
  }
  return;
}

