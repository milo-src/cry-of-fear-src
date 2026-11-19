// rea decompile_all
// name: FUN_100c9660
// address: 0x100c9660
// body: available
// range: 0x100c9660-0x100c9964 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c9660(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  int local_438;
  undefined4 *local_434;
  undefined4 local_42c;
  char local_428 [1024];
  char local_28 [32];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_434 = param_2;
  iVar6 = (*DAT_102230c4)(param_1,&local_438);
  if ((iVar6 != 0) && (local_438 != 0)) {
    _memset(local_428,0,0x400);
    uVar7 = FUN_100c6de0(iVar6);
    pcVar11 = &DAT_102231a8;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    local_42c = uVar7;
    if (pcVar11 != &DAT_102231a9) {
      do {
        iVar8 = 0;
        do {
          cVar1 = (&DAT_102231a8)[iVar8];
          local_28[iVar8] = cVar1;
          iVar8 = iVar8 + 1;
        } while (cVar1 != '\0');
        bVar2 = false;
        local_42c = uVar7;
        iVar8 = FUN_100c6ef0(uVar7);
        if (iVar8 != 0) {
          local_42c = FUN_100c6de0(uVar7);
          pcVar11 = &DAT_102231a8;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar1 != '\0');
          if (pcVar11 != &DAT_102231a9) {
            bVar2 = true;
            iVar8 = 0;
            do {
              cVar1 = (&DAT_102231a8)[iVar8];
              local_428[iVar8] = cVar1;
              iVar8 = iVar8 + 1;
            } while (cVar1 != '\0');
          }
        }
        iVar8 = (*DAT_10223100)(local_28);
        if (iVar8 == 0) {
          (*DAT_1022303c)(1,"Skipping %s from mapcycle, not a valid map\n",local_28);
        }
        else {
          puVar9 = (undefined4 *)FUN_1013e1e9(0x42c);
          pcVar11 = local_28;
          do {
            cVar1 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar11[(int)puVar9 + (3 - (int)local_28)] = cVar1;
          } while (cVar1 != '\0');
          puVar9[9] = 0;
          puVar9[10] = 0;
          _memset(puVar9 + 0xb,0,0x400);
          if (bVar2) {
            pcVar11 = (char *)(*DAT_102230f4)(local_428,"minplayers");
            if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
              iVar8 = _atoi(pcVar11);
              if (iVar8 < 1) {
                iVar8 = 0;
              }
              puVar9[9] = iVar8;
              iVar10 = *(int *)(DAT_10223188 + 0x90);
              if (iVar8 < *(int *)(DAT_10223188 + 0x90)) {
                iVar10 = iVar8;
              }
              puVar9[9] = iVar10;
            }
            pcVar11 = (char *)(*DAT_102230f4)(local_428,"maxplayers");
            if ((pcVar11 != (char *)0x0) && (*pcVar11 != '\0')) {
              iVar8 = _atoi(pcVar11);
              if (iVar8 < 1) {
                iVar8 = 0;
              }
              puVar9[10] = iVar8;
              iVar10 = *(int *)(DAT_10223188 + 0x90);
              if (iVar8 < *(int *)(DAT_10223188 + 0x90)) {
                iVar10 = iVar8;
              }
              puVar9[10] = iVar10;
            }
            (*DAT_10223120)(local_428,"minplayers");
            (*DAT_10223120)(local_428,"maxplayers");
            pcVar11 = local_428;
            do {
              cVar1 = *pcVar11;
              pcVar11 = pcVar11 + 1;
              pcVar11[(int)(puVar9 + 0xb) + (-1 - (int)local_428)] = cVar1;
            } while (cVar1 != '\0');
          }
          *puVar9 = *local_434;
          *local_434 = puVar9;
        }
        _memset(local_428,0,0x400);
        uVar7 = FUN_100c6de0(local_42c);
        pcVar11 = &DAT_102231a8;
        do {
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        param_2 = local_434;
        local_42c = uVar7;
      } while (pcVar11 != &DAT_102231a9);
    }
    (*DAT_102230c8)(iVar6);
  }
  puVar9 = (undefined4 *)*param_2;
  puVar3 = (undefined4 *)0x0;
  while (puVar5 = puVar9, puVar5 != (undefined4 *)0x0) {
    puVar9 = (undefined4 *)*puVar5;
    *puVar5 = puVar3;
    puVar3 = puVar5;
  }
  *param_2 = puVar3;
  if (puVar3 == (undefined4 *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  puVar5 = (undefined4 *)*puVar3;
  puVar9 = puVar3;
  while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
    puVar9 = puVar4;
    puVar5 = (undefined4 *)*puVar4;
  }
  *puVar9 = puVar3;
  param_2[1] = puVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

