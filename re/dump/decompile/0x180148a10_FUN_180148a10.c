// 0x180148a10  FUN_180148a10
// size=89 thunk=false
// signature: undefined FUN_180148a10()
// status: ok


void FUN_180148a10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  uint param_9,undefined4 param_10,uint param_11,undefined4 param_12)

{
  *(undefined4 *)(param_1 + param_2) = param_6;
  *(undefined4 *)(param_1 + param_3) = param_7;
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + param_4) = param_8;
  }
  if (param_9 < 0x18) {
    *(undefined4 *)(param_5 + param_1 + (longlong)(int)param_9 * 4) = param_10;
  }
  if (param_11 < 0x18) {
    *(undefined4 *)(param_5 + param_1 + (longlong)(int)param_11 * 4) = param_12;
  }
  return;
}


