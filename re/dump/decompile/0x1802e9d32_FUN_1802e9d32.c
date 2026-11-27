// 0x1802e9d32  FUN_1802e9d32
// size=41 thunk=false
// signature: undefined FUN_1802e9d32()
// status: ok


void FUN_1802e9d32(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 200);
  }
  return;
}


