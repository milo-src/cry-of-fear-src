// rea decompile_all
// name: FUN_100a2710
// address: 0x100a2710
// body: available
// range: 0x100a2710-0x100a38d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a2710(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  float10 fVar11;
  undefined4 uVar12;
  int local_21c;
  undefined4 local_218;
  undefined4 local_214;
  int local_210;
  undefined4 local_20c;
  char local_208 [255];
  char cStack_109;
  char local_108 [256];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (param_1 != 0) {
    local_218 = 0;
    local_214 = 0;
    (*DAT_102230d4)(local_208);
    iVar2 = *(int *)(*(int *)(in_ECX + 4) + 0x1d8);
    if (iVar2 == 0) {
      pcVar8 = (char *)((int)&local_20c + 3);
      do {
        pcVar7 = pcVar8;
        pcVar8 = pcVar7 + 1;
      } while (pcVar7[1] != '\0');
      builtin_strncpy(pcVar7 + 1,"/txtfiles/credits.txt",0x16);
    }
    else {
      iVar2 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + iVar2,"txtfiles/");
      if (iVar2 == 0) {
        local_108[8] = 's';
        local_108[9] = '/';
        local_108[10] = 0;
        builtin_strncpy(local_108,"/txtfile",8);
        pcVar7 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1d8));
        pcVar8 = pcVar7;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar10 = &cStack_109;
        do {
          pcVar9 = pcVar10 + 1;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        pcVar9 = pcVar7;
        for (uVar4 = (uint)((int)pcVar8 - (int)pcVar7) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = (int)pcVar8 - (int)pcVar7 & 3; pcVar8 = local_108, uVar4 != 0;
            uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        uVar4 = (int)pcVar8 - (int)local_108;
        pcVar8 = (char *)((int)&local_20c + 3);
        do {
          pcVar7 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = local_108;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
      }
      else {
        pcVar7 = (char *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1d8));
        pcVar8 = pcVar7;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar10 = (char *)((int)&local_20c + 3);
        do {
          pcVar9 = pcVar10 + 1;
          pcVar10 = pcVar10 + 1;
        } while (*pcVar9 != '\0');
        pcVar9 = pcVar7;
        for (uVar4 = (uint)((int)pcVar8 - (int)pcVar7) >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar10 = pcVar10 + 4;
        }
        for (uVar4 = (int)pcVar8 - (int)pcVar7 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar10 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcVar10 = pcVar10 + 1;
        }
      }
    }
    local_21c = 1;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        iVar2 = FUN_10119680(local_21c);
        if ((iVar2 != 0) && (iVar2 = FUN_100125e0(*(undefined4 *)(iVar2 + 4)), iVar2 != 0)) {
          uVar4 = 0;
          local_20c = 7;
          local_210 = 0;
          if (*(char *)(iVar2 + 0x678) != '\0') {
            iVar3 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),
                                 "c_ending");
            if (iVar3 != 0) {
              *(undefined1 *)(iVar2 + 0x679) = 1;
            }
            if (((*(char *)(iVar2 + 0x678) != '\0') &&
                (uVar5 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4), (uVar5 & 1) == 0)) &&
               (*(char *)(iVar2 + 0x679) != '\0')) {
              uVar6 = *(uint *)(iVar2 + 0x42c);
              if (((uVar6 & 0x80000) != 0) && ((uVar5 & 2) != 0)) {
                FUN_100f2ed0(0x80000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = 0x80000;
              }
              if (((char)uVar6 < '\0') && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x80,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x80;
              }
              if (((uVar6 & 0x100) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x100,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x100;
              }
              if (((uVar6 & 0x200) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x200,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x200;
              }
              if (((uVar6 & 0x400) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x400,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x400;
              }
              if (((uVar6 & 0x800) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x800,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x800;
              }
              if (((uVar6 & 0x1000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x1000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x1000;
              }
              if (((uVar6 & 0x2000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x2000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x2000;
              }
              if (((uVar6 & 0x4000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x4000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x4000;
              }
              if (((uVar6 & 0x8000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x8000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x8000;
              }
              if (((uVar6 & 0x10000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0))
              {
                FUN_100f2ed0(0x10000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x10000;
              }
              if (((uVar6 & 0x20000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0))
              {
                FUN_100f2ed0(0x20000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x20000;
              }
              if (((uVar6 & 0x40000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0))
              {
                FUN_100f2ed0(0x40000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x40000;
              }
              if (((uVar6 & 0x2000000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)
                 ) {
                FUN_100f2ed0(0x2000000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x2000000;
              }
              if (((uVar6 & 0x4000000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)
                 ) {
                FUN_100f2ed0(0x4000000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x4000000;
              }
              if (((uVar6 & 0x8000000) != 0) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)
                 ) {
                FUN_100f2ed0(0x8000000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x8000000;
              }
              if (((uVar6 & 0x10000000) != 0) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x10000000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x10000000;
              }
              if (((uVar6 & 0x20000000) != 0) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x20000000,0,0,0);
                uVar6 = *(uint *)(iVar2 + 0x42c);
                uVar4 = uVar4 | 0x20000000;
              }
              if (((uVar6 & 0x40000000) != 0) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                FUN_100f2ed0(0x40000000,0,0,0);
                uVar4 = uVar4 | 0x40000000;
              }
              if ((*(int *)(iVar2 + 0x668) + *(int *)(iVar2 + 0x66c) * 0x3c < 0x97) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                cVar1 = FUN_100dd000(0x100000,0,0);
                if ((cVar1 == '\0') && (*(char *)(iVar2 + 0x680) == '\0')) {
                  uVar4 = uVar4 | 0x100000;
                }
                FUN_100f2ed0(0x100000,0,0,0);
              }
              cVar1 = *(char *)(iVar2 + 0x4cd);
              if (cVar1 == '\0') {
                if (((*(char *)(iVar2 + 0x4ce) == '\0') && (*(char *)(iVar2 + 0x680) == '\0')) &&
                   ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                  cVar1 = FUN_100dd000(1,0,0);
                  if (cVar1 == '\0') {
                    uVar4 = uVar4 | 1;
                  }
                  FUN_100f2ed0(1,0,0,0);
                  cVar1 = *(char *)(iVar2 + 0x4cd);
                  local_210 = 1;
                }
                if (cVar1 != '\0') goto LAB_100a2e1a;
                if (((*(char *)(iVar2 + 0x680) == '\0') && (*(char *)(iVar2 + 0x4ce) == '\x01')) &&
                   ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                  cVar1 = FUN_100dd000(2,0,0);
                  if (cVar1 == '\0') {
                    uVar4 = uVar4 | 2;
                  }
                  FUN_100f2ed0(2,0,0,0);
                  cVar1 = *(char *)(iVar2 + 0x4cd);
                  local_210 = 2;
                  goto LAB_100a2e1a;
                }
              }
              else {
LAB_100a2e1a:
                if ((cVar1 == '\x01') && (*(char *)(iVar2 + 0x680) == '\0')) {
                  if ((*(char *)(iVar2 + 0x4ce) == '\0') &&
                     ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                    cVar1 = FUN_100dd000(4,0,0);
                    if (cVar1 == '\0') {
                      uVar4 = uVar4 | 4;
                    }
                    FUN_100f2ed0(4,0,0,0);
                    local_210 = 3;
                    if (*(char *)(iVar2 + 0x4cd) != '\x01') goto LAB_100a2ec6;
                  }
                  if (((*(char *)(iVar2 + 0x680) == '\0') && (*(char *)(iVar2 + 0x4ce) == '\x01'))
                     && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                    cVar1 = FUN_100dd000(8,0,0);
                    if (cVar1 == '\0') {
                      uVar4 = uVar4 | 8;
                    }
                    FUN_100f2ed0(8,0,0,0);
                    local_210 = 4;
                  }
                }
              }
LAB_100a2ec6:
              if (*(char *)(iVar2 + 0x4cf) == '\x01') {
                if (*(char *)(iVar2 + 0x680) == '\0') {
                  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) {
                    cVar1 = FUN_100dd000(0x10,0,0);
                    if (cVar1 == '\0') {
                      uVar4 = uVar4 | 0x10;
                    }
                    FUN_100f2ed0(0x10,0,0,0);
                    local_210 = 5;
                  }
                  goto LAB_100a2f11;
                }
LAB_100a2f1a:
                if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) {
                  local_218 = 1;
                  FUN_100f2ed0(0,0,1,0);
                  local_210 = 6;
                }
              }
              else {
LAB_100a2f11:
                if (*(char *)(iVar2 + 0x680) != '\0') goto LAB_100a2f1a;
              }
              cVar1 = FUN_100dd000(0,0,1);
              if (cVar1 != '\0') {
                local_214 = 1;
              }
              if (*(char *)(iVar2 + 0x680) == '\0') {
                iVar3 = FUN_10092ce0(iVar2);
                if (iVar3 < 3) {
                  local_20c = 2;
                }
                if (iVar3 - 3U < 5) {
                  local_20c = 6;
                }
                if (iVar3 - 8U < 7) {
                  local_20c = 5;
                }
                if (iVar3 - 0xfU < 7) {
                  local_20c = 4;
                }
                if (iVar3 - 0x16U < 7) {
                  local_20c = 3;
                }
                if (iVar3 < 0x23) {
                  if (0x1c < iVar3) {
                    local_20c = 2;
                  }
                }
                else {
                  local_20c = 1;
                  cVar1 = FUN_100dd000(0x200000,0,0);
                  if ((cVar1 == '\0') && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                    uVar4 = uVar4 | 0x200000;
                  }
                  else if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) == 0) goto LAB_100a30b8;
                  FUN_100f2ed0(0x200000,0,0,0);
                }
              }
              else {
                iVar3 = FUN_10092f60();
                local_20c = 7;
                if ((iVar3 < 5) && (2 < iVar3)) {
                  local_20c = 6;
                }
                if (iVar3 - 5U < 6) {
                  local_20c = 5;
                }
                if (iVar3 - 0xbU < 4) {
                  local_20c = 4;
                }
                if (iVar3 - 0xfU < 2) {
                  local_20c = 3;
                }
                if (iVar3 == 0x11) {
                  local_20c = 2;
                }
                else if (0x11 < iVar3) {
                  local_20c = 1;
                }
              }
LAB_100a30b8:
              cVar1 = FUN_100dd000(0x2000000,0,0);
              if (((cVar1 == '\0') && (*(char *)(iVar2 + 0x680) == '\0')) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                uVar4 = uVar4 | 0x2000000;
LAB_100a30fd:
                FUN_100f2ed0(0x2000000,0,0,0);
              }
              else if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) &&
                      (*(char *)(iVar2 + 0x680) == '\0')) goto LAB_100a30fd;
              cVar1 = FUN_100dd000(0x400000,0,0);
              if (((cVar1 == '\0') && (*(char *)(iVar2 + 0x680) == '\0')) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                uVar4 = uVar4 | 0x400000;
LAB_100a3154:
                FUN_100f2ed0(0x400000,0,0,0);
              }
              else if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) &&
                      (*(char *)(iVar2 + 0x680) == '\0')) goto LAB_100a3154;
              cVar1 = FUN_100dd000(0x80000000,0,0);
              if (((cVar1 == '\0') && (*(char *)(iVar2 + 0x680) == '\0')) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                uVar4 = uVar4 | 0x80000000;
LAB_100a31ab:
                FUN_100f2ed0(0x80000000,0,0,0);
              }
              else if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) &&
                      (*(char *)(iVar2 + 0x680) == '\0')) goto LAB_100a31ab;
              cVar1 = FUN_100dd000(0x20,0,0);
              if (((cVar1 == '\0') && (*(char *)(iVar2 + 0x680) == '\0')) &&
                 ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                uVar4 = uVar4 | 0x20;
LAB_100a31fc:
                FUN_100f2ed0(0x20,0,0,0);
                iVar3 = *(int *)(in_ECX + 4);
              }
              else {
                iVar3 = *(int *)(in_ECX + 4);
                if (((*(byte *)(iVar3 + 0x1a4) & 2) != 0) && (*(char *)(iVar2 + 0x680) == '\0'))
                goto LAB_100a31fc;
              }
              if (((*(int *)(iVar2 + 0x67c) == 4) && (*(char *)(iVar2 + 0x680) == '\0')) &&
                 ((*(byte *)(iVar3 + 0x1a4) & 2) != 0)) {
                cVar1 = FUN_100dd000(0x40,0,0);
                if (cVar1 == '\0') {
                  uVar4 = uVar4 | 0x40;
                }
                FUN_100f2ed0(0x40,0,0,0);
              }
              cVar1 = FUN_100dd000(0x80,0,0);
              if ((((cVar1 != '\0') && (cVar1 = FUN_100dd000(0x100,0,0), cVar1 != '\0')) &&
                  ((((cVar1 = FUN_100dd000(0x200,0,0), cVar1 != '\0' &&
                     ((cVar1 = FUN_100dd000(0x400,0,0), cVar1 != '\0' &&
                      (cVar1 = FUN_100dd000(0x800,0,0), cVar1 != '\0')))) &&
                    (cVar1 = FUN_100dd000(0x1000,0,0), cVar1 != '\0')) &&
                   ((((cVar1 = FUN_100dd000(0x2000,0,0), cVar1 != '\0' &&
                      (cVar1 = FUN_100dd000(0x4000,0,0), cVar1 != '\0')) &&
                     (cVar1 = FUN_100dd000(0x8000,0,0), cVar1 != '\0')) &&
                    ((cVar1 = FUN_100dd000(0x10000,0,0), cVar1 != '\0' &&
                     (cVar1 = FUN_100dd000(0x20000,0,0), cVar1 != '\0')))))))) &&
                 ((*(char *)(iVar2 + 0x680) == '\0' &&
                  ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)))) {
                cVar1 = FUN_100dd000(0x40000,0,0);
                if (cVar1 == '\0') {
                  uVar4 = uVar4 | 0x40000;
                }
                FUN_100f2ed0(0x40000,0,0,0);
              }
              if (local_210 == 1) {
                if ((*(char *)(iVar2 + 0x680) == '\0') &&
                   ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                  cVar1 = FUN_100dd000(0x2000,0,0);
                  if (cVar1 == '\0') {
                    uVar4 = uVar4 | 0x2000;
                  }
                  uVar12 = 0x2000;
                  goto LAB_100a3523;
                }
              }
              else if (local_210 == 2) {
                if ((*(char *)(iVar2 + 0x680) == '\0') &&
                   ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) {
                  cVar1 = FUN_100dd000(0x800,0,0);
                  if (cVar1 == '\0') {
                    uVar4 = uVar4 | 0x800;
                  }
                  uVar12 = 0x800;
                  goto LAB_100a3523;
                }
              }
              else if (local_210 == 3) {
                if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) &&
                   (*(char *)(iVar2 + 0x680) == '\0')) {
                  cVar1 = FUN_100dd000(0x4000,0,0);
                  if (cVar1 == '\0') {
                    uVar4 = uVar4 | 0x4000;
                  }
                  uVar12 = 0x4000;
                  goto LAB_100a3523;
                }
              }
              else if (local_210 == 4) {
                if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) &&
                   (*(char *)(iVar2 + 0x680) == '\0')) {
                  cVar1 = FUN_100dd000(0x10000,0,0);
                  if (cVar1 == '\0') {
                    uVar4 = uVar4 | 0x10000;
                  }
                  FUN_100f2ed0(0x10000,0,0,0);
                  cVar1 = FUN_100dd000(0x800000,0,0);
                  if (cVar1 == '\0') {
                    uVar4 = uVar4 | 0x800000;
                  }
                  uVar12 = 0x800000;
LAB_100a3523:
                  FUN_100f2ed0(uVar12,0,0,0);
                }
              }
              else if (((local_210 == 5) && ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)) &&
                      (*(char *)(iVar2 + 0x680) == '\0')) {
                cVar1 = FUN_100dd000(0x80,0,0);
                if (cVar1 == '\0') {
                  uVar4 = uVar4 | 0x80;
                }
                uVar12 = 0x80;
                goto LAB_100a3523;
              }
              cVar1 = FUN_100dd000(1,0,0);
              if ((((cVar1 != '\0') && (cVar1 = FUN_100dd000(2,0,0), cVar1 != '\0')) &&
                  (cVar1 = FUN_100dd000(4,0,0), cVar1 != '\0')) &&
                 (((cVar1 = FUN_100dd000(8,0,0), cVar1 != '\0' &&
                   (cVar1 = FUN_100dd000(0x10,0,0), cVar1 != '\0')) &&
                  ((*(char *)(iVar2 + 0x680) == '\0' &&
                   ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0)))))) {
                cVar1 = FUN_100dd000(0x8000,0,0);
                if (cVar1 == '\0') {
                  uVar4 = uVar4 | 0x8000;
                }
                FUN_100f2ed0(0x8000,0,0,0);
              }
            }
          }
          if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) &&
             (*(char *)(iVar2 + 0x680) == '\0')) {
            cVar1 = FUN_100dd000(1,0,0);
            if (cVar1 != '\0') {
              uVar4 = uVar4 | 1;
            }
            cVar1 = FUN_100dd000(2,0,0);
            if (cVar1 != '\0') {
              uVar4 = uVar4 | 2;
            }
            cVar1 = FUN_100dd000(4,0,0);
            if (cVar1 != '\0') {
              uVar4 = uVar4 | 4;
            }
            cVar1 = FUN_100dd000(8,0,0);
            if (cVar1 != '\0') {
              uVar4 = uVar4 | 8;
            }
            cVar1 = FUN_100dd000(0x10,0,0);
            if (cVar1 != '\0') {
              uVar4 = uVar4 | 0x10;
            }
          }
          (*DAT_10223000)(1,DAT_1022668c,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
          if ((*(int *)(*(int *)(in_ECX + 4) + 0x1d8) == 0) ||
             ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          (*DAT_10223008)(uVar12);
          (*DAT_10223020)(local_208);
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x63c));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x640));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x644));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x648));
          fVar11 = (float10)FUN_100dbfb0();
          (*DAT_1022301c)((float)fVar11);
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x650));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x654));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x658));
          (*DAT_10223010)((int)*(float *)(iVar2 + 0x65c));
          (*DAT_10223010)((int)*(float *)(iVar2 + 0x660));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x664));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x668));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x66c));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x670));
          (*DAT_10223010)(*(undefined4 *)(iVar2 + 0x674));
          if ((*(char *)(iVar2 + 0x678) == '\0') || (*(char *)(iVar2 + 0x679) == '\0')) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          (*DAT_10223008)(uVar12);
          (*DAT_10223008)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x248));
          (*DAT_10223008)((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0);
          (*DAT_10223008)(*(undefined4 *)(iVar2 + 0x67c));
          (*DAT_10223014)(uVar4);
          (*DAT_10223008)(local_210);
          (*DAT_10223008)(local_20c);
          (*DAT_10223008)(*(char *)(iVar2 + 0x680) != '\0');
          (*DAT_10223008)(0);
          if ((DAT_10222ee4 == (int *)0x0) ||
             (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          (*DAT_10223008)(uVar12);
          (*DAT_10223008)(local_218);
          (*DAT_10223008)(local_214);
          cVar1 = FUN_100dd000(0,1,0);
          (*DAT_10223008)(cVar1 != '\0');
          cVar1 = FUN_100dd000(0,0,1);
          (*DAT_10223008)(cVar1 != '\0');
          if ((*(char *)(iVar2 + 0x678) == '\0') ||
             (iVar2 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),
                                   "c_ending"), iVar2 == 0)) {
            uVar12 = 0;
          }
          else {
            uVar12 = 1;
          }
          (*DAT_10223008)(uVar12);
          (*DAT_10223004)();
        }
        local_21c = local_21c + 1;
      } while (local_21c <= *(int *)(DAT_10223188 + 0x90));
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

