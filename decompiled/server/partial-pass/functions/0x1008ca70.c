// rea decompile_all
// name: FUN_1008ca70
// address: 0x1008ca70
// body: available
// range: 0x1008ca70-0x1008cc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined ** FUN_1008ca70(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  int *in_ECX;
  
  switch(param_1) {
  case 1:
    iVar2 = (*DAT_102230b0)(0,0xe);
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*in_ECX + 0x1e4))(), iVar2 != 0)) {
      return &PTR_DAT_102133d4;
    }
    break;
  case 2:
    return &PTR_DAT_1021320c;
  case 3:
    return &PTR_DAT_10213220;
  default:
    (*DAT_1022303c)(1,"GetScheduleOfType()\nNo CASE for Schedule Type %d!\n",param_1);
    break;
  case 5:
    return &PTR_DAT_10213234;
  case 6:
    return &PTR_DAT_102134a0;
  case 8:
    return &PTR_DAT_10213248;
  case 9:
    return &PTR_DAT_102134d4;
  case 10:
    return &PTR_DAT_10213270;
  case 0xb:
    return &PTR_DAT_1021325c;
  case 0xc:
    return &PTR_DAT_102132d4;
  case 0xd:
  case 0x29:
    return &PTR_DAT_102131d0;
  case 0xe:
    return &PTR_DAT_10213774;
  case 0x11:
    return &PTR_DAT_102132e8;
  case 0x12:
    return &PTR_DAT_10213a00;
  case 0x13:
    return &PTR_DAT_102132c0;
  case 0x14:
    return &PTR_DAT_1021397c;
  case 0x15:
    return &PTR_DAT_10213938;
  case 0x16:
    return &PTR_DAT_10213620;
  case 0x17:
    return &PTR_DAT_1021364c;
  case 0x18:
    return &PTR_DAT_10213298;
  case 0x19:
    return &PTR_DAT_102132ac;
  case 0x1a:
    return &PTR_DAT_10213678;
  case 0x1b:
    return &PTR_DAT_102136a4;
  case 0x1c:
    return &PTR_DAT_10213590;
  case 0x1d:
    return &PTR_DAT_102135b4;
  case 0x1e:
    return &PTR_DAT_10213284;
  case 0x20:
    return &PTR_DAT_102133c0;
  case 0x21:
    return &PTR_DAT_102132fc;
  case 0x22:
    return &PTR_DAT_102131f8;
  case 0x26:
    return &PTR_DAT_102137a8;
  case 0x27:
    return &PTR_DAT_102137dc;
  case 0x28:
    if (in_ECX[0xd3] == 0) {
      (*DAT_1022303c)(2,"Script failed for %s\n",*(int *)in_ECX[1] + *(int *)(DAT_10223188 + 0x98));
      FUN_100fa530();
      ppuVar1 = (undefined **)(**(code **)(*in_ECX + 0x18c))(1);
      return ppuVar1;
    }
    switch(*(undefined4 *)(in_ECX[0xd3] + 900)) {
    case 0:
      return &PTR_DAT_1021334c;
    case 1:
      return &PTR_DAT_10213324;
    case 2:
      return &PTR_DAT_10213338;
    default:
      return (undefined **)0x0;
    case 4:
    case 6:
      return &PTR_DAT_10213820;
    case 5:
      return &PTR_DAT_10213834;
    }
  case 0x2a:
    return &PTR_DAT_10213a1c;
  }
  return &PTR_DAT_102131e4;
}

