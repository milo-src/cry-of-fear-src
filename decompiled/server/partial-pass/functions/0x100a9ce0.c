// rea decompile_all
// name: FUN_100a9ce0
// address: 0x100a9ce0
// body: available
// range: 0x100a9ce0-0x100a9e0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a9ce0(void)

{
  uint *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  
  if (*(int *)(*(int *)(in_ECX + 4) + 0x248) != 0) {
    fVar8 = (float10)(*DAT_1022302c)("mp_copsalwaysvisible");
    iVar6 = 1;
    bVar7 = 0.0 < (float)fVar8;
    bVar2 = bVar7;
    bVar3 = bVar7;
    bVar4 = bVar7;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        iVar5 = FUN_10119680(iVar6);
        if ((iVar5 == 0) || (*(float *)(*(int *)(iVar5 + 4) + 0x264) != 0.0))
        goto switchD_100a9d76_default;
        switch(iVar6) {
        case 1:
          bVar7 = true;
          goto LAB_100a9db0;
        case 2:
          bVar2 = true;
          puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
          *puVar1 = *puVar1 & 0xffffff7f;
          break;
        case 3:
          bVar3 = true;
          puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
          *puVar1 = *puVar1 & 0xffffff7f;
          break;
        case 4:
          bVar4 = true;
LAB_100a9db0:
          puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
          *puVar1 = *puVar1 & 0xffffff7f;
        }
switchD_100a9d76_default:
        iVar6 = iVar6 + 1;
      } while (iVar6 <= *(int *)(DAT_10223188 + 0x90));
    }
    switch(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x248)) {
    case 1:
      bVar7 = !bVar7;
      break;
    case 2:
      bVar7 = !bVar2;
      break;
    case 3:
      bVar7 = !bVar3;
      break;
    case 4:
      bVar7 = !bVar4;
      break;
    default:
      goto switchD_100a9de4_default;
    }
    if (bVar7) {
      puVar1 = (uint *)(*(int *)(in_ECX + 4) + 0x118);
      *puVar1 = *puVar1 | 0x80;
    }
  }
switchD_100a9de4_default:
  return;
}

