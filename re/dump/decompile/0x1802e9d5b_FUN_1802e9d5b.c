// 0x1802e9d5b  FUN_1802e9d5b
// size=41 thunk=false
// signature: undefined FUN_1802e9d5b()
// status: ok


void FUN_1802e9d5b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffdf;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);
  }
  return;
}


