// rea decompile_all
// name: FUN_10048f70
// address: 0x10048f70
// body: available
// range: 0x10048f70-0x10049277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048f70(int *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int in_ECX;
  char *pcVar6;
  bool bVar7;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((((param_1 == (int *)0x0) || (iVar3 = (**(code **)(*param_1 + 0xd0))(), iVar3 == 0)) ||
      (iVar3 = FUN_10119060(*(undefined4 *)(in_ECX + 0x17c),param_1), iVar3 == 0)) ||
     ((*(char *)(in_ECX + 0x180) != '\0' ||
      (*DAT_10223188 <= *(float *)(in_ECX + 0x1a4) && *(float *)(in_ECX + 0x1a4) != *DAT_10223188)))
     ) goto LAB_10049266;
  pcVar6 = "unlockablesdoor";
  pbVar4 = (byte *)(*(int *)(*(int *)(in_ECX + 4) + 0x1d0) + (int)DAT_10223188[0x26]);
  do {
    bVar1 = *pbVar4;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_10049014:
      uVar5 = -(uint)bVar7 | 1;
      goto LAB_10049019;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_10049014;
    pbVar4 = pbVar4 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar5 = 0;
LAB_10049019:
  if ((uVar5 == 0) &&
     ((iVar3 = FUN_100125e0(param_1[1]), iVar3 == 0 ||
      (((cVar2 = FUN_100dd000(1,0,0), cVar2 == '\0' && (cVar2 = FUN_100dd000(2,0,0), cVar2 == '\0'))
       && ((cVar2 = FUN_100dd000(4,0,0), cVar2 == '\0' &&
           ((cVar2 = FUN_100dd000(8,0,0), cVar2 == '\0' &&
            (cVar2 = FUN_100dd000(0x10,0,0), cVar2 == '\0')))))))))) {
    FUN_10119810(param_1,&DAT_101b0c54,5,0);
  }
  else {
    if ((*(int *)(in_ECX + 0x1a0) != 0) &&
       (iVar3 = FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x1a0)), iVar3 != 0)) {
      pcVar6 = "inter_door";
      pbVar4 = (byte *)((int)DAT_10223188[0x26] + **(int **)(iVar3 + 4));
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_10049105:
          uVar5 = -(uint)bVar7 | 1;
          goto LAB_1004910a;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_10049105;
        pbVar4 = pbVar4 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_1004910a:
      if (uVar5 == 0) {
        iVar3 = FUN_10047f10(*(int **)(iVar3 + 4));
        if ((iVar3 != 0) && (iVar3 = FUN_10048540(), iVar3 != 0)) {
          FUN_10048e40(param_1);
        }
        *(undefined4 *)(in_ECX + 0x1a0) = 0;
        goto LAB_1004924c;
      }
    }
    iVar3 = *(int *)(*(int *)(in_ECX + 4) + 0x19c);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*param_1 + 0xd0))();
      if (((iVar3 != 0) && (*(int *)(in_ECX + 0x184) != 0)) &&
         (iVar3 = FUN_100125e0(param_1[1]), iVar3 != 0)) {
        *(undefined4 *)(iVar3 + 0x5ec) = *(undefined4 *)(in_ECX + 0x184);
      }
      iVar3 = FUN_10048540();
      if (iVar3 == 0) {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x19c) = *(undefined4 *)(param_1[1] + 0x20c);
        FUN_10048cb0();
      }
      else {
        if (*(int *)(in_ECX + 0x194) != 0) {
          FUN_10119810(param_1,(int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x194),5,0);
        }
        iVar3 = *(int *)(*(int *)(in_ECX + 4) + 500);
        if (iVar3 != 0) {
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),4,
                       (int)DAT_10223188[0x26] + iVar3,0x3f800000,0x3f4ccccd,0,100);
        }
      }
    }
    else {
      FUN_1001f160(local_88,&DAT_101b0c90,
                   *(int *)(*(int *)(*(int *)(iVar3 + 0x7c) + 4) + 0x1d4) + (int)DAT_10223188[0x26])
      ;
      FUN_10119810(param_1,local_88,5,0);
    }
  }
LAB_1004924c:
  *(float *)(in_ECX + 0x1a4) = *DAT_10223188 + 1.0;
LAB_10049266:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

