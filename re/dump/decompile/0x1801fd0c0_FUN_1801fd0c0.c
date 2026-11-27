// 0x1801fd0c0  FUN_1801fd0c0
// size=85 thunk=false
// signature: undefined FUN_1801fd0c0()
// status: ok


longlong FUN_1801fd0c0(longlong param_1,ulonglong param_2,ulonglong param_3,undefined1 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 < param_2) {
    lVar1 = thunk_FUN_1802d5c20(param_1 + param_3,param_1 + param_2,param_4);
    lVar2 = -1;
    if (lVar1 != param_1 + param_2) {
      lVar2 = lVar1 - param_1;
    }
    return lVar2;
  }
  return -1;
}


