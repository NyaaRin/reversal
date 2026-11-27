// 0x1802f85e0  FUN_1802f85e0
// size=41 thunk=false
// signature: undefined FUN_1802f85e0()
// status: ok


void FUN_1802f85e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


