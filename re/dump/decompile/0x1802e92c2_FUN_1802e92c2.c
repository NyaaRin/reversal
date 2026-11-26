// 0x1802e92c2  FUN_1802e92c2
// size=46 thunk=false
// signature: undefined FUN_1802e92c2()
// status: ok


void FUN_1802e92c2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x138);
  }
  return;
}


