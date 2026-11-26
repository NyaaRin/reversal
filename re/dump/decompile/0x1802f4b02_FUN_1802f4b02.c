// 0x1802f4b02  FUN_1802f4b02
// size=46 thunk=false
// signature: undefined FUN_1802f4b02()
// status: ok


void FUN_1802f4b02(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


