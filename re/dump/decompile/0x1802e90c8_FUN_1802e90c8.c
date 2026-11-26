// 0x1802e90c8  FUN_1802e90c8
// size=46 thunk=false
// signature: undefined FUN_1802e90c8()
// status: ok


void FUN_1802e90c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb8);
  }
  return;
}


