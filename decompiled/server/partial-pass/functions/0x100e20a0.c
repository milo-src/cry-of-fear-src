// rea decompile_all
// name: FUN_100e20a0
// address: 0x100e20a0
// body: available
// range: 0x100e20a0-0x100e221f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e20a0(int *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 uVar8;
  
  iVar2 = *(int *)(in_ECX + 0x2814);
  if (*(int *)(in_ECX + 0x252c) != 0) {
    pcVar6 = "weapon_rifle";
    iVar4 = *(int *)(*(int *)(*(int *)(in_ECX + 0x252c) + 4) + 0x20c);
    pbVar5 = (byte *)(*(int *)(-(uint)(iVar4 != 0) & iVar4 + 0x80U) + *(int *)(DAT_10223188 + 0x98))
    ;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100e2110:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_100e2115;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100e2110;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100e2115:
    if (((uVar3 == 0) &&
        (iVar4 = FUN_1000e9b0("rifle_shoot"), *(int *)(*(int *)(in_ECX + 4) + 300) == iVar4)) &&
       (iVar4 = FUN_10065db0(*(undefined4 *)(*(int *)(in_ECX + 0x252c) + 4)),
       *(char *)(iVar4 + 0x106) != '\0')) {
      if (*param_1 == 0x76d) {
        return;
      }
      if (*param_1 == 0x76e) {
        return;
      }
    }
  }
  switch(*param_1) {
  case 0x76d:
    iVar4 = *(int *)(in_ECX + 0x252c);
    if (iVar4 != 0) {
      uVar8 = 1;
LAB_100e218d:
      (*DAT_10223134)(iVar2 != 1,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),DAT_10231f4c,0,
                      *(int *)(in_ECX + 4) + 8,&DAT_10222f34,0,0,*(undefined4 *)(iVar4 + 0x168),
                      uVar8,0,0);
      return;
    }
    break;
  case 0x76e:
    iVar4 = *(int *)(in_ECX + 0x252c);
    if (iVar4 != 0) {
      uVar8 = 2;
      goto LAB_100e218d;
    }
    break;
  case 0x76f:
    iVar4 = *(int *)(in_ECX + 0x252c);
    if (iVar4 != 0) {
      uVar8 = 3;
      goto LAB_100e218d;
    }
    break;
  case 0x770:
    iVar4 = *(int *)(in_ECX + 0x252c);
    if (iVar4 != 0) {
      uVar8 = 4;
      goto LAB_100e218d;
    }
    break;
  case 0x771:
    break;
  default:
    FUN_100bf310(param_1);
  }
  return;
}

