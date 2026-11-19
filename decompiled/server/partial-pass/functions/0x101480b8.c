// rea decompile_all
// name: UnDecorator::getExtendedDataIndirectType
// address: 0x101480b8
// body: available
// range: 0x101480b8-0x1014826a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getExtendedDataIndirectType(enum
   IndirectionKind &,bool &,int)
   
   Library: Visual Studio 2019 Release */

IndirectionKind * __cdecl
UnDecorator::getExtendedDataIndirectType(IndirectionKind *param_1,bool *param_2,int param_3)

{
  char *pcVar1;
  IndirectionKind *pIVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int in_stack_00000010;
  DName local_1c [8];
  IndirectionKind local_14;
  IndirectionKind local_10;
  IndirectionKind local_c;
  IndirectionKind local_8;
  
  pcVar3 = (char *)((int)DAT_10232958 + 1);
  local_14 = 0;
  iVar4 = (int)*pcVar3;
  local_c = 0;
  local_10 = 0;
  local_8 = 0;
  if (iVar4 == 0x41) {
    DAT_10232958 = pcVar3;
    if (in_stack_00000010 == 0) {
      if ((*(int *)param_2 == 2) || (*(int *)param_2 == 3)) {
        param_2[0] = true;
        param_2[1] = false;
        param_2[2] = false;
        param_2[3] = false;
      }
      else if (*(int *)param_2 == 1) {
        param_2[0] = true;
        param_2[1] = false;
        param_2[2] = false;
        param_2[3] = false;
      }
    }
LAB_10148259:
    DAT_10232958 = DAT_10232958 + 1;
    param_1[1] = 0;
  }
  else {
    if (iVar4 == 0x42) {
      if (in_stack_00000010 == 0) {
        DAT_10232958 = pcVar3;
        *(undefined1 *)param_3 = 1;
        DName::doPchar((DName *)&local_c,'>');
        goto LAB_10148259;
      }
    }
    else {
      if (iVar4 == 0x43) {
        DAT_10232958 = pcVar3;
        param_2[0] = true;
        param_2[1] = false;
        param_2[2] = false;
        param_2[3] = false;
        goto LAB_10148259;
      }
      if ((*pcVar3 == '\0') || (pcVar1 = (char *)((int)DAT_10232958 + 2), *pcVar1 == '\0')) {
        DAT_10232958 = pcVar3;
        DName::DName((DName *)param_1,1);
        return param_1;
      }
      if (in_stack_00000010 == 0) {
        DAT_10232958 = (char *)((int)DAT_10232958 + 3);
        uVar5 = *pcVar1 + -0x30 + (iVar4 + -0x30) * 0x10;
        if (1 < uVar5) {
          DName::doPchar((DName *)&local_c,',');
          DName::DName((DName *)&local_14,(ulonglong)uVar5);
          pIVar2 = (IndirectionKind *)DName::operator+((DName *)&local_c,local_1c);
          local_14 = *pIVar2;
          local_10 = pIVar2[1];
        }
        DName::operator+=((DName *)&local_14,'>');
        local_c = local_14;
        local_8 = local_10;
        if (*DAT_10232958 == '$') {
          DAT_10232958 = DAT_10232958 + 1;
        }
        else {
          DName::operator+=((DName *)&local_14,'^');
        }
        if (*DAT_10232958 == '\0') {
          if ((char)local_10 < '\x02') {
            local_c = local_14;
            local_8 = local_10;
            if (local_14 == 0) {
              DName::operator=((DName *)&local_c,1);
              local_10 = local_8;
              local_14 = local_c;
            }
            else {
              DName::append<DNameStatusNode>
                        ((DName *)&local_c,(DNameStatusNode *)&PTR_vftable_101ec55c);
              local_10 = local_8;
              local_14 = local_c;
            }
          }
        }
        else {
          DAT_10232958 = DAT_10232958 + 1;
        }
        *param_1 = local_14;
        param_1[1] = local_10 | 0x4000;
        return param_1;
      }
    }
    DAT_10232958 = pcVar3;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  *param_1 = 0;
  return param_1;
}

