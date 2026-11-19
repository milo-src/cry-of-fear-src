// rea decompile_all
// name: FUN_10077530
// address: 0x10077530
// body: available
// range: 0x10077530-0x100778e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100778e2 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10077530(void)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  undefined1 local_304 [184];
  float local_24c;
  int local_248;
  undefined1 local_244;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
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
  puStack_c = &LAB_1019dc96;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_248 = in_ECX;
  (*DAT_102230d4)(local_114,local_14);
  fVar11 = (float10)(*DAT_1022302c)("cof_subtitlelanguage");
  local_24c = (float)fVar11;
  switch((int)fVar11) {
  default:
    pcVar7 = &cStack_115;
    do {
      pcVar6 = pcVar7;
      pcVar7 = pcVar6 + 1;
    } while (pcVar6[1] != '\0');
    builtin_strncpy(pcVar6 + 1,"/txtfiles/subtitles.txt",0x18);
    break;
  case 2:
    pcVar7 = &cStack_115;
    do {
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = "/txtfiles/languages/dutch/subtitles.txt";
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 3:
    pcVar7 = &cStack_115;
    do {
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = "/txtfiles/languages/french/subtitles.txt";
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = *pcVar6;
    break;
  case 4:
    pcVar7 = &cStack_115;
    do {
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = "/txtfiles/languages/german/subtitles.txt";
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = *pcVar6;
    break;
  case 5:
    pcVar7 = &cStack_115;
    do {
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = "/txtfiles/languages/norwegian/subtitles.txt";
    for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    break;
  case 6:
    pcVar7 = &cStack_115;
    do {
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = "/txtfiles/languages/spanish/subtitles.txt";
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    *(undefined2 *)pcVar7 = *(undefined2 *)pcVar6;
    break;
  case 7:
    pcVar7 = &cStack_115;
    do {
      pcVar6 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar6 != '\0');
    pcVar6 = "/txtfiles/languages/swedish/subtitles.txt";
    for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    *(undefined2 *)pcVar7 = *(undefined2 *)pcVar6;
  }
  FUN_1002f8d0(local_114,1,0x40,1);
  local_218 = 0xf;
  local_234 = 0;
  local_230 = 0xf;
  local_244 = 0;
  uVar8 = 5;
  local_8 = 2;
  local_21c = 1;
  local_22c = (char *)((uint)local_22c._2_2_ << 0x10);
  iVar4 = 1;
  local_22c = (char *)CONCAT31(local_22c._1_3_,(char)(int)*(float *)(in_ECX + 0xdc));
  piVar3 = (int *)FUN_1002f550(local_304,&local_22c);
  bVar1 = *(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3);
  uVar9 = local_21c;
  while (local_21c = uVar9, (bVar1 & 6) == 0) {
    if ((float)iVar4 == *(float *)(local_248 + 0xdc)) {
      if (uVar9 < 0xff) {
        pcVar7 = (char *)&local_22c;
        if (0xf < local_218) {
          pcVar7 = local_22c;
        }
        pcVar6 = pcVar7;
        do {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar6[(int)(local_214 + (-1 - (int)pcVar7))] = cVar2;
        } while (cVar2 != '\0');
        if (uVar9 < 0x100) {
          local_214[uVar9] = '\0';
          goto LAB_100777c0;
        }
        goto LAB_100778e2;
      }
      FUN_10117f60(4,&DAT_101adc90,0,0,0,0);
    }
    else {
LAB_100777c0:
      iVar4 = iVar4 + 1;
    }
    piVar3 = (int *)FUN_1002f550(local_304,&local_22c);
    uVar9 = local_21c;
    bVar1 = *(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3);
  }
  pcVar7 = local_214;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar9 = 0;
  if (pcVar7 != local_214 + 1) {
    do {
      uVar10 = uVar9 + 1;
      iVar4 = _strncmp(local_214 + uVar9 + 1,"*",1);
      if (iVar4 == 0) {
        uVar8 = 3;
        if (0xff < uVar10) {
LAB_100778e2:
                    /* WARNING: Subroutine does not return */
          ___report_rangecheckfailure();
        }
        local_214[uVar9 + 1] = '\0';
      }
      pcVar7 = local_214;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar9 = uVar10;
    } while (uVar10 < (uint)((int)pcVar7 - (int)(local_214 + 1)));
  }
  pcVar7 = local_214;
  do {
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  if ((1 < (uint)((int)pcVar7 - (int)(local_214 + 1))) &&
     (iVar4 = 1, 0 < *(int *)(DAT_10223188 + 0x90))) {
    do {
      iVar5 = FUN_10119680(iVar4);
      if (iVar5 != 0) {
        FUN_10119810(iVar5,local_214,uVar8,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= *(int *)(DAT_10223188 + 0x90));
  }
  if (0xf < local_218) {
    std::_Deallocate<8,0>(local_22c,local_218 + 1);
  }
  FUN_100308f0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

