// 0x1802f8457  FUN_1802f8457
// size=46 thunk=false
// signature: undefined FUN_1802f8457()
// status: ok


void FUN_1802f8457(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x100) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffeff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2a0);
  }
  return;
}


