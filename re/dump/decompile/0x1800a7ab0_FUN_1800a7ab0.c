// 0x1800a7ab0  FUN_1800a7ab0
// size=155 thunk=false
// signature: undefined FUN_1800a7ab0()
// status: ok


undefined8 FUN_1800a7ab0(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  short sVar3;
  
  if ((((param_2 != 0) && (param_2 == *(longlong *)(param_1 + 8))) &&
      (*(char *)(param_1 + 0x10) != '\0')) && (DAT_1803fa608 != (float *)0x0)) {
    dVar2 = (double)*DAT_1803fa608;
    sVar3 = _dclass(dVar2);
    if (sVar3 < 1) {
      dVar1 = *(double *)(param_1 + 0x18);
      sVar3 = _dclass(dVar1);
      if (((sVar3 < 1) && (0.0 <= dVar1)) && ((dVar1 <= dVar2 && (dVar2 - dVar1 <= DAT_180380cb0))))
      {
        return 1;
      }
    }
  }
  return 0;
}


