// rea decompile_all
// name: FUN_100f3a40
// address: 0x100f3a40
// body: available
// range: 0x100f3a40-0x100f3beb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f3a40(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  
  if ((*(int *)(*(int *)(in_ECX + 4) + 0x16c) < 0) &&
     ((DAT_10222ee4 == (int *)0x0 || (iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar4 == 0))))
  {
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 0x2384) = 0;
      *(undefined4 *)(in_ECX + 0x2388) = 0;
      *(undefined4 *)(in_ECX + 0x238c) = 0;
      *(undefined4 *)(in_ECX + 0x2390) = 0;
      return;
    }
    if (param_2 == 0) {
      iVar4 = FUN_100fe300(param_1,0);
      if (iVar4 < 0) {
        (*DAT_1022303c)(1,"HEV couldn\'t find sentence %s\n",param_1);
        return;
      }
    }
    else {
      iVar4 = FUN_100fdef0(param_1);
      iVar4 = -iVar4;
    }
    iVar6 = 0;
    iVar7 = -1;
    do {
      iVar3 = *(int *)(in_ECX + 0x2398 + iVar6 * 4);
      iVar5 = iVar6;
      if (iVar4 == iVar3) {
        pfVar1 = (float *)(in_ECX + 0x2418 + iVar6 * 4);
        if (*DAT_10223188 < *pfVar1 || *DAT_10223188 == *pfVar1) {
          return;
        }
        *(undefined4 *)(in_ECX + 0x2398 + iVar6 * 4) = 0;
        *(undefined4 *)(in_ECX + 0x2418 + iVar6 * 4) = 0;
        break;
      }
      if (iVar3 != 0) {
        iVar5 = iVar7;
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar5;
    } while (iVar6 < 0x20);
    if (param_3 != 0) {
      if (iVar5 < 0) {
        iVar5 = (*DAT_102230b0)(0,0x1f);
      }
      *(int *)(in_ECX + 0x2398 + iVar5 * 4) = iVar4;
      *(float *)(in_ECX + 0x2418 + iVar5 * 4) = (float)param_3 + *DAT_10223188;
    }
    *(int *)(in_ECX + 0x2384 + *(int *)(in_ECX + 0x2394) * 4) = iVar4;
    *(int *)(in_ECX + 0x2394) = *(int *)(in_ECX + 0x2394) + 1;
    iVar4 = *(int *)(in_ECX + 0x2394);
    if (iVar4 == 4) {
      iVar4 = 0;
    }
    *(int *)(in_ECX + 0x2394) = iVar4;
    fVar2 = *DAT_10223188;
    if (*(float *)(in_ECX + 0x2380) <= fVar2) {
      if (*(float *)(in_ECX + 0x2380) == 0.0) {
        *(float *)(in_ECX + 0x2380) = fVar2 + 0.1;
        return;
      }
      *(float *)(in_ECX + 0x2380) = fVar2 + 3.5;
    }
  }
  return;
}

