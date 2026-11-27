// 0x1802f5e7e  FUN_1802f5e7e
// size=41 thunk=false
// signature: undefined FUN_1802f5e7e()
// status: ok


void FUN_1802f5e7e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


