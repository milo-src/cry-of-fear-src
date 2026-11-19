// rea decompile_all
// name: FUN_10076d10
// address: 0x10076d10
// body: available
// range: 0x10076d10-0x10076f66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076d10(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int iVar4;
  float10 fVar5;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (param_1 != 0) {
    iVar2 = FUN_10118460(0,"player");
    iVar4 = 0;
    if (iVar2 != 0) {
      iVar4 = FUN_100125e0(*(undefined4 *)(iVar2 + 4));
    }
    iVar2 = FUN_10017780();
    if (((iVar2 == 0) && (*(int *)(in_ECX[1] + 0x1d8) != 0)) &&
       (iVar2 = FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(in_ECX[1] + 0x1d8)), iVar2 != 0))
    {
      FUN_10017740(iVar2);
    }
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x435) = 1;
      if (*(char *)(iVar4 + 0x43c) != '\0') {
        *(undefined1 *)(iVar4 + 0x43c) = 0;
        (*DAT_10223128)(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),&DAT_101a1470,&DAT_101a1234);
      }
      in_ECX[0x37] = iVar4;
      FUN_100deff0(0);
      iVar2 = FUN_10017950("camera_model",in_ECX[1] + 8,in_ECX[1] + 0x50,
                           *(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
      *(int *)(iVar4 + 0x5ac) = iVar2;
      if (iVar2 != 0) {
        iVar1 = in_ECX[1];
        local_c = *(undefined4 *)(iVar1 + 0xc);
        local_8 = *(undefined4 *)(iVar1 + 0x10);
        local_10 = *(undefined4 *)(iVar1 + 8);
        FUN_10119fe0(iVar2,&local_10);
        (*DAT_10222f50)(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x5ac) + 4) + 0x20c),
                        "models/cutscene/strangle_simon.mdl");
        FUN_10017740(*(undefined4 *)(iVar4 + 0x5ac));
        FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),0,"cutscene/stranglesounds.wav",
                     0x3f800000,0,0,100);
        FUN_100c20c0("strangle_start1");
        (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
        iVar2 = FUN_100177a0();
        uVar3 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
        (*DAT_10223010)(uVar3);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        uVar3 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x5ac) + 4) + 0x20c),
                                "strangle_start1");
        fVar5 = (float10)FUN_1000f3e0(uVar3);
        *(float *)(in_ECX[1] + 0x1b8) = (float)(fVar5 + (float10)*DAT_10223188);
        *(undefined4 *)(in_ECX[1] + 0x248) = 1;
        *(undefined4 *)(in_ECX[1] + 0x19c) = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c);
      }
      in_ECX[0x1e] = (int)CCoFStrangle::StrangleThink;
      (**(code **)(*in_ECX + 8))(0x3dcccccd);
    }
  }
  return;
}

