// 0x1802e128c  FUN_1802e128c
// size=99 thunk=false
// signature: undefined FUN_1802e128c()
// status: ok


undefined8 FUN_1802e128c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 0x130) = 0;
  *(undefined4 *)(param_2 + 0x134) = 0;
  *(undefined4 *)(param_2 + 0x138) = 0;
  lVar1 = *(longlong *)(param_2 + 0x80);
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(param_2 + 0x138);
  return 0;
}


