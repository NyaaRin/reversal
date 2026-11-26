// 0x1800170a0  FUN_1800170a0
// size=29 thunk=false
// signature: undefined FUN_1800170a0()
// status: ok


undefined4 FUN_1800170a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180017070();
  if (lVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(lVar1 + 0x28);
}


