// rea decompile_all
// name: FUN_10053210
// address: 0x10053210
// body: available
// range: 0x10053210-0x100534c8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100534c4 to 0x1011d560 FUN_1011d560 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10053210(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  bool bVar3;
  float fVar4;
  
  if ((((((char)in_ECX[0x7e] != '\0') && (iVar2 = in_ECX[0x58], *(char *)(iVar2 + 0x1ee8) == '\0'))
       && (fVar4 = *DAT_10223188, *(float *)(iVar2 + 0x1ee4) <= fVar4)) &&
      (((float)in_ECX[0x73] <= fVar4 && ((float)in_ECX[0x74] <= fVar4)))) &&
     (((float)in_ECX[0x75] <= fVar4 && (in_ECX[0x4a] == 0)))) {
    if (*(int *)(iVar2 + 0x1e98) == 0) {
      (**(code **)(*in_ECX + 0x198))(3,1,0);
      fVar4 = *DAT_10223188 + 0.5;
    }
    else {
      (**(code **)(*in_ECX + 0x198))(9,1,0);
      fVar4 = *DAT_10223188 + 1.0;
    }
    *(float *)(in_ECX[0x58] + 0x308) = fVar4;
    (**(code **)(*in_ECX + 8))(0x3f800000);
    in_ECX[0x1e] = (int)CMobile::MidBatteryFix;
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,"weapons/sleeve_generic2.wav",0x3f800000,
                 0x3f4ccccd,0,100);
    fVar4 = *DAT_10223188 + 5.0;
    *(float *)(in_ECX[0x58] + 0x308) = fVar4;
    in_ECX[0x75] = (int)fVar4;
    in_ECX[0x74] = (int)fVar4;
    in_ECX[0x73] = (int)fVar4;
  }
  iVar2 = in_ECX[0x58];
  if (*(int *)(in_ECX[1] + 0x114) != *(int *)(iVar2 + 0x5cc)) {
    *(int *)(in_ECX[1] + 0x114) = *(int *)(iVar2 + 0x5cc);
    (**(code **)(*in_ECX + 0x19c))(in_ECX[0x58],*(undefined4 *)(in_ECX[1] + 0x114));
    iVar2 = in_ECX[0x58];
  }
  if (*(int *)(iVar2 + 0x1e98) == 0) {
    if ((*(uint *)(iVar2 + 0x5d0) & 1) != 0) {
      *(uint *)(iVar2 + 0x5d0) = *(uint *)(iVar2 + 0x5d0) & 0xfffffffe;
      iVar2 = in_ECX[0x58];
    }
    if ((*(uint *)(iVar2 + 0x5d0) & 2) != 0) {
      *(uint *)(iVar2 + 0x5d0) = *(uint *)(iVar2 + 0x5d0) & 0xfffffffd;
    }
  }
  *(undefined4 *)(in_ECX[1] + 0x164) = 0x42480000;
  if ((*(char *)(in_ECX[0x58] + 0x1ee8) == '\0') && ((char)in_ECX[0x81] != '\0')) {
    *(undefined1 *)(in_ECX + 0x81) = 0;
  }
  if (*(char *)(in_ECX[0x58] + 0x1ec0) == '\x01') {
    cVar1 = FUN_100e4e00();
    if (cVar1 == '\0') {
      bVar3 = *(char *)(in_ECX[0x58] + 0x1f1c) == '\0';
      if (bVar3) {
        (*DAT_10223000)(1,DAT_10226578,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
        (*DAT_10223008)(0);
      }
      else {
        (*DAT_10223000)();
        (*DAT_10223008)(0);
      }
      (*DAT_10223008)(!bVar3);
      (*DAT_10223004)();
      FUN_100534d0();
      *(undefined1 *)(in_ECX[0x58] + 0x1ec0) = 0;
    }
  }
  if (*DAT_10223188 <= *(float *)(in_ECX[0x58] + 0x1ee4) &&
      *(float *)(in_ECX[0x58] + 0x1ee4) != *DAT_10223188) {
    (**(code **)(*in_ECX + 0x198))(0xe,1,0);
    return;
  }
  if ((in_ECX[0x4a] == 2) && (in_ECX[0x7c] == 0)) {
    in_ECX[0x4a] = 0;
  }
  FUN_1011d560();
  return;
}

