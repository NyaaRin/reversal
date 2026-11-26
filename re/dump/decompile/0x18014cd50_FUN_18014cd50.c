// 0x18014cd50  FUN_18014cd50
// size=74 thunk=false
// signature: undefined FUN_18014cd50()
// status: ok


undefined8 FUN_18014cd50(longlong *param_1,int param_2,longlong param_3)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    if ((((int)param_1[1] < param_2) && (param_3 != 0)) &&
       (*(longlong *)(param_3 + (longlong)(int)param_1[1] * 8) != 0)) {
      FUN_180210ae0(*param_1);
    }
    else {
      FUN_1802055d0(*param_1);
    }
    return 0;
  }
  return 1;
}


