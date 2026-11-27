// 0x1802e985f  FUN_1802e985f
// size=46 thunk=false
// signature: undefined FUN_1802e985f()
// status: ok


void FUN_1802e985f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffbffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x578);
  }
  return;
}


