// 0x1802e931e  FUN_1802e931e
// size=46 thunk=false
// signature: undefined FUN_1802e931e()
// status: ok


void FUN_1802e931e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x438);
  }
  return;
}


