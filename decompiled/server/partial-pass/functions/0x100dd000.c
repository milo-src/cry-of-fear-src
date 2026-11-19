// rea decompile_all
// name: FUN_100dd000
// address: 0x100dd000
// body: available
// range: 0x100dd000-0x100dd963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dd000(int param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019df1d;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = (*DAT_102230c4)("scriptsettings.dat",local_38,local_14);
  if (iVar1 == 0) {
    (*DAT_1022303c)(1,"CheckingEndingOrUnlockables:: File failed, type was %i!\n",param_1);
    goto LAB_100dd326;
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c = 0;
  iVar2 = 0;
  local_8 = 0;
  local_30 = 0;
  if ((param_2 != '\0') || (param_3 != '\0')) {
    iVar2 = 0x29a;
    local_30 = 0x29a;
  }
  if (param_1 < 0x8001) {
    if (param_1 == 0x8000) {
      local_30 = 0x3b;
      goto LAB_100dd354;
    }
    if (0x80 < param_1) {
      if (param_1 < 0x801) {
        if (param_1 == 0x800) {
          local_30 = 0x37;
        }
        else if (param_1 == 0x100) {
          local_30 = 0x34;
        }
        else if (param_1 == 0x200) {
          local_30 = 0x35;
        }
        else {
          if (param_1 != 0x400) goto LAB_100dd316;
          local_30 = 0x36;
        }
      }
      else if (param_1 == 0x1000) {
        local_30 = 0x38;
      }
      else if (param_1 == 0x2000) {
        local_30 = 0x39;
      }
      else {
        if (param_1 != 0x4000) goto LAB_100dd316;
        local_30 = 0x3a;
      }
      goto LAB_100dd354;
    }
    if (param_1 == 0x80) {
      local_30 = 0x33;
      goto LAB_100dd354;
    }
    if (8 < param_1) {
      if (param_1 == 0x10) {
        local_30 = 3;
      }
      else if (param_1 == 0x20) {
        local_30 = 0x53;
      }
      else {
        if (param_1 != 0x40) goto LAB_100dd316;
        local_30 = 0x27;
      }
      goto LAB_100dd354;
    }
    if (param_1 == 8) {
      local_30 = 0x16;
      goto LAB_100dd354;
    }
    if (param_1 < 3) {
      if (param_1 == 2) {
        local_30 = 7;
      }
      else if (param_1 == -0x80000000) {
        local_30 = 0x52;
      }
      else {
        if (param_1 != 1) goto LAB_100dd316;
        local_30 = 0xf;
      }
      goto LAB_100dd354;
    }
    if (param_1 == 4) {
      local_30 = 0x2d;
      goto LAB_100dd354;
    }
LAB_100dd316:
    if (iVar2 != 0) goto LAB_100dd354;
  }
  else {
    if (param_1 < 0x800001) {
      if (param_1 == 0x800000) {
        local_30 = 0x4a;
      }
      else if (param_1 < 0x80001) {
        if (param_1 == 0x80000) {
          local_30 = 0x46;
        }
        else if (param_1 == 0x10000) {
          local_30 = 0x3c;
        }
        else if (param_1 == 0x20000) {
          local_30 = 0x3d;
        }
        else {
          if (param_1 != 0x40000) goto LAB_100dd316;
          local_30 = 0x3e;
        }
      }
      else if (param_1 == 0x100000) {
        local_30 = 0x47;
      }
      else if (param_1 == 0x200000) {
        local_30 = 0x48;
      }
      else {
        if (param_1 != 0x400000) goto LAB_100dd316;
        local_30 = 0x49;
      }
    }
    else if (param_1 < 0x8000001) {
      if (param_1 == 0x8000000) {
        local_30 = 0x4e;
      }
      else if (param_1 == 0x1000000) {
        local_30 = 0x4b;
      }
      else if (param_1 == 0x2000000) {
        local_30 = 0x4c;
      }
      else {
        if (param_1 != 0x4000000) goto LAB_100dd316;
        local_30 = 0x4d;
      }
    }
    else if (param_1 == 0x10000000) {
      local_30 = 0x4f;
    }
    else if (param_1 == 0x20000000) {
      local_30 = 0x50;
    }
    else {
      if (param_1 != 0x40000000) goto LAB_100dd316;
      local_30 = 0x51;
    }
LAB_100dd354:
    local_34 = 1;
    iVar2 = FUN_101743ff(iVar1,&DAT_101a84c8);
    if (iVar2 != 0) {
LAB_100dd370:
      if ((param_2 != '\0') && (local_34 == 0x2f)) {
        iVar3 = FUN_1013f5f0(iVar2,&DAT_101dcd24);
        if (iVar3 == 0) {
          iVar3 = FUN_1013f5f0(iVar2,&DAT_101dcd3c);
          if (iVar3 == 0) goto LAB_100dd3a9;
LAB_100dd953:
          (*DAT_102230c8)(iVar1);
          goto LAB_100dd326;
        }
        goto LAB_100dd31a;
      }
LAB_100dd3a9:
      if ((param_3 != '\0') && (local_34 == 0x30)) {
        iVar3 = FUN_1013f5f0(iVar2,"kk78kewvx9!%n218dkss");
        if (iVar3 != 0) goto LAB_100dd31a;
        iVar3 = FUN_1013f5f0(iVar2,"ck78kewvx9!%n218dkss");
        if (iVar3 != 0) goto LAB_100dd953;
      }
      if (local_34 != local_30) goto LAB_100dd932;
      if (param_1 < 0x8001) {
        if (param_1 == 0x8000) {
          iVar3 = FUN_1013f5f0(iVar2,&DAT_101dd024);
          if (iVar3 == 0) {
            pcVar4 = &DAT_101dd03c;
            goto LAB_100dd925;
          }
          goto LAB_100dd31a;
        }
        if (param_1 < 0x81) {
          if (param_1 == 0x80) {
            iVar3 = FUN_1013f5f0(iVar2,&DAT_101dcea4);
            if (iVar3 == 0) {
              pcVar4 = &DAT_101dcebc;
              goto LAB_100dd925;
            }
            goto LAB_100dd31a;
          }
          if (param_1 < 9) {
            if (param_1 == 8) {
              iVar3 = FUN_1013f5f0(iVar2,&DAT_101dce14);
              if (iVar3 == 0) {
                pcVar4 = &DAT_101dce2c;
                goto LAB_100dd925;
              }
              goto LAB_100dd31a;
            }
            if (2 < param_1) {
              if (param_1 == 4) {
                iVar3 = FUN_1013f5f0(iVar2,"1r6fd46ob7u2yj9q83yx");
                if (iVar3 == 0) {
                  pcVar4 = "1r6fd46ob7u2yj9r83yx";
                  goto LAB_100dd925;
                }
                goto LAB_100dd31a;
              }
              goto LAB_100dd932;
            }
            if (param_1 == 2) {
              iVar3 = FUN_1013f5f0(iVar2,"ye&ole1^0(fcanb3v5t4");
              if (iVar3 != 0) goto LAB_100dd31a;
              pcVar4 = "ye&0le1^0(fcanb3v5t4";
            }
            else {
              if (param_1 == -0x80000000) {
                iVar3 = FUN_1013f5f0(iVar2,&DAT_101dd324);
                if (iVar3 == 0) {
                  pcVar4 = &DAT_101dd33c;
                  goto LAB_100dd925;
                }
                goto LAB_100dd31a;
              }
              if (param_1 != 1) goto LAB_100dd932;
              iVar3 = FUN_1013f5f0(iVar2,"v9agjak+p)(,o3qb)aq4");
              if (iVar3 != 0) goto LAB_100dd31a;
              pcVar4 = "v9agjak+p)(,03qb)aq4";
            }
          }
          else if (param_1 == 0x10) {
            iVar3 = FUN_1013f5f0(iVar2,"z3,4lj)4b!9g7vgi4x5a");
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = "z3,4rj)4b!9g7vgi4x5a";
          }
          else {
            if (param_1 == 0x20) {
              iVar3 = FUN_1013f5f0(iVar2,"&fx!hd$bw^ayk%dfmcbg");
              if (iVar3 == 0) {
                pcVar4 = "&fx!hd$bw!ayk%dfmcbg";
                goto LAB_100dd925;
              }
              goto LAB_100dd31a;
            }
            if (param_1 != 0x40) goto LAB_100dd932;
            iVar3 = FUN_1013f5f0(iVar2,"r1&,iji4cjtvf,44w919");
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = "r1&,iji4cjtvf.44w919";
          }
        }
        else if (param_1 < 0x801) {
          if (param_1 == 0x800) {
            iVar3 = FUN_1013f5f0(iVar2,"jwsyv**yb&(qtqlg)moj");
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = "jwtyv**yb&(qtqlg)moj";
          }
          else if (param_1 == 0x100) {
            iVar3 = FUN_1013f5f0(iVar2,&DAT_101dced4);
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = &DAT_101dceec;
          }
          else {
            if (param_1 == 0x200) {
              iVar3 = FUN_1013f5f0(iVar2,"%xn%i)jhxmfnbgjsr^if");
              if (iVar3 == 0) {
                pcVar4 = &DAT_101dcf1c;
                goto LAB_100dd925;
              }
              goto LAB_100dd31a;
            }
            if (param_1 != 0x400) goto LAB_100dd932;
            iVar3 = FUN_1013f5f0(iVar2,"fy^xix&&vkz)vcdn!wtv");
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = "fy^xix&&vkz)vcrn!wtv";
          }
        }
        else if (param_1 == 0x1000) {
          iVar3 = FUN_1013f5f0(iVar2,&DAT_101dcf94);
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = &DAT_101dcfac;
        }
        else if (param_1 == 0x2000) {
          iVar3 = FUN_1013f5f0(iVar2,"yef!xkyzw*^vd*tj)zkc");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "yef!&kyzw*^vd*tj)zkc";
        }
        else {
          if (param_1 != 0x4000) goto LAB_100dd932;
          iVar3 = FUN_1013f5f0(iVar2,"z(*mbwy(talqlrqf$lmw");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "z(*mbwy(tolqlrqf$lmw";
        }
      }
      else if (param_1 < 0x800001) {
        if (param_1 == 0x800000) {
          iVar3 = FUN_1013f5f0(iVar2,"tzi&aoxfbkb^n&ikaxj%");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "tzi&a0xfbkb^n&ikaxj%";
        }
        else if (param_1 < 0x80001) {
          if (param_1 == 0x80000) {
            iVar3 = FUN_1013f5f0(iVar2,"pzakmx&p^lbk^kw($(fo");
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = "pzakhx&p^lbk^kw($(fo";
          }
          else if (param_1 == 0x10000) {
            iVar3 = FUN_1013f5f0(iVar2,"dzpy)*iiy$oj!akyfbn%");
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = "dzpy)*iiy$0j!akyfbn%";
          }
          else if (param_1 == 0x20000) {
            iVar3 = FUN_1013f5f0(iVar2,&DAT_101dd084);
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = &DAT_101dd09c;
          }
          else {
            if (param_1 != 0x40000) goto LAB_100dd932;
            iVar3 = FUN_1013f5f0(iVar2,&DAT_101dd0b4);
            if (iVar3 != 0) goto LAB_100dd31a;
            pcVar4 = &DAT_101dd0cc;
          }
        }
        else if (param_1 == 0x100000) {
          iVar3 = FUN_1013f5f0(iVar2,"g*q$cceqhz&vcdp(au%!");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "g*q$cceqhz&vcdp(av%!";
        }
        else if (param_1 == 0x200000) {
          iVar3 = FUN_1013f5f0(iVar2,"aaa^$i)whenzprdh!vus");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "aba^$i)whenzprdh!vus";
        }
        else {
          if (param_1 != 0x400000) goto LAB_100dd932;
          iVar3 = FUN_1013f5f0(iVar2,&DAT_101dd174);
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = &DAT_101dd18c;
        }
      }
      else if (param_1 < 0x8000001) {
        if (param_1 == 0x8000000) {
          iVar3 = FUN_1013f5f0(iVar2,"*j%gb*^noyresqjihoez");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "*j%gb*^noyresqjihoes";
        }
        else if (param_1 == 0x1000000) {
          iVar3 = FUN_1013f5f0(iVar2,"wph!uhhgrws)*erdb*rg");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "wph!uhmgrws)*erdb*rg";
        }
        else if (param_1 == 0x2000000) {
          iVar3 = FUN_1013f5f0(iVar2,"&x&w%dvcr&$yoqs%c%ar");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "&x&v%dvcr&$yoqs%c%ar";
        }
        else {
          if (param_1 != 0x4000000) goto LAB_100dd932;
          iVar3 = FUN_1013f5f0(iVar2,"feyvvuxq^i)brfentm$&");
          if (iVar3 != 0) goto LAB_100dd31a;
          pcVar4 = "foyvvuxq^i)brfentm$&";
        }
      }
      else if (param_1 == 0x10000000) {
        iVar3 = FUN_1013f5f0(iVar2,&DAT_101dd294);
        if (iVar3 != 0) goto LAB_100dd31a;
        pcVar4 = &DAT_101dd2ac;
      }
      else if (param_1 == 0x20000000) {
        iVar3 = FUN_1013f5f0(iVar2,"lvdw&bhwjqsjm$pfwnp)");
        if (iVar3 != 0) goto LAB_100dd31a;
        pcVar4 = "rvdw&bhwjqsjm$pfwnp)";
      }
      else {
        if (param_1 != 0x40000000) goto LAB_100dd932;
        iVar3 = FUN_1013f5f0(iVar2,"zqv%n(nqquvh)dlmtl!x");
        if (iVar3 != 0) goto LAB_100dd31a;
        pcVar4 = "zqv%n(noquvh)dlmtl!x";
      }
LAB_100dd925:
      iVar2 = FUN_1013f5f0(iVar2,pcVar4);
      if (iVar2 != 0) goto LAB_100dd953;
LAB_100dd932:
      local_34 = local_34 + 1;
      iVar2 = FUN_101743ff(0,&DAT_101a84c8);
      if (iVar2 == 0) goto LAB_100dd31a;
      goto LAB_100dd370;
    }
  }
LAB_100dd31a:
  (*DAT_102230c8)(iVar1);
LAB_100dd326:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

