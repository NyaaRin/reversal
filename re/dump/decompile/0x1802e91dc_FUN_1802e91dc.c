// 0x1802e91dc  FUN_1802e91dc
// size=46 thunk=false
// signature: undefined FUN_1802e91dc()
// status: ok


void FUN_1802e91dc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf8);
  }
  return;
}


