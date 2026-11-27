// 0x1802f58b4  FUN_1802f58b4
// size=46 thunk=false
// signature: undefined FUN_1802f58b4()
// status: ok


void FUN_1802f58b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x2c) & 0x100) != 0) {
    *(uint *)(param_2 + 0x2c) = *(uint *)(param_2 + 0x2c) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


