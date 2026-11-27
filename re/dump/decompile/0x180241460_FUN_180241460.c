// 0x180241460  FUN_180241460
// size=96 thunk=false
// signature: undefined FUN_180241460()
// status: ok


longlong FUN_180241460(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = param_1;
  plVar2 = param_2;
  FUN_180241930();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_180241ba0(param_2,param_2,*(undefined8 *)(*param_2 + 8),param_4,lVar1,plVar2);
  free((void *)*param_2);
  return param_1;
}


