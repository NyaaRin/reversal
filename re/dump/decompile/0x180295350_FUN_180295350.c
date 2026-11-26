// 0x180295350  FUN_180295350
// size=137 thunk=false
// signature: undefined FUN_180295350()
// status: ok


void FUN_180295350(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  if ((param_6 & 0xff000000) != 0) {
    FUN_18020dc30(param_1 + 0x50);
    FUN_18020dc30(param_1 + 0x50,param_3);
    FUN_18020dc30(param_1 + 0x50,param_4);
    FUN_18020dc30(param_1 + 0x50,param_5);
    FUN_1802938c0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),param_6);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


