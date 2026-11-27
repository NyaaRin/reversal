// 0x1802f85ab  FUN_1802f85ab
// size=41 thunk=false
// signature: undefined FUN_1802f85ab()
// status: ok


void FUN_1802f85ab(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x208);
  }
  return;
}


