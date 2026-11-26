// 0x1800a6190  FUN_1800a6190
// size=105 thunk=false
// signature: undefined FUN_1800a6190()
// status: ok


void FUN_1800a6190(undefined8 param_1,longlong param_2)

{
  double dVar1;
  
  if (DAT_1803fa608 == (float *)0x0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)*DAT_1803fa608;
  }
  if ((DAT_1804258f8 == param_2) && (0.0 <= DAT_1803e7368)) {
    if (dVar1 - DAT_1803e7368 < DAT_180380d68) {
      return;
    }
  }
  DAT_1803e7368 = dVar1;
  DAT_1804258f8 = param_2;
  FUN_180014410(&DAT_180349ec0,param_1,param_2);
  return;
}


