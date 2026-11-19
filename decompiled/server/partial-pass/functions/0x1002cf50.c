// rea decompile_all
// name: FUN_1002cf50
// address: 0x1002cf50
// body: available
// range: 0x1002cf50-0x1002d51c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1002cf50(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  
  pbVar5 = &DAT_101acea8;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_1002cf80:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002cf85;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_1002cf80;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002cf85:
  if (uVar3 == 0) {
    return 2;
  }
  pcVar6 = "box1getup";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002cfc0:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002cfc5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002cfc0;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002cfc5:
  if (uVar3 == 0) {
    return 6;
  }
  pcVar6 = "box1shoot";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d000:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d005;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d000;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d005:
  if (uVar3 == 0) {
    return 7;
  }
  pcVar6 = "box1getback";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d040:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d045;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d040;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d045:
  if (uVar3 == 0) {
    return 8;
  }
  pcVar6 = "box1runtobox2";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d080:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d085;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d080;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d085:
  if (uVar3 == 0) {
    return 9;
  }
  pbVar5 = &DAT_101acee8;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_1002d0c0:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d0c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_1002d0c0;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d0c5:
  if (uVar3 == 0) {
    return 10;
  }
  pcVar6 = "box2getup";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d100:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d105;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d100;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d105:
  if (uVar3 == 0) {
    return 0xb;
  }
  pcVar6 = "box2shoot";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d140:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d145;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d140;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d145:
  if (uVar3 == 0) {
    return 0xc;
  }
  pcVar6 = "box2getback";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d180:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d185;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d180;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d185:
  if (uVar3 == 0) {
    return 0xd;
  }
  pcVar6 = "box2runtobox1";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d1c0:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d1c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d1c0;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d1c5:
  if (uVar3 == 0) {
    return 0xe;
  }
  pcVar6 = "box2runtobox3";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d200:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d205;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d200;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d205:
  if (uVar3 == 0) {
    return 0x11;
  }
  pbVar5 = &DAT_101acf38;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_1002d240:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d245;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_1002d240;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d245:
  if (uVar3 == 0) {
    return 0x12;
  }
  pcVar6 = "box3getup";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d280:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d285;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d280;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d285:
  if (uVar3 == 0) {
    return 0x13;
  }
  pcVar6 = "box3shoot";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d2c0:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d2c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d2c0;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d2c5:
  if (uVar3 == 0) {
    return 0x14;
  }
  pcVar6 = "box3getback";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d300:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d305;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d300;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d305:
  if (uVar3 == 0) {
    return 0x15;
  }
  pcVar6 = "box3runtobox2";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d340:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d345;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d340;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d345:
  if (uVar3 == 0) {
    return 0x16;
  }
  pcVar6 = "box3runtobox4";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d380:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d385;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d380;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d385:
  if (uVar3 == 0) {
    return 0x17;
  }
  pbVar5 = &DAT_101acf88;
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 != *pbVar5) {
LAB_1002d3c0:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d3c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < pbVar5[1];
    if (bVar1 != pbVar5[1]) goto LAB_1002d3c0;
    pbVar2 = pbVar2 + 2;
    pbVar5 = pbVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d3c5:
  if (uVar3 == 0) {
    return 0x18;
  }
  pcVar6 = "box4getup";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d400:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d405;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d400;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d405:
  if (uVar3 == 0) {
    return 0x19;
  }
  pcVar6 = "box4shoot";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d440:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d445;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d440;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d445:
  if (uVar3 == 0) {
    return 0x1a;
  }
  pcVar6 = "box4getback";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d480:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d485;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d480;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d485:
  if (uVar3 == 0) {
    return 0x1b;
  }
  pcVar6 = "box4runtobox3";
  pbVar2 = param_1;
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) {
LAB_1002d4c0:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002d4c5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) goto LAB_1002d4c0;
    pbVar2 = pbVar2 + 2;
    pcVar6 = pcVar6 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002d4c5:
  if (uVar3 == 0) {
    return 0x20;
  }
  pcVar6 = "nothing";
  while( true ) {
    bVar1 = *param_1;
    bVar7 = bVar1 < (byte)*pcVar6;
    if (bVar1 != *pcVar6) break;
    if (bVar1 == 0) {
      return 0x21;
    }
    bVar1 = param_1[1];
    bVar7 = bVar1 < (byte)pcVar6[1];
    if (bVar1 != pcVar6[1]) break;
    param_1 = param_1 + 2;
    pcVar6 = pcVar6 + 2;
    if (bVar1 == 0) {
      return 0x21;
    }
  }
  uVar4 = 0;
  if ((-(uint)bVar7 | 1) == 0) {
    uVar4 = 0x21;
  }
  return uVar4;
}

