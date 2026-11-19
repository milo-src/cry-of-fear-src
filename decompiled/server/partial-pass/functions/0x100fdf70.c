// rea decompile_all
// name: FUN_100fdf70
// address: 0x100fdf70
// body: available
// range: 0x100fdf70-0x100fe2f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fe2ee to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100fdf70(void)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  bool bVar10;
  char *pcVar11;
  undefined4 local_25c;
  int local_258;
  undefined4 local_254;
  int *local_250;
  undefined4 local_24c;
  byte local_248 [512];
  byte local_48 [64];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (DAT_1022c8c4 == 0) {
    _memset(&DAT_102268c0,0,0x6000);
    DAT_1022c8c0 = 0;
    _memset(&DAT_1022c8c8,0,0x28a0);
    _memset(local_248,0,0x200);
    _memset(local_48,0,0x40);
    local_24c = -1;
    local_25c = 0;
    if (DAT_10222f0c == 0) {
      pcVar11 = "sound/sentences.txt";
    }
    else {
      pcVar11 = "sound/aom_sentences.txt";
    }
    local_258 = (*DAT_102230c4)(pcVar11,&local_254);
    if (local_258 != 0) {
      iVar2 = FUN_10100410(local_258,local_254,&local_25c,local_248,0x1ff);
      if (iVar2 != 0) {
        local_250 = &DAT_1022c8a4;
LAB_100fe061:
        bVar1 = local_248[0];
        for (uVar9 = 0; (bVar1 != 0 && (local_248[uVar9] == 0x20)); uVar9 = uVar9 + 1) {
          bVar1 = local_248[uVar9 + 1];
        }
        pbVar5 = local_248 + uVar9;
        bVar1 = *pbVar5;
        if (((bVar1 != 0) && (bVar1 != 0x2f)) && (iVar2 = _isalpha((int)(char)bVar1), iVar2 != 0)) {
          bVar1 = *pbVar5;
          for (uVar6 = uVar9; (bVar1 != 0 && (local_248[uVar6] != 0x20)); uVar6 = uVar6 + 1) {
            bVar1 = local_248[uVar6 + 1];
          }
          if (local_248[uVar6] == 0) goto LAB_100fe250;
          if (DAT_1022c8c0 < 0x601) {
            if (0x1ff < uVar6) {
LAB_100fe2ee:
                    /* WARNING: Subroutine does not return */
              ___report_rangecheckfailure();
            }
            local_248[uVar6] = 0;
            pbVar3 = pbVar5;
            do {
              bVar1 = *pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (bVar1 != 0);
            if (0xf < (uint)((int)pbVar3 - (int)(local_248 + uVar9 + 1))) {
              (*DAT_1022303c)(3,"Sentence %s longer than %d letters\n",pbVar5,0xf);
            }
            iVar2 = DAT_1022c8c0 + 1;
            pbVar3 = pbVar5;
            do {
              bVar1 = *pbVar3;
              pbVar3 = pbVar3 + 1;
              pbVar3[(DAT_1022c8c0 * 0x10 - (int)pbVar5) + 0x102268bf] = bVar1;
            } while (bVar1 != 0);
            iVar7 = uVar6 - 1;
            DAT_1022c8c0 = iVar2;
            if (((int)uVar9 < iVar7) &&
               (iVar2 = _isdigit((int)(char)local_248[uVar6 - 1]), iVar2 != 0)) {
              do {
                iVar2 = _isdigit((int)(char)local_248[iVar7]);
                if (iVar2 == 0) {
                  if (0x1ff < iVar7 + 1U) goto LAB_100fe2ee;
                  local_248[iVar7 + 1] = 0;
                  pbVar3 = local_48;
                  pbVar4 = pbVar5;
                  goto LAB_100fe1c0;
                }
                iVar7 = iVar7 + -1;
              } while ((int)uVar9 < iVar7);
            }
            goto LAB_100fe250;
          }
          pcVar11 = "Too many sentences in sentences.txt!\n";
          goto LAB_100fe28d;
        }
        goto LAB_100fe250;
      }
LAB_100fe29a:
      (*DAT_102230c8)(local_258);
      DAT_1022c8c4 = 1;
      if (DAT_1022c8d8 != 0) {
        piVar8 = &DAT_1022c8d8;
        do {
          if (0x1022f177 < (int)piVar8) break;
          FUN_10100000(piVar8 + 1,*piVar8);
          piVar8 = piVar8 + 0xd;
        } while (*piVar8 != 0);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    bVar1 = pbVar3[1];
    bVar10 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_100fe1e0;
    pbVar3 = pbVar3 + 2;
    pbVar4 = pbVar4 + 2;
    if (bVar1 == 0) break;
LAB_100fe1c0:
    bVar1 = *pbVar3;
    bVar10 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_100fe1e0:
      uVar9 = -(uint)bVar10 | 1;
      goto LAB_100fe1e5;
    }
    if (bVar1 == 0) break;
  }
  uVar9 = 0;
LAB_100fe1e5:
  if (uVar9 == 0) {
    if (-1 < local_24c) {
      *local_250 = *local_250 + 1;
    }
  }
  else {
    local_24c = local_24c + 1;
    local_250 = local_250 + 0xd;
    if (0x1022f177 < (int)local_250) {
      pcVar11 = "Too many sentence groups in sentences.txt!\n";
LAB_100fe28d:
      (*DAT_1022303c)(4,pcVar11);
      goto LAB_100fe29a;
    }
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar3[(int)local_250 + (-0x11 - (int)pbVar5)] = bVar1;
    } while (bVar1 != 0);
    *local_250 = 1;
    pbVar3 = pbVar5;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      pbVar3[(int)(local_248 + (0x1ff - (int)pbVar5))] = bVar1;
    } while (bVar1 != 0);
  }
LAB_100fe250:
  iVar2 = FUN_10100410(local_258,local_254,&local_25c,local_248,0x1ff);
  if (iVar2 == 0) goto LAB_100fe29a;
  goto LAB_100fe061;
}

