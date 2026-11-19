// rea decompile_all
// name: FUN_10070310
// address: 0x10070310
// body: available
// range: 0x10070310-0x1007057c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10070310(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  fVar1 = *(float *)(in_ECX[1] + 0x168);
  if (fVar1 != 0.0) {
    return;
  }
  if (param_1 == 1) {
    if (fVar1 != 0.0) {
      iVar3 = FUN_1000e950(0x1e);
      if (((*(float *)(in_ECX[1] + 0x168) != 0.0) && (in_ECX[0xe0] == 2)) &&
         (in_ECX[0xda] < in_ECX[0xdb])) {
        iVar2 = in_ECX[0xe1];
        if (iVar2 == 0) {
          iVar2 = FUN_1000e9b0("shotgun_appear");
          if (((*(int *)(in_ECX[1] + 300) == iVar2) ||
              (iVar2 = FUN_1000e9b0("shotgun_idle"), *(int *)(in_ECX[1] + 300) == iVar2)) &&
             ((float)in_ECX[0xdd] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdd])) {
            FUN_100c20c0("shotgun_idle");
            return;
          }
        }
        else if (iVar2 == 1) {
          iVar2 = FUN_1000e9b0("glock_appear");
          if (((*(int *)(in_ECX[1] + 300) == iVar2) ||
              (iVar2 = FUN_1000e9b0("glock_idle"), *(int *)(in_ECX[1] + 300) == iVar2)) &&
             ((float)in_ECX[0xdd] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdd])) {
            FUN_100c20c0("glock_idle");
            return;
          }
        }
        else if ((iVar2 == 2) &&
                (((iVar2 = FUN_1000e9b0("tmp_appear"), *(int *)(in_ECX[1] + 300) == iVar2 ||
                  (iVar2 = FUN_1000e9b0("tmp_idle"), *(int *)(in_ECX[1] + 300) == iVar2)) &&
                 ((float)in_ECX[0xdd] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdd])))) {
          FUN_100c20c0("tmp_idle");
          return;
        }
      }
      goto LAB_10070500;
    }
    iVar3 = 1;
  }
  else if (param_1 == 3) {
    iVar3 = 3;
    if (fVar1 != 0.0) {
      iVar3 = 0x30;
    }
  }
  else {
    iVar3 = param_1;
    if ((param_1 == 4) && (iVar3 = 4, fVar1 != 0.0)) {
      iVar3 = 0x30;
    }
  }
  iVar3 = FUN_1000e950(iVar3);
LAB_10070500:
  piVar4 = (int *)in_ECX[1];
  in_ECX[0x85] = param_1;
  if (iVar3 < 0) {
    (*DAT_1022303c)(1,"%s has no sequence for act:%d\n",(int)DAT_10223188[0x26] + *piVar4,param_1);
    *(undefined4 *)(in_ECX[1] + 300) = 0;
    return;
  }
  if ((piVar4[0x4b] != iVar3) || (in_ECX[0x3f] == 0)) {
    piVar4[0x4d] = 0;
    piVar4 = (int *)in_ECX[1];
  }
  piVar4[0x4b] = iVar3;
  FUN_1000e9e0();
  (**(code **)(*in_ECX + 0x1c0))();
  return;
}

