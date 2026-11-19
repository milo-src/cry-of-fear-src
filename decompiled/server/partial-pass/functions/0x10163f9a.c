// rea decompile_all
// name: __crt_strtox::assemble_floating_point_value
// address: 0x10163f9a
// body: available
// range: 0x10163f9a-0x101642ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10164139) */
/* WARNING: Removing unreachable block (ram,0x1016425f) */
/* Library Function - Single Match
    enum SLD_STATUS __cdecl __crt_strtox::assemble_floating_point_value(unsigned
   __int64,int,bool,bool,class __crt_strtox::floating_point_value const &)
   
   Library: Visual Studio 2019 Release */

SLD_STATUS __cdecl
__crt_strtox::assemble_floating_point_value
          (__uint64 param_1,int param_2,bool param_3,bool param_4,floating_point_value *param_5)

{
  floating_point_value fVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  SLD_STATUS SVar8;
  float *pfVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  __uint64 _Var14;
  int local_c;
  
  uVar10 = 0;
  if (param_1._4_4_ == 0) {
    iVar4 = 0x1f;
    if ((uint)param_1 != 0) {
      for (; (uint)param_1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if ((uint)param_1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
  }
  else {
    iVar4 = 0x1f;
    if (param_1._4_4_ != 0) {
      for (; param_1._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (param_1._4_4_ == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 + 1;
    }
    iVar4 = iVar4 + 0x20;
  }
  fVar1 = param_5[4];
  iVar4 = (((fVar1 == (floating_point_value)0x0) - 1 & 0x1d) + 0x18) - iVar4;
  local_c = param_2 - iVar4;
  iVar5 = ((fVar1 == (floating_point_value)0x0) - 1 & 0x380) + 0x7f;
  if (iVar5 < local_c) {
LAB_10164285:
    assemble_floating_point_infinity(param_3,param_5);
    return 3;
  }
  if (local_c < (int)(((fVar1 == (floating_point_value)0x0) - 1 & 0xfffffc80) - 0x7e)) {
    iVar6 = param_2 + -1 + iVar5;
    local_c = -iVar5;
    if (iVar6 < 0) {
      if ((uint)-iVar6 < 0x40) {
        uVar11 = __allshl();
        uVar12 = __allshl();
        if ((param_4) && ((uVar11 - 1 & param_1) == 0)) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
        }
        if (((param_1 & uVar11) != 0) || (bVar2)) {
          iVar5 = fegetround();
          if (iVar5 == 0) {
            if (((param_1 & uVar11) != 0) && ((bVar3 || ((param_1 & uVar12) != 0)))) {
              uVar10 = 1;
            }
          }
          else if (iVar5 == 0x100) {
            uVar10 = (uint)param_3;
          }
          else if (iVar5 == 0x200) {
            uVar10 = (uint)!param_3;
          }
        }
        lVar13 = __aullshr();
        param_1 = lVar13 + (ulonglong)uVar10;
        if (lVar13 + (ulonglong)uVar10 != 0) {
          _Var14 = floating_point_value::denormal_mantissa_mask(param_5);
          if (_Var14 < param_1) {
            local_c = ((param_2 - iVar6) - iVar4) + -1;
          }
          goto LAB_101642af;
        }
      }
      assemble_floating_point_zero(param_3,param_5);
      return 2;
    }
  }
  else {
    if (iVar4 < 0) {
      if ((uint)-iVar4 < 0x40) {
        uVar11 = __allshl();
        uVar12 = __allshl();
        if ((param_4) && ((uVar11 - 1 & param_1) == 0)) {
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          bVar3 = true;
        }
        if (((uVar11 & param_1) != 0) || (bVar2)) {
          iVar4 = fegetround();
          if (iVar4 == 0) {
            if (((uVar11 & param_1) != 0) && ((bVar3 || ((uVar12 & param_1) != 0)))) {
              uVar10 = 1;
            }
          }
          else if (iVar4 == 0x100) {
            uVar10 = (uint)param_3;
          }
          else if (iVar4 == 0x200) {
            uVar10 = (uint)!param_3;
          }
        }
        lVar13 = __aullshr();
        param_1 = lVar13 + (ulonglong)uVar10;
      }
      else {
        param_1 = 0;
      }
      _Var14 = floating_point_value::normal_mantissa_mask(param_5);
      if (_Var14 < param_1) {
        param_1 = param_1 >> 1;
        local_c = local_c + 1;
        if ((int)(((param_5[4] == (floating_point_value)0x0) - 1 & 0x380) + 0x7f) < local_c)
        goto LAB_10164285;
      }
      goto LAB_101642af;
    }
    if (iVar4 < 1) goto LAB_101642af;
  }
  param_1 = __allshl();
LAB_101642af:
  _Var14 = floating_point_value::denormal_mantissa_mask(param_5);
  if (param_5[4] == (floating_point_value)0x0) {
    pfVar9 = (float *)FUN_10163f35();
    SVar8 = assemble_floating_point_value_t<float>(param_3,local_c,param_1 & _Var14,pfVar9);
  }
  else {
    pdVar7 = (double *)FUN_10163f10();
    SVar8 = assemble_floating_point_value_t<double>(param_3,local_c,param_1 & _Var14,pdVar7);
  }
  return SVar8;
}

