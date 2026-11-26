// 0x180117780  FUN_180117780
// size=111 thunk=false
// signature: undefined FUN_180117780()
// status: ok


undefined8 FUN_180117780(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  if (((param_4 != (longlong *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    if (0x80000 < (ulonglong)((param_4[1] - *param_4) + param_3)) {
      return 1;
    }
    FUN_180212f60(param_4,param_4[1],param_2,param_3,param_4[1]);
  }
  return 0;
}


