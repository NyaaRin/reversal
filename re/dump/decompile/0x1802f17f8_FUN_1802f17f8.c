// 0x1802f17f8  FUN_1802f17f8
// size=41 thunk=false
// signature: undefined FUN_1802f17f8()
// status: ok


void FUN_1802f17f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}


