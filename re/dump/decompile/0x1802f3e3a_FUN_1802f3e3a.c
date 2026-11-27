// 0x1802f3e3a  FUN_1802f3e3a
// size=41 thunk=false
// signature: undefined FUN_1802f3e3a()
// status: ok


void FUN_1802f3e3a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


