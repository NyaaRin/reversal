// 0x180017070  FUN_180017070
// size=30 thunk=false
// signature: undefined FUN_180017070()
// status: ok


longlong FUN_180017070(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    param_1 = *(longlong *)(param_1 + 0x38);
  }
  return param_1;
}


