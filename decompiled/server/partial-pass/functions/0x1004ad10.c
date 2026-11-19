// rea decompile_all
// name: CInterDoorCoop::EndSequence
// address: 0x1004ad10
// body: available
// range: 0x1004ad10-0x1004b0da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CInterDoorCoop::EndSequence(void) */

void __thiscall CInterDoorCoop::EndSequence(CInterDoorCoop *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  float local_c;
  int local_8;
  
                    /* 0x4ad10  109  ?EndSequence@CInterDoorCoop@@QAEXXZ */
  if (*(int *)(this + 0x10c) != 0) {
    FUN_10119900(*(int *)(this + 0x10c));
    *(undefined4 *)(this + 0x10c) = 0;
  }
  iVar3 = *(int *)(this + 4);
  if (*(int *)(iVar3 + 0x19c) != 0) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x19c) + 0x7c);
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_100125e0(*(undefined4 *)(iVar3 + 4));
      if (piVar2 == (int *)0x0) {
        (*DAT_1022303c)(1,"No PLAYER!\n");
        return;
      }
      local_8 = *(int *)(*(int *)(this + 4) + 0x1cc);
      if (local_8 == 0) {
LAB_1004ae48:
        iVar3 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + local_8);
        if (iVar3 != 0) {
          iVar4 = *(int *)(iVar3 + 4);
          local_14 = *(undefined4 *)(iVar4 + 8);
          uStack_10 = *(undefined4 *)(iVar4 + 0xc);
          local_c = *(float *)(iVar4 + 0x10);
          iVar4 = (**(code **)(*piVar2 + 0xd0))();
          if (iVar4 != 0) {
            local_c = local_c - *(float *)(piVar2[1] + 0xe4);
          }
          local_c = local_c + 1.0;
          FUN_10119fe0(piVar2,&local_14);
          iVar4 = piVar2[1];
          *(ulonglong *)(piVar2 + 0x186) = CONCAT44(uStack_10,local_14);
          piVar2[0x188] = (int)local_c;
          iVar1 = *(int *)(iVar3 + 4);
          *(undefined8 *)(iVar4 + 0x50) = *(undefined8 *)(iVar1 + 0x50);
          *(undefined4 *)(iVar4 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
          iVar4 = piVar2[1];
          *(undefined8 *)(iVar4 + 0x2c) = DAT_10222f34;
          *(undefined4 *)(iVar4 + 0x34) = DAT_10222f3c;
          iVar4 = piVar2[1];
          *(undefined8 *)(iVar4 + 0x20) = *(undefined8 *)(iVar4 + 0x2c);
          *(undefined4 *)(iVar4 + 0x28) = *(undefined4 *)(iVar4 + 0x34);
          iVar4 = (**(code **)(*piVar2 + 0xd0))();
          if (iVar4 != 0) {
            iVar3 = *(int *)(iVar3 + 4);
            iVar4 = piVar2[1];
            *(undefined8 *)(iVar4 + 0x74) = *(undefined8 *)(iVar3 + 0x50);
            *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(iVar3 + 0x58);
            *(undefined4 *)(piVar2[1] + 0xa0) = 1;
          }
          *(uint *)(piVar2[1] + 0x1a8) = *(uint *)(piVar2[1] + 0x1a8) & 0xfffffdff;
          *(undefined4 *)(piVar2[1] + 0xa0) = 1;
          *(undefined1 *)(piVar2 + 0x7a9) = 0;
          if (*(int *)(*(int *)(this + 4) + 0x1f0) != 0) {
            FUN_100fc9f0(*(undefined4 *)(piVar2[1] + 0x20c),0,
                         *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1f0),
                         0x3f800000,0x3f4ccccd,0,100);
          }
          local_20 = 0;
          local_1c = 0;
          local_18 = 0;
          FUN_10119c00(piVar2,&local_20,0x3f000000,0,0xff,0);
          FUN_100deff0(1);
          piVar2[0x940] = piVar2[0x940] & 0xfffffff6;
          *(uint *)(piVar2[1] + 0x1a8) = *(uint *)(piVar2[1] + 0x1a8) & 0xffffff7f;
          if (*(int *)(this + 0x120) != 0) {
            FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x120),this,this,3,0);
          }
          if (*(int *)(this + 0x110) != 0) {
            fVar7 = *(float *)(this + 0x130);
            if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 2) == 0) {
              if (fVar7 == -1.0) {
                fVar7 = 0.0;
              }
              uVar6 = 0;
            }
            else {
              if (fVar7 == -1.0) {
                fVar7 = 0.0;
              }
              uVar6 = 1;
            }
            FUN_100ea5c0(*(int *)(this + 0x110),uVar6,fVar7);
          }
          *(undefined4 *)(*(int *)(this + 4) + 0x19c) = 0;
          return;
        }
        (*DAT_1022303c)(1,"No TARGET!\n");
        return;
      }
      iVar4 = *(int *)(DAT_10223188 + 0x98) + local_8;
      iVar3 = FUN_1000aba0(iVar4,"closegame1");
      if (iVar3 == 0) {
        iVar3 = FUN_1000aba0(iVar4,"closegame2");
        if (iVar3 == 0) {
          iVar3 = FUN_1000aba0(iVar4,"closegame3");
          if (iVar3 == 0) {
            iVar3 = FUN_1000aba0(iVar4,"closegame4");
            if (iVar3 == 0) goto LAB_1004ae48;
            pcVar5 = "End of forest demo chapter!";
          }
          else {
            pcVar5 = "End of subway demo chapter!";
          }
        }
        else {
          pcVar5 = "End of city demo chapter!";
        }
      }
      else {
        pcVar5 = "End of apartment demo chapter!";
      }
      FUN_10119810(piVar2,pcVar5,2,0);
      (**(code **)(*(int *)this + 8))(0x40000000);
      *(code **)(this + 0x78) = EndGame;
      FUN_100ea600(0x3f800000);
      return;
    }
    (*DAT_1022303c)(1,"No USER!\n");
    iVar3 = *(int *)(this + 4);
  }
  *(undefined4 *)(iVar3 + 0x19c) = 0;
  return;
}

