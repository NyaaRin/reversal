// 0x180289c40  FUN_180289c40
// size=126 thunk=false
// signature: undefined FUN_180289c40()
// status: ok


void FUN_180289c40(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[2] = 0;
    FUN_18026f680();
    param_1[3] = 0;
  }
  if (param_1[1] != 0) {
    *param_1 = 0;
    FUN_18026f680();
    param_1[1] = 0;
  }
  param_1[4] = 0;
  if (param_1[3] != 0) {
    FUN_18026f680();
  }
  if (param_1[1] != 0) {
    FUN_18026f680();
  }
  return;
}


