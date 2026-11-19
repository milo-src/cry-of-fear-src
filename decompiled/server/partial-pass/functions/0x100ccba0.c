// rea decompile_all
// name: FUN_100ccba0
// address: 0x100ccba0
// body: available
// range: 0x100ccba0-0x100ccdd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ccba0(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  FILE *_File;
  int *in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined2 *puVar7;
  char *pcVar8;
  undefined1 local_110 [3];
  undefined4 uStack_10d;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  _local_110 = 0x10;
  if ((*in_ECX == 0) || (in_ECX[1] == 0)) {
    (*DAT_1022303c)(2,"Graph not ready!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*DAT_102230d4)((int)&uStack_10d + 1);
  puVar2 = (undefined4 *)(local_110 + 3);
  do {
    puVar4 = puVar2;
    puVar2 = (undefined4 *)((int)puVar4 + 1);
  } while (*(char *)((int)puVar4 + 1) != '\0');
  *(undefined4 *)((int)puVar4 + 1) = 0x70616d2f;
  *(undefined2 *)((int)puVar4 + 5) = 0x73;
  CreateDirectoryA((LPCSTR)((int)&uStack_10d + 1),(LPSECURITY_ATTRIBUTES)0x0);
  pcVar5 = local_110 + 3;
  do {
    pcVar8 = pcVar5;
    pcVar5 = pcVar8 + 1;
  } while (pcVar8[1] != '\0');
  builtin_strncpy(pcVar8 + 1,"/graphs",8);
  CreateDirectoryA((LPCSTR)((int)&uStack_10d + 1),(LPSECURITY_ATTRIBUTES)0x0);
  puVar7 = (undefined2 *)(local_110 + 3);
  do {
    pcVar5 = (char *)((int)puVar7 + 1);
    puVar7 = (undefined2 *)((int)puVar7 + 1);
  } while (*pcVar5 != '\0');
  *puVar7 = 0x2f;
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar8 = local_110 + 3;
  do {
    pcVar6 = pcVar8 + 1;
    pcVar8 = pcVar8 + 1;
  } while (*pcVar6 != '\0');
  pcVar6 = param_1;
  for (uVar3 = (uint)((int)pcVar5 - (int)param_1) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pcVar8 = pcVar8 + 4;
  }
  for (uVar3 = (int)pcVar5 - (int)param_1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar8 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    pcVar8 = pcVar8 + 1;
  }
  puVar2 = (undefined4 *)(local_110 + 3);
  do {
    puVar4 = puVar2;
    puVar2 = (undefined4 *)((int)puVar4 + 1);
  } while (*(char *)((int)puVar4 + 1) != '\0');
  *(undefined4 *)((int)puVar4 + 1) = 0x646f6e2e;
  *(undefined1 *)((int)puVar4 + 5) = 0;
  _File = _fopen((char *)((int)&uStack_10d + 1),"wb");
  (*DAT_1022303c)(2,"Created: %s\n",(int)&uStack_10d + 1);
  if (_File == (FILE *)0x0) {
    (*DAT_1022303c)(2,"Couldn\'t Create: %s\n",(int)&uStack_10d + 1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  _fwrite(local_110,4,1,_File);
  _fwrite(in_ECX,0x20cc,1,_File);
  _fwrite((void *)in_ECX[3],0x58,in_ECX[6],_File);
  _fwrite((void *)in_ECX[4],0x18,in_ECX[7],_File);
  _fwrite((void *)in_ECX[9],0x10,in_ECX[6],_File);
  if (((void *)in_ECX[5] != (void *)0x0) && (in_ECX[8] != 0)) {
    _fwrite((void *)in_ECX[5],1,in_ECX[8],_File);
  }
  if (((void *)in_ECX[0x82f] != (void *)0x0) && (in_ECX[0x830] != 0)) {
    _fwrite((void *)in_ECX[0x82f],2,in_ECX[0x830],_File);
  }
  _fclose(_File);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

