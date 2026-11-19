// rea decompile_all
// name: type_case_a
// address: 0x101581da
// body: available
// range: 0x101581da-0x1015836c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::console_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_a(void)
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::type_case_a(void)
   
   Library: Visual Studio 2019 Release */

undefined4 type_case_a(void)

{
  formatting_buffer *this;
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  formatting_buffer *pfVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *in_ECX;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 local_c;
  undefined4 local_8;
  
  in_ECX[8] = in_ECX[8] | 0x10;
  cVar2 = validate_state_for_type_case_a();
  if (cVar2 == '\0') {
LAB_10158366:
    uVar4 = 0;
  }
  else {
    cVar2 = should_format();
    if (cVar2 != '\0') {
      iVar12 = in_ECX[10];
      if (iVar12 < 0) {
        if ((*(short *)((int)in_ECX + 0x32) == 0x61) || (*(short *)((int)in_ECX + 0x32) == 0x41)) {
          iVar12 = 0xd;
        }
        else {
          iVar12 = 6;
        }
        in_ECX[10] = iVar12;
      }
      else if ((iVar12 == 0) &&
              ((*(short *)((int)in_ECX + 0x32) == 0x67 ||
               (iVar12 = 0, *(short *)((int)in_ECX + 0x32) == 0x47)))) {
        in_ECX[10] = 1;
        iVar12 = 1;
      }
      this = (formatting_buffer *)(in_ECX + 0x10);
      bVar3 = __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>
                        (this,iVar12 + 0x15d);
      if (!bVar3) {
        uVar5 = __crt_stdio_output::formatting_buffer::count<char>(this);
        in_ECX[10] = uVar5 - 0x15d;
      }
      pfVar6 = (formatting_buffer *)in_ECX[0x111];
      if ((formatting_buffer *)in_ECX[0x111] == (formatting_buffer *)0x0) {
        pfVar6 = this;
      }
      local_c = 0;
      local_8 = 0;
      in_ECX[0xd] = pfVar6;
      cVar2 = extract_argument_from_va_list<>(&local_c);
      if (cVar2 == '\0') goto LAB_10158366;
      uVar5 = __crt_stdio_output::formatting_buffer::count<char>(this);
      pfVar6 = (formatting_buffer *)in_ECX[0x111];
      if ((formatting_buffer *)in_ECX[0x111] == (formatting_buffer *)0x0) {
        pfVar6 = this;
      }
      iVar12 = (int)*(char *)((int)in_ECX + 0x32);
      uVar13 = 1;
      uVar4 = in_ECX[2];
      uVar11 = in_ECX[1];
      uVar10 = *in_ECX;
      uVar9 = in_ECX[10];
      pcVar7 = __crt_stdio_output::formatting_buffer::scratch_data<char>(this);
      uVar8 = __crt_stdio_output::formatting_buffer::count<char>(this);
      ___acrt_fp_format(&local_c,pfVar6,uVar8,pcVar7,uVar5,iVar12,uVar9,uVar10,uVar11,uVar4,uVar13);
      if ((((uint)in_ECX[8] >> 5 & 1) != 0) && (in_ECX[10] == 0)) {
        __crt_stdio_output::force_decimal_point
                  ((char *)in_ECX[0xd],(__crt_locale_pointers *)in_ECX[2]);
      }
      if (((*(short *)((int)in_ECX + 0x32) == 0x67) || (*(short *)((int)in_ECX + 0x32) == 0x47)) &&
         (((uint)in_ECX[8] >> 5 & 1) == 0)) {
        __crt_stdio_output::crop_zeroes((char *)in_ECX[0xd],(__crt_locale_pointers *)in_ECX[2]);
      }
      pcVar7 = (char *)in_ECX[0xd];
      cVar2 = *pcVar7;
      if (cVar2 == '-') {
        in_ECX[8] = in_ECX[8] | 0x40;
        pcVar7 = pcVar7 + 1;
        in_ECX[0xd] = pcVar7;
        cVar2 = *pcVar7;
      }
      if (((cVar2 == 'i') || (cVar2 == 'I')) || ((cVar2 == 'n' || (cVar2 == 'N')))) {
        in_ECX[8] = in_ECX[8] & 0xfffffff7;
        *(undefined2 *)((int)in_ECX + 0x32) = 0x73;
      }
      pcVar1 = pcVar7 + 1;
      do {
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      in_ECX[0xe] = (int)pcVar7 - (int)pcVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}

