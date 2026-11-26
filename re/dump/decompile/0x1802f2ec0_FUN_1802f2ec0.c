// 0x1802f2ec0  FUN_1802f2ec0
// size=41 thunk=false
// signature: undefined FUN_1802f2ec0()
// status: ok


void FUN_1802f2ec0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


