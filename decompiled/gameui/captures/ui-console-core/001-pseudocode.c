
void __fastcall FUN_10031509(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(**(code **)(DAT_100f9e8c + 0x128))(param_1);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  if (*pcVar2 != '\0') {
    (**(code **)(*DAT_100f9e98 + 0x74))(0);
    (**(code **)(*DAT_100f9e94 + 0x74))(0);
    if (((DAT_100ef800 == (int *)0x0) || (cVar1 = (**(code **)(*DAT_100ef800 + 4))(), cVar1 == '\0')
        ) || (cVar1 = FUN_100321c0((int)DAT_100ef800), cVar1 != '\0')) {
      (**(code **)(DAT_100f9e8c + 0x50))(s_unpause_100e40ac);
    }
    (**(code **)(DAT_100f9e8c + 0x50))(s_hideconsole_100e40b4);
    return;
  }
  return;
}

