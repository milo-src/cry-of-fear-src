// rea decompile_all
// name: FUN_100384e0
// address: 0x100384e0
// body: available
// range: 0x100384e0-0x100387bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100387b9 to 0x100376c0 FUN_100376c0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_100384e0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *******pppppppuVar5;
  int iVar6;
  undefined4 *******pppppppuVar7;
  int in_ECX;
  uint uVar8;
  undefined1 *local_48;
  int local_44;
  undefined4 *******local_40;
  uint local_3c;
  int local_38;
  int local_34;
  undefined1 local_2d;
  undefined4 *******local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d7bd;
  local_10 = ExceptionList;
  uVar4 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = **(uint **)(in_ECX + 0x1c);
  local_14 = uVar4;
  if (uVar8 != 0) {
    iVar2 = **(int **)(in_ECX + 0x2c);
    if (uVar8 < iVar2 + uVar8) {
      **(int **)(in_ECX + 0x2c) = iVar2 + -1;
      **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) + 1;
      goto LAB_1003874b;
    }
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
      iVar2 = *(int *)(in_ECX + 0x54);
      iVar6 = *(int *)(in_ECX + 0x50);
      **(int **)(in_ECX + 0xc) = iVar6;
      **(int **)(in_ECX + 0x1c) = iVar6;
      **(int **)(in_ECX + 0x2c) = iVar2 - iVar6;
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 *******)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      local_44 = in_ECX;
      local_34 = _fgetc(*(FILE **)(in_ECX + 0x4c));
      uVar8 = local_3c;
      uVar3 = local_1c;
      local_3c = local_18;
      while( true ) {
        local_1c = uVar3;
        local_18 = local_3c;
        if (local_34 == -1) goto LAB_10038734;
        if (uVar3 < local_3c) {
          local_1c = uVar3 + 1;
          pppppppuVar7 = local_2c;
          if (0xf < local_3c) {
            pppppppuVar7 = local_2c[0];
          }
          *(char *)((int)pppppppuVar7 + uVar3) = (char)local_34;
          *(undefined1 *)((int)pppppppuVar7 + uVar3 + 1) = 0;
        }
        else {
          if (uVar3 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_100376c0(uVar4);
          }
          uVar8 = uVar3 + 1 | 0xf;
          if (uVar8 < 0x80000000) {
            if (0x7fffffff - (local_3c >> 1) < local_3c) {
              uVar8 = 0x7fffffff;
            }
            else {
              uVar1 = (local_3c >> 1) + local_3c;
              if (uVar8 < uVar1) {
                uVar8 = uVar1;
              }
            }
          }
          else {
            uVar8 = 0x7fffffff;
          }
          pppppppuVar5 = (undefined4 *******)FUN_1002f1e0(uVar8 + 1);
          pppppppuVar7 = local_2c[0];
          local_1c = uVar3 + 1;
          local_40 = pppppppuVar5;
          local_18 = uVar8;
          if (local_3c < 0x10) {
            FUN_10140130(pppppppuVar5,local_2c,uVar3);
            *(char *)(uVar3 + (int)pppppppuVar5) = (char)local_34;
            *(undefined1 *)(uVar3 + 1 + (int)pppppppuVar5) = 0;
            FUN_1002f280(local_2c,&local_40);
          }
          else {
            FUN_10140130(pppppppuVar5,local_2c[0],uVar3);
            *(char *)(uVar3 + (int)pppppppuVar5) = (char)local_34;
            *(undefined1 *)(uVar3 + 1 + (int)pppppppuVar5) = 0;
            std::_Deallocate<8,0>(pppppppuVar7,local_3c + 1);
            local_2c[0] = pppppppuVar5;
          }
        }
        iVar2 = local_44;
        pppppppuVar7 = local_2c;
        if (0xf < local_18) {
          pppppppuVar7 = local_2c[0];
        }
        iVar6 = (**(code **)(**(int **)(local_44 + 0x38) + 0x18))
                          (local_44 + 0x40,pppppppuVar7,local_1c + (int)pppppppuVar7,&local_38,
                           &local_2d,local_2c,&local_48);
        uVar8 = local_3c;
        if ((iVar6 < 0) || (1 < iVar6)) goto LAB_10038734;
        if (local_48 != &local_2d) break;
        pppppppuVar7 = local_2c;
        if (0xf < local_18) {
          pppppppuVar7 = local_2c[0];
        }
        uVar8 = local_38 - (int)pppppppuVar7;
        if (local_1c < (uint)(local_38 - (int)pppppppuVar7)) {
          uVar8 = local_1c;
        }
        pppppppuVar7 = local_2c;
        if (0xf < local_18) {
          pppppppuVar7 = local_2c[0];
        }
        local_1c = local_1c - uVar8;
        FUN_101406b0(pppppppuVar7,(int)pppppppuVar7 + uVar8,local_1c + 1);
        local_34 = _fgetc(*(FILE **)(iVar2 + 0x4c));
        uVar8 = local_3c;
        uVar3 = local_1c;
        local_3c = local_18;
      }
      pppppppuVar7 = local_2c;
      if (0xf < local_18) {
        pppppppuVar7 = local_2c[0];
      }
      for (iVar6 = (local_1c - local_38) + (int)pppppppuVar7; uVar8 = local_3c, 0 < iVar6;
          iVar6 = iVar6 + -1) {
        _ungetc((int)*(char *)(iVar6 + -1 + local_38),*(FILE **)(iVar2 + 0x4c));
      }
LAB_10038734:
      local_3c = uVar8;
      if (0xf < local_18) {
        std::_Deallocate<8,0>(local_2c[0],local_18 + 1);
      }
      goto LAB_1003874b;
    }
    _fgetc(*(FILE **)(in_ECX + 0x4c));
  }
LAB_1003874b:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

