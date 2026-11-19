
void HUD_TxferLocalOverrides(int param_1,undefined4 *param_2)

{
                    /* 0x4dd40  581  HUD_TxferLocalOverrides */
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x104) = param_2[99];
  *(undefined4 *)(param_1 + 0x108) = param_2[100];
  *(undefined4 *)(param_1 + 0x10c) = param_2[0x65];
  *(undefined4 *)(param_1 + 0x110) = param_2[0x66];
  *(undefined8 *)(param_1 + 0x124) = *(undefined8 *)(param_2 + 0x6b);
  *(undefined4 *)(param_1 + 300) = param_2[0x6d];
  *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_2 + 0x6e);
  *(undefined4 *)(param_1 + 0x138) = param_2[0x70];
  *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(param_2 + 0x71);
  *(undefined4 *)(param_1 + 0x144) = param_2[0x73];
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x150) = param_2[0x76];
  FUN_10060a10();
  return;
}

