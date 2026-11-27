// 0x18024ed50  FUN_18024ed50
// size=71 thunk=false
// signature: undefined FUN_18024ed50()
// status: ok


void FUN_18024ed50(longlong param_1)

{
  if (*(ulonglong *)(param_1 + 0x130) <
      (ulonglong)(*(longlong *)(param_1 + 0x120) - *(longlong *)(param_1 + 0x118) >> 4)) {
    FUN_180256e70((longlong *)(param_1 + 0x118),param_1,param_1 + 0x50,param_1 + 0xf0);
    FUN_18024f370(param_1);
    return;
  }
  return;
}


