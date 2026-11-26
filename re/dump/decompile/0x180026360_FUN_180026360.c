// 0x180026360  FUN_180026360
// size=442 thunk=false
// signature: undefined FUN_180026360()
// status: ok


undefined8 FUN_180026360(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  HMODULE pHVar3;
  
  cVar1 = FUN_180025450();
  if ((cVar1 != '\0') && (iVar2 = FUN_180022f60(param_1), 1 < iVar2)) {
    if (0 < DAT_1803ff8e8) {
      if (((DAT_1803ff8ed != '\0') || (DAT_1803ff8ec != '\0')) &&
         (cVar1 = FUN_1800260c0(param_1,0xa66cb242adaa3914), cVar1 != '\0')) {
        FUN_180022f00(param_1,2);
        (*DAT_1803fcbb0)(param_1,0xfffffffe);
        iVar2 = FUN_1800235f0(param_1,0xffffffff);
        if (iVar2 != 0) {
          (*DAT_1803fcba0)(param_1,0xfffffffe);
          return 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
        }
        (*DAT_180425540)(param_1,0xfffffffd);
      }
      if ((0 < DAT_1803ff8e8) && (cVar1 = FUN_1800260c0(param_1,0x2736efefe1fb290), cVar1 != '\0'))
      {
        FUN_180022f00(param_1,2);
        (*DAT_1803fcbb0)(param_1,0xfffffffe);
        iVar2 = FUN_1800235f0(param_1,0xffffffff);
        if (iVar2 != 0) {
          (*DAT_1803fcba0)(param_1,0xfffffffe);
          return 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
        }
        (*DAT_180425540)(param_1,0xfffffffd);
      }
    }
    FUN_180022f00(param_1,2);
    (*DAT_1803fcbb0)(param_1,0xffffd8ee);
    return 1;
  }
  FUN_180023240(param_1);
  return 1;
}


