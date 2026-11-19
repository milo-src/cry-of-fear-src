// rea decompile_all
// name: __crt_stdio_output::output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>::state_case_type
// address: 0x10155235
// body: available
// range: 0x10155235-0x10155475 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<char,class
   __crt_stdio_output::stream_output_adapter<char>,class
   __crt_stdio_output::positional_parameter_base<char,class
   __crt_stdio_output::stream_output_adapter<char> > >::state_case_type(void)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_output::
output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
::state_case_type(output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                  *this)

{
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  *poVar1;
  output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
  oVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_c;
  undefined4 local_8;
  
  oVar2 = this[0x31];
  local_8 = this;
  if ((char)oVar2 < 'e') {
    if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                  )0x64) {
LAB_101552e7:
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
LAB_101552eb:
      uVar11 = 0;
      uVar10 = 10;
LAB_101552ee:
      cVar6 = type_case_integer(uVar10,uVar11);
    }
    else if ((char)oVar2 < 'Y') {
      if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x58) {
        uVar11 = 1;
LAB_10155293:
        uVar10 = 0x10;
        goto LAB_101552ee;
      }
      if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x41) {
        if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x43) goto LAB_101552a7;
        if ((char)oVar2 < 'E') {
          return false;
        }
        if ('G' < (char)oVar2) {
          if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                        )0x53) {
            return false;
          }
          goto LAB_1015527b;
        }
      }
LAB_101552f7:
      cVar6 = type_case_a();
    }
    else if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                       )0x5a) {
      cVar6 = type_case_Z();
    }
    else {
      if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x61) goto LAB_101552f7;
      if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x63) {
        return false;
      }
LAB_101552a7:
      cVar6 = type_case_c_tchar(0);
    }
  }
  else if ((char)oVar2 < 'q') {
    if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                  )0x70) {
      cVar6 = type_case_p();
    }
    else {
      if ((char)oVar2 < 'h') goto LAB_101552f7;
      if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x69) goto LAB_101552e7;
      if (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x6e) {
        cVar6 = type_case_n();
      }
      else {
        if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x6f) {
          return false;
        }
        cVar6 = type_case_o();
      }
    }
  }
  else {
    if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                  )0x73) {
      if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                    )0x75) {
        if (oVar2 != (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                      )0x78) {
          return false;
        }
        uVar11 = 0;
        goto LAB_10155293;
      }
      goto LAB_101552eb;
    }
LAB_1015527b:
    cVar6 = type_case_s();
  }
  if (cVar6 == '\0') {
    return false;
  }
  cVar6 = should_skip_type_state_output();
  if (cVar6 != '\0') {
    return true;
  }
  if (this[0x30] !=
      (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
       )0x0) {
    return true;
  }
  iVar8 = 0;
  local_8 = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
             *)((uint)local_8 & 0xff000000);
  uVar3 = *(uint *)(this + 0x20);
  local_c = 0;
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((uVar3 & 1) == 0) {
        if ((uVar3 >> 1 & 1) != 0) {
          local_8 = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                     *)CONCAT31(local_8._1_3_,0x20);
          iVar8 = 1;
          local_c = 1;
        }
        goto LAB_1015538c;
      }
      local_8 = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                 *)CONCAT31(local_8._1_3_,0x2b);
    }
    else {
      local_8 = (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                 *)CONCAT31(local_8._1_3_,0x2d);
    }
    local_c = 1;
    iVar8 = 1;
  }
LAB_1015538c:
  oVar2 = this[0x31];
  if (((oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                  )0x78) ||
      (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                 )0x58)) && ((uVar3 >> 5 & 1) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                 )0x61) ||
     (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                )0x41)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar4) || (bVar5)) {
    *(undefined1 *)((int)&local_8 + iVar8) = 0x30;
    if ((oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                   )0x58) ||
       (oVar2 == (output_processor<char,__crt_stdio_output::stream_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::stream_output_adapter<char>_>_>
                  )0x41)) {
      uVar7 = 0x58;
    }
    else {
      uVar7 = 0x78;
    }
    *(undefined1 *)((int)&local_8 + iVar8 + 1) = uVar7;
    iVar8 = iVar8 + 2;
    local_c = iVar8;
  }
  poVar1 = this + 0x18;
  iVar9 = (*(int *)(this + 0x24) - *(int *)(this + 0x38)) - iVar8;
  if (((byte)this[0x20] & 0xc) == 0) {
    write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>
              ((stream_output_adapter<char> *)(this + 0x448),' ',iVar9,(int *)poVar1);
    iVar8 = local_c;
  }
  stream_output_adapter<char>::write_string
            ((stream_output_adapter<char> *)(this + 0x448),(char *)&local_8,iVar8,(int *)poVar1,
             (__crt_deferred_errno_cache *)(this + 0xc));
  if (((*(uint *)(this + 0x20) >> 3 & 1) != 0) && ((*(uint *)(this + 0x20) >> 2 & 1) == 0)) {
    write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>
              ((stream_output_adapter<char> *)(this + 0x448),'0',iVar9,(int *)poVar1);
  }
  write_stored_string_tchar(this,'\0');
  if ((-1 < *(int *)poVar1) && ((*(uint *)(this + 0x20) >> 2 & 1) != 0)) {
    write_multiple_characters<__crt_stdio_output::stream_output_adapter<char>,char>
              ((stream_output_adapter<char> *)(this + 0x448),' ',iVar9,(int *)poVar1);
  }
  return true;
}

