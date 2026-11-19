// rea decompile_all
// name: CLaser::StrikeThink
// address: 0x1009fbf0
// body: available
// range: 0x1009fbf0-0x1009ff05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CLaser::StrikeThink(void) */

void __thiscall CLaser::StrikeThink(CLaser *this)

{
  uint uVar1;
  undefined8 *puVar2;
  float *pfVar3;
  int iVar4;
  CLaser *pCVar5;
  int iVar6;
  char cVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [60];
  
                    /* 0x9fbf0  300  ?StrikeThink@CLaser@@QAEXXZ */
  iVar4 = *(int *)(this + 4);
  local_58 = *(undefined8 *)(iVar4 + 8);
  local_50 = *(float *)(iVar4 + 0x10);
  if (*(int *)(this + 0x100) != 0) {
    puVar2 = (undefined8 *)
             FUN_100b8110(&local_4c,this,0,*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x100));
    iVar4 = *(int *)(this + 4);
    local_58 = *puVar2;
    local_50 = *(float *)(puVar2 + 1);
  }
  if (*(int *)(this + 0x104) == 0) {
    iVar4 = FUN_1009a090(*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar4 + 0x1d8));
    fVar8 = (float)local_58;
    fVar9 = local_58._4_4_;
    if (iVar4 == 0) goto LAB_1009fd02;
    iVar4 = *(int *)(iVar4 + 4);
    *(undefined8 *)(this + 0xec) = *(undefined8 *)(iVar4 + 8);
    fVar8 = *(float *)(iVar4 + 0x10);
  }
  else {
    pfVar3 = (float *)FUN_100b8240(&local_4c,this,0);
    fVar8 = pfVar3[2] + local_50;
    *(ulonglong *)(this + 0xec) = CONCAT44(pfVar3[1] + local_58._4_4_,*pfVar3 + (float)local_58);
    local_44 = fVar8;
  }
  *(float *)(this + 0xf4) = fVar8;
  fVar8 = (float)local_58;
  fVar9 = local_58._4_4_;
LAB_1009fd02:
  uVar1 = *(uint *)(this + 0xfc);
  cVar7 = '\0';
  if (1 < (int)uVar1) {
    cVar7 = ((int)uVar1 < 4) + '\x01';
  }
  pCVar5 = this + 0xec;
  if (*(int *)(this + 0xf8) != 0) {
    fVar9 = *(float *)(this + 0xf0) - fVar9;
    fVar8 = *(float *)pCVar5 - fVar8;
    fVar13 = *(float *)(this + 0xf4) - local_50;
    dVar10 = (double)(fVar9 * fVar9 + fVar8 * fVar8 + fVar13 * fVar13);
    if (dVar10 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar10 = SQRT(dVar10);
    }
    fVar12 = 1.0;
    fVar11 = 0.0;
    if ((float)dVar10 == 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar12 = 1.0 / (float)dVar10;
      fVar11 = fVar12 * fVar8;
      fVar9 = fVar12 * fVar9;
      fVar12 = fVar12 * fVar13;
    }
    pCVar5 = (CLaser *)&local_4c;
    local_4c = fVar11 * 4096.0 + (float)local_58;
    local_48 = fVar9 * 4096.0 + local_58._4_4_;
    local_44 = fVar12 * 4096.0 + local_50;
  }
  FUN_1011a820(&local_58,pCVar5,cVar7,uVar1 & 1,0,local_40);
  FUN_10094860((float)local_58,local_58._4_4_,local_50,local_40);
  if (*(int *)(*(int *)(this + 4) + 0x1cc) != 0) {
    *(undefined4 *)(DAT_10223188 + 0x84) = 1;
    FUN_1011a800(&local_58,this + 0xec,0,0,local_40);
    iVar6 = FUN_10094d70(local_40);
    iVar4 = *(int *)(this + 4);
    if (iVar6 == 0) {
      *(uint *)(iVar4 + 0x1a4) = *(uint *)(iVar4 + 0x1a4) & 0xfff7ffff;
    }
    else if ((*(uint *)(iVar4 + 0x1a4) & 0x80000) == 0) {
      FUN_10101ff0(*(int *)(iVar4 + 0x1cc) + *(int *)(DAT_10223188 + 0x98),iVar6,this,3,0);
      *(uint *)(*(int *)(this + 4) + 0x1a4) = *(uint *)(*(int *)(this + 4) + 0x1a4) | 0x80000;
    }
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

