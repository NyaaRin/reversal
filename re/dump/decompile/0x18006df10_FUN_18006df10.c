// 0x18006df10  FUN_18006df10
// size=59 thunk=false
// signature: undefined FUN_18006df10()
// status: ok


uint FUN_18006df10(void *param_1)

{
  BOOL BVar1;
  
  if ((param_1 != (void *)0x0) && (BVar1 = IsBadReadPtr(param_1,0x24), BVar1 == 0)) {
    if (*(uint *)((longlong)param_1 + 0x20) < 0x1000001) {
      return *(uint *)((longlong)param_1 + 0x20);
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


