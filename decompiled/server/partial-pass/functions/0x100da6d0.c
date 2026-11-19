// rea decompile_all
// name: FUN_100da6d0
// address: 0x100da6d0
// body: available
// range: 0x100da6d0-0x100dace0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100dacdc to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100da6d0(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  char ****ppppcVar5;
  char ****ppppcVar6;
  undefined4 uVar7;
  int in_ECX;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  byte *pbVar13;
  char *pcVar14;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar15;
  int iVar16;
  char *pcVar17;
  bool bVar18;
  int local_340 [3];
  byte abStack_334 [172];
  int local_288;
  int local_284;
  int local_280;
  int local_27c;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  char *local_268;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_264;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_260;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_25c;
  int local_258;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_254;
  int local_250;
  int local_24c;
  int local_248;
  void *local_244 [4];
  undefined4 local_234;
  uint local_230;
  char ***local_22c [4];
  uint local_21c;
  undefined4 local_218;
  char local_214 [256];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019dea1;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_248 = param_1;
  if (param_1 != 0) {
    pbVar12 = (byte *)(in_ECX + 0x7e8);
    iVar16 = 1;
    pbVar13 = pbVar12;
    do {
      pbVar8 = pbVar13;
      do {
        bVar1 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar1 != 0);
      if (1 < (uint)((int)pbVar8 - (int)(pbVar13 + 1))) {
        pbVar9 = (byte *)(param_1 + 0x15c);
        pbVar8 = pbVar13;
        do {
          bVar1 = *pbVar8;
          bVar18 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_100da763:
            uVar3 = -(uint)bVar18 | 1;
            goto LAB_100da768;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar8[1];
          bVar18 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_100da763;
          pbVar8 = pbVar8 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        uVar3 = 0;
LAB_100da768:
        if (uVar3 == 0) goto LAB_100dacbe;
      }
      iVar16 = iVar16 + 1;
      pbVar13 = pbVar13 + 0x120;
    } while (iVar16 < 0x11);
    local_24c = 1;
    do {
      pbVar13 = pbVar12;
      do {
        bVar1 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar1 != 0);
      if (pbVar13 == pbVar12 + 1) {
        local_258 = in_ECX;
        (*DAT_102230d4)(local_214,local_14);
        pcVar10 = (char *)((int)&local_218 + 3);
        do {
          pcVar17 = pcVar10;
          pcVar10 = pcVar17 + 1;
        } while (pcVar17[1] != '\0');
        builtin_strncpy(pcVar17 + 1,"/notes/",8);
        local_268 = (char *)(local_248 + 0x15c);
        pcVar10 = local_268;
        do {
          cVar2 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar2 != '\0');
        pcVar17 = (char *)((int)&local_218 + 3);
        do {
          pcVar14 = pcVar17 + 1;
          pcVar17 = pcVar17 + 1;
        } while (*pcVar14 != '\0');
        this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        pcVar14 = local_268;
        for (uVar3 = (uint)((int)pcVar10 - (int)local_268) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar14;
          pcVar14 = pcVar14 + 4;
          pcVar17 = pcVar17 + 4;
        }
        local_260 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        local_254 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        for (uVar3 = (int)pcVar10 - (int)local_268 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *pcVar17 = *pcVar14;
          pcVar14 = pcVar14 + 1;
          pcVar17 = pcVar17 + 1;
        }
        pbVar15 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        local_25c = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        local_264 = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0;
        local_8 = 0;
        FUN_1002f8d0(local_214,1,0x40,1);
        local_234 = 0;
        local_230 = 0xf;
        local_244[0] = (void *)((uint)local_244[0] & 0xffffff00);
        local_8 = CONCAT31(local_8._1_3_,2);
        if ((abStack_334[*(int *)(local_340[0] + 4)] & 6) == 0) {
          local_21c = 0;
          local_218 = 0xf;
          local_22c[0] = (char ***)((uint)local_22c[0] & 0xffffff00);
          local_8 = CONCAT31(local_8._1_3_,3);
          local_250 = 1;
          piVar4 = (int *)FUN_1002f550(local_340,local_22c);
          bVar1 = *(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4);
          uVar3 = 0xf;
          while ((bVar1 & 6) == 0) {
            if (local_250 == 1) {
              if (this == local_254) {
                FUN_100da2a0(this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                   *)local_244);
                local_254 = local_25c;
              }
              else {
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (this,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                                 *)local_244);
                local_260 = this + 0x18;
              }
              ppppcVar5 = local_22c;
              if (0xf < local_218) {
                ppppcVar5 = (char ****)local_22c[0];
              }
              ppppcVar6 = ppppcVar5;
              do {
                cVar2 = *(char *)ppppcVar6;
                ppppcVar6 = (char ****)((int)ppppcVar6 + 1);
                *(char *)((int)ppppcVar6 + (int)(local_214 + (0xff - (int)ppppcVar5))) = cVar2;
              } while (cVar2 != '\0');
              if (0xff < local_21c) {
                    /* WARNING: Subroutine does not return */
                ___report_rangecheckfailure();
              }
              local_114[local_21c] = '\0';
              uVar7 = FUN_1011a8a0(&DAT_101dcb34,local_114,2,0);
              iVar16 = local_258;
              FUN_10119810(local_258,uVar7);
              iVar16 = iVar16 + local_24c * 0x120;
              local_26c = iVar16 + 0x6c8;
              pcVar10 = local_268;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[((iVar16 + 0x6c8) - (int)local_268) + -1] = cVar2;
              } while (cVar2 != '\0');
              local_270 = iVar16 + 0x6d8;
              pcVar10 = (char *)(local_248 + 0x17c);
              iVar11 = (iVar16 + 0x6d8) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(local_248 + 0x19c);
              local_274 = iVar16 + 0x6e8;
              iVar11 = (iVar16 + 0x6e8) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(local_248 + 0x1bc);
              local_278 = iVar16 + 0x6f8;
              iVar11 = (iVar16 + 0x6f8) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(local_248 + 0xdc);
              local_27c = iVar16 + 0x688;
              iVar11 = (iVar16 + 0x688) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(local_248 + 0xfc);
              local_280 = iVar16 + 0x698;
              iVar11 = (iVar16 + 0x698) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(local_248 + 0x11c);
              local_284 = iVar16 + 0x6a8;
              iVar11 = (iVar16 + 0x6a8) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(local_248 + 0x13c);
              local_288 = iVar16 + 0x6b8;
              iVar11 = (iVar16 + 0x6b8) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(*(int *)(local_248 + 0x1dc) + *(int *)(DAT_10223188 + 0x98));
              pcVar17 = (char *)(iVar16 + 0x708);
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                *pcVar17 = cVar2;
                pcVar17 = pcVar17 + 1;
              } while (cVar2 != '\0');
              pcVar10 = local_114;
              iVar11 = (iVar16 + 0x738) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              pcVar10 = (char *)(local_248 + 0x1e0);
              iVar11 = (iVar16 + 0x778) - (int)pcVar10;
              do {
                cVar2 = *pcVar10;
                pcVar10 = pcVar10 + 1;
                pcVar10[iVar11 + -1] = cVar2;
              } while (cVar2 != '\0');
              (*DAT_10223000)(1,DAT_10226648,0,*(undefined4 *)(*(int *)(local_258 + 4) + 0x20c));
              (*DAT_10223008)(local_24c);
              (*DAT_10223008)(0);
              (*DAT_10223010)(0);
              (*DAT_10223008)(0);
              (*DAT_10223020)(local_26c);
              (*DAT_10223020)(local_270);
              (*DAT_10223020)(local_274);
              (*DAT_10223020)(local_278);
              (*DAT_10223020)(local_27c);
              (*DAT_10223020)(local_280);
              (*DAT_10223020)(local_284);
              (*DAT_10223020)(local_288);
              (*DAT_10223020)((char *)(iVar16 + 0x708));
              (*DAT_10223020)(iVar16 + 0x738);
              (*DAT_10223020)(iVar16 + 0x778);
              (*DAT_10223004)();
              this = local_260;
            }
            local_250 = local_250 + 1;
            piVar4 = (int *)FUN_1002f550(local_340,local_22c);
            pbVar15 = local_264;
            uVar3 = local_230;
            bVar1 = *(byte *)(*(int *)(*piVar4 + 4) + 0xc + (int)piVar4);
          }
          if (0xf < local_218) {
            std::_Deallocate<8,0>(local_22c[0],local_218 + 1);
          }
          if (0xf < uVar3) {
            std::_Deallocate<8,0>(local_244[0],uVar3 + 1);
          }
        }
        FUN_100308f0();
        if (pbVar15 != (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)0x0) {
          std::
          _Destroy_range<fuzzer::fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>_>
                    (pbVar15,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                              *)this,
                     (fuzzer_allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_>
                      *)&local_264);
          std::_Deallocate<8,0>(pbVar15,(((int)local_254 - (int)pbVar15) / 0x18) * 0x18);
        }
        break;
      }
      local_24c = local_24c + 1;
      pbVar12 = pbVar12 + 0x120;
    } while (local_24c < 0x11);
  }
LAB_100dacbe:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

