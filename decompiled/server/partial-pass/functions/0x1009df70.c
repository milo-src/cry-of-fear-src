// rea decompile_all
// name: FUN_1009df70
// address: 0x1009df70
// body: available
// range: 0x1009df70-0x1009e068 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009df70(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  float fVar4;
  char *pcVar5;
  
  (**(code **)(*in_ECX + 0x30))();
  *(undefined4 *)(in_ECX[1] + 0x10c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x108) = 0;
  iVar3 = in_ECX[1];
  if ((*(byte *)(iVar3 + 0x1a4) & 1) == 0) {
    uVar2 = (*DAT_102230b0)(0,5);
    switch(uVar2) {
    case 0:
      pcVar5 = "models/props/trainjourney/buske.mdl";
      break;
    case 1:
      pcVar5 = "models/props/trainjourney/buske2.mdl";
      break;
    case 2:
      pcVar5 = "models/props/trainjourney/buske3.mdl";
      break;
    case 3:
      pcVar5 = "models/props/trainjourney/granmodel.mdl";
      break;
    case 4:
      pcVar5 = "models/props/trainjourney/granmodel2.mdl";
      break;
    case 5:
      pcVar5 = "models/props/trainjourney/tall.mdl";
      break;
    default:
      goto switchD_1009dfb7_default;
    }
    iVar3 = in_ECX[1];
  }
  else {
    pcVar5 = "models/props/trainjourney/train_hill.mdl";
  }
  (*DAT_10222f50)(*(undefined4 *)(iVar3 + 0x20c),pcVar5);
switchD_1009dfb7_default:
  iVar3 = in_ECX[1];
  iVar1 = *(int *)(iVar3 + 0x248);
  if (iVar1 == 0) {
    fVar4 = (float)*(int *)(iVar3 + 0x250) + *(float *)(iVar3 + 8);
  }
  else if (iVar1 == 1) {
    fVar4 = (float)*(int *)(iVar3 + 0x250) + *(float *)(iVar3 + 0xc);
  }
  else {
    if (iVar1 != 2) goto LAB_1009e04e;
    fVar4 = (float)*(int *)(iVar3 + 0x250) + *(float *)(iVar3 + 0x10);
  }
  *(int *)(iVar3 + 0x24c) = (int)fVar4;
LAB_1009e04e:
  iVar3 = in_ECX[1];
  *(undefined8 *)(iVar3 + 0x268) = *(undefined8 *)(iVar3 + 8);
  *(undefined4 *)(iVar3 + 0x270) = *(undefined4 *)(iVar3 + 0x10);
  return;
}

