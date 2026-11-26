// 0x18011b4a0  FUN_18011b4a0
// size=200 thunk=false
// signature: undefined FUN_18011b4a0()
// status: ok


void FUN_18011b4a0(char *param_1)

{
  char cVar1;
  longlong *plVar2;
  char *_Src;
  
  *param_1 = '\0';
  if ((DAT_1803fa668 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), plVar2 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*plVar2 + 0x30))(plVar2);
      if (cVar1 == '\0') {
        _Src = (char *)(**(code **)(*plVar2 + 8))(plVar2);
        if ((_Src != (char *)0x0) && (*_Src != '\0')) {
          strncpy_s(param_1,0x50,_Src,0xffffffffffffffff);
        }
      }
      else {
        strncpy_s(param_1,0x50,"loopback",0xffffffffffffffff);
      }
    }
    else {
      strncpy_s(param_1,0x50,"demo playback",0xffffffffffffffff);
    }
  }
  return;
}


