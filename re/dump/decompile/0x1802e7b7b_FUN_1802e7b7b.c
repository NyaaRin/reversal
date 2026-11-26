// 0x1802e7b7b  FUN_1802e7b7b
// size=46 thunk=false
// signature: undefined FUN_1802e7b7b()
// status: ok


void FUN_1802e7b7b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x180);
  }
  return;
}


