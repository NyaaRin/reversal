// 0x180220190  FUN_180220190
// size=107 thunk=false
// signature: undefined FUN_180220190()
// status: ok


longlong FUN_180220190(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != param_2) {
    do {
      uVar1 = FUN_180227870(uVar1,param_3);
      param_3 = param_3 + 0x98;
      param_1 = param_1 + 0x98;
    } while (param_1 != param_2);
  }
  FUN_180217fc0(param_3,param_3);
  return param_3;
}


