// 0x1802953e0  FUN_1802953e0
// size=123 thunk=false
// signature: undefined FUN_1802953e0()
// status: ok


void FUN_1802953e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  if ((param_5 & 0xff000000) != 0) {
    FUN_18020dc30(param_1 + 0x50);
    FUN_18020dc30(param_1 + 0x50,param_3);
    FUN_18020dc30(param_1 + 0x50,param_4);
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_5);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


