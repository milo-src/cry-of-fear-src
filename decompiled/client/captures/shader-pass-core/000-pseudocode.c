
undefined4 FUN_10060e50(void)

{
  char cVar1;
  
  if (((*(float *)(DAT_104cd520 + 0xc) == 0.0) && (DAT_101be77c != 0)) && (1 < DAT_101be780)) {
    if ((3 < DAT_101be760) && (*(float *)(DAT_104cdd80 + 0xc) == 0.0)) {
      FUN_10062620(1);
      return 1;
    }
    if (DAT_101be800 != 0) {
      FUN_10062620(2);
      return 2;
    }
    if (DAT_104ce018 == 0) {
      FUN_1007d400("WARNING: Alpha buffer is not present! Specular will reque more passes!\n");
      DAT_104ce018 = 1;
    }
  }
  if (((DAT_101be798 != 0) && (3 < DAT_101be79c)) &&
     ((3 < DAT_101be7a0 && ((DAT_104ce014 == 0 && (*(float *)(DAT_104cd524 + 0xc) == 0.0)))))) {
    if (DAT_1018f850 != -1) {
      FUN_10062620(3);
      return 3;
    }
    (*DAT_101be698)(0x8804);
    (*DAT_101be7a4)(1,&DAT_1018f850);
    (*DAT_101be7a8)(0x8804,DAT_1018f850);
    cVar1 = FUN_100621f0(0x8804,0x8875,0x294,s___ARBfp1_0_OPTION_ARB_precision__1018f858);
    if (cVar1 != '\0') {
      (*DAT_101be688)();
      FUN_1007d4d0("Low quality specular fragment program loaded succesfully\n");
      FUN_10062620(3);
      return 3;
    }
    (*DAT_101be688)(0x8804);
    DAT_1018f850 = -1;
    DAT_104ce014 = 1;
    FUN_1007d4d0("Failed to load low quality specular fragment program\n");
  }
  if (DAT_101be800 != 0) {
    FUN_10062620(4);
    return 4;
  }
  if (DAT_104ce01c == 0) {
    FUN_1007d400("ERROR: specular failed!\n");
    DAT_104ce01c = 1;
  }
  return 0;
}

