
undefined * __thiscall glGetString(void *this,int param_1)

{
  char *pcVar1;
  undefined *puVar2;
  
                    /* 0x1ed8  125  glGetString */
  if (param_1 == 0x1f03) {
    pcVar1 = (char *)(*DAT_1001bab8)(0x1f03);
    strcpy(&DAT_1000b614,pcVar1);
    strcat(&DAT_1000b614,s_PARANOIA_HACKS_V1_1000a058);
    pcVar1 = strstr(&DAT_1000b614,s_GL_EXT_paletted_texture_1000a06c);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = 'A';
    }
    puVar2 = &DAT_1000b614;
  }
  else {
    puVar2 = (undefined *)(*DAT_1001bab8)(param_1,this);
  }
  return puVar2;
}

