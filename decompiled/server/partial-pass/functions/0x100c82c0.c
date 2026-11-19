// rea decompile_all
// name: FUN_100c82c0
// address: 0x100c82c0
// body: available
// range: 0x100c82c0-0x100c851d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c82c0(void)

{
  char cVar1;
  HANDLE hFindFile;
  int iVar2;
  LPCSTR ****pppppCVar3;
  BOOL BVar4;
  char *pcVar5;
  char *pcVar6;
  _WIN32_FIND_DATAA local_5e4;
  undefined1 local_4a4 [48];
  void *local_474 [4];
  undefined4 local_464;
  uint local_460;
  void *local_45c;
  undefined1 local_458;
  undefined1 local_457;
  undefined4 local_44c;
  uint local_448;
  LPCSTR ***local_444 [4];
  undefined4 local_434;
  uint local_430;
  LPCSTR ***local_42c [5];
  undefined4 local_418;
  char local_414 [10];
  char local_40a [1014];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019de06;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  (*DAT_102230d4)(local_414,local_14);
  pcVar6 = (char *)((int)&local_418 + 3);
  do {
    pcVar5 = pcVar6;
    pcVar6 = pcVar5 + 1;
  } while (pcVar5[1] != '\0');
  builtin_strncpy(pcVar5 + 1,"\\txtfiles\\",0xb);
  pcVar6 = local_414;
  local_464 = 0;
  local_460 = 0xf;
  local_474[0] = (void *)((uint)local_474[0] & 0xffffff00);
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_10037810(local_414,(int)pcVar6 - (int)(local_414 + 1));
  local_45c = (void *)0x66632e2a;
  local_448 = 0xf;
  local_44c = 5;
  local_458 = 0x67;
  local_457 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_100c5040(local_444,local_474,&local_45c);
  local_8 = CONCAT31(local_8._1_3_,2);
  pppppCVar3 = local_444;
  if (0xf < local_430) {
    pppppCVar3 = (LPCSTR ****)local_444[0];
  }
  hFindFile = FindFirstFileA((LPCSTR)pppppCVar3,&local_5e4);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      FUN_100c5090(local_42c,local_474,local_5e4.cFileName);
      pppppCVar3 = local_42c;
      if (0xf < local_418) {
        pppppCVar3 = (LPCSTR ****)local_42c[0];
      }
      iVar2 = FUN_101740ac(pppppCVar3,local_4a4);
      if (iVar2 == 0) {
        pppppCVar3 = local_42c;
        if (0xf < local_418) {
          pppppCVar3 = (LPCSTR ****)local_42c[0];
        }
        DeleteFileA((LPCSTR)pppppCVar3);
      }
      if (0xf < local_418) {
        std::_Deallocate<8,0>(local_42c[0],local_418 + 1);
      }
      BVar4 = FindNextFileA(hFindFile,&local_5e4);
    } while (0 < BVar4);
  }
  if (0xf < local_430) {
    std::_Deallocate<8,0>(local_444[0],local_430 + 1);
  }
  local_434 = 0;
  local_430 = 0xf;
  local_444[0] = (LPCSTR ***)((uint)local_444[0] & 0xffffff00);
  if (0xf < local_448) {
    std::_Deallocate<8,0>(local_45c,local_448 + 1);
  }
  if (0xf < local_460) {
    std::_Deallocate<8,0>(local_474[0],local_460 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

