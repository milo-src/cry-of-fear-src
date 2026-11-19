// rea decompile_all
// name: FUN_100e59f0
// address: 0x100e59f0
// body: available
// range: 0x100e59f0-0x100e5fbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100e59f0(undefined4 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  char cVar6;
  float10 fVar7;
  
  if ((DAT_10222ee4 != (int *)0x0) && (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
    (**(code **)(*in_ECX + 0x254))(param_1,param_2);
    return;
  }
  FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"common/null.wav",0x3f800000,0x3f4ccccd,0,100);
  if (in_ECX[0x94b] != 0) {
    FUN_10017ad0();
    *(undefined4 *)(in_ECX[0x94b] + 0x78) = 0;
  }
  iVar2 = in_ECX[1];
  if ((*(uint *)(iVar2 + 0x1a8) & 0x1000) != 0) {
    FUN_100deff0(1);
    iVar2 = in_ECX[1];
  }
  if (2 < *(int *)(iVar2 + 0x1c4)) {
    in_ECX[0x16d] = in_ECX[0x16d] | 0x27;
  }
  if ((DAT_10222ee4 != (int *)0x0) && (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
    in_ECX[0x16d] = in_ECX[0x16d] | 6;
  }
  *(undefined1 *)(in_ECX + 0x7a9) = 0;
  in_ECX[0x174] = 0;
  if (*(float *)(in_ECX[1] + 0x274) != 90.0) {
    (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_1022301c)(0x43160000);
    (*DAT_10223008)(0);
    (*DAT_10223008)(1);
    (*DAT_10223004)();
    *(undefined4 *)(in_ECX[1] + 0x274) = 0x42b40000;
  }
  if ((int *)in_ECX[0x94b] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x94b] + 0x14c))();
  }
  (**(code **)(*DAT_10222ee4 + 0x74))();
  iVar2 = FUN_10017780();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_100177a0();
    (**(code **)(*piVar3 + 0xe8))();
    FUN_10017740(0);
  }
  if ((int *)in_ECX[0x8c3] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x8c3] + 0xe8))();
    in_ECX[0x8c3] = 0;
  }
  uVar4 = FUN_101005c0(*(undefined4 *)(in_ECX[1] + 0x20c));
  iVar2 = FUN_10100910(uVar4);
  if (iVar2 != 0) {
    FUN_101008e0();
  }
  in_ECX[0x995] = 0;
  *(undefined4 *)(in_ECX[1] + 0xb4) = DAT_10222ef8;
  *(undefined4 *)(in_ECX[1] + 0x174) = 1;
  *(undefined4 *)(in_ECX[1] + 0x108) = 6;
  *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) & 0xfffffdff;
  iVar2 = in_ECX[1];
  if (*(float *)(iVar2 + 0x28) <= 10.0 && *(float *)(iVar2 + 0x28) != 10.0) {
    fVar7 = (float10)(*DAT_102230b4)(0,0x43960000);
    *(float *)(iVar2 + 0x28) = (float)(fVar7 + (float10)*(float *)(iVar2 + 0x28));
  }
  FUN_100f3a40(0,0,0);
  FUN_100f2e10(0);
  in_ECX[0x177] = -2;
  iVar2 = 1;
  in_ECX[0x178] = -2;
  in_ECX[0x93e] = 0;
  in_ECX[0x10a] = 0;
  if (0 < (int)DAT_10223188[0x24]) {
    do {
      iVar5 = FUN_10119680(iVar2);
      if (iVar5 != 0) {
        (*DAT_10223000)(1,DAT_102264d0,0,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
        (*DAT_10223008)(in_ECX[0x93e]);
        uVar4 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
        (*DAT_10223008)(uVar4);
        iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))();
        (*DAT_10223008)(iVar5 != 0);
        (*DAT_10223004)();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= (int)DAT_10223188[0x24]);
  }
  (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(in_ECX[1] + 0x20c));
  (*DAT_10223008)(0);
  (*DAT_10223008)(0xff);
  (*DAT_10223008)(0xff);
  (*DAT_10223004)();
  in_ECX[0x943] = 0;
  in_ECX[0x942] = 0;
  *(undefined4 *)(in_ECX[1] + 0x218) = 0;
  (*DAT_10223000)(1,DAT_10226520,0,*(undefined4 *)(in_ECX[1] + 0x20c));
  (*DAT_10223008)(0);
  (*DAT_10223004)();
  FUN_100ea600(0x3f800000);
  if ((*(char *)((int)in_ECX + 0x1f2a) == '\0') && ((*(byte *)(in_ECX + 0x16d) & 8) == 0)) {
    FUN_10119c00();
  }
  fVar1 = *DAT_10223188;
  iVar2 = in_ECX[1];
  *(undefined1 *)(in_ECX + 0x7ca) = 0;
  in_ECX[0x7c9] = (int)(fVar1 + 2.0);
  if (((-40.0 < *(float *)(iVar2 + 0x164) || *(float *)(iVar2 + 0x164) == -40.0) || (param_2 == 1))
     && (param_2 != 2)) {
    cVar6 = *(char *)((int)in_ECX + 0x1f29);
    if ((cVar6 == '\0') && ((*(byte *)(in_ECX + 0x16d) & 1) == 0)) {
      (**(code **)(*in_ECX + 0x22c))();
      cVar6 = *(char *)((int)in_ECX + 0x1f29);
      iVar2 = in_ECX[1];
    }
    if ((cVar6 == '\0') && ((*(byte *)(in_ECX + 0x16d) & 2) == 0)) {
      (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(iVar2 + 0x20c));
      (*DAT_10223008)(1);
      (*DAT_10223008)(2);
      (*DAT_10223020)(&DAT_101a2496);
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      iVar2 = in_ECX[1];
    }
    if (((char)in_ECX[0x7b4] == '\0') && ((*(byte *)(in_ECX + 0x16d) & 0x20) == 0)) {
      *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) * 0.5;
      *(float *)(in_ECX[1] + 0x24) = *(float *)(in_ECX[1] + 0x24) * 0.5;
      *(float *)(in_ECX[1] + 0x28) = *(float *)(in_ECX[1] + 0x28) * 0.5;
      fVar1 = *DAT_10223188;
      *(undefined1 *)(in_ECX + 0x7b4) = 1;
      in_ECX[0x7b3] = (int)(fVar1 + 10.0);
      *(undefined4 *)(in_ECX[1] + 0x260) = 0x3f800000;
      (*DAT_10223000)(1,DAT_102265b4,0,*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223008)(1);
      (*DAT_10223004)();
      iVar2 = in_ECX[1];
    }
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(in_ECX[1] + 0x58) = 0;
    in_ECX[0x1e] = (int)CBasePlayer::PlayerDeathThink;
    (**(code **)(*in_ECX + 8))(0x3dcccccd);
    return;
  }
  *(undefined4 *)(iVar2 + 0x10c) = 0;
  (**(code **)(*in_ECX + 0x210))();
  *(uint *)(in_ECX[1] + 0x118) = *(uint *)(in_ECX[1] + 0x118) | 0x80;
  return;
}

