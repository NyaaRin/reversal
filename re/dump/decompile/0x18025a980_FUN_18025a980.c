// 0x18025a980  FUN_18025a980
// size=92 thunk=false
// signature: undefined FUN_18025a980()
// status: ok


void FUN_18025a980(longlong param_1)

{
  longlong local_18;
  longlong local_10;
  
  local_10 = *(longlong *)(param_1 + 0x7c8);
  if (local_10 != 0) {
    local_18 = param_1 + 0x7b8;
    if (0xf < *(ulonglong *)(param_1 + 2000)) {
      local_18 = *(longlong *)local_18;
    }
    FUN_180259a60(param_1,&local_18,*(undefined1 *)(param_1 + 0x7f8),
                  *(undefined1 *)(param_1 + 0x7f9));
    *(undefined2 *)(param_1 + 0x7b1) = 1;
  }
  return;
}


