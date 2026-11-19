// rea decompile_all
// name: FUN_1011a590
// address: 0x1011a590
// body: available
// range: 0x1011a590-0x1011a6b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011a590(float *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  wchar_t *_Str;
  uint uVar4;
  float *pfVar5;
  float10 fVar6;
  double dVar7;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar2[(int)&local_8c + (3 - (int)param_2)] = cVar1;
  } while (cVar1 != '\0');
  _Str = &local_88;
  uVar4 = 0;
  do {
    dVar7 = FID_conflict__atof(_Str);
    cVar1 = (char)*_Str;
    param_1[uVar4] = (float)dVar7;
    while( true ) {
      if (cVar1 == '\0') goto LAB_1011a5f7;
      _Str = (wchar_t *)((int)_Str + 1);
      if (cVar1 == ' ') break;
      cVar1 = *(char *)_Str;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 3);
LAB_1011a5f7:
  if (uVar4 < 2) {
    pfVar5 = param_1 + uVar4 + 1;
    for (uVar3 = 3 - (uVar4 + 1) & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pfVar5 = 0.0;
      pfVar5 = pfVar5 + 1;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((((char)*_Str == '.') && (*(char *)((int)_Str + 1) == '.')) && ((char)_Str[1] == ' ')) {
    FUN_1011a6c0(&local_94,_Str + 1);
    fVar6 = (float10)(*DAT_102230b4)(*param_1,local_94);
    *param_1 = (float)fVar6;
    fVar6 = (float10)(*DAT_102230b4)(param_1[1],local_90);
    param_1[1] = (float)fVar6;
    fVar6 = (float10)(*DAT_102230b4)(param_1[2],local_8c);
    param_1[2] = (float)fVar6;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

