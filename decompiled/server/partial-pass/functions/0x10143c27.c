// rea decompile_all
// name: FUN_10143c27
// address: 0x10143c27
// body: available
// range: 0x10143c27-0x10143fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10143f73 to 0x1017bc46 FUN_1017bc46 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10143f93 to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10143fd7 to 0x10176a6a _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10143c27(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,
                 void *param_4,_s_FuncInfo *param_5,uchar param_6,int param_7,
                 EHRegistrationNode *param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  __ehstate_t *p_Var7;
  _s_TryBlockMapEntry *p_Var8;
  int *piVar9;
  _s_TryBlockMapEntry local_6c;
  _s_HandlerType local_58;
  int *local_48;
  int *local_44 [2];
  int *local_3c;
  _s_FuncInfo *local_38;
  undefined4 local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  int local_24;
  uint local_20;
  HandlerType *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  _CONTEXT *local_c;
  char local_5;
  
  local_20 = local_20 & 0xffffff00;
  local_5 = '\0';
  local_10 = __FrameHandler3::GetCurrentState(param_2,param_4,param_5);
  if ((-2 < local_10) && (local_10 < param_5->maxState)) {
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((((*(int *)(param_1 + 0x14) == 0x19930520 || (*(int *)(param_1 + 0x14) == 0x19930521)) ||
         (*(int *)(param_1 + 0x14) == 0x19930522)) && (iVar6 = 0, *(int *)(param_1 + 0x1c) == 0))))
    {
      iVar3 = ___vcrt_getptd();
      if (*(int *)(iVar3 + 0x10) == 0) {
        return;
      }
      iVar3 = ___vcrt_getptd();
      param_1 = *(EHExceptionRecord **)(iVar3 + 0x10);
      iVar3 = ___vcrt_getptd();
      local_20 = CONCAT31(local_20._1_3_,1);
      local_c = *(_CONTEXT **)(iVar3 + 0x14);
      if ((param_1 == (EHExceptionRecord *)0x0) ||
         ((((*(int *)param_1 == -0x1f928c9d && (*(int *)(param_1 + 0x10) == 3)) &&
           ((*(int *)(param_1 + 0x14) == 0x19930520 ||
            ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522)))))
           ) && (*(int *)(param_1 + 0x1c) == 0)))) goto LAB_10143fd7;
      iVar3 = ___vcrt_getptd();
      if (*(int *)(iVar3 + 0x1c) != 0) {
        iVar3 = ___vcrt_getptd();
        local_14 = *(int **)(iVar3 + 0x1c);
        iVar3 = ___vcrt_getptd();
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        cVar1 = FUN_1014475e(param_1,local_14);
        piVar5 = local_14;
        if (cVar1 == '\0') {
          if (0 < *local_14) {
            local_14 = (int *)0x0;
            do {
              bVar2 = type_info::operator==
                                (*(type_info **)((int)local_14 + piVar5[1] + 4),
                                 (type_info *)&std::bad_exception::RTTI_Type_Descriptor);
              if (bVar2) {
                ___DestructExceptionObject(param_1,1);
                FUN_101442e9();
                    /* WARNING: Subroutine does not return */
                __CxxThrowException_8(local_44,&DAT_10207f0c);
              }
              iVar6 = iVar6 + 1;
              local_14 = local_14 + 4;
            } while (iVar6 < *piVar5);
          }
          goto LAB_10143f73;
        }
      }
    }
    else {
      local_c = param_3;
    }
    local_38 = param_5;
    local_34 = 0;
    if (((*(int *)param_1 == -0x1f928c9d) && (*(int *)(param_1 + 0x10) == 3)) &&
       ((*(int *)(param_1 + 0x14) == 0x19930520 ||
        ((*(int *)(param_1 + 0x14) == 0x19930521 || (*(int *)(param_1 + 0x14) == 0x19930522)))))) {
      if (param_5->nTryBlocks != 0) {
        FUN_1013f893(&local_48,&local_38,local_10,param_4,param_5,param_7);
        local_30 = local_48;
        local_14 = local_44[0];
        if (local_44[0] < local_3c) {
          local_24 = (int)local_44[0] * 0x14;
          piVar5 = local_44[0];
          do {
            iVar3 = local_10;
            p_Var7 = (__ehstate_t *)(*(int *)(*local_30 + 0x10) + local_24);
            p_Var8 = &local_6c;
            local_14 = piVar5;
            for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
              p_Var8->tryLow = *p_Var7;
              p_Var7 = p_Var7 + 1;
              p_Var8 = (_s_TryBlockMapEntry *)&p_Var8->tryHigh;
            }
            if (((local_6c.tryLow <= iVar3) && (iVar3 <= local_6c.tryHigh)) &&
               (local_18 = 0, local_6c.nCatches != 0)) {
              iVar6 = **(int **)(*(int *)(param_1 + 0x1c) + 0xc);
              local_28 = *(int **)(*(int *)(param_1 + 0x1c) + 0xc) + 1;
              local_1c = local_6c.pHandlerArray;
              local_2c = iVar6;
              do {
                local_58.adjectives = local_1c->adjectives;
                local_58.pType = local_1c->pType;
                local_58.dispCatchObj = local_1c->dispCatchObj;
                local_58.addressOfHandler = local_1c->addressOfHandler;
                iVar3 = iVar6;
                piVar9 = local_28;
                piVar5 = local_14;
                for (; local_14 = piVar5, 0 < iVar3; iVar3 = iVar3 + -1) {
                  iVar6 = TypeMatchHelper<>(&local_58,*piVar9,*(undefined4 *)(param_1 + 0x1c));
                  if (iVar6 != 0) {
                    local_5 = '\x01';
                    CatchIt<__FrameHandler3>
                              (param_1,param_2,local_c,param_4,param_5,&local_58,
                               (_s_CatchableType *)*piVar9,&local_6c,param_7,param_8,(uchar)local_20
                               ,param_6);
                    piVar5 = local_14;
                    goto LAB_10143eb5;
                  }
                  piVar9 = piVar9 + 1;
                  iVar6 = local_2c;
                  piVar5 = local_14;
                }
                local_18 = local_18 + 1;
                local_1c = local_1c + 1;
              } while (local_18 != local_6c.nCatches);
            }
LAB_10143eb5:
            piVar5 = (int *)((int)piVar5 + 1);
            local_24 = local_24 + 0x14;
            local_14 = piVar5;
          } while (piVar5 < local_3c);
        }
      }
      if (param_6 != '\0') {
        ___DestructExceptionObject(param_1,1);
      }
      if (((local_5 == '\0') && (0x19930520 < (param_5->magicNumber_and_bbtFlags & 0x1fffffff))) &&
         ((param_5->pESTypeList != (ESTypeList *)0x0 ||
          ((((uint)param_5->EHFlags >> 2 & 1) != 0 && (param_7 == 0)))))) {
        if (((uint)param_5->EHFlags >> 2 & 1) != 0) {
          iVar6 = ___vcrt_getptd();
          *(EHExceptionRecord **)(iVar6 + 0x10) = param_1;
          iVar6 = ___vcrt_getptd();
          *(_CONTEXT **)(iVar6 + 0x14) = local_c;
LAB_10143f73:
                    /* WARNING: Subroutine does not return */
          FUN_1017bc46();
        }
        cVar1 = FUN_1014475e(param_1,param_5->pESTypeList);
        if (cVar1 == '\0') {
          iVar6 = ___vcrt_getptd();
          *(EHExceptionRecord **)(iVar6 + 0x10) = param_1;
          iVar6 = ___vcrt_getptd();
          *(_CONTEXT **)(iVar6 + 0x14) = local_c;
          if (param_8 == (EHRegistrationNode *)0x0) {
            param_8 = param_2;
          }
          _UnwindNestedFrames(param_8,param_1);
          __FrameHandler3::FrameUnwindToEmptyState(param_2,param_4,param_5);
          uVar4 = FUN_1014487e(param_5);
          FUN_101445ca(uVar4);
          goto LAB_10143fd7;
        }
      }
    }
    else if (param_5->nTryBlocks != 0) {
      if (param_6 != '\0') goto LAB_10143fd7;
      FUN_10143fdd(param_1,param_2,local_c,param_4,param_5,local_10,param_7,param_8);
    }
    iVar6 = ___vcrt_getptd();
    if (*(int *)(iVar6 + 0x1c) == 0) {
      return;
    }
  }
LAB_10143fd7:
                    /* WARNING: Subroutine does not return */
  _abort();
}

