// rea decompile_all
// name: FUN_100dc820
// address: 0x100dc820
// body: available
// range: 0x100dc820-0x100dc9f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dc820(long param_1)

{
  char cVar1;
  undefined4 *puVar2;
  FILE *_File;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 local_14c [4];
  char local_148 [4];
  undefined1 local_144 [256];
  char local_44 [16];
  char local_34 [32];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1019dee0;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14c = (undefined1  [4])0xf;
  local_8 = 0;
  FID_conflict___ltoa(param_1,local_44,10);
  (*DAT_102230d4)(local_148);
  pcVar6 = local_14c + 3;
  do {
    pcVar8 = pcVar6;
    pcVar6 = pcVar8 + 1;
  } while (pcVar8[1] != '\0');
  builtin_strncpy(pcVar8 + 1,"/sound/ambience/windy",0x16);
  pcVar6 = local_44;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar7 = (int)pcVar6 - (int)local_44;
  pcVar6 = local_14c + 3;
  do {
    pcVar8 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = local_44;
  for (uVar4 = uVar7 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar6 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar6 = pcVar6 + 4;
  }
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *pcVar6 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar6 = pcVar6 + 1;
  }
  puVar2 = (undefined4 *)(local_14c + 3);
  do {
    puVar5 = puVar2;
    puVar2 = (undefined4 *)((int)puVar5 + 1);
  } while (*(char *)((int)puVar5 + 1) != '\0');
  *(undefined4 *)((int)puVar5 + 1) = 0x7661772e;
  *(undefined1 *)((int)puVar5 + 5) = 0;
  _File = _fopen(local_148,"r");
  if (_File != (FILE *)0x0) {
    do {
      FUN_10174612(local_34,0x40,_File);
      switch(param_1) {
      case 1:
        pcVar6 = "Beaten Ending1 = ";
        break;
      case 2:
        pcVar6 = "Beaten Ending2 = ";
        break;
      case 3:
        pcVar6 = "Beaten Ending3 = ";
        break;
      case 4:
        pcVar6 = "Beaten Ending4 = ";
        break;
      case 5:
        pcVar6 = "Beaten Ending5 = ";
        break;
      case 6:
        pcVar6 = "Beaten Ending6 = ";
        break;
      default:
        goto switchD_100dc954_default;
      }
      iVar3 = _strncmp(local_34,pcVar6,0xe);
      if (iVar3 == 0) {
        iVar3 = FUN_10141360(local_34,0x3d);
        _atoi((char *)(iVar3 + 1));
      }
switchD_100dc954_default:
      iVar3 = _feof(_File);
    } while (iVar3 == 0);
    _fclose(_File);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

