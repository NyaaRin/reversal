// 0x18016b220  Features_Visual_ESP_Editor_Elements_HealthBarElement_vfunc12
// size=59 thunk=false
// signature: undefined Features_Visual_ESP_Editor_Elements_HealthBarElement_vfunc12()
// status: ok


int Features_Visual_ESP_Editor_Elements_HealthBarElement_vfunc12(void)

{
  int iVar1;
  int iVar2;
  
  if ((DAT_1803fcb80 == '\0') && (DAT_1803fcb60 != 0)) {
    iVar1 = FUN_18001c770(DAT_1803fcb60);
    iVar2 = 100;
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = 100;
  }
  return iVar2;
}


