// rea decompile_all
// name: FUN_1005c5f0
// address: 0x1005c5f0
// body: available
// range: 0x1005c5f0-0x1005c754 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c5f0(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  
  if (((DAT_10222ee4 != 0) &&
      (iVar2 = FUN_101411d6(DAT_10222ee4,0,&CGameRules::RTTI_Type_Descriptor,
                            &CHalfLifeRules::RTTI_Type_Descriptor,0), iVar2 != 0)) &&
     (*(char *)(iVar2 + 0xdc) != '\0')) {
    iVar3 = *(int *)(in_ECX + 4);
    if (*(float *)(iVar3 + 0x164) == 1.0) {
      iVar3 = FUN_10017950("weapon_mp5",iVar3 + 8,iVar3 + 0x50,0);
      if ((iVar3 != 0) &&
         (iVar3 = FUN_101411d6(iVar3,0,&CBaseEntity::RTTI_Type_Descriptor,
                               &CMp5::RTTI_Type_Descriptor,0), iVar3 != 0)) {
        fVar1 = *(float *)(iVar2 + 0xe4);
        *(int *)(iVar3 + 0x1e4) = (int)*(float *)(iVar2 + 0xe0);
        *(undefined4 *)(iVar3 + 500) = 0;
        if ((0.0 < fVar1) && (piVar4 = (int *)FUN_10118460(0,"player"), piVar4 != (int *)0x0)) {
          iVar2 = (int)fVar1;
          (**(code **)(*piVar4 + 0x94))(iVar2,&DAT_101af530,iVar2,1);
          return;
        }
      }
    }
    else {
      iVar3 = FUN_10118460(0,"player");
      if ((iVar3 != 0) && (iVar5 = FUN_100e0310(0x1b), iVar5 != 0)) {
        iVar6 = FUN_100dfe60(&DAT_101af530);
        iVar3 = *(int *)(iVar3 + 0x2540 + iVar6 * 4);
        *(float *)(iVar2 + 0xe0) = (float)*(int *)(iVar5 + 0x1e4);
        *(float *)(iVar2 + 0xe4) = (float)iVar3;
      }
    }
  }
  return;
}

