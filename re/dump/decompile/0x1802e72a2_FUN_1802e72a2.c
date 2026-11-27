// 0x1802e72a2  FUN_1802e72a2
// size=46 thunk=false
// signature: undefined FUN_1802e72a2()
// status: ok


void FUN_1802e72a2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x128);
  }
  return;
}


