// 0x1802e8828  FUN_1802e8828
// size=46 thunk=false
// signature: undefined FUN_1802e8828()
// status: ok


void FUN_1802e8828(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffbff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


