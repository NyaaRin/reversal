// 0x18020d250  FUN_18020d250
// size=117 thunk=false
// signature: undefined FUN_18020d250()
// status: ok


undefined4 * FUN_18020d250(undefined4 *param_1)

{
  longlong lVar1;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  lVar1 = FUN_1802d8350(0x38);
  *(longlong *)lVar1 = lVar1;
  *(longlong *)(lVar1 + 8) = lVar1;
  *(longlong *)(param_1 + 2) = lVar1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 7;
  *(undefined8 *)(param_1 + 0xe) = 8;
  *param_1 = 0x3f800000;
  FUN_18022c1b0(param_1 + 6,0x10,*(undefined8 *)(param_1 + 2));
  return param_1;
}


