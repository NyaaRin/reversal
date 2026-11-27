// 0x1802e01e8  FUN_1802e01e8
// size=66 thunk=false
// signature: undefined FUN_1802e01e8()
// status: ok


undefined8 FUN_1802e01e8(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  
  *(undefined8 *)(param_2 + 0xc0) = 0;
  puVar1 = (undefined1 *)(param_2 + 0xb0);
  if (0xf < *(ulonglong *)(param_2 + 200)) {
    puVar1 = *(undefined1 **)(param_2 + 0xb0);
  }
  *puVar1 = 0;
  return 0;
}


