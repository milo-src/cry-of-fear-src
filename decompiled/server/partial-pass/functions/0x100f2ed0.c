// rea decompile_all
// name: FUN_100f2ed0
// address: 0x100f2ed0
// body: available
// range: 0x100f2ed0-0x100f39d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f39d4 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f2ed0(int param_1,char param_2,char param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  char ****ppppcVar6;
  char ****ppppcVar7;
  int iVar8;
  int local_4b0 [3];
  byte abStack_4a4 [172];
  int local_3f8 [3];
  byte abStack_3ec [164];
  int local_348;
  undefined1 local_344;
  undefined4 local_334;
  undefined4 local_330;
  char ***local_32c [4];
  uint local_31c;
  undefined4 local_318;
  char local_314 [8];
  char local_30c [247];
  char cStack_215;
  char local_214 [256];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019e061;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (*DAT_102230d4)(local_214,local_14);
  pcVar4 = &cStack_215;
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (pcVar5[1] != '\0');
  builtin_strncpy(pcVar5 + 1,"/scriptsettings.dat",0x14);
  (*DAT_102230d4)(local_314);
  pcVar4 = (char *)((int)&local_318 + 3);
  do {
    pcVar5 = pcVar4;
    pcVar4 = pcVar5 + 1;
  } while (pcVar5[1] != '\0');
  builtin_strncpy(pcVar5 + 1,"/alt.dat",9);
  FUN_1002f8d0(local_214,1,0x40,1);
  local_31c = 0;
  local_318 = 0xf;
  local_32c[0] = (char ***)((uint)local_32c[0] & 0xffffff00);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_10049b60(local_314,2,0x40,1);
  local_334 = 0;
  local_330 = 0xf;
  local_344 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  if (((abStack_4a4[*(int *)(local_4b0[0] + 4)] & 6) == 0) &&
     ((abStack_3ec[*(int *)(local_3f8[0] + 4)] & 6) == 0)) {
    iVar8 = 0;
    if ((param_3 != '\0') || (param_4 != '\0')) {
      iVar8 = 0x29a;
    }
    if (param_1 < 0x8001) {
      if (param_1 == 0x8000) {
        iVar8 = 0x3b;
      }
      else if (param_1 < 0x81) {
        if (param_1 == 0x80) {
          iVar8 = 0x33;
        }
        else if (param_1 < 9) {
          if (param_1 == 8) {
            iVar8 = 0x16;
          }
          else if (param_1 < 3) {
            if (param_1 == 2) {
              iVar8 = 7;
            }
            else if (param_1 == -0x80000000) {
              iVar8 = 0x52;
            }
            else {
              if (param_1 != 1) goto LAB_100f3281;
              iVar8 = 0xf;
            }
          }
          else if (param_1 == 4) {
            iVar8 = 0x2d;
          }
          else {
LAB_100f3281:
            if (iVar8 == 0) goto LAB_100f3285;
          }
        }
        else if (param_1 == 0x10) {
          iVar8 = 3;
        }
        else if (param_1 == 0x20) {
          iVar8 = 0x53;
        }
        else {
          if (param_1 != 0x40) goto LAB_100f3281;
          iVar8 = 0x27;
        }
      }
      else if (param_1 < 0x801) {
        if (param_1 == 0x800) {
          iVar8 = 0x37;
        }
        else if (param_1 == 0x100) {
          iVar8 = 0x34;
        }
        else if (param_1 == 0x200) {
          iVar8 = 0x35;
        }
        else {
          if (param_1 != 0x400) goto LAB_100f3281;
          iVar8 = 0x36;
        }
      }
      else if (param_1 == 0x1000) {
        iVar8 = 0x38;
      }
      else if (param_1 == 0x2000) {
        iVar8 = 0x39;
      }
      else {
        if (param_1 != 0x4000) goto LAB_100f3281;
        iVar8 = 0x3a;
      }
    }
    else if (param_1 < 0x800001) {
      if (param_1 == 0x800000) {
        iVar8 = 0x4a;
      }
      else if (param_1 < 0x80001) {
        if (param_1 == 0x80000) {
          iVar8 = 0x46;
        }
        else if (param_1 == 0x10000) {
          iVar8 = 0x3c;
        }
        else if (param_1 == 0x20000) {
          iVar8 = 0x3d;
        }
        else {
          if (param_1 != 0x40000) goto LAB_100f3281;
          iVar8 = 0x3e;
        }
      }
      else if (param_1 == 0x100000) {
        iVar8 = 0x47;
      }
      else if (param_1 == 0x200000) {
        iVar8 = 0x48;
      }
      else {
        if (param_1 != 0x400000) goto LAB_100f3281;
        iVar8 = 0x49;
      }
    }
    else if (param_1 < 0x8000001) {
      if (param_1 == 0x8000000) {
        iVar8 = 0x4e;
      }
      else if (param_1 == 0x1000000) {
        iVar8 = 0x4b;
      }
      else if (param_1 == 0x2000000) {
        iVar8 = 0x4c;
      }
      else {
        if (param_1 != 0x4000000) goto LAB_100f3281;
        iVar8 = 0x4d;
      }
    }
    else if (param_1 == 0x10000000) {
      iVar8 = 0x4f;
    }
    else if (param_1 == 0x20000000) {
      iVar8 = 0x50;
    }
    else {
      if (param_1 != 0x40000000) goto LAB_100f3281;
      iVar8 = 0x51;
    }
    local_348 = 1;
    piVar3 = (int *)FUN_1002f550(local_4b0,local_32c);
    bVar1 = *(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3);
    while ((bVar1 & 6) == 0) {
      if (local_348 != iVar8) {
        if ((param_3 == '\0') || (local_348 != 0x2f)) {
          if ((param_4 == '\0') || (local_348 != 0x30)) {
            ppppcVar6 = local_32c;
            if (0xf < local_318) {
              ppppcVar6 = (char ****)local_32c[0];
            }
            ppppcVar7 = ppppcVar6;
            do {
              cVar2 = *(char *)ppppcVar7;
              *(char *)((int)ppppcVar7 + (int)(local_114 + -(int)ppppcVar6)) = cVar2;
              ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
            } while (cVar2 != '\0');
            if (0xff < local_31c) goto LAB_100f39d4;
            local_114[local_31c] = '\0';
            pcVar4 = "\n";
            piVar3 = (int *)FUN_100493b0(local_3f8,local_114,&DAT_101a84c8);
          }
          else {
            ppppcVar6 = local_32c;
            if (0xf < local_318) {
              ppppcVar6 = (char ****)local_32c[0];
            }
            ppppcVar7 = ppppcVar6;
            do {
              cVar2 = *(char *)ppppcVar7;
              *(char *)((int)ppppcVar7 + (int)(local_114 + -(int)ppppcVar6)) = cVar2;
              ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
            } while (cVar2 != '\0');
            if (0xff < local_31c) {
LAB_100f39d4:
                    /* WARNING: Subroutine does not return */
              ___report_rangecheckfailure();
            }
            local_114[local_31c] = '\0';
            pcVar4 = "ck78kewvx9!%n218dkss\n";
            if (param_2 != '\0') {
              pcVar4 = "kk78kewvx9!%n218dkss\n";
            }
            piVar3 = local_3f8;
          }
        }
        else {
          ppppcVar6 = local_32c;
          if (0xf < local_318) {
            ppppcVar6 = (char ****)local_32c[0];
          }
          ppppcVar7 = ppppcVar6;
          do {
            cVar2 = *(char *)ppppcVar7;
            *(char *)((int)ppppcVar7 + (int)(local_114 + -(int)ppppcVar6)) = cVar2;
            ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
          } while (cVar2 != '\0');
          if (0xff < local_31c) goto LAB_100f39d4;
          local_114[local_31c] = '\0';
          pcVar4 = &DAT_101dd9bc;
          if (param_2 != '\0') {
            pcVar4 = &DAT_101dd9a4;
          }
          piVar3 = local_3f8;
        }
        goto LAB_100f3931;
      }
      ppppcVar6 = local_32c;
      if (0xf < local_318) {
        ppppcVar6 = (char ****)local_32c[0];
      }
      ppppcVar7 = ppppcVar6;
      do {
        cVar2 = *(char *)ppppcVar7;
        ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
        *(char *)((int)ppppcVar7 + (int)(local_214 + (0xff - (int)ppppcVar6))) = cVar2;
      } while (cVar2 != '\0');
      if (0xff < local_31c) goto LAB_100f39d4;
      local_114[local_31c] = '\0';
      if (param_1 < 0x8001) {
        if (param_1 == 0x8000) {
          pcVar4 = &DAT_101dd65c;
          if (param_2 != '\0') {
            pcVar4 = &DAT_101dd644;
          }
          piVar3 = local_3f8;
          goto LAB_100f3931;
        }
        if (0x80 < param_1) {
          if (param_1 < 0x801) {
            if (param_1 == 0x800) {
              pcVar4 = "jwtyv**yb&(qtqlg)moj\n";
              if (param_2 != '\0') {
                pcVar4 = "jwsyv**yb&(qtqlg)moj\n";
              }
              piVar3 = local_3f8;
            }
            else if (param_1 == 0x100) {
              pcVar4 = &DAT_101dd50c;
              if (param_2 != '\0') {
                pcVar4 = &DAT_101dd4f4;
              }
              piVar3 = local_3f8;
            }
            else if (param_1 == 0x200) {
              pcVar4 = &DAT_101dd53c;
              if (param_2 != '\0') {
                pcVar4 = "%xn%i)jhxmfnbgjsr^if\n";
              }
              piVar3 = local_3f8;
            }
            else {
              if (param_1 != 0x400) goto LAB_100f393a;
              pcVar4 = "fy^xix&&vkz)vcrn!wtv\n";
              if (param_2 != '\0') {
                pcVar4 = "fy^xix&&vkz)vcdn!wtv\n";
              }
              piVar3 = local_3f8;
            }
          }
          else if (param_1 == 0x1000) {
            pcVar4 = &DAT_101dd5cc;
            if (param_2 != '\0') {
              pcVar4 = &DAT_101dd5b4;
            }
            piVar3 = local_3f8;
          }
          else if (param_1 == 0x2000) {
            pcVar4 = "yef!&kyzw*^vd*tj)zkc\n";
            if (param_2 != '\0') {
              pcVar4 = "yef!xkyzw*^vd*tj)zkc\n";
            }
            piVar3 = local_3f8;
          }
          else {
            if (param_1 != 0x4000) goto LAB_100f393a;
            pcVar4 = "z(*mbwy(tolqlrqf$lmw\n";
            if (param_2 != '\0') {
              pcVar4 = "z(*mbwy(talqlrqf$lmw\n";
            }
            piVar3 = local_3f8;
          }
          goto LAB_100f3931;
        }
        if (param_1 == 0x80) {
          pcVar4 = &DAT_101dd4dc;
          if (param_2 != '\0') {
            pcVar4 = &DAT_101dd4c4;
          }
          piVar3 = local_3f8;
          goto LAB_100f3931;
        }
        if (8 < param_1) {
          if (param_1 == 0x10) {
            pcVar4 = "z3,4rj)4b!9g7vgi4x5a\n";
            if (param_2 != '\0') {
              pcVar4 = "z3,4lj)4b!9g7vgi4x5a\n";
            }
            piVar3 = local_3f8;
          }
          else if (param_1 == 0x20) {
            piVar3 = local_3f8;
            if (param_2 == '\0') {
              pcVar4 = "&fx!hd$bw!ayk%dfmcbg\n";
            }
            else {
              pcVar4 = "&fx!hd$bw^ayk%dfmcbg\n";
            }
          }
          else {
            if (param_1 != 0x40) goto LAB_100f393a;
            pcVar4 = "r1&,iji4cjtvf.44w919\n";
            if (param_2 != '\0') {
              pcVar4 = "r1&,iji4cjtvf,44w919\n";
            }
            piVar3 = local_3f8;
          }
          goto LAB_100f3931;
        }
        if (param_1 == 8) {
          pcVar4 = &DAT_101dd44c;
          if (param_2 != '\0') {
            pcVar4 = &DAT_101dd434;
          }
          piVar3 = local_3f8;
          goto LAB_100f3931;
        }
        if (param_1 < 3) {
          if (param_1 == 2) {
            pcVar4 = "ye&0le1^0(fcanb3v5t4\n";
            if (param_2 != '\0') {
              pcVar4 = "ye&ole1^0(fcanb3v5t4\n";
            }
            piVar3 = local_3f8;
          }
          else if (param_1 == -0x80000000) {
            pcVar4 = &DAT_101dd95c;
            if (param_2 != '\0') {
              pcVar4 = &DAT_101dd944;
            }
            piVar3 = local_3f8;
          }
          else {
            if (param_1 != 1) goto LAB_100f393a;
            pcVar4 = "v9agjak+p)(,03qb)aq4\n";
            if (param_2 != '\0') {
              pcVar4 = "v9agjak+p)(,o3qb)aq4\n";
            }
            piVar3 = local_3f8;
          }
          goto LAB_100f3931;
        }
        if (param_1 == 4) {
          pcVar4 = "1r6fd46ob7u2yj9r83yx\n";
          if (param_2 != '\0') {
            pcVar4 = "1r6fd46ob7u2yj9q83yx\n";
          }
          piVar3 = local_3f8;
          goto LAB_100f3931;
        }
      }
      else {
        if (param_1 < 0x800001) {
          if (param_1 == 0x800000) {
            pcVar4 = "tzi&a0xfbkb^n&ikaxj%\n";
            if (param_2 != '\0') {
              pcVar4 = "tzi&aoxfbkb^n&ikaxj%\n";
            }
            piVar3 = local_3f8;
          }
          else if (param_1 < 0x80001) {
            if (param_1 == 0x80000) {
              pcVar4 = "pzakhx&p^lbk^kw($(fo\n";
              if (param_2 != '\0') {
                pcVar4 = "pzakmx&p^lbk^kw($(fo\n";
              }
              piVar3 = local_3f8;
            }
            else if (param_1 == 0x10000) {
              pcVar4 = "dzpy)*iiy$0j!akyfbn%\n";
              if (param_2 != '\0') {
                pcVar4 = "dzpy)*iiy$oj!akyfbn%\n";
              }
              piVar3 = local_3f8;
            }
            else if (param_1 == 0x20000) {
              pcVar4 = &DAT_101dd6bc;
              if (param_2 != '\0') {
                pcVar4 = &DAT_101dd6a4;
              }
              piVar3 = local_3f8;
            }
            else {
              if (param_1 != 0x40000) goto LAB_100f393a;
              pcVar4 = &DAT_101dd6ec;
              if (param_2 != '\0') {
                pcVar4 = &DAT_101dd6d4;
              }
              piVar3 = local_3f8;
            }
          }
          else if (param_1 == 0x100000) {
            pcVar4 = "g*q$cceqhz&vcdp(av%!\n";
            if (param_2 != '\0') {
              pcVar4 = "g*q$cceqhz&vcdp(au%!\n";
            }
            piVar3 = local_3f8;
          }
          else if (param_1 == 0x200000) {
            pcVar4 = "aba^$i)whenzprdh!vus\n";
            if (param_2 != '\0') {
              pcVar4 = "aaa^$i)whenzprdh!vus\n";
            }
            piVar3 = local_3f8;
          }
          else {
            if (param_1 != 0x400000) goto LAB_100f393a;
            pcVar4 = &DAT_101dd7ac;
            if (param_2 != '\0') {
              pcVar4 = &DAT_101dd794;
            }
            piVar3 = local_3f8;
          }
        }
        else if (param_1 < 0x8000001) {
          if (param_1 == 0x8000000) {
            pcVar4 = "*j%gb*^noyresqjihoes\n";
            if (param_2 != '\0') {
              pcVar4 = "*j%gb*^noyresqjihoez\n";
            }
            piVar3 = local_3f8;
          }
          else if (param_1 == 0x1000000) {
            pcVar4 = "wph!uhmgrws)*erdb*rg\n";
            if (param_2 != '\0') {
              pcVar4 = "wph!uhhgrws)*erdb*rg\n";
            }
            piVar3 = local_3f8;
          }
          else if (param_1 == 0x2000000) {
            pcVar4 = "&x&v%dvcr&$yoqs%c%ar\n";
            if (param_2 != '\0') {
              pcVar4 = "&x&w%dvcr&$yoqs%c%ar\n";
            }
            piVar3 = local_3f8;
          }
          else {
            if (param_1 != 0x4000000) goto LAB_100f393a;
            pcVar4 = "foyvvuxq^i)brfentm$&\n";
            if (param_2 != '\0') {
              pcVar4 = "feyvvuxq^i)brfentm$&\n";
            }
            piVar3 = local_3f8;
          }
        }
        else if (param_1 == 0x10000000) {
          piVar3 = local_3f8;
          if (param_2 == '\0') {
            pcVar4 = &DAT_101dd8cc;
          }
          else {
            pcVar4 = &DAT_101dd8b4;
          }
        }
        else if (param_1 == 0x20000000) {
          pcVar4 = "rvdw&bhwjqsjm$pfwnp)\n";
          if (param_2 != '\0') {
            pcVar4 = "lvdw&bhwjqsjm$pfwnp)\n";
          }
          piVar3 = local_3f8;
        }
        else {
          if (param_1 != 0x40000000) goto LAB_100f393a;
          pcVar4 = "zqv%n(noquvh)dlmtl!x\n";
          if (param_2 != '\0') {
            pcVar4 = "zqv%n(nqquvh)dlmtl!x\n";
          }
          piVar3 = local_3f8;
        }
LAB_100f3931:
        FUN_100493b0(piVar3,pcVar4);
      }
LAB_100f393a:
      local_348 = local_348 + 1;
      piVar3 = (int *)FUN_1002f550(local_4b0,local_32c);
      bVar1 = *(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3);
    }
    FUN_100f9d20();
    FUN_100f9db0();
    iVar8 = _remove(local_214);
    if (iVar8 == 0) {
      _rename(local_314,local_214);
    }
    FUN_1004a510();
    if (0xf < local_318) {
      std::_Deallocate<8,0>(local_32c[0],local_318 + 1);
    }
  }
  else {
LAB_100f3285:
    FUN_1004a510();
  }
  FUN_100308f0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

