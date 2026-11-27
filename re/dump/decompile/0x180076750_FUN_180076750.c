// 0x180076750  FUN_180076750
// size=147 thunk=false
// signature: undefined FUN_180076750()
// status: ok


longlong FUN_180076750(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar1 = DAT_1803eb448;
  if (param_1 != 0) {
    if ((param_1 == DAT_180409780) && (DAT_180409790 != 0)) {
      return DAT_180409790;
    }
    plVar3 = DAT_1803eb440;
    if ((DAT_1803e9f88 != 0) || (DAT_1803eb468 != 0)) {
      for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
        cVar2 = (**(code **)(*(longlong *)*plVar3 + 0x18))
                          ((longlong *)*plVar3,&DAT_1803e9f78,&DAT_1803edcf8,&DAT_1803eb458);
        if (cVar2 != '\0') {
          return *plVar3;
        }
      }
    }
  }
  return 0;
}


