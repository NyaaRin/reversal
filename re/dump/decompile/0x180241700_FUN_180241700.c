// 0x180241700  FUN_180241700
// size=145 thunk=false
// signature: undefined FUN_180241700()
// status: ok


undefined8 * FUN_180241700(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  plVar1 = param_1 + 1;
  *plVar1 = 0;
  param_1[2] = 0;
  lVar2 = FUN_1802d8350(0x78);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  *plVar1 = *param_3;
  *param_3 = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_3[1];
  param_3[1] = lVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  FUN_180014190(param_1 + 3,param_3 + 2);
  return param_1;
}


