// rea decompile_all
// name: FUN_100ab000
// address: 0x100ab000
// body: available
// range: 0x100ab000-0x100ab3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ab000(void)

{
  undefined8 *puVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 local_5c [16];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  float local_10;
  undefined8 local_c;
  
  *(undefined4 *)(in_ECX[1] + 0xb8) = 0;
  *(undefined4 *)(in_ECX[1] + 0x10c) = 0;
  iVar2 = in_ECX[1];
  if (*(int *)(iVar2 + 0x1cc) == 0) {
    local_c = *(undefined8 *)(iVar2 + 8);
    fVar4 = *(float *)(iVar2 + 0x10);
  }
  else {
    puVar1 = (undefined8 *)FUN_100b8110(&local_24);
    local_c = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    iVar2 = in_ECX[1];
  }
  local_18 = (float)local_c;
  fStack_14 = (float)((ulonglong)local_c >> 0x20);
  local_24 = local_18 + 0.0;
  local_20 = fStack_14 + 0.0;
  local_10 = fVar4 - 32.0;
  local_1c = fVar4 + 8.0;
  _local_18 = CONCAT44(local_20,local_24);
  FUN_1011a800(&local_24,&local_18,1,*(undefined4 *)(iVar2 + 0x20c),local_5c);
  if (local_4c == 1.0) {
    iVar2 = in_ECX[1];
    *(undefined8 *)(iVar2 + 8) = local_c;
    *(float *)(iVar2 + 0x10) = fVar4;
  }
  else {
    iVar2 = in_ECX[1];
    fVar4 = (float)(in_ECX[0xda] + -0x18);
    local_1c = local_40 + local_30 * fVar4 * 0.6;
    *(ulonglong *)(iVar2 + 8) =
         CONCAT44(local_44 + local_34 * fVar4 * 0.6,local_48 + local_38 * fVar4 * 0.6);
    *(float *)(iVar2 + 0x10) = local_1c;
  }
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 0x10) == 0) {
    fVar3 = (float10)(*DAT_102230b4)(0,0x3f800000);
    if (0.5 <= (float)fVar3) {
      uVar5 = 0xc;
    }
    else {
      uVar5 = 0xb;
    }
    FUN_101180b0(local_5c,uVar5);
  }
  iVar2 = in_ECX[1];
  if ((*(byte *)(iVar2 + 0x1a4) & 4) == 0) {
    FUN_10094060((int)"aurora/explosion.aur" - *(int *)(DAT_10223188 + 0x98),1,
                 *(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                 *(undefined4 *)(iVar2 + 0x10),0,0x3dcccccd);
    iVar2 = in_ECX[1];
    FUN_10094060((int)"aurora/blacksmoke.aur" - *(int *)(DAT_10223188 + 0x98),1,
                 *(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                 *(undefined4 *)(iVar2 + 0x10),0,0x3dcccccd);
    (*DAT_10223000)(5,DAT_1022655c,in_ECX[1] + 8,0);
    (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 8));
    (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0xc));
    (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0x10));
    (*DAT_10223008)(0x19);
    (*DAT_10223008)(0xf);
    (*DAT_10223008)(0x1e);
  }
  else {
    (*DAT_10223000)(5,0x17,(undefined4 *)(iVar2 + 8),0);
    (*DAT_10223008)(3);
    (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 8));
    (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0xc));
    (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0x10));
    (*DAT_10223010)((int)DAT_10231f10);
    (*DAT_10223008)(0);
    (*DAT_10223008)(0xf);
    (*DAT_10223008)(0);
  }
  (*DAT_10223004)();
  iVar2 = in_ECX[1];
  if ((*(byte *)(iVar2 + 0x1a4) & 1) == 0) {
    FUN_1008a9e0(iVar2,iVar2,(float)in_ECX[0xda],0,0x40);
  }
  in_ECX[0x1e] = (int)CEnvExplosion::Smoke;
  (**(code **)(*in_ECX + 8))(0x3e99999a);
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 0x20) == 0) {
    iVar2 = (*DAT_102230b0)(0,3);
    if (0 < iVar2) {
      do {
        FUN_10017950("spark_shower",in_ECX[1] + 8,&local_38,0);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

