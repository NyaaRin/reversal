// 0x1802e9180  FUN_1802e9180
// size=46 thunk=false
// signature: undefined FUN_1802e9180()
// status: ok


void FUN_1802e9180(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x800) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffff7ff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x3d8);
  }
  return;
}


