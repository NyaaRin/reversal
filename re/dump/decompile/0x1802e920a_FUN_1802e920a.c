// 0x1802e920a  FUN_1802e920a
// size=46 thunk=false
// signature: undefined FUN_1802e920a()
// status: ok


void FUN_1802e920a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3f8);
  }
  return;
}


