// rea decompile_all
// name: UnDecorator::getVfTableType
// address: 0x1014ac3e
// body: available
// range: 0x1014ac3e-0x1014ad93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getVfTableType(class DName const &)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getVfTableType(DName *param_1)

{
  undefined4 uVar1;
  DName *pDVar2;
  undefined4 *puVar3;
  DName DVar4;
  undefined4 *in_stack_00000008;
  DName local_24 [8];
  DName local_1c [8];
  undefined1 local_14 [8];
  char *local_c;
  undefined4 local_8;
  
  *(undefined4 *)param_1 = *in_stack_00000008;
  uVar1 = in_stack_00000008[1];
  *(undefined4 *)(param_1 + 4) = uVar1;
  if ((char)uVar1 < '\x02') {
    if (*DAT_10232958 == '\0') {
      pDVar2 = (DName *)DName::DName(local_24,1);
      DName::operator+(pDVar2,(DName *)&local_c);
      *(char **)param_1 = local_c;
      *(undefined4 *)(param_1 + 4) = local_8;
    }
    else {
      getDataIndirectType();
      pDVar2 = (DName *)DName::operator+((DName *)&local_c,(char)local_14);
      puVar3 = (undefined4 *)DName::operator+(pDVar2,local_1c);
      *(undefined4 *)param_1 = *puVar3;
      uVar1 = puVar3[1];
      *(undefined4 *)(param_1 + 4) = uVar1;
      if ((char)uVar1 < '\x02') {
        if (*DAT_10232958 != '@') {
          local_c = "{for ";
          local_8 = 5;
          do {
            DName::operator+=(param_1,(StringLiteral *)&local_c);
            DVar4 = param_1[4];
            do {
              if ('\x01' < (char)DVar4) goto LAB_1014ad61;
              if (*DAT_10232958 == '\0') {
LAB_1014ad46:
                if (*DAT_10232958 == '\0') {
                  DName::operator+=(param_1,1);
                }
                DName::operator+=(param_1,'}');
LAB_1014ad61:
                if (*DAT_10232958 != '@') {
                  return param_1;
                }
                goto LAB_1014ad66;
              }
              if (*DAT_10232958 == '@') {
                if ((char)DVar4 < '\x02') goto LAB_1014ad46;
                goto LAB_1014ad61;
              }
              getScope();
              pDVar2 = (DName *)operator+((char)local_14,(DName *)0x60);
              pDVar2 = (DName *)DName::operator+(pDVar2,(char)local_24);
              DName::operator+=(param_1,pDVar2);
              if (*DAT_10232958 == '@') {
                DAT_10232958 = DAT_10232958 + 1;
              }
              DVar4 = param_1[4];
              if ('\x01' < (char)DVar4) goto LAB_1014ad61;
            } while (*DAT_10232958 == '@');
            local_c = "s ";
            local_8 = 2;
          } while( true );
        }
LAB_1014ad66:
        DAT_10232958 = DAT_10232958 + 1;
      }
    }
  }
  return param_1;
}

