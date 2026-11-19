// rea decompile_all
// name: CWatro::WatroThink
// address: 0x10085c50
// body: available
// range: 0x10085c50-0x10086103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CWatro::WatroThink(void) */

void __thiscall CWatro::WatroThink(CWatro *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0x85c50  365  ?WatroThink@CWatro@@QAEXXZ */
  iVar1 = *(int *)(this + 4);
  if (0.0 < *(float *)(iVar1 + 0x164)) {
LAB_10085cf3:
    if (*(int *)(iVar1 + 0x24c) == 0) {
      if ((*(float *)(this + 0x378) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x378))
         && (*(int *)(iVar1 + 0x248) != 0)) {
        FUN_100c20c0(&DAT_101aa610);
        iVar1 = *(int *)(this + 4);
        *(float *)(this + 0x378) = *DAT_10223188 + 4.0;
      }
      if (*(int *)(iVar1 + 0x248) != 0) {
        if ((*(float *)(iVar1 + 600) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar1 + 600))
           && (*(int *)(this + 0x370) == 2)) {
          *(undefined4 *)(this + 0x370) = 0;
        }
        if (*(int *)(this + 0x370) == 1) {
          if (*(float *)(this + 0x374) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x374)
             ) {
            *(undefined4 *)(this + 0x370) = 2;
            FUN_10119320(iVar1 + 0x50);
            if (*(int *)(this + 0x368) == 1) {
              FUN_10119320(*(int *)(this + 4) + 0x50);
              iVar1 = *(int *)(this + 4);
              local_c = DAT_10223188[0xb] * 100.0 + *(float *)(iVar1 + 0xc);
              local_8 = DAT_10223188[0xc] * 100.0 + *(float *)(iVar1 + 0x10);
              local_10 = DAT_10223188[10] * 100.0 + *(float *)(iVar1 + 8);
              for (piVar2 = (int *)FUN_101186b0(0,&local_10,0x43000000); piVar2 != (int *)0x0;
                  piVar2 = (int *)FUN_101186b0(piVar2,&local_10,0x43000000)) {
                iVar1 = (**(code **)(*piVar2 + 0xd0))();
                if (((iVar1 != 0) && (iVar1 = (**(code **)(*piVar2 + 0xbc))(), iVar1 != 0)) &&
                   (((*(uint *)(piVar2[1] + 0x1a8) & 0x200) != 0 &&
                    (iVar1 = FUN_100125e0(piVar2[1]), iVar1 != 0)))) {
                  FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),0,"watro/watro_hit.wav",
                               0x3f800000,0x3f4ccccd,0,100);
                  FUN_100f91b0(0xc1200000,0x41a00000,0x41a00000);
                  iVar1 = (*DAT_1022305c)(0);
                  if (iVar1 == 0) {
                    iVar1 = 0;
                  }
                  else {
                    iVar1 = iVar1 + 0x80;
                  }
                  iVar3 = (*DAT_1022305c)(0);
                  if (iVar3 == 0) {
                    iVar3 = 0;
                  }
                  else {
                    iVar3 = iVar3 + 0x80;
                  }
                  (**(code **)(*piVar2 + 100))(iVar3,iVar1,0x41700000,0);
                }
              }
            }
          }
        }
        else if ((*(int *)(this + 0x370) == 0) &&
                (*(float *)(iVar1 + 600) <= *DAT_10223188 &&
                 *DAT_10223188 != *(float *)(iVar1 + 600))) {
          FUN_10119320(iVar1 + 0x50);
          iVar1 = *(int *)(this + 4);
          local_c = DAT_10223188[0xb] * 100.0 + *(float *)(iVar1 + 0xc);
          local_8 = DAT_10223188[0xc] * 100.0 + *(float *)(iVar1 + 0x10);
          local_10 = DAT_10223188[10] * 100.0 + *(float *)(iVar1 + 8);
          for (piVar2 = (int *)FUN_101186b0(0,&local_10,0x43000000); piVar2 != (int *)0x0;
              piVar2 = (int *)FUN_101186b0(piVar2,&local_10,0x43000000)) {
            iVar1 = (**(code **)(*piVar2 + 0xd0))();
            if (((iVar1 != 0) && (iVar1 = (**(code **)(*piVar2 + 0xbc))(), iVar1 != 0)) &&
               (iVar1 = FUN_100125e0(piVar2[1]), iVar1 != 0)) {
              FUN_100c20c0("attack");
              *(undefined4 *)(this + 0x370) = 1;
              *(float *)(this + 0x374) = *DAT_10223188 + 0.45;
              *(float *)(this + 0x378) = *DAT_10223188 + 2.0;
              *(float *)(*(int *)(this + 4) + 600) = *DAT_10223188 + 1.0;
              FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),0,"watro/watro_swing.wav",
                           0x3f800000,0x3f4ccccd,0,100);
            }
          }
        }
      }
      goto LAB_100860f0;
    }
  }
  else if (*(int *)(iVar1 + 0x24c) == 0) {
    *(undefined4 *)(iVar1 + 0x24c) = 1;
    FUN_100c20c0("disappear");
    iVar1 = (*DAT_102230b0)(0xfffffffb,5);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),4,"sewmo/out_water.wav",0x3f800000,
                 0x3f4ccccd,0,iVar1 + 100);
    FUN_1011a2f0(this,0);
    *(float *)(*(int *)(this + 4) + 0x25c) = *DAT_10223188 + 1.0;
    iVar1 = *(int *)(this + 4);
    goto LAB_10085cf3;
  }
  if (*(float *)(iVar1 + 0x25c) <= *DAT_10223188 && *DAT_10223188 != *(float *)(iVar1 + 0x25c)) {
    FUN_10119900(this);
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
LAB_100860f0:
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

