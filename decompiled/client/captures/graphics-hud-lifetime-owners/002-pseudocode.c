
void FUN_1007a540(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  iVar2 = KB_Find(param_1);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_100f7bff(0x28);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
    pcVar4 = param_1;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      pcVar4[(int)puVar3 + (7 - (int)param_1)] = cVar1;
    } while (cVar1 != '\0');
    puVar3[1] = param_2;
    *puVar3 = DAT_10543540;
    DAT_10543540 = puVar3;
  }
  return;
}

