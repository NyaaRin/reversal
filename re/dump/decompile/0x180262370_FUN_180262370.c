// 0x180262370  FUN_180262370
// size=119 thunk=false
// signature: undefined FUN_180262370()
// status: ok


undefined4 * FUN_180262370(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_1802d8350(0x18);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_18022be40(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  return param_1;
}


