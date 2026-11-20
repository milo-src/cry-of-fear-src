
void FUN_01df3929(undefined4 param_1)

{
  HMODULE hModule;
  DWORD DVar1;
  FARPROC pFVar2;
  undefined4 *puVar3;
  
  hModule = (HMODULE)FUN_01d5d87f(param_1);
  if (hModule == (HMODULE)0x0) {
    DVar1 = GetLastError();
    FUN_01d4aa99(s_LoadLibrary_failed_on__s___d__01ecf4d0,param_1,DVar1);
  }
  else {
    pFVar2 = GetProcAddress(hModule,s_GiveFnptrsToDll_01ecf4f0);
    if (pFVar2 == (FARPROC)0x0) {
      FUN_01d4aa99(s_Couldn_t_get_GiveFnptrsToDll_in___01ecf500,param_1);
    }
    else {
      (*pFVar2)(&PTR_FUN_01eced18,&DAT_0251f3c0);
      if (DAT_02499f9c != 0x32) {
        puVar3 = &DAT_0250d9c0 + DAT_02499f9c * 3;
        DAT_02499f9c = DAT_02499f9c + 1;
        FUN_01d4648a(puVar3,0,0xc);
        *puVar3 = hModule;
        FUN_01d9fd45(puVar3,param_1);
        return;
      }
      FUN_01d4aa99(s_Too_many_DLLs__ignoring_remainde_01ecf524);
    }
  }
  if (hModule != (HMODULE)0x0) {
    FreeLibrary(hModule);
  }
  return;
}

