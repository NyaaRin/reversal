// 0x1802e0100  FUN_1802e0100
// size=54 thunk=false
// signature: undefined FUN_1802e0100()
// status: ok


undefined8 FUN_1802e0100(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 0x20);
  puVar1[2] = 0;
  if (0xf < (ulonglong)puVar1[3]) {
    puVar1 = (undefined8 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  return 0;
}


