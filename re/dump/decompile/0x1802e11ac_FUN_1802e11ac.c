// 0x1802e11ac  FUN_1802e11ac
// size=96 thunk=false
// signature: undefined FUN_1802e11ac()
// status: ok


undefined8 FUN_1802e11ac(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0x84) = 0;
  lVar1 = *(longlong *)(param_2 + 0x88);
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(param_2 + 0x84);
  return 0;
}


