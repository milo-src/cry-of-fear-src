// rea decompile_all
// name: FUN_1004bb90
// address: 0x1004bb90
// body: available
// range: 0x1004bb90-0x1004be42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004bb90(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float fVar5;
  float local_10;
  float local_c;
  float local_8;
  
  iVar2 = *(int *)(in_ECX[1] + 0x19c);
  if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 0x7c), iVar2 == 0)) {
    *(undefined4 *)(in_ECX[1] + 0x19c) = 0;
    return;
  }
  iVar2 = FUN_100125e0(*(undefined4 *)(iVar2 + 4));
  if (iVar2 == 0) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x1ea4) = 1;
  FUN_1004b7d0("door_open");
  FUN_10119320(in_ECX[1] + 0x50);
  iVar4 = in_ECX[1];
  local_c = *(float *)(iVar4 + 0xc) - *(float *)(DAT_10223188 + 0x2c) * 16.0;
  iVar3 = in_ECX[0x43];
  local_8 = *(float *)(iVar4 + 0x10) - *(float *)(DAT_10223188 + 0x30) * 16.0;
  local_10 = *(float *)(iVar4 + 8) - *(float *)(DAT_10223188 + 0x28) * 16.0;
  if (iVar3 == 0) {
    iVar3 = FUN_10017950("env_model",&local_10,iVar4 + 0x50,*(undefined4 *)(iVar4 + 0x20c));
    iVar4 = in_ECX[1];
    in_ECX[0x43] = iVar3;
    if (iVar3 != 0) goto LAB_1004bc78;
  }
  else {
LAB_1004bc78:
    (*DAT_10222f50)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c),"models/player.mdl");
    FUN_10119fe0(in_ECX[0x43],&local_10);
    *(float *)(*(int *)(in_ECX[0x43] + 4) + 0x10) =
         *(float *)(*(int *)(in_ECX[0x43] + 4) + 0x10) + 36.0;
    *(undefined1 *)(*(int *)(in_ECX[0x43] + 4) + 0x140) = 0x7f;
    *(undefined1 *)(*(int *)(in_ECX[0x43] + 4) + 0x141) = 0x7f;
    *(undefined1 *)(*(int *)(in_ECX[0x43] + 4) + 0x142) = 0x7f;
    *(undefined1 *)(*(int *)(in_ECX[0x43] + 4) + 0x143) = 0x7f;
    iVar4 = *(int *)(in_ECX[0x43] + 4);
    *(undefined8 *)(iVar4 + 0x50) = DAT_10222f34;
    *(undefined4 *)(iVar4 + 0x58) = DAT_10222f3c;
    *(undefined4 *)(*(int *)(in_ECX[0x43] + 4) + 0x54) = *(undefined4 *)(in_ECX[1] + 0x54);
    FUN_100c20c0(&DAT_101b11c4);
    iVar4 = in_ECX[1];
  }
  if (*(int *)(iVar4 + 0x1ec) != 0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c),0,
                 *(int *)(DAT_10223188 + 0x98) + *(int *)(iVar4 + 0x1ec),0x3f800000,0x3f4ccccd,0,100
                );
  }
  FUN_100deff0(0);
  *(uint *)(iVar2 + 0x2500) = *(uint *)(iVar2 + 0x2500) | 9;
  puVar1 = (uint *)(*(int *)(iVar2 + 4) + 0x1a8);
  *puVar1 = *puVar1 | 0x80;
  if (*(int *)(iVar2 + 0x2310) == 0) {
    iVar4 = in_ECX[0x44];
    if (iVar4 == 0) goto LAB_1004be11;
  }
  else {
    if ((char)in_ECX[0x42] == '\0') {
      if (in_ECX[0x44] == 0) goto LAB_1004be11;
      fVar5 = (float)in_ECX[0x4b];
      if (fVar5 == -1.0) {
        fVar5 = 0.0;
      }
    }
    else {
      fVar5 = (float)in_ECX[0x4b];
      if (fVar5 == -1.0) {
        fVar5 = 1.0;
      }
    }
    FUN_100ea600(fVar5);
    iVar4 = in_ECX[0x44];
  }
  *(int *)(iVar2 + 0x2310) = iVar4;
LAB_1004be11:
  FUN_1004b850();
  (**(code **)(*in_ECX + 8))(0x40400000);
  in_ECX[0x1e] = (int)CInterDoorCoop::EndSequence;
  return;
}

