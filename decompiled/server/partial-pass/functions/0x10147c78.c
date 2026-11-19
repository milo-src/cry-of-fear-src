// rea decompile_all
// name: UnDecorator::getDimension
// address: 0x10147c78
// body: available
// range: 0x10147c78-0x10147d8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  char cVar1;
  uint uVar2;
  DName *pDVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  int local_2c;
  int local_28;
  DName local_24 [8];
  DName local_1c [8];
  DName local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  bVar6 = *DAT_10232958 != 'Q';
  if (!bVar6) {
    DAT_10232958 = DAT_10232958 + 1;
  }
  cVar1 = *DAT_10232958;
  if (cVar1 == '\0') {
    DName::DName(_param_1,1);
    return _param_1;
  }
  if ((cVar1 < '0') || ('9' < cVar1)) {
    getValue();
    if (local_24[0] == (DName)0x0) {
      if (*DAT_10232958 != '\0') {
        uVar5 = 0;
        local_8 = 2;
        local_c = 0;
        puVar4 = &local_c;
        goto LAB_10147d80;
      }
      puVar4 = (undefined4 *)DName::DName(local_24,1);
    }
    else {
      DAT_10232958 = DAT_10232958 + 1;
      if (in_stack_00000008 == '\0') {
        if (bVar6) {
          pDVar3 = local_14;
          goto LAB_10147d05;
        }
        pDVar3 = local_24;
        goto LAB_10147ccd;
      }
      if (!bVar6) {
        DName::DName(local_24,CONCAT44(local_28,local_2c));
        goto LAB_10147cd2;
      }
      puVar4 = (undefined4 *)DName::DName(local_14,CONCAT44(local_28,local_2c));
    }
  }
  else {
    uVar2 = (uint)cVar1;
    if (bVar6) {
      local_2c = uVar2 - 0x2f;
      local_28 = ((int)uVar2 >> 0x1f) + -1 + (uint)(0x2e < uVar2);
      DAT_10232958 = DAT_10232958 + 1;
      pDVar3 = local_24;
LAB_10147d05:
      puVar4 = (undefined4 *)DName::DName(pDVar3,CONCAT44(local_28,local_2c));
    }
    else {
      local_2c = uVar2 - 0x2f;
      DAT_10232958 = DAT_10232958 + 1;
      local_28 = local_2c >> 0x1f;
      pDVar3 = local_14;
LAB_10147ccd:
      DName::DName(pDVar3,CONCAT44(local_28,local_2c));
LAB_10147cd2:
      pDVar3 = (DName *)DName::DName(local_1c,(StringLiteral *)
                                              &PTR_s__non_type_template_parameter_1021bb30);
      DName::operator+(pDVar3,(DName *)&local_c);
      puVar4 = &local_c;
    }
  }
  uVar5 = *puVar4;
LAB_10147d80:
  *(undefined4 *)_param_1 = uVar5;
  *(undefined4 *)(_param_1 + 4) = puVar4[1];
  return _param_1;
}

