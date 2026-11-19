// rea decompile_all
// name: FUN_1011c1a0
// address: 0x1011c1a0
// body: available
// range: 0x1011c1a0-0x1011c55f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_1011c1a0(int param_1,int param_2,undefined4 param_3,char *param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  char *pcVar4;
  
  iVar2 = (**(code **)(*in_ECX + 0x140))();
  if (iVar2 != 0) {
    if (in_ECX[0x79] == -0x29a) {
      in_ECX[0x79] = 0;
    }
    iVar2 = in_ECX[0x58];
    if (iVar2 != 0) {
      if ((*(char *)(iVar2 + 0x3a9) == '\0') &&
         (*(undefined1 *)(iVar2 + 0x3a9) = 1, DAT_10223190 != 0)) {
        if (*(int *)(DAT_10223190 + 0xf0) != 0) {
          (*DAT_10223000)(1,DAT_102266e8,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
          (*DAT_10223020)(*(int *)(DAT_10223190 + 0xf0) + DAT_10223188[0x26]);
          (*DAT_10223004)();
        }
        if (DAT_10223190 != 0) {
          if (*(int *)(DAT_10223190 + 0xf4) != 0) {
            (*DAT_10223000)(1,DAT_102266ec,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
            (*DAT_10223020)(*(int *)(DAT_10223190 + 0xf4) + DAT_10223188[0x26]);
            (*DAT_10223004)();
          }
          if ((DAT_10223190 != 0) && (*(int *)(DAT_10223190 + 0xf8) != 0)) {
            (*DAT_10223000)(1,DAT_102266f0,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
            (*DAT_10223020)(*(int *)(DAT_10223190 + 0xf8) + DAT_10223188[0x26]);
            (*DAT_10223004)();
          }
        }
      }
      if (in_ECX[0x5b] != 0) {
        param_1 = DAT_10223188[0x26] + in_ECX[0x5b];
        (*DAT_1022303c)(1,"Setting custom v model: %s\n",param_1);
      }
      *(undefined1 *)(in_ECX + 0x5e) = 0;
      in_ECX[0x68] = *DAT_10223188;
      in_ECX[0x67] = 0;
      (*DAT_10223000)(8,DAT_10226664,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
      (*DAT_10223004)();
      if (in_ECX[0x48] != *(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4)) {
        (*DAT_10223000)(1,DAT_102265b8,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
        (*DAT_10223008)(in_ECX[0x5a]);
        (*DAT_10223008)(*(undefined4 *)(&DAT_102318a4 + in_ECX[0x5a] * 0x2c));
        (*DAT_10223010)(*(undefined4 *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4));
        (*DAT_10223004)();
        in_ECX[0x48] = *(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4);
      }
      iVar2 = (*DAT_102230b0)(0xfffffffb,5);
      if (*(float *)(in_ECX[1] + 0x1b4) == 1.0) {
        *(undefined4 *)(in_ECX[1] + 0x1b4) = 0;
      }
      else {
        iVar3 = (*DAT_102230b0)(0,2);
        if (iVar3 == 0) {
          pcVar4 = "weapons/sleeve_generic1.wav";
        }
        else if (iVar3 == 1) {
          pcVar4 = "weapons/sleeve_generic2.wav";
        }
        else {
          if (iVar3 != 2) goto LAB_1011c4bc;
          pcVar4 = "weapons/sleeve_generic3.wav";
        }
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),0,pcVar4,0x3f800000,
                     0x3f4ccccd,0,iVar2 + 100);
      }
LAB_1011c4bc:
      FUN_100f5eb0();
      *(int *)(*(int *)(in_ECX[0x58] + 4) + 0xbc) = param_1 - DAT_10223188[0x26];
      *(int *)(*(int *)(in_ECX[0x58] + 4) + 0xc0) = param_2 - DAT_10223188[0x26];
      pcVar4 = (char *)(in_ECX[0x58] + 0x2678);
      do {
        cVar1 = *param_4;
        param_4 = param_4 + 1;
        *pcVar4 = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      (**(code **)(*in_ECX + 0x198))(param_3,param_5,param_6);
      (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),param_1);
      FUN_10120210(param_3);
      return 1;
    }
  }
  return 0;
}

