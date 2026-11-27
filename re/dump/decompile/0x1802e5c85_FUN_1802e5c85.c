// 0x1802e5c85  FUN_1802e5c85
// size=46 thunk=false
// signature: undefined FUN_1802e5c85()
// status: ok


void FUN_1802e5c85(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x800) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1e8);
  }
  return;
}


