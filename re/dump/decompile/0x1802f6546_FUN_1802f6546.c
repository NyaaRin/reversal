// 0x1802f6546  FUN_1802f6546
// size=46 thunk=false
// signature: undefined FUN_1802f6546()
// status: ok


void FUN_1802f6546(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x490);
  }
  return;
}


