// 0x180220200  FUN_180220200
// size=163 thunk=false
// signature: undefined FUN_180220200()
// status: ok


undefined4 * FUN_180220200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x26) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    FUN_18020e8a0(param_3 + 2,param_1 + 2);
    FUN_18020e8a0(param_3 + 10,param_1 + 10);
    param_3[0x12] = param_1[0x12];
    FUN_18020e8a0(param_3 + 0x14,param_1 + 0x14);
    FUN_18020e8a0(param_3 + 0x1c,param_1 + 0x1c);
    param_3[0x24] = param_1[0x24];
    *(undefined1 *)(param_3 + 0x25) = *(undefined1 *)(param_1 + 0x25);
    param_3 = param_3 + 0x26;
  }
  return param_3;
}


