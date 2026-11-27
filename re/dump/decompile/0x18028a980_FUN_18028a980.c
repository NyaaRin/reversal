// 0x18028a980  FUN_18028a980
// size=102 thunk=false
// signature: undefined FUN_18028a980()
// status: ok


void FUN_18028a980(int *param_1,int param_2)

{
  void *_Dst;
  
  if (param_1[1] < param_2) {
    _Dst = (void *)FUN_18026f580((longlong)param_2 * 0x14);
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      memcpy(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 * 0x14);
      FUN_18026f680(*(undefined8 *)(param_1 + 2));
    }
    *(void **)(param_1 + 2) = _Dst;
    param_1[1] = param_2;
  }
  return;
}


