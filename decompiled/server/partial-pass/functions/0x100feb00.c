// rea decompile_all
// name: CSpeaker::SpeakerThink
// address: 0x100feb00
// body: available
// range: 0x100feb00-0x100fecc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CSpeaker::SpeakerThink(void) */

void __thiscall CSpeaker::SpeakerThink(CSpeaker *this)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  float10 fVar4;
  
                    /* 0xfeb00  283  ?SpeakerThink@CSpeaker@@QAEXXZ */
  iVar2 = *(int *)(this + 4);
  fVar1 = *(float *)(iVar2 + 0x164) * 0.1;
  if (*DAT_10223188 <= DAT_10230d78) {
    iVar2 = *(int *)this;
    fVar4 = (float10)(*DAT_102230b4)(0x40a00000,0x41200000);
    (**(code **)(iVar2 + 0x10))((float)(fVar4 + (float10)DAT_10230d78));
    return;
  }
  if (*(int *)(this + 0xdc) == 0) {
    pcVar3 = (char *)(*(int *)(iVar2 + 0x1d8) + (int)DAT_10223188[0x26]);
switchD_100feb7e_default:
    if ((CSpeaker)*pcVar3 == (CSpeaker)0x21) {
      FUN_101182b0(*(undefined4 *)(iVar2 + 0x20c),iVar2 + 8,pcVar3,fVar1,0x3e99999a,0,100);
      FUN_10017ad0();
      return;
    }
  }
  else {
    pcVar3 = (char *)this;
    switch(*(int *)(this + 0xdc)) {
    case 1:
      pcVar3 = "C1A0_";
      break;
    case 2:
      pcVar3 = "C1A1_";
      break;
    case 3:
      pcVar3 = "C1A2_";
      break;
    case 4:
      pcVar3 = "C1A3_";
      break;
    case 5:
      pcVar3 = "C1A4_";
      break;
    case 6:
      pcVar3 = "C2A1_";
      break;
    case 7:
      pcVar3 = "C2A2_";
      break;
    case 8:
      pcVar3 = "C2A3_";
      break;
    case 9:
      pcVar3 = "C2A4_";
      break;
    case 10:
      pcVar3 = "C2A5_";
      break;
    case 0xb:
      pcVar3 = "C3A1_";
      break;
    case 0xc:
      pcVar3 = "C3A2_";
      break;
    default:
      goto switchD_100feb7e_default;
    }
  }
  iVar2 = FUN_100fe450(*(undefined4 *)(iVar2 + 0x20c),pcVar3,fVar1,0x3e99999a,0,100,0xffffffff);
  if (iVar2 < 0) {
    (*DAT_1022303c)(1,"Level Design Error!\nSPEAKER has bad sentence group name: %s\n",pcVar3);
  }
  iVar2 = *(int *)this;
  fVar4 = (float10)(*DAT_102230b4)(0x41700000,0x43070000);
  (**(code **)(iVar2 + 8))((float)fVar4);
  DAT_10230d78 = *DAT_10223188 + 5.0;
  return;
}

