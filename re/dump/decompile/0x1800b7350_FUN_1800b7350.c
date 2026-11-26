// 0x1800b7350  FUN_1800b7350
// size=473 thunk=false
// signature: undefined FUN_1800b7350()
// status: ok


void FUN_1800b7350(void)

{
  longlong *plVar1;
  float fVar2;
  
  if (((DAT_1803facf8 != '\0') && (DAT_1803fa668 != (longlong *)0x0)) &&
     (plVar1 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))(), plVar1 != (longlong *)0x0)) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x50))(plVar1,0);
    if ((fVar2 < 0.0) || (DAT_180380d30 < fVar2)) {
      (**(code **)(*plVar1 + 0x48))(plVar1,0);
    }
    FUN_1800c5c00();
    _dclass();
    return;
  }
  return;
}


