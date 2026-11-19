// rea decompile_all
// name: FUN_100334f0
// address: 0x100334f0
// body: available
// range: 0x100334f0-0x100337e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100337e1 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100334f0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *****pppppcVar7;
  char *****pppppcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  float10 fVar13;
  undefined1 local_300 [184];
  float local_248;
  undefined1 local_244;
  undefined4 local_234;
  undefined4 local_230;
  char ****local_22c [4];
  uint local_21c;
  uint local_218;
  char local_214 [255];
  char cStack_115;
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d6f6;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (*DAT_102230d4)(local_114,local_14);
  fVar13 = (float10)(*DAT_1022302c)("cof_subtitlelanguage");
  local_248 = (float)fVar13;
  switch((int)fVar13) {
  default:
    pcVar12 = &cStack_115;
    do {
      pcVar11 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    iVar6 = 7;
    pcVar9 = "/txtfiles/phone_messages.txt";
    break;
  case 2:
    pcVar12 = &cStack_115;
    do {
      pcVar11 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    iVar6 = 0xb;
    pcVar9 = "/txtfiles/languages/dutch/phone_messages.txt";
    break;
  case 3:
    pcVar11 = &cStack_115;
    do {
      pcVar10 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = "/txtfiles/languages/french/phone_messages.txt";
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    *(undefined2 *)pcVar11 = *(undefined2 *)pcVar10;
    goto LAB_10033635;
  case 4:
    pcVar11 = &cStack_115;
    do {
      pcVar10 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = "/txtfiles/languages/german/phone_messages.txt";
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    *(undefined2 *)pcVar11 = *(undefined2 *)pcVar10;
    goto LAB_10033635;
  case 5:
    pcVar12 = &cStack_115;
    do {
      pcVar11 = pcVar12 + 1;
      pcVar12 = pcVar12 + 1;
    } while (*pcVar11 != '\0');
    iVar6 = 0xc;
    pcVar9 = "/txtfiles/languages/norwegian/phone_messages.txt";
    break;
  case 6:
    pcVar11 = &cStack_115;
    do {
      pcVar10 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = "/txtfiles/languages/spanish/phone_messages.txt";
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    pcVar12 = pcVar11 + 2;
    pcVar9 = pcVar10 + 2;
    *(undefined2 *)pcVar11 = *(undefined2 *)pcVar10;
    goto LAB_10033634;
  case 7:
    pcVar11 = &cStack_115;
    do {
      pcVar10 = pcVar11 + 1;
      pcVar11 = pcVar11 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = "/txtfiles/languages/swedish/phone_messages.txt";
    for (iVar6 = 0xb; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    pcVar12 = pcVar11 + 2;
    pcVar9 = pcVar10 + 2;
    *(undefined2 *)pcVar11 = *(undefined2 *)pcVar10;
    goto LAB_10033634;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar12 = *(undefined4 *)pcVar9;
    pcVar9 = pcVar9 + 4;
    pcVar12 = pcVar12 + 4;
  }
LAB_10033634:
  *pcVar12 = *pcVar9;
LAB_10033635:
  FUN_1002f8d0(local_114,1,0x40,1);
  local_218 = 0xf;
  local_234 = 0;
  local_230 = 0xf;
  local_244 = 0;
  local_8 = 2;
  local_21c = 1;
  iVar6 = 1;
  local_22c[0]._0_2_ = (ushort)(byte)(param_1 + 1);
  piVar4 = (int *)FUN_1002f550(local_300,local_22c);
  bVar1 = *(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4);
  uVar3 = local_21c;
  do {
    local_21c = uVar3;
    if ((bVar1 & 6) != 0) {
      iVar6 = 1;
      if (0 < *(int *)(DAT_10223188 + 0x90)) {
        do {
          iVar5 = FUN_10119680(iVar6);
          if (iVar5 != 0) {
            FUN_10119810(iVar5,local_214,1,0);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 <= *(int *)(DAT_10223188 + 0x90));
      }
      if (0xf < local_218) {
        std::_Deallocate<8,0>(local_22c[0],local_218 + 1);
      }
      FUN_100308f0();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar6 == param_1 + 1) {
      if (uVar3 < 0xff) {
        pppppcVar7 = local_22c;
        if (0xf < local_218) {
          pppppcVar7 = (char *****)local_22c[0];
        }
        pppppcVar8 = pppppcVar7;
        do {
          cVar2 = *(char *)pppppcVar8;
          pppppcVar8 = (char *****)((int)pppppcVar8 + 1);
          *(char *)((int)pppppcVar8 + (int)(local_214 + (-1 - (int)pppppcVar7))) = cVar2;
        } while (cVar2 != '\0');
        if (0xff < uVar3) {
                    /* WARNING: Subroutine does not return */
          ___report_rangecheckfailure();
        }
        local_214[uVar3] = '\0';
        goto LAB_10033730;
      }
      FUN_10117f60(4,&DAT_101adc90,0,0,0,0);
    }
    else {
LAB_10033730:
      iVar6 = iVar6 + 1;
    }
    piVar4 = (int *)FUN_1002f550(local_300,local_22c);
    bVar1 = *(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4);
    uVar3 = local_21c;
  } while( true );
}

