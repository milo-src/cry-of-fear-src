// rea decompile_all
// name: FUN_10032e70
// address: 0x10032e70
// body: available
// range: 0x10032e70-0x100334e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10032e70(void)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  char *pcVar9;
  int *in_ECX;
  bool bVar10;
  float fVar11;
  int local_18;
  
  if (in_ECX[0x58] != 0) {
    piVar5 = (int *)FUN_100e0310(*(undefined4 *)(in_ECX[0x58] + 0x1e70));
    piVar6 = (int *)FUN_100e0310(*(undefined4 *)(in_ECX[0x58] + 0x1e74));
    cVar4 = FUN_10038dc0(in_ECX[0x58]);
    if ((cVar4 != '\0') && ((DAT_102119a8 != 0 || (DAT_102119a8 = in_ECX[0x58], DAT_102119a8 != 0)))
       ) {
      FUN_10038fc0(in_ECX[0x58]);
    }
    if ((piVar5 == (int *)0x0) || (piVar6 == (int *)0x0)) {
      iVar7 = 0;
      if (in_ECX[0x58] != 0) {
        iVar7 = *(int *)(in_ECX[0x58] + 4);
        *(uint *)(iVar7 + 0x16c) = *(uint *)(iVar7 + 0x16c) & ~(1 << (in_ECX[0x5a] & 0x1fU));
        (**(code **)(*(int *)in_ECX[0x58] + 0x90))();
        iVar7 = in_ECX[0x58];
      }
      *(undefined4 *)(iVar7 + 0x624) = 0;
      (**(code **)(*in_ECX + 0x160))();
      if ((piVar6 == (int *)0x0) && (piVar6 = piVar5, piVar5 == (int *)0x0)) {
        FUN_100f1df0();
        return;
      }
      (**(code **)(*piVar6 + 0x144))();
      (**(code **)(*piVar6 + 0x150))();
      *(int **)(in_ECX[0x58] + 0x252c) = piVar6;
      return;
    }
  }
  if (((in_ECX[0x80] == 0xd) && (in_ECX[0x58] != 0)) && (iVar7 = FUN_100e0310(0xd), iVar7 != 0)) {
    pfVar1 = (float *)(*(int *)(iVar7 + 4) + 0x208);
    if ((*pfVar1 <= *DAT_10223188 && *DAT_10223188 != *pfVar1) &&
       (*(int *)(*(int *)(iVar7 + 4) + 0x248) == 1)) {
      *(uint *)(in_ECX[0x58] + 0x5d0) = *(uint *)(in_ECX[0x58] + 0x5d0) & 0xffffffef;
      *(undefined4 *)(*(int *)(iVar7 + 4) + 0x248) = 2;
      *(undefined4 *)(in_ECX[1] + 0x114) = 0;
      FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                   "weapons/flare/flare_burn.wav",0,0,0x20,100);
      (*DAT_10223000)(8,DAT_10226660,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      (*DAT_10223000)(1,DAT_10226490,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
      uVar8 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223010)(uVar8);
      (*DAT_10223020)("aurora/flare_extinguish.aur");
      (*DAT_10223008)(1);
      if (*(int *)(iVar7 + 0x16c) == 0) {
        pcVar9 = "models/weapons/flare/v_flare.mdl";
      }
      else {
        pcVar9 = (char *)((int)DAT_10223188[0x26] + *(int *)(iVar7 + 0x16c));
      }
      (*DAT_10223020)(pcVar9);
      (*DAT_10223010)(0);
      (*DAT_10223004)();
      if (*(char *)(iVar7 + 0x1f8) == '\0') {
        (**(code **)(*in_ECX + 0x198))(4,1,0);
        fVar11 = *DAT_10223188 + 0.4;
        *(float *)(in_ECX[0x58] + 0x308) = fVar11;
        in_ECX[0x76] = (int)fVar11;
        in_ECX[0x74] = (int)fVar11;
      }
    }
    iVar2 = in_ECX[0x58];
    uVar3 = *(uint *)(iVar2 + 0x5d0);
    if (*(int *)(*(int *)(iVar7 + 4) + 0x248) == 1) {
      if ((uVar3 & 0x10) == 0) {
        *(uint *)(iVar2 + 0x5d0) = uVar3 | 0x10;
      }
      if (*(float *)(iVar7 + 0x1fc) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar7 + 0x1fc))
      {
        FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),1,
                     "weapons/flare/flare_burn.wav",0x3e99999a,0x3f4ccccd,0,100);
        *(float *)(iVar7 + 0x1fc) = *DAT_10223188 + 6.9;
      }
    }
    else if ((uVar3 & 0x10) != 0) {
      *(uint *)(iVar2 + 0x5d0) = uVar3 & 0xffffffef;
    }
  }
  if (in_ECX[0x81] == 2) {
    if (DAT_102119a0 != *(int *)(in_ECX[0x58] + 0x5cc)) {
      DAT_102119a0 = *(int *)(in_ECX[0x58] + 0x5cc);
      (*DAT_10223000)(1,DAT_1022660c,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
      (*DAT_10223020)(*(int *)(in_ECX[0x58] + 0x624) + (int)DAT_10223188[0x26]);
      (*DAT_10223008)(DAT_102119a0);
      (*DAT_10223008)(*(undefined4 *)(in_ECX[0x58] + 0x1e70));
      (*DAT_10223008)(*(undefined4 *)(in_ECX[0x58] + 0x1e74));
      (*DAT_10223004)();
    }
LAB_10033296:
    if (in_ECX[0x80] == 2) {
      if (*(int *)(in_ECX[1] + 0x114) != *(int *)(in_ECX[0x58] + 0x5cc)) {
        *(int *)(in_ECX[1] + 0x114) = *(int *)(in_ECX[0x58] + 0x5cc);
        (**(code **)(*in_ECX + 0x19c))(in_ECX[0x58],*(undefined4 *)(in_ECX[1] + 0x114));
      }
    }
    if (((*(char *)(in_ECX[0x58] + 0x1ec0) == '\x01') && (cVar4 = FUN_100e4e00(), cVar4 == '\0')) &&
       (iVar7 = FUN_100e0310(2), iVar7 != 0)) {
      bVar10 = *(char *)(in_ECX[0x58] + 0x1f1c) == '\0';
      if (bVar10) {
        (*DAT_10223000)(1,DAT_10226578,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
        (*DAT_10223008)(0);
      }
      else {
        (*DAT_10223000)();
        (*DAT_10223008)(0);
      }
      (*DAT_10223008)(!bVar10);
      (*DAT_10223004)();
      FUN_100334f0(*(undefined4 *)(in_ECX[0x58] + 0x5cc));
      *(undefined1 *)(in_ECX[0x58] + 0x1ec0) = 0;
    }
  }
  else if (in_ECX[0x80] == 2) goto LAB_10033296;
  fVar11 = *DAT_10223188;
  if ((float)in_ECX[0x40] <= fVar11 && fVar11 != (float)in_ECX[0x40]) {
    if ((((float)in_ECX[0x73] <= fVar11 && fVar11 != (float)in_ECX[0x73]) &&
        ((float)in_ECX[0x74] <= fVar11 && fVar11 != (float)in_ECX[0x74])) &&
       ((float)in_ECX[0x75] <= fVar11 && fVar11 != (float)in_ECX[0x75])) {
      fVar11 = (float)in_ECX[0x46];
      if (0.0 < fVar11) {
        fVar11 = fVar11 - 0.75;
        in_ECX[0x46] = (int)fVar11;
      }
      if (fVar11 < 0.0) {
        in_ECX[0x46] = 0;
      }
    }
    in_ECX[0x40] = (int)(*DAT_10223188 + 0.1);
  }
  if ((in_ECX[0x4a] == 2) && (in_ECX[0x7c] == 0)) {
    DAT_102119d0 = 0;
    in_ECX[0x4a] = 0;
  }
  fVar11 = (float)in_ECX[0x46];
  if (1.0 <= fVar11) {
    if ((1.0 <= fVar11) && (fVar11 < 2.0)) {
      uVar8 = 0x3c0f0846;
      local_18 = 0x3c0f0846;
      goto LAB_100334c3;
    }
    if ((2.0 <= fVar11) && (fVar11 < 3.0)) {
      uVar8 = 0x3cd67770;
      local_18 = 0x3cd67770;
      goto LAB_100334c3;
    }
    if ((3.0 <= fVar11) && (fVar11 < 4.0)) {
      uVar8 = 0x3d566278;
      local_18 = 0x3d566278;
      goto LAB_100334c3;
    }
    if (4.0 <= fVar11) {
      uVar8 = 0x3db280f1;
      local_18 = 0x3db280f1;
      goto LAB_100334c3;
    }
  }
  uVar8 = 0;
  local_18 = 0;
LAB_100334c3:
  *(ulonglong *)(in_ECX + 99) = CONCAT44(uVar8,uVar8);
  in_ECX[0x65] = local_18;
  FUN_1011d560();
  return;
}

