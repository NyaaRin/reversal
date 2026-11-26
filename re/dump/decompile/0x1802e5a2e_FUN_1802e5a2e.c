// 0x1802e5a2e  FUN_1802e5a2e
// size=41 thunk=false
// signature: undefined FUN_1802e5a2e()
// status: ok


void FUN_1802e5a2e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x410);
  }
  return;
}


